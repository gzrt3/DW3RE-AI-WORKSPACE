#include "fate/runtime_manifest.hpp"
#include "fate/provenance.hpp"
#include <algorithm>
#include <charconv>
#include <fstream>
#include <limits>
#include <variant>
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

namespace fate::runtime {
namespace {
struct Json {
    using Object = std::map<std::string, Json>;
    using Array = std::vector<Json>;
    std::variant<std::nullptr_t, bool, std::uint64_t, std::string, Object, Array> value;
    const Json& at(const std::string& key) const { return std::get<Object>(value).at(key); }
    std::uint64_t number() const { return std::get<std::uint64_t>(value); }
    const std::string& string() const { return std::get<std::string>(value); }
    const Array& array() const { return std::get<Array>(value); }
};
// Strict bounded subset needed by the evidence schema: ASCII strings, unsigned integers,
// objects/arrays, booleans and null. Fractional/negative/non-ASCII values fail explicitly.
class Parser {
public:
    explicit Parser(std::string input) : input_(std::move(input)) {}
    Json parse() { auto v = value(0); space(); if (pos_ != input_.size()) bad(); return v; }
private:
    std::string input_; std::size_t pos_{}, nodes_{};
    [[noreturn]] static void bad() { throw Error(ErrorCode::invalid_format, "INVALID_FORMAT: evidence JSON"); }
    void space() { while (pos_ < input_.size() && (input_[pos_]==' ' || input_[pos_]=='\r' || input_[pos_]=='\n' || input_[pos_]=='\t')) ++pos_; }
    char take() { if (pos_ == input_.size()) bad(); return input_[pos_++]; }
    bool consume(char c) { space(); if (pos_ < input_.size() && input_[pos_] == c) { ++pos_; return true; } return false; }
    std::string string() {
        if (!consume('"')) bad(); std::string s;
        for (;;) {
            char c = take(); if (c == '"') return s;
            if (static_cast<unsigned char>(c) < 32 || static_cast<unsigned char>(c) > 126) bad();
            if (c == '\\') {
                c = take();
                switch(c) {
                case '"': case '\\': case '/': break;
                case 'n': c='\n'; break; case 'r': c='\r'; break; case 't': c='\t'; break;
                case 'b': c='\b'; break; case 'f': c='\f'; break;
                case 'u': {
                    unsigned v=0;
                    for (unsigned i=0;i<4;++i) { const auto h=take(); v*=16;
                        if(h>='0'&&h<='9') v+=static_cast<unsigned>(h-'0');
                        else if(h>='a'&&h<='f') v+=static_cast<unsigned>(h-'a'+10);
                        else if(h>='A'&&h<='F') v+=static_cast<unsigned>(h-'A'+10); else bad(); }
                    if(v>127) bad(); c=static_cast<char>(v); break;
                }
                default: bad();
                }
            }
            s+=c; if(s.size()>65536) bad();
        }
    }
    Json value(unsigned depth) {
        if(depth>32 || ++nodes_>250000) bad(); space();
        if(pos_==input_.size()) bad();
        if(input_[pos_]=='"') return Json{string()};
        if(consume('{')) {
            Json::Object o; if(consume('}')) return Json{std::move(o)};
            do { auto k=string(); if(!consume(':')) bad(); auto v=value(depth+1);
                if(!o.emplace(std::move(k),std::move(v)).second) bad();
            } while(consume(','));
            if(!consume('}')) bad(); return Json{std::move(o)};
        }
        if(consume('[')) {
            Json::Array a; if(consume(']')) return Json{std::move(a)};
            do { a.push_back(value(depth+1)); } while(consume(','));
            if(!consume(']')) bad(); return Json{std::move(a)};
        }
        for(const auto literal : {std::string_view("true"),std::string_view("false"),std::string_view("null")}) {
            if(input_.compare(pos_,literal.size(),literal)==0) { pos_+=literal.size();
                if(literal=="null") return Json{nullptr}; return Json{literal=="true"}; }
        }
        const auto begin=pos_;
        while(pos_<input_.size() && input_[pos_]>='0' && input_[pos_]<='9') ++pos_;
        if(begin==pos_ || (pos_-begin>1 && input_[begin]=='0')) bad();
        std::uint64_t n{};
        const auto result=std::from_chars(input_.data()+begin,input_.data()+pos_,n);
        if(result.ec!=std::errc{}) bad(); return Json{n};
    }
};
dual::ContentSource pinned(bool xl) {
    dual::ContentSource s;
    s.id=game_id(xl?"dw3xl":"dw3");
    const auto directory=xl?"sources/dumps/dw3xl_ps2/":"sources/dumps/dw3_ps2/";
    s.elf_path=std::string(directory)+(xl?"SLUS_206.17":"SLUS_202.77");
    s.bns_path=std::string(directory)+(xl?"LINKDAT2.BNS":"LINKDATA.BNS");
    s.elf_size=xl?1905272:2513712; s.bns_size=xl?460529664:293441536;
    s.elf_sha256=xl?"d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731":"b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1";
    s.bns_sha256=xl?"5cd58a5f27eece306a57ce340098ad1c7413a10d34d5b5de5f902748a17d79ad":"d040b9fb068043654650642b3f4226a3ae9ea633de096ac693a63b26b735f666";
    s.descriptor_count=xl?3015:2123; s.descriptor_table_virtual_address=xl?0x290cf0:0x2ff850;
    return s;
}
}
SourceId game_id(std::string_view game) {
    if(game!="dw3" && game!="dw3xl") throw Error(ErrorCode::source_mismatch,"SOURCE_MISMATCH: game");
    return {game=="dw3"?dual::GameVersion::base:dual::GameVersion::xl,dual::Region::us,std::string(game)};
}
RuntimeSourceRegistry load_precomputed(const std::filesystem::path& file, const std::filesystem::path& root, Trust trust) {
    try {
        const auto length=std::filesystem::file_size(file);
        if(length>16*1024*1024) throw Error(ErrorCode::budget_exceeded,"BUDGET_EXCEEDED: evidence file");
        std::ifstream input(file,std::ios::binary); std::string text(static_cast<std::size_t>(length),'\0');
        input.read(text.data(),static_cast<std::streamsize>(length));
        if(!input) throw Error(ErrorCode::io_error,"IO_ERROR: evidence read");
        const auto doc=Parser(std::move(text)).parse();
        RuntimeSourceRegistry registry;
        const auto attestation=provenance::fingerprint(file).sha256;
        for(const bool xl : {false,true}) {
            const std::string game=xl?"dw3xl":"dw3";
            const auto expected=pinned(xl); auto s=expected;
            s.bns_sha256=doc.at(game+"_bns_full_sha256").string();
            if(doc.at(game+"_descriptor_count").number()!=expected.descriptor_count)
                throw Error(ErrorCode::invalid_format,"INVALID_FORMAT: count");
            SourceSpec spec{s,{},attestation};
            for(const auto& row:doc.at(game+"_payloads").array()) {
                const auto rid=row.at("rid").number();
                if(rid>std::numeric_limits<std::uint32_t>::max()) throw Error(ErrorCode::invalid_format,"INVALID_FORMAT: RID");
                spec.locators.push_back({{s.id,static_cast<std::uint32_t>(rid)},s.bns_path,
                    row.at("byte_offset").number(),row.at("payload_size").number(),row.at("sha256").string(),{}});
            }
            registry.add(std::move(spec),expected,root,trust);
        }
        return registry;
    } catch(const Error&) { throw; }
    catch(const std::exception& e) { throw Error(ErrorCode::invalid_format,e.what()); }
}
Mappings numeric_mappings(const RuntimeSourceRegistry& registry) {
    Mappings result;
    for(const auto& [id,s]:registry.sources())
        for(const auto& loc:s.spec.locators) result.emplace(id.label+":rid:"+std::to_string(loc.key.rid),loc.key);
    return result;
}
std::string json_string(std::string_view text) {
    std::string out="\""; constexpr char hex[]="0123456789abcdef";
    for(unsigned char c:text) {
        if(c=='"'||c=='\\') {out+='\\';out+=static_cast<char>(c);}
        else if(c<32) {out+="\\u00";out+=hex[c>>4];out+=hex[c&15];}
        else out+=static_cast<char>(c);
    }
    return out+'"';
}
void atomic_write(const std::filesystem::path& path, std::span<const std::byte> bytes) {
    const auto normalized = std::filesystem::weakly_canonical(path);
    const auto sources = std::filesystem::weakly_canonical("C:/DW3/sources");
    if (std::mismatch(sources.begin(),sources.end(),normalized.begin(),normalized.end()).first == sources.end())
        throw Error(ErrorCode::source_mismatch,"SOURCE_MISMATCH: sources are read-only");
    std::filesystem::create_directories(path.parent_path());
    auto temporary=path; temporary += ".tmp";
    if (std::filesystem::is_symlink(std::filesystem::symlink_status(temporary)))
        throw Error(ErrorCode::source_mismatch,"SOURCE_MISMATCH: output temporary is a link");
    { std::ofstream out(temporary,std::ios::binary|std::ios::trunc);
      out.write(reinterpret_cast<const char*>(bytes.data()),static_cast<std::streamsize>(bytes.size()));
      out.close(); if(!out) throw Error(ErrorCode::io_error,"IO_ERROR: output"); }
    if(!MoveFileExW(temporary.c_str(),path.c_str(),MOVEFILE_REPLACE_EXISTING|MOVEFILE_WRITE_THROUGH))
        throw Error(ErrorCode::io_error,"IO_ERROR: atomic replace");
}
void atomic_write(const std::filesystem::path& path,std::string_view text) { atomic_write(path,std::as_bytes(std::span(text.data(),text.size()))); }
}
