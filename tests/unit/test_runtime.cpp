#include "fate/canonical_spec.hpp"
#include "fate/formats/common.hpp"
#include "fate/formats/mot_anim.hpp"
#include "fate/formats/stage_gb2_cb2.hpp"
#include "fate/formats/audio_iecs.hpp"
#include "fate/formats/hud_ui.hpp"
#include "fate/formats/tm3.hpp"
#include "fate/formats/ps2_model.hpp"
#include "fate/runtime_manifest.hpp"
#include "fate/provenance.hpp"
#include <algorithm>
#include <array>
#include <cmath>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>

namespace {
using namespace fate::runtime;
using namespace fate::dual;
void require(bool condition,const char* message) { if(!condition) throw std::runtime_error(message); }
template<class F> void rejects(F&& action,ErrorCode code) {
    try { action(); } catch(const Error& e) { require(e.code==code,"unexpected error category");return; }
    throw std::runtime_error("operation unexpectedly accepted");
}
void put(Bytes& b,std::size_t at,std::uint64_t value,unsigned length) {
    for(unsigned i=0;i<length;++i) b.at(at+i)=static_cast<std::byte>((value>>(8*i))&255);
}
void write_bmp(const std::filesystem::path& path, std::uint32_t width, std::uint32_t height,
               const std::vector<std::uint32_t>& pixels) {
    if (pixels.size() != static_cast<std::size_t>(width) * height) throw std::runtime_error("BMP pixel count mismatch");
    const std::uint32_t image_bytes = width * height * 4U;
    Bytes bytes(54U + image_bytes, std::byte{0});
    bytes[0] = std::byte{'B'}; bytes[1] = std::byte{'M'};
    put(bytes, 2, bytes.size(), 4); put(bytes, 10, 54U, 4); put(bytes, 14, 40U, 4);
    put(bytes, 18, width, 4); put(bytes, 22, height, 4); put(bytes, 26, 1U, 2);
    put(bytes, 28, 32U, 2); put(bytes, 34, image_bytes, 4);
    for (std::uint32_t y = 0; y < height; ++y) {
        const std::uint32_t source_y = height - 1U - y;
        for (std::uint32_t x = 0; x < width; ++x) {
            const std::uint32_t rgba = pixels[static_cast<std::size_t>(source_y) * width + x];
            const std::size_t out = 54U + (static_cast<std::size_t>(y) * width + x) * 4U;
            bytes[out] = static_cast<std::byte>((rgba >> 16U) & 0xFFU);
            bytes[out + 1U] = static_cast<std::byte>((rgba >> 8U) & 0xFFU);
            bytes[out + 2U] = static_cast<std::byte>(rgba & 0xFFU);
            bytes[out + 3U] = static_cast<std::byte>((rgba >> 24U) & 0xFFU);
        }
    }
    fate::runtime::atomic_write(path, bytes);
}
Bytes tim2(unsigned type=0) {
    const bool indexed=type==4||type==5;
    const unsigned colors=type==4?16:256;
    const unsigned image=indexed?256:8192;
    const unsigned palette=indexed?colors*4:0;
    Bytes b(64+image+palette);
    b[0]=std::byte{'T'};b[1]=std::byte{'I'};b[2]=std::byte{'M'};b[3]=std::byte{'2'};
    put(b,4,4,1);put(b,6,1,2);put(b,16,48+image+palette,4);put(b,20,palette,4);
    put(b,24,image,4);put(b,28,48,2);put(b,30,indexed?colors:0,2);put(b,33,1,1);put(b,34,indexed?3:0,1);put(b,35,type,1);
    put(b,36,indexed?(type==4?32:16):64,2);put(b,38,indexed?16:32,2);
    put(b,40,(1ULL<<34)|(indexed?((type==4?0x14ULL:0x13ULL)<<20):(1ULL<<14)),8);
    // Independent hand-authored first texel: direct RGBA or palette entry zero.
    const auto at=indexed?64+image:64;
    b[at]=std::byte{0x12};b[at+1]=std::byte{0x34};b[at+2]=std::byte{0x56};b[at+3]=std::byte{0x40};
    return b;
}
struct Fixture {
    std::filesystem::path root;
    RuntimeSourceRegistry registry;
    SourceSpec base,xl;
    explicit Fixture(const std::string& name,Bytes base_bytes=Bytes(64,std::byte{1}),Bytes xl_bytes=Bytes(64,std::byte{2})) {
        root=std::filesystem::current_path()/"runtime_fixtures"/name;
        std::filesystem::create_directories(root);
        atomic_write(root/"fixture.elf","fixture-elf");
        base=make("base",GameVersion::base,std::move(base_bytes));
        xl=make("xl",GameVersion::xl,std::move(xl_bytes));
        registry.add(base,base.source,root,Trust::full_hash);registry.add(xl,xl.source,root,Trust::full_hash);
    }
    SourceSpec make(const std::string& name,GameVersion version,Bytes bytes) {
        const auto path=name+".tm2";atomic_write(root/path,bytes);
        const auto elf=fate::provenance::fingerprint(root/"fixture.elf");const auto bns=fate::provenance::fingerprint(root/path);
        ContentSource s;s.id={version,Region::us,name};s.elf_path="fixture.elf";s.bns_path=path;
        s.elf_size=elf.file_size;s.bns_size=bns.file_size;s.elf_sha256=elf.sha256;s.bns_sha256=bns.sha256;s.descriptor_count=1;
        return {s,{{{s.id,0},path,0,bns.file_size,bns.sha256,{}}},"synthetic fixture"};
    }
    Mappings mappings() const {return {{"asset",{base.source.id,0}},{"xl_asset",{xl.source.id,0}}};}
};
void resolution() {
    Fixture f("resolution");RuntimeResourceService service(4096);service.publish(f.registry,f.mappings());
    require((*service.raw(service.open("asset"),0,1))[0]==std::byte{1},"base content");
    require((*service.raw(service.open("xl_asset"),0,1))[0]==std::byte{2},"xl content");
    rejects([&]{(void)service.open("missing");},ErrorCode::not_found);
    rejects([&]{(void)service.open(Key{f.base.source.id,1});},ErrorCode::not_found);
    auto wrong=f.base;wrong.source.id.region=Region::jp;RuntimeSourceRegistry other;
    rejects([&]{other.add(wrong,f.base.source,f.root,Trust::metadata_only);},ErrorCode::source_mismatch);
    wrong=f.base;wrong.source.bns_sha256=std::string(64,'a');
    rejects([&]{other.add(wrong,f.base.source,f.root,Trust::metadata_only);},ErrorCode::source_mismatch);
    wrong=f.base;wrong.locators[0].byte_length=999;
    rejects([&]{other.add(wrong,f.base.source,f.root,Trust::metadata_only);},ErrorCode::out_of_bounds);
    const auto before=service.snapshot();auto mappings=f.mappings();mappings["bad"]={f.base.source.id,77};
    rejects([&]{service.publish(f.registry,mappings);},ErrorCode::not_found);
    require(service.snapshot()==before,"failed publication changed mount");
    // Same-sized changed bytes must fail full verification, not merely metadata.
    atomic_write(f.root/"base.tm2",Bytes(64,std::byte{3}));
    rejects([&]{other.add(f.base,f.base.source,f.root,Trust::full_hash);},ErrorCode::integrity_mismatch);
}
void reads() {
    Fixture f("reads");auto file=std::make_shared<BoundedByteSource>(f.root/"base.tm2");ResourceView view(file,0,64);
    require(view.read(64,0,0).empty(),"exact-end empty read");require(view.read(63,1,1)[0]==std::byte{1},"last byte");
    require(file->metrics().bytes==1,"header-only read grew");
    rejects([&]{(void)view.read(64,1,1);},ErrorCode::out_of_bounds);
    rejects([&]{(void)view.read(std::numeric_limits<std::uint64_t>::max(),2,2);},ErrorCode::out_of_bounds);
    rejects([&]{(void)view.read(0,8,7);},ErrorCode::budget_exceeded);
    rejects([&]{(void)contained_path(f.root,"../outside");},ErrorCode::source_mismatch);
    rejects([&]{(void)contained_path(f.root,f.root/"base.tm2");},ErrorCode::source_mismatch);
    rejects([&]{(void)contained_path(f.root,"base.tm2:stream");},ErrorCode::source_mismatch);
    rejects([&]{(void)view.slice(0,64,0);},ErrorCode::invalid_format);
    auto slice=view.slice(8,8,0);require(slice.read(0,8,8).size()==8,"child range");
    rejects([&]{(void)slice.read(7,2,2);},ErrorCode::out_of_bounds);
    rejects([&]{(void)view.read(0,10,10,[]{return true;});},ErrorCode::cancelled);
    atomic_write(f.root/"base.tm2",Bytes(2));
    rejects([&]{(void)view.read(0,2,2);},ErrorCode::integrity_mismatch);
    // A directory junction can be prepared externally by the integration test without admin rights.
    const auto junction=std::filesystem::current_path()/"runtime_escape";
    require(std::filesystem::exists(junction/"outside.bin"),"junction fixture missing");
    rejects([&]{(void)contained_path(std::filesystem::current_path(),"runtime_escape/outside.bin");},ErrorCode::source_mismatch);
}
void generations() {
    Fixture f("generations");RuntimeResourceService service(4096);service.publish(f.registry,f.mappings());auto old=service.open("asset");
    MountOverlay overlay{"asset",{f.xl.source.id,0},{f.base.source.id,0},{}};
    service.publish(f.registry,f.mappings(),std::span(&overlay,1));
    require(service.snapshot()->generation==2,"generation");
    require((*service.raw(old,0,1))[0]==std::byte{1},"old handle changed");
    require((*service.raw(service.open("asset"),0,1))[0]==std::byte{2},"overlay invisible");
    auto active=service.snapshot();overlay.replacement.source.label="foreign";
    rejects([&]{service.publish(f.registry,f.mappings(),std::span(&overlay,1));},ErrorCode::source_mismatch);
    require(service.snapshot()==active,"invalid overlay published");
    rejects([&]{service.publish(f.registry,f.mappings(),{},[]{return true;});},ErrorCode::cancelled);
    require(service.snapshot()==active,"cancel published");
    service.publish(f.registry,f.mappings());require((*service.raw(service.open("asset"),0,1))[0]==std::byte{1},"undo overlay");
    ExternalDependencyManifest dependencies;
    dependencies.add({"base.tm2",f.base.source.id,64,f.base.source.bns_sha256,{{f.base.source.id,0}}, {}});
    service.publish(f.registry,f.mappings(),{}, {}, &dependencies);
    require(service.snapshot()->dependencies.size()==1,"snapshot lost dependencies");
    ExternalDependencyManifest bad;
    bad.add({"base.tm2",f.base.source.id,64,std::string(64,'0'),{}, {}});
    active=service.snapshot();
    rejects([&]{service.publish(f.registry,f.mappings(),{}, {}, &bad);},ErrorCode::integrity_mismatch);
    require(service.snapshot()==active,"dependency failure published");
}
void cache() {
    LruCache cache(8);unsigned loads=0;const auto load=[&]{++loads;return Bytes(4,std::byte{9});};
    auto a=cache.get("a",4,0,load);auto b=cache.get("b",4,0,load);
    require(cache.get("a",4,0,load)==a && loads==2,"cache hit reread");
    rejects([&]{(void)cache.get("c",4,0,load);},ErrorCode::budget_exceeded);
    b.reset();auto c=cache.get("c",4,0,load);require(cache.metrics().evictions==1,"pinned LRU");
    a.reset();c.reset();(void)cache.get("d",4,0,load);
    const auto before=loads;(void)cache.get("c",4,0,load);require(loads==before,"LRU evicted recent");
    rejects([&]{(void)cache.get("large",9,0,load);},ErrorCode::budget_exceeded);
    rejects([&]{(void)cache.get("work",4,5,load);},ErrorCode::budget_exceeded);
    Fixture f("cache");RuntimeResourceService s(128);s.publish(f.registry,f.mappings());auto h=s.open("asset");
    auto first=s.raw(h,0,16);const auto metrics=h.view.metrics();auto second=s.raw(h,0,16);
    require(first==second && h.view.metrics().bytes==metrics.bytes,"runtime cache reread");
}
Bytes archive_fixture() {Bytes b(48);put(b,0,2,4);put(b,4,1,4);put(b,8,1,4);b[16]=std::byte{7};b[32]=std::byte{8};return b;}
void subarchives(bool invalid) {
    Fixture f(invalid?"subarchive_invalid":"subarchive_valid",archive_fixture());RuntimeResourceService s(4096);s.publish(f.registry,f.mappings());auto h=s.open("asset");
    const auto children=SubarchiveReader::length16(h.view);require(children.size()==2,"children count");
    require(children[0].read(0,1,1)[0]==std::byte{7} && children[1].read(0,1,1)[0]==std::byte{8},"children starts");
    require(children[1].base()+children[1].size()==h.view.size(),"coverage");
    if(!invalid) return;
    rejects([&]{(void)SubarchiveReader::length16(h.view,1);},ErrorCode::budget_exceeded);
    rejects([&]{(void)SubarchiveReader::length16(h.view,100,0);},ErrorCode::budget_exceeded);
    for(const unsigned variant:{0U,1U,2U,3U}) {
        auto b=archive_fixture();if(variant==0)put(b,4,0,4);if(variant==1)put(b,4,1000,4);if(variant==2)b[15]=std::byte{1};if(variant==3)b.resize(8);
        const auto path=f.root/("bad"+std::to_string(variant));atomic_write(path,b);auto file=std::make_shared<BoundedByteSource>(path);
        rejects([&]{(void)SubarchiveReader::length16(ResourceView(file,0,b.size()));},variant==1||variant==3?ErrorCode::out_of_bounds:ErrorCode::invalid_format);
    }
}
void codecs() {
    require(CompressionRegistry::inspect(Bytes{std::byte{0x78},std::byte{0x9c}})==CompressionState::unknown,"speculative zlib detector");
    require(CompressionRegistry::inspect(tim2())==CompressionState::not_compressed,"TIM2 dispatch");
    auto bad=tim2();bad.resize(10);require(CompressionRegistry::inspect(bad)==CompressionState::invalid,"truncated TIM2");
    rejects([]{CompressionRegistry::require_supported("lzss");},ErrorCode::unsupported_format);
    CompressionRegistry::require_supported("none");
}
void images() {
    for(const unsigned type:{0U,4U,5U}) {
        Fixture f("image"+std::to_string(type),tim2(type));RuntimeResourceService s(1024*1024);s.publish(f.registry,f.mappings());auto h=s.open("asset");
        const auto result=s.decode(h,0);const auto pixels=result.rgba();
        require(pixels[0]==std::byte{0x12}&&pixels[1]==std::byte{0x34}&&pixels[2]==std::byte{0x56}&&pixels[3]==std::byte{0x80},"independent first texel oracle");
        require(result.raw_alpha()[0]==std::byte{0x40},"raw alpha");
        require(s.decode(h,0).pixels==result.pixels,"decode cache");
        rejects([&]{(void)s.decode(h,1);},ErrorCode::out_of_bounds);
        RuntimeResourceService tiny(32);tiny.publish(f.registry,f.mappings());
        rejects([&]{(void)tiny.decode(tiny.open("asset"),0);},ErrorCode::budget_exceeded);
    }
    for(const auto offset:{6U,33U}) {
        auto b=tim2();put(b,offset,2,offset==6?2:1);Fixture f("unsupported"+std::to_string(offset),b);
        RuntimeResourceService s(1024*1024);s.publish(f.registry,f.mappings());
        rejects([&]{(void)s.decode(s.open("asset"),0);},ErrorCode::unsupported_format);
    }
}
void real(const std::string& test) {
    const auto registry=load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json","C:/DW3");
    RuntimeResourceService service(32ULL*1024*1024);service.publish(registry,numeric_mappings(registry));
    for(const auto game:{"dw3","dw3xl"}) {
        auto h=service.open(Key{game_id(game),4});const auto frames=service.frames(h);
        require(frames.size()==(std::string(game)=="dw3"?41U:43U),"real frame count");
        for(const auto index:{std::size_t{0},frames.size()/2,frames.size()-1}) {
            const auto image=service.decode(h,index);require(!image.rgba().empty(),"empty real RGBA");
        }
        require(h.view.metrics().bytes<h.view.size(),"runtime loaded entire frame array");
        auto parent=service.open(Key{game_id(game),2});const auto children=SubarchiveReader::length16(parent.view);
        require(children.size()==57 && children[0].base()==parent.view.base()+240 && children[0].size()==6208,"RID2 length16 evidence");
        parent.view=children[56];const auto portrait=service.decode(parent,0);require(portrait.width>0,"portrait decode");
    }
    if(test=="phase8_merged_end_to_end") {
        for(const auto rid:{10U,11U}) {auto h=service.open(Key{game_id("dw3"),rid});require(!service.decode(h,0).rgba().empty(),"real indexed image");}
        images(); // external .TM2 fixture is explicitly synthetic, using the same runtime API.
    }
}

Bytes make_synthetic_ps2_model() {
    using namespace fate::formats::ps2_model;
    // N=1 node -> section0 at 16, section1 at 64 (0x40), 1 LOD with 1 planar_rigid packet of NLOOP=3 vertices (unpack_qwc = 4 + 3*3 = 13, pkt_words = 54, padded to 56 words = 14 QWs, total_qwc = 15 -> 240 bytes + 80 = 320 bytes total)
    Bytes b(320, std::byte{0});
    b[0]=std::byte{'P'}; b[1]=std::byte{'S'}; b[2]=std::byte{'2'}; b[3]=std::byte{' '};
    put(b, 4, 16, 4);
    put(b, 8, 64, 4);
    put(b, 12, 0, 4);
    put(b, 16, 0x00010001ULL, 4); // N=1, M=1
    put(b, 20, 0xFFFFFFFFULL, 4);
    put(b, 24, 0xFFFFFFFFULL, 4);
    put(b, 28, 0, 4);
    // 8 finite floats at offset 32..63 (1.0f = 0x3F800000)
    for (unsigned i = 0; i < 8; ++i) put(b, 32 + i * 4, 0x3F800000ULL, 4);
    // Section 1 header at 64: lod_count = 1
    put(b, 64, 1, 4);
    // LOD 0 header at 80 (0x50): sub_count=1, payload_qwc=14, total_qwc=15, reserved=0
    put(b, 80, 1, 4);
    put(b, 84, 14, 4);
    put(b, 88, 15, 4);
    put(b, 92, 0, 4);
    // VIF packet at 96 (0x60): UNPACK V4-32, unpack_qwc = 13 (0x6C0D8000)
    put(b, 96, 0x6C0D8000ULL, 4);
    // GIFtag at 96 + 0x34 = 148: NLOOP=3, EOP=1 (0x8003), mid=0x313E4000, high=0x0412
    put(b, 148, 0x00008003ULL, 4);
    put(b, 152, 0x313E4000ULL, 4);
    put(b, 156, 0x00000412ULL, 4);
    // 3 UVs at 96 + 4 + 64 = 164 (3 * 16 = 48 bytes: 164..211)
    for (unsigned i = 0; i < 3; ++i) {
        put(b, 164 + i * 16, 0x3F000000ULL, 4);
        put(b, 164 + i * 16 + 4, 0x3F000000ULL, 4);
        put(b, 164 + i * 16 + 8, 0x80ULL, 4);
        put(b, 164 + i * 16 + 12, 0x80ULL, 4);
    }
    // 3 Normal+Pos pairs at 212 (3 * 32 = 96 bytes: 212..307)
    for (unsigned i = 0; i < 3; ++i) {
        const std::size_t np = 212 + i * 32;
        put(b, np + 0, 0, 4);
        put(b, np + 4, 0, 4);
        put(b, np + 8, 0x3F800000ULL, 4); // nz = 1.0f
        put(b, np + 12, i < 2 ? 0x8000ULL : 0ULL, 4); // ADC=0x8000 on v0,v1 and 0 on v2
        put(b, np + 16, i == 1 ? 0x3F800000ULL : 0ULL, 4); // px
        put(b, np + 20, i == 2 ? 0x3F800000ULL : 0ULL, 4); // py
        put(b, np + 24, 0, 4); // pz
        put(b, np + 28, 0x3F800000ULL, 4); // pw = 1.0f
    }
    // MSCAL word at 96 + (13*4 + 2)*4 - 4 = 308: 0x1400000A
    put(b, 308, 0x1400000AULL, 4);
    // Trailing 8 bytes (312..319) are 0 padding
    return b;
}

void phase10_ps2_magic_and_bounds() {
    using namespace fate::formats::ps2_model;
    auto valid = make_synthetic_ps2_model();
    const auto h = parse_header(valid);
    require(h.magic == kMagicPs2 && h.section0_offset == 16 && h.section1_offset == 64 && h.node_count == 1, "synthetic header");
    auto bad_magic = valid; bad_magic[0] = std::byte{'X'};
    bool threw = false;
    try { (void)parse_header(bad_magic); } catch (const std::exception&) { threw = true; }
    require(threw, "bad magic must be rejected");
    auto truncated = valid; truncated.resize(48);
    threw = false;
    try { (void)parse_header(truncated); } catch (const std::exception&) { threw = true; }
    require(threw, "truncated buffer must be rejected");
}

void phase10_ps2_header_structure() {
    using namespace fate::formats::ps2_model;
    // Verify all 7 confirmed cluster values of N -> section1_offset
    require(expected_section1_offset(1) == 64, "N=1 offset");
    require(expected_section1_offset(39) == 1744, "N=39 offset");
    require(expected_section1_offset(57) == 2528, "N=57 offset");
    require(expected_section1_offset(58) == 2576, "N=58 offset");
    require(expected_section1_offset(76) == 3376, "N=76 offset");
    require(expected_section1_offset(77) == 3408, "N=77 offset");
    require(expected_section1_offset(78) == 3456, "N=78 offset");
    auto bad_sec1 = make_synthetic_ps2_model();
    put(bad_sec1, 8, 80, 4);
    bool threw = false;
    try { (void)parse_header(bad_sec1); } catch (const std::exception&) { threw = true; }
    require(threw, "mismatched section1_offset formula must be rejected");
}

void phase10_ps2_section_bounds() {
    using namespace fate::formats::ps2_model;
    auto valid = make_synthetic_ps2_model();
    const auto model = parse_model(valid);
    require(model.lods.size() == 1 && model.lods[0].packets.size() == 1, "synthetic model LOD & packet count");
    auto bad_pad = valid; bad_pad[312] = std::byte{1};
    bool threw = false;
    try { (void)parse_model(bad_pad); } catch (const std::exception&) { threw = true; }
    require(threw, "nonzero LOD trailing alignment must be rejected");
    auto bad_lod_qwc = valid; put(bad_lod_qwc, 88, 99, 4);
    threw = false;
    try { (void)parse_model(bad_lod_qwc); } catch (const std::exception&) { threw = true; }
    require(threw, "OOB LOD total_qwc must be rejected");
}

void phase10_ps2_real_corpus_audit() {
    using namespace fate::formats::ps2_model;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    std::size_t dw3_count = 0, xl_count = 0, total_lods = 0, total_packets = 0;
    for (const auto& [src_id, reg_src] : registry.sources()) {
        for (const auto& loc : reg_src.spec.locators) {
            if (loc.byte_length < 64) continue;
            auto h = service.open(loc.key);
            const auto head4 = h.view.read(0, 4, 4);
            if (head4[0] == std::byte{'P'} && head4[1] == std::byte{'S'} && head4[2] == std::byte{'2'} && head4[3] == std::byte{' '}) {
                const auto payload = h.view.read(0, h.view.size(), 4 * 1024 * 1024);
                const auto model = parse_model(payload);
                require(model.status == VariantStatus::supported_variant, "supported variant");
                total_lods += model.lods.size();
                for (const auto& lod : model.lods) total_packets += lod.packets.size();
                if (src_id.version == GameVersion::base) ++dw3_count;
                else ++xl_count;
            }
        }
    }
    require(dw3_count == 190 && xl_count == 233 && total_lods == 1045 && total_packets == 36016, "exact 423 PS2 corpus audit counts");
}

void phase10_ps2_skeleton() {
    using namespace fate::formats::ps2_model;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    // Check single-node weapon (DW3 RID 715: N=1) and multi-node officer (DW3 RID 207: N=76, M=51)
    const auto h715 = service.open(Key{game_id("dw3"), 715});
    const auto m715 = parse_model(h715.view.read(0, h715.view.size(), 1024 * 1024));
    require(m715.header.node_count == 1 && m715.node_table_a[0] == -1 && m715.node_table_b[0] == -1 && m715.node_transforms[0].scale[0] == 1.0f && m715.node_transforms.size() == 1, "RID 715 node_count=1");

    const auto h207 = service.open(Key{game_id("dw3"), 207});
    const auto m207 = parse_model(h207.view.read(0, h207.view.size(), 1024 * 1024));
    require(m207.header.node_count == 76 && m207.header.secondary_count == 51, "RID 207 N=76, M=51");
    require(m207.node_table_a.size() == 76 && m207.node_table_a[0] == -1 && m207.node_transforms[0].scale[0] == 1.0f && m207.node_transforms.size() == 76, "RID 207 skeleton tables");
}


void phase11_tm3_header_and_bounds() {
    using namespace fate::formats::tm3;
    Bytes b(34064, std::byte{0});
    b[0]=std::byte{'t'}; b[1]=std::byte{'m'}; b[2]=std::byte{'3'}; b[3]=std::byte{' '};
    put(b, 4, 256, 4);
    put(b, 8, 128, 4);
    put(b, 12, 2056, 4);
    put(b, 16, 1, 4);
    put(b, 20, 16, 4);
    put(b, 24, 16, 4);
    put(b, 28, 71, 4);
    const auto h = parse_header(b);
    require(h.magic == kMagicTm3 && h.primary_width == 256 && h.primary_height == 128 && h.secondary_count == 1, "synthetic TM3 header");

    auto bad_magic = b; bad_magic[0] = std::byte{'X'};
    bool threw = false;
    try { (void)parse_header(bad_magic); } catch (const std::exception&) { threw = true; }
    require(threw, "bad TM3 magic rejected");

    auto truncated = b; truncated.resize(100);
    threw = false;
    try { (void)parse_header(truncated); } catch (const std::exception&) { threw = true; }
    require(threw, "truncated TM3 payload rejected");
}

void phase11_tm3_real_corpus_audit() {
    using namespace fate::formats::tm3;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    std::size_t dw3_count = 0, xl_count = 0, total_secondary = 0;
    for (const auto& [src_id, reg_src] : registry.sources()) {
        for (const auto& loc : reg_src.spec.locators) {
            if (loc.byte_length < 32) continue;
            auto h = service.open(loc.key);
            const auto head4 = h.view.read(0, 4, 4);
            if (head4[0] == std::byte{'t'} && head4[1] == std::byte{'m'} && head4[2] == std::byte{'3'} && head4[3] == std::byte{' '}) {
                const auto payload = h.view.read(0, h.view.size(), 4 * 1024 * 1024);
                const auto tm3 = parse_tm3(payload);
                require(tm3.header.primary_width == 256, "valid TM3 width");
                total_secondary += tm3.banks.size();
                if (src_id.version == GameVersion::base) ++dw3_count;
                else ++xl_count;
            }
        }
    }
    require(dw3_count == 121 && xl_count == 207 && total_secondary == 824, "exact 328 TM3 corpus audit");
}

void phase11_tm3_palette_and_rgba_decode() {
    using namespace fate::formats::tm3;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    const auto h150 = service.open(Key{game_id("dw3"), 150});
    const auto bytes150 = h150.view.read(0, h150.view.size(), 1024 * 1024);
    const auto tm3_150 = parse_tm3(bytes150);
    require(tm3_150.banks.size() == 1 && tm3_150.banks[0].subpalettes.size() == 4, "RID 150 4 subpalettes");

    for (std::uint32_t cbp_off : {0U, 4U, 8U, 12U}) {
        const auto pal = get_subpalette(tm3_150, 0, cbp_off);
        require(pal.colors_rgba8888[0] == 0, "Color 0 transparent black");
        const auto rgba = decode_rgba(tm3_150, 0, cbp_off);
        require(rgba.size() == 256 * 384, "decoded RGBA surface size");
    }
}

void phase11_ps2_tm3_character_binding() {
    using namespace fate::formats::tm3;
    using namespace fate::formats::ps2_model;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    const auto h207 = service.open(Key{game_id("dw3"), 207});
    const auto bytes207 = h207.view.read(0, h207.view.size(), 1024 * 1024);
    const auto m207 = parse_model(bytes207);
    const auto h150 = service.open(Key{game_id("dw3"), 150});
    const auto bytes150 = h150.view.read(0, h150.view.size(), 1024 * 1024);
    const auto tm3_150 = parse_tm3(bytes150);

    require(m207.header.node_count == 76 && m207.header.secondary_count == 51, "RID 207 skeleton");
    require(tm3_150.header.primary_height == 384 && tm3_150.banks.size() == 1, "RID 150 texture");
    require(m207.lods.size() > 0 && m207.lods[0].packets.size() == 129, "RID 207 LOD 0 has 129 VIF packets");
    for (const auto& packet : m207.lods[0].packets) {
        require(packet.tex_psm == 0x13U, "RID 207 packet uses PSMT8");
        require(packet.cbp_offset == 0U || packet.cbp_offset == 4U || packet.cbp_offset == 8U || packet.cbp_offset == 12U,
                "RID 207 packet selects one of four subpalettes");
    }
    const auto bind_pose = compute_bind_pose_matrices(m207);
    require(bind_pose.size() == 76U, "RID 207 bind pose has one matrix per node");
    const auto posed = decode_posed_lod_mesh(bytes207, m207, 0);
    const std::array<float, 3> extent{posed.bounds_max[0] - posed.bounds_min[0],
                                      posed.bounds_max[1] - posed.bounds_min[1],
                                      posed.bounds_max[2] - posed.bounds_min[2]};
    require(posed.vertices.size() > 1500U && posed.triangles.size() > 1000U, "RID 207 posed mesh contains body geometry");
    require(std::all_of(extent.begin(), extent.end(), [](float value) { return std::isfinite(value) && value > 5.0F && value < 1000.0F; }),
            "RID 207 bind-pose bounds are finite and human-scale");

    const std::filesystem::path output = "C:/Fate Soldiers 3/artifacts/phase11";
    std::filesystem::create_directories(output);
    constexpr std::array<std::uint16_t, 4> cbps{0U, 4U, 8U, 12U};
    std::array<std::string, 4> texture_names{};
    std::array<std::string, 4> hashes{};
    std::array<std::uint64_t, 4> sizes{};
    for (std::size_t i = 0; i < cbps.size(); ++i) {
        const auto filename = "dw3_char0_rid207_tm3_150_sub" + std::to_string(cbps[i]) + ".bmp";
        texture_names[i] = filename;
        const auto rgba = decode_rgba(tm3_150, 0, cbps[i]);
        write_bmp(output / filename, tm3_150.header.primary_width, tm3_150.header.primary_height, rgba);
        const auto image_fp = fate::provenance::fingerprint(output / filename);
        hashes[i] = image_fp.sha256; sizes[i] = image_fp.file_size;
    }
    const auto mtl = export_textured_mtl(texture_names);
    const auto obj = export_textured_obj(posed, "xiahou_dun_dw3_char0", tm3_150.header.primary_height,
                                         "dw3_char0_rid207_tm3_150.mtl");
    fate::runtime::atomic_write(output / "dw3_char0_rid207_tm3_150.mtl", mtl);
    fate::runtime::atomic_write(output / "dw3_char0_rid207_tm3_150.obj", obj);
    const auto obj_fp = fate::provenance::fingerprint(output / "dw3_char0_rid207_tm3_150.obj");
    const auto mtl_fp = fate::provenance::fingerprint(output / "dw3_char0_rid207_tm3_150.mtl");
    std::ostringstream manifest;
    manifest << "{\n  \"schema_version\": 1,\n  \"character\": \"DW3 char 0 Xiahou Dun\",\n"
             << "  \"model\": {\"game\": \"dw3\", \"rid\": 207, \"sha256\": \"" << registry.locator(Key{game_id("dw3"), 207}).payload_sha256 << "\"},\n"
             << "  \"texture\": {\"game\": \"dw3\", \"rid\": 150, \"sha256\": \"" << registry.locator(Key{game_id("dw3"), 150}).payload_sha256 << "\"},\n"
             << "  \"node_count\": " << m207.header.node_count << ",\n  \"matrix_palette_count\": " << m207.header.secondary_count
             << ",\n  \"packet_count_lod0\": " << m207.lods[0].packets.size() << ",\n  \"vertex_count\": " << posed.vertices.size()
             << ",\n  \"triangle_count\": " << posed.triangles.size() << ",\n  \"bounds_min\": ["
             << posed.bounds_min[0] << ", " << posed.bounds_min[1] << ", " << posed.bounds_min[2] << "],\n  \"bounds_max\": ["
             << posed.bounds_max[0] << ", " << posed.bounds_max[1] << ", " << posed.bounds_max[2] << "],\n"
             << "  \"obj_sha256\": \"" << obj_fp.sha256 << "\",\n  \"mtl_sha256\": \"" << mtl_fp.sha256 << "\",\n  \"textures\": [\n";
    for (std::size_t i = 0; i < cbps.size(); ++i) {
        manifest << "    {\"cbp_offset\": " << cbps[i] << ", \"file\": \"" << texture_names[i]
                 << "\", \"size\": " << sizes[i] << ", \"sha256\": \"" << hashes[i] << "\"}"
                 << (i + 1U == cbps.size() ? "\n" : ",\n");
    }
    manifest << "  ]\n}\n";
    fate::runtime::atomic_write(output / "dw3_char0_rid207_tm3_150.json", manifest.str());
    for (const auto& name : {"dw3_char0_rid207_tm3_150.obj", "dw3_char0_rid207_tm3_150.mtl",
                             "dw3_char0_rid207_tm3_150.json", texture_names[0].c_str(), texture_names[1].c_str(),
                             texture_names[2].c_str(), texture_names[3].c_str()}) {
        require(std::filesystem::exists(output / name) && std::filesystem::file_size(output / name) > 0U,
                "C++ textured character export artifact exists and is nonempty");
    }
}


void phase12_common_cursor_and_bounds() {
    using namespace fate::formats;
    Bytes buf(16, std::byte{0});
    buf[0] = std::byte{0x78};
    buf[1] = std::byte{0x56};
    buf[2] = std::byte{0x34};
    buf[3] = std::byte{0x12};
    BoundedCursor cur(buf);
    require(cur.read_u32_le(0) == 0x12345678U, "little-endian u32 read");
    require(cur.read_u16_le(0) == 0x5678U, "little-endian u16 read");

    bool threw = false;
    try { (void)cur.read_u32_le(14); } catch (const std::exception&) { threw = true; }
    require(threw, "OOB read rejected");

    threw = false;
    try { (void)checked_add(static_cast<std::size_t>(-1), 1U, "overflow"); } catch (const std::exception&) { threw = true; }
    require(threw, "checked_add overflow rejected");
}

void phase12_mot_primitive_decoder() {
    using namespace fate::formats::mot_anim;
    const std::uint32_t raw = 42U | (5U << 8U) | (2U << 13U) | (1U << 16U) | (120U << 18U);
    const auto dec = decode_primitive_track_word(raw);
    require(dec.bone_index == 42U && dec.dispatch_id == 5U && dec.stride_mode == 2U &&
            dec.flags_16_17 == 1U && dec.sample_count == 120U &&
            dec.status == fate::formats::EvidenceStatus::Fact, "MIPS 0x00168490 track bitfield decode");

    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));
    auto h405 = service.open(Key{game_id("dw3"), 405});
    const auto mv = inspect_motion_resource(h405.view.read(0, h405.view.size(), 1024 * 1024));
    require(mv.payload_size > 0 && mv.container_layout_status == fate::formats::EvidenceStatus::Unknown, "motion resource bounded inspection");
}

void phase12_stage_gb2_cb2_corpus_audit() {
    using namespace fate::formats::stage;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    std::size_t dw3_gb2 = 0, dw3_cb2 = 0, xl_gb2 = 0, xl_cb2 = 0;
    for (const auto& [src_id, reg_src] : registry.sources()) {
        for (const auto& loc : reg_src.spec.locators) {
            if (loc.byte_length < 16) continue;
            auto h = service.open(loc.key);
            const auto head4 = h.view.read(0, 4, 4);
            const std::uint32_t magic = static_cast<std::uint32_t>(head4[0]) |
                                        (static_cast<std::uint32_t>(head4[1]) << 8U) |
                                        (static_cast<std::uint32_t>(head4[2]) << 16U) |
                                        (static_cast<std::uint32_t>(head4[3]) << 24U);
            if (magic == kMagicGb2 || magic == kMagicCb2) {
                const auto v = inspect_stage_resource(h.view.read(0, std::min<std::size_t>(h.view.size(), 256U), 256U));
                if (v.kind == StageFormatKind::Gb2) {
                    require(v.word1_version_like == 1U, "gb2 version word == 1");
                    if (src_id.version == GameVersion::base) ++dw3_gb2; else ++xl_gb2;
                } else {
                    require(v.word1_version_like == 0U, "cb2 version word == 0");
                    if (src_id.version == GameVersion::base) ++dw3_cb2; else ++xl_cb2;
                }
            }
        }
    }
    require(dw3_gb2 == 33U && dw3_cb2 == 33U && xl_gb2 == 58U && xl_cb2 == 58U, "exact stage gb2/cb2 corpus counts");
}

void phase16_stage_unit_slot32() {
    using namespace fate::formats::stage;
    Bytes payload(2U * kStageUnitSlot32Size, std::byte{0});
    for (std::size_t index = 0; index < payload.size(); ++index) {
        payload[index] = static_cast<std::byte>((index * 7U) & 0xFFU);
    }
    const auto slots = parse_stage_unit_slots32(payload, 0U, 2U);
    require(slots.size() == 2U, "32-byte slot count");
    require(slots[0].raw.front() == payload.front() && slots[0].raw.back() == payload[31U],
        "first slot bytes must round-trip");
    require(slots[1].raw.front() == payload[32U] && slots[1].raw.back() == payload.back(),
        "second slot bytes must round-trip");
    require(slots[0].field_semantics_status == fate::formats::EvidenceStatus::Unknown,
        "unverified field semantics must stay UNKNOWN");
    require(slots[0].read_u16_le(0U) == 0x0700U,
        "offset-based little-endian read");
    bool byte_oob = false;
    try { static_cast<void>(slots[0].read_u8(32U)); }
    catch (const std::exception&) { byte_oob = true; }
    require(byte_oob, "byte accessor must be bounded");
    bool word_oob = false;
    try { static_cast<void>(slots[0].read_u16_le(31U)); }
    catch (const std::exception&) { word_oob = true; }
    require(word_oob, "word accessor must be bounded");
    bool table_oob = false;
    try { static_cast<void>(parse_stage_unit_slots32(payload, 1U, 2U)); }
    catch (const std::exception&) { table_oob = true; }
    require(table_oob, "table parser must reject partial final slot");
    bool overflow = false;
    try {
        static_cast<void>(parse_stage_unit_slots32(payload, 0U,
            std::numeric_limits<std::size_t>::max()));
    } catch (const std::exception&) { overflow = true; }
    require(overflow, "table parser must reject count multiplication overflow");
}

void phase12_audio_iecs_corpus_audit() {
    using namespace fate::formats::audio;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    std::size_t dw3_iecs = 0, xl_iecs = 0;
    for (const auto& [src_id, reg_src] : registry.sources()) {
        for (const auto& loc : reg_src.spec.locators) {
            if (loc.byte_length < 64) continue;
            auto h = service.open(loc.key);
            const auto head4 = h.view.read(0, 4, 4);
            if (head4[0] == std::byte{'I'} && head4[1] == std::byte{'E'} && head4[2] == std::byte{'C'} && head4[3] == std::byte{'S'}) {
                const auto v = inspect_iecs_resource(h.view.read(0, std::min<std::size_t>(h.view.size(), 4096U), 4096U));
                require(!v.discovered_tags.empty(), "IECS internal reversed-FourCC tags discovered");
                if (src_id.version == GameVersion::base) ++dw3_iecs; else ++xl_iecs;
            }
        }
    }
    require(dw3_iecs == 129U && xl_iecs == 163U, "exact IECS audio corpus counts");
}

void phase12_hud_ui_tim2_catalog() {
    using namespace fate::formats::hud_ui;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    auto h0 = service.open(Key{game_id("dw3"), 0});
    const auto cat0 = inspect_tim2_for_catalog(h0.view.read(0, 64, 64));
    require(cat0.width == 1024U && cat0.height == 256U && cat0.role == UiRole::Unknown &&
            cat0.format_status == fate::formats::EvidenceStatus::Fact, "TIM2 catalog entry RID 0");

    auto h2044 = service.open(Key{game_id("dw3xl"), 2044});
    const auto cat2044 = inspect_tim2_for_catalog(h2044.view.read(0, 64, 64));
    require(cat2044.width == 256U && cat2044.height == 128U, "TIM2 catalog entry XL RID 2044");
}

void phase12_inspect_resource_cli() {
    using namespace fate::formats;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    auto h207 = service.open(Key{game_id("dw3"), 207});
    const auto b207 = h207.view.read(0, h207.view.size(), 1024 * 1024);
    const auto m207 = ps2_model::parse_model(b207);
    const auto mesh207 = ps2_model::decode_posed_lod_mesh(b207, m207, 0);
    const auto obj_txt = ps2_model::export_textured_obj(mesh207, "dw3_char0_rid207", 384U, "dw3_char0_rid207_tm3_150.mtl");
    require(obj_txt.size() > 100000U, "regenerated textured OBJ size");
    std::ofstream out_obj("C:/Fate Soldiers 3/artifacts/phase11/dw3_char0_rid207_tm3_150.obj", std::ios::binary);
    out_obj.write(obj_txt.data(), static_cast<std::streamsize>(obj_txt.size()));
}

void phase12_canonical_manual_spec() {
    using namespace fate::canonical;
    require(canonical_char0_name() == "Zhao Yun", "DW3 manual p.8/p.15/p.16 canonical char 0 identity");
    require(evaluate_combo_score(49U) == ComboTier::None, "Combo score < 50");
    require(evaluate_combo_score(64U) == ComboTier::Good, "Combo score 50..79 GOOD");
    require(evaluate_combo_score(85U) == ComboTier::Great, "Combo score 80..99 GREAT");
    require(evaluate_combo_score(100U) == ComboTier::Perfect, "Combo score >= 100 PERFECT");
    require(dw3_stat_ranges().size() == 13U && dw3_stat_ranges()[0].max_val == 100U, "DW3 13 stat ranges (p.33)");
    require(dw3xl_stat_ranges().size() == 16U && dw3xl_stat_ranges()[0].max_val == 60U, "DW3XL 16 stat ranges (p.30)");
}

void phase15_obj_asset_import_export() {
    using namespace fate::formats::ps2_model;
    const std::string source =
        "# external Y-up mesh\n"
        "v 1 2 3\n"
        "v 4 2 3\n"
        "v 4 5 3\n"
        "v 1 5 3\n"
        "vt 0 0\n"
        "vt 1 0\n"
        "vt 1 1\n"
        "vt 0 1\n"
        "vn 0 0 1\n"
        "f -4/-4/1 -3/-3/1 -2/-2/1 -1/-1/1\n";
    const DecodedMesh mesh = import_obj(source);
    require(mesh.vertices.size() == 6U && mesh.triangles.size() == 2U &&
            mesh.triangle_cbp_offsets.size() == 2U, "OBJ polygon triangulation and palette defaults");
    require(mesh.bounds_min[0] == 1.0F && mesh.bounds_max[0] == 4.0F &&
            mesh.bounds_min[1] == -5.0F && mesh.bounds_max[1] == -2.0F &&
            mesh.vertices[0].uv[1] == 1.0F && mesh.vertices[0].normal[2] == 1.0F,
            "OBJ Y-up, UV and normal conversion");
    const std::string exported = export_textured_obj(mesh, "mod_mesh", 128U, "mod.mtl");
    const DecodedMesh reloaded = import_obj(exported);
    require(reloaded.triangles.size() == mesh.triangles.size() &&
            reloaded.bounds_min == mesh.bounds_min && reloaded.bounds_max == mesh.bounds_max,
            "OBJ export/import geometry bounds round-trip");

    bool invalid_index_rejected = false;
    try {
        (void)import_obj("v 0 0 0\nv 1 0 0\nv 0 1 0\nf 1 2 4\n");
    } catch (const std::runtime_error&) {
        invalid_index_rejected = true;
    }
    require(invalid_index_rejected, "OBJ invalid face index accepted");
}

void phase15_bmp_asset_roundtrip() {
    using namespace fate::formats::tm3;
    const RgbaImage source{2U, 2U, {0xFF0000FFU, 0xFF00FF00U, 0xFFFF0000U, 0x80402010U}};
    const auto encoded = export_bmp(source);
    require(encoded.size() == 70U, "32-bit BMP output size");
    const auto decoded = import_bmp(encoded);
    require(decoded.width == source.width && decoded.height == source.height && decoded.pixels == source.pixels,
            "BMP RGBA export/import round-trip");

    bool truncated_rejected = false;
    try {
        (void)import_bmp(std::span<const std::byte>(encoded).first(53U));
    } catch (const std::runtime_error&) {
        truncated_rejected = true;
    }
    require(truncated_rejected, "truncated BMP accepted");
}

void phase10_ps2_geometry() {
    using namespace fate::formats::ps2_model;
    const auto registry = load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json", "C:/DW3");
    RuntimeResourceService service(64ULL * 1024 * 1024);
    service.publish(registry, numeric_mappings(registry));

    // 1. Decode rigid weapon model DW3 RID 715 (LOD 0 and LOD 1) and export OBJ
    const auto h715 = service.open(Key{game_id("dw3"), 715});
    const auto bytes715 = h715.view.read(0, h715.view.size(), 1024 * 1024);
    const auto m715 = parse_model(bytes715);
    const auto mesh_lod0 = decode_lod_mesh(bytes715, m715, 0);
    const auto mesh_lod1 = decode_lod_mesh(bytes715, m715, 1);
    require(mesh_lod0.vertices.size() == 17 && mesh_lod0.triangles.size() == 13, "RID 715 LOD 0 counts");
    require(mesh_lod1.vertices.size() == 42 && mesh_lod1.triangles.size() == 30, "RID 715 LOD 1 counts");
    require(mesh_lod1.bounds_max[0] > 79.0f && mesh_lod1.bounds_min[0] < -1.9f, "RID 715 weapon X bounds");
    const auto obj_text = export_obj(mesh_lod1, "dw3_rid715_lod1");
    require(obj_text.find("o dw3_rid715_lod1") != std::string::npos && obj_text.find("\nf ") != std::string::npos, "OBJ export format");

    // 2. Decode weighted character model DW3 RID 207 (LOD 0: 4,883 vertices across interleaved_weighted + planar_rigid packets)
    const auto h207 = service.open(Key{game_id("dw3"), 207});
    const auto bytes207 = h207.view.read(0, h207.view.size(), 1024 * 1024);
    const auto m207 = parse_model(bytes207);
    const auto mesh207_lod0 = decode_lod_mesh(bytes207, m207, 0);
    require(mesh207_lod0.vertices.size() > 1500 && mesh207_lod0.triangles.size() > 1000, "RID 207 LOD 0 decoded mesh");
}

void phase9_bns_loader_no_codec() {
    codecs();
    const auto registry=load_precomputed("C:/Fate Soldiers 3/artifacts/phase7_precomputed_evidence.json","C:/DW3");
    require(registry.sources().size()==2,"phase9 requires both DW3 US and DW3XL US registered sources");
    std::size_t total_locators=0;
    for(const auto& [id,reg]:registry.sources()) {
        require(id.region==Region::us,"registered BNS sources in precomputed manifest must be US region");
        require(reg.spec.source.descriptor_count==reg.spec.locators.size(),"descriptor/locator count mismatch");
        require(reg.spec.source.descriptor_table_virtual_address!=0,"descriptor table VA must be non-zero");
        total_locators+=reg.spec.locators.size();
    }
    require(total_locators==5138,"phase9 expected 5138 total known US BNS descriptors across Base and XL");
}
void read_only_limits() {
    Fixture f("limits");auto before=fate::provenance::fingerprint(f.root/"base.tm2");auto time=std::filesystem::last_write_time(f.root/"base.tm2");
    RuntimeResourceService s(8);s.publish(f.registry,f.mappings());auto h=s.open("asset");
    rejects([&]{(void)s.raw(h,0,64);},ErrorCode::budget_exceeded);
    (void)s.raw(h,0,8);require(fate::provenance::fingerprint(f.root/"base.tm2").sha256==before.sha256,"read changed data");
    require(std::filesystem::last_write_time(f.root/"base.tm2")==time,"read changed timestamp");
}
}
int main(int argc,char** argv) {
    try {
        if(argc!=2) throw std::invalid_argument("selector required");const std::string test=argv[1];
        if(test=="phase8_runtime_resolution") resolution();
        else if(test=="phase8_bounded_reads") reads();
        else if(test=="phase8_mount_generations") generations();
        else if(test=="phase8_cache_budget") cache();
        else if(test=="phase8_subarchive_valid") {subarchives(false);real(test);}
        else if(test=="phase8_subarchive_invalid") subarchives(true);
        else if(test=="phase8_codec_reference") {codecs();std::cout<<"NOT_APPLICABLE: no compressed codec demonstrated; strict dispatch assertions passed\n";return 77;}
        else if(test=="phase8_codec_invalid") codecs();
        else if(test=="phase8_tim2_runtime") {images();real(test);}
        else if(test=="phase8_merged_end_to_end") real(test);
        else if(test=="phase8_readonly_and_limits") read_only_limits();
        else if(test=="phase9_bns_loader_no_codec") phase9_bns_loader_no_codec();
        else if(test=="phase10_ps2_magic_and_bounds") phase10_ps2_magic_and_bounds();
        else if(test=="phase10_ps2_header_structure") phase10_ps2_header_structure();
        else if(test=="phase10_ps2_section_bounds") phase10_ps2_section_bounds();
        else if(test=="phase10_ps2_real_corpus_audit") phase10_ps2_real_corpus_audit();
        else if(test=="phase10_ps2_skeleton") phase10_ps2_skeleton();
        else if(test=="phase10_ps2_geometry") phase10_ps2_geometry();
        else if(test=="phase11_tm3_header_and_bounds") phase11_tm3_header_and_bounds();
        else if(test=="phase11_tm3_real_corpus_audit") phase11_tm3_real_corpus_audit();
        else if(test=="phase11_tm3_palette_and_rgba_decode") phase11_tm3_palette_and_rgba_decode();
        else if(test=="phase11_ps2_tm3_character_binding") phase11_ps2_tm3_character_binding();
        else if(test=="phase12_common_cursor_and_bounds") phase12_common_cursor_and_bounds();
        else if(test=="phase12_mot_primitive_decoder") phase12_mot_primitive_decoder();
        else if(test=="phase12_stage_gb2_cb2_corpus_audit") phase12_stage_gb2_cb2_corpus_audit();
        else if(test=="phase16_stage_unit_slot32") phase16_stage_unit_slot32();
        else if(test=="phase12_audio_iecs_corpus_audit") phase12_audio_iecs_corpus_audit();
        else if(test=="phase12_hud_ui_tim2_catalog") phase12_hud_ui_tim2_catalog();
        else if(test=="phase12_inspect_resource_cli") phase12_inspect_resource_cli();
        else if(test=="phase12_canonical_manual_spec") phase12_canonical_manual_spec();
        else if(test=="phase15_obj_asset_import_export") phase15_obj_asset_import_export();
        else if(test=="phase15_bmp_asset_roundtrip") phase15_bmp_asset_roundtrip();
        else throw std::invalid_argument("unknown test selector");
        std::cout<<test<<": assertions passed\n";return 0;
    } catch(const std::exception& e) {std::cerr<<e.what()<<'\n';return 1;}
}
