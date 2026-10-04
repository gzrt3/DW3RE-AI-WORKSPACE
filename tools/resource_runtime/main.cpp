#include "fate/runtime_manifest.hpp"
#include "fate/provenance.hpp"
#include <algorithm>
#include <charconv>
#include <iostream>
#include <limits>
#include <sstream>

int main(int argc,char** argv) {
    using namespace fate::runtime;
    try {
        std::map<std::string,std::string> args;
        for(int i=1;i<argc;++i) {
            const std::string option=argv[i];
            if(option=="--help") { std::cout<<"resource_runtime --evidence FILE --root DIR (--game dw3|dw3xl --rid N | --symbol dw3:rid:N) --mode inspect|raw|decode --output-dir DIR [--frame N] [--child N --profile length16] [--budget BYTES] [--verify-full 0|1]\n";return 0; }
            if(i+1>=argc || !args.emplace(option,argv[++i]).second) throw std::invalid_argument("Missing value or duplicate option");
        }
        const std::vector<std::string> allowed{"--evidence","--root","--game","--rid","--symbol","--mode","--output-dir","--frame","--child","--profile","--budget","--verify-full"};
        for(const auto& [key,value]:args) { (void)value;
            if(std::find(allowed.begin(),allowed.end(),key)==allowed.end()) throw std::invalid_argument("Unknown option: "+key); }
        const auto get=[&](const std::string& key,const std::string& fallback="") {const auto it=args.find(key);return it==args.end()?fallback:it->second;};
        const auto number=[&](const std::string& key,std::uint64_t fallback) {
            if(!args.contains(key)) return fallback;
            const auto& s=args.at(key); std::uint64_t n{};const auto r=std::from_chars(s.data(),s.data()+s.size(),n);
            if(r.ec!=std::errc{}||r.ptr!=s.data()+s.size()) throw std::invalid_argument("Invalid number: "+key);return n; };
        if(get("--evidence").empty()||get("--root").empty()||get("--output-dir").empty()) throw std::invalid_argument("--evidence, --root and --output-dir required");
        const auto out=std::filesystem::weakly_canonical(get("--output-dir"));
        const auto sources=std::filesystem::weakly_canonical(std::filesystem::path(get("--root"))/"sources");
        const auto canonical_sources=std::filesystem::weakly_canonical("C:/DW3/sources");
        for(const auto& prohibited:{sources,canonical_sources}) {
            const auto m=std::mismatch(prohibited.begin(),prohibited.end(),out.begin(),out.end());
            if(m.first==prohibited.end()) throw std::invalid_argument("Output under sources is forbidden");
        }
        const auto verification=number("--verify-full",0);
        if(verification>1) throw std::invalid_argument("--verify-full must be 0 or 1");
        auto registry=load_precomputed(get("--evidence"),get("--root"),verification?Trust::full_hash:Trust::precomputed_attestation);
        RuntimeResourceService service(number("--budget",32ULL*1024*1024));
        service.publish(registry,numeric_mappings(registry));
        const auto rid=number("--rid",0);
        if(rid>std::numeric_limits<std::uint32_t>::max()) throw std::invalid_argument("RID overflow");
        if(args.contains("--symbol")&&(args.contains("--game")||args.contains("--rid"))) throw std::invalid_argument("Choose symbol or game/RID");
        if(!args.contains("--symbol")&&(!args.contains("--game")||!args.contains("--rid"))) throw std::invalid_argument("game/RID required");
        auto handle=args.contains("--symbol")?service.open(get("--symbol")):service.open(Key{game_id(get("--game")),static_cast<std::uint32_t>(rid)});
        if(args.contains("--child")) {
            if(get("--profile")!="length16") throw std::invalid_argument("Explicit --profile length16 required");
            const auto children=SubarchiveReader::length16(handle.view); const auto child=number("--child",0);
            if(child>=children.size()) throw Error(ErrorCode::out_of_bounds,"OUT_OF_BOUNDS: child");
            handle.view=children[static_cast<std::size_t>(child)];
        }
        const auto mode=get("--mode","inspect"); std::string output_hash, alpha_hash;std::uint16_t width=0,height=0;std::uint64_t output_size=0;std::size_t frame_count=0;
        std::string transform="raw"; const auto prefix=handle.view.read(0,std::min<std::uint64_t>(64,handle.view.size()),64);
        const auto compression=CompressionRegistry::inspect(prefix);
        if(mode=="decode") {
            CompressionRegistry::require_supported("none");
            if(compression!=CompressionState::not_compressed) throw Error(ErrorCode::unsupported_format,"UNSUPPORTED_FORMAT: payload is not validated TIM2");
            frame_count=service.frames(handle).size();
            const auto image=service.decode(handle,static_cast<std::size_t>(number("--frame",0)));
            atomic_write(out/"payload.rgba",image.rgba());atomic_write(out/"payload.alpha",image.raw_alpha());
            width=image.width;height=image.height;alpha_hash=fate::provenance::fingerprint(out/"payload.alpha").sha256;
            output_hash=fate::provenance::fingerprint(out/"payload.rgba").sha256;output_size=image.rgba().size();transform="tim2-rgba-rawalpha-v1";
        } else if(mode=="raw") {
            const auto bytes=service.raw(handle,0,handle.view.size());atomic_write(out/"payload.bin",*bytes);
            output_hash=fate::provenance::fingerprint(out/"payload.bin").sha256;output_size=bytes->size();
        } else if(mode=="inspect") {
            if(compression==CompressionState::not_compressed) frame_count=service.frames(handle).size();
        } else throw std::invalid_argument("mode must be inspect, raw or decode");
        const auto& source=registry.source(handle.key.source); const auto metrics=handle.view.metrics();
        std::ostringstream manifest;
        manifest<<"{\n\"schema_version\":1,\"game\":"<<json_string(handle.key.source.label)<<",\"rid\":"<<handle.key.rid
            <<",\"source_sha256\":"<<json_string(source.spec.source.bns_sha256)
            <<",\"attestation_sha256\":"<<json_string(source.spec.attestation)
            <<",\"trust\":"<<json_string(verification?"FULL_HASH":"PRECOMPUTED_ATTESTATION")
            <<",\"byte_offset\":"<<handle.view.base()<<",\"byte_length\":"<<handle.view.size()
            <<",\"child_path\":[";
        bool first=true;for(auto child:handle.view.child_path()){if(!first)manifest<<',';first=false;manifest<<child;}
        manifest<<"],\"mode\":"<<json_string(mode)<<",\"transform\":"<<json_string(transform)
            <<",\"frame\":"<<number("--frame",0)<<",\"frame_count\":"<<frame_count
            <<",\"compression\":"<<json_string(compression==CompressionState::not_compressed?"NOT_COMPRESSED":compression==CompressionState::invalid?"INVALID":"UNKNOWN")
            <<",\"width\":"<<width<<",\"height\":"<<height<<",\"raw_alpha_sha256\":"<<json_string(alpha_hash)
            <<",\"parent_payload_sha256\":"<<json_string(registry.locator(handle.key).payload_sha256)
            <<",\"output_bytes\":"<<output_size<<",\"output_sha256\":"<<json_string(output_hash)
            <<",\"physical_bytes_read\":"<<metrics.bytes<<",\"read_calls\":"<<metrics.reads<<"\n}\n";
        atomic_write(out/"phase8_runtime_manifest.json",manifest.str());
        std::cout<<"resource_runtime: "<<handle.key.source.label<<" RID"<<handle.key.rid<<" "<<mode<<" OK\n";
        return 0;
    } catch(const std::exception& e) {std::cerr<<"resource_runtime: "<<e.what()<<'\n';return 1;}
}
