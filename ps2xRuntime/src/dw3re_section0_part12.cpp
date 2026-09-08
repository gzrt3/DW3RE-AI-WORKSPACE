#include "dw3re_section0_geometry.h"
#include "dw3re_section0_part12.h"
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <limits>
namespace dw3re {
namespace {
constexpr size_t kRecord=32,kTriplet=96;
uint16_t U16(const uint8_t*p){uint16_t v;std::memcpy(&v,p,2);return v;}
int16_t S16(const uint8_t*p){return static_cast<int16_t>(U16(p));}
uint32_t U32(const uint8_t*p){uint32_t v;std::memcpy(&v,p,4);return v;}
void AddStrip(const std::vector<uint32_t>&q,std::vector<uint32_t>&out){for(size_t i=0;i+2<q.size();++i)if(!(i&1))out.insert(out.end(),{q[i],q[i+1],q[i+2]});else out.insert(out.end(),{q[i+1],q[i],q[i+2]});}
void CalcBounds(GeometryPart&p){if(p.vertices.empty())return;p.bounds.minX=p.bounds.minY=p.bounds.minZ=std::numeric_limits<float>::max();p.bounds.maxX=p.bounds.maxY=p.bounds.maxZ=std::numeric_limits<float>::lowest();for(auto&v:p.vertices){p.bounds.minX=std::min(p.bounds.minX,v.x);p.bounds.minY=std::min(p.bounds.minY,v.y);p.bounds.minZ=std::min(p.bounds.minZ,v.z);p.bounds.maxX=std::max(p.bounds.maxX,v.x);p.bounds.maxY=std::max(p.bounds.maxY,v.y);p.bounds.maxZ=std::max(p.bounds.maxZ,v.z);}}
}
bool DecodeSection0Part(std::span<const uint8_t>raw,GeometryPart&out){
 out={}; if(raw.size()<kRecord){out.error="part too short";return false;}
 out.size=static_cast<uint32_t>(raw.size());
 for(size_t o=0;o+kRecord<=raw.size();o+=kRecord){
  auto op=U16(raw.data()+o);
  if(op==0x27) out.op_0027++;
  else if(op==0x2e) out.op_002e++;
  else if(op==0x2f) out.op_002f++;
  else if(op==0x30) out.op_0030++;
  else if(op==0x33) out.op_0033++;
  else if(op==0x3c){
   out.op_003c++;
   out.socketSlot=U16(raw.data()+o+2);
   out.socketNode=U16(raw.data()+o+4);
   out.socketBone=U16(raw.data()+o+6);
   out.socketQw=raw.data()[o+8];
  }
 }
 size_t first=raw.size(); for(size_t o=0;o+kTriplet<=raw.size();o+=kRecord){auto a=U16(raw.data()+o),b=U16(raw.data()+o+32),c=U16(raw.data()+o+64);if(a==0x27&&(b==0x30||b==0x2e)&&c==0x2f){first=o;break;}}
 if(first==raw.size()){
  out.pipeline=out.op_0033?"0x0033":(out.op_0030?"0x0030":"none");
  out.classification=out.op_003c?"SOCKET_ONLY":(out.op_0027||out.op_002e||out.op_002f||out.op_0030||out.op_0033?"OTHER":"EMPTY");
  return true;
 }
 struct UV{float u=0,v=0;}; UV uv[256]{}; struct VRef{uint32_t command;GeometryVertex vertex;}; std::vector<VRef> all; std::vector<uint32_t> triggers;
 bool has30=false,has33=false; std::vector<uint32_t> stripQueue;
 for(size_t o=first;o+kRecord<=raw.size();o+=kRecord){const uint8_t*r=raw.data()+o;auto op=U16(r);auto ci=static_cast<uint32_t>(o/kRecord);
  if(op==0x27){++out.vertexRecordCount;auto idx=U16(r+2);const bool packed=std::abs(S16(r+4))<=64&&std::abs(S16(r+6))>1000;GeometryVertex v;v.sourceIndex=idx;v.x=S16(r+(packed?6:4))*.001f;v.y=S16(r+(packed?8:6))*.001f;v.z=S16(r+(packed?10:8))*.001f;v.auxiliary=S16(r+(packed?12:10));v.matrixTag=U16(r+18);v.u=uv[idx&255].u;v.v=uv[idx&255].v;all.push_back({ci,v});}
  else if(op==0x2f){auto idx=U16(r+2);uv[idx&255]={(U16(r+4)+.5f)/512.f,(U16(r+6)+.5f)/256.f};}
  else if(op==0x30){has30=true;auto flag=r[6];if(flag==0){AddStrip(stripQueue,out.indices);stripQueue.clear();}if(!out.vertices.empty())stripQueue.push_back(static_cast<uint32_t>(out.vertices.size()-1));if(flag==6||flag==7){AddStrip(stripQueue,out.indices);stripQueue.clear();}}
  else if(op==0x33){has33=true;triggers.push_back(ci);}
 }
 if(has33){
  std::vector<std::vector<VRef>> groups; std::vector<VRef> group;
  for(size_t i=0;i<all.size();++i){if(!group.empty()&&all[i].command-group.back().command>=12) {groups.push_back(group);group.clear();}group.push_back(all[i]);} if(!group.empty())groups.push_back(group);
  for(const auto&g:groups){if(g.size()<3)continue;size_t t=0;for(auto tr:triggers)if(tr+16>=g.front().command&&tr<=g.back().command+2)++t; if(t<g.size())continue;auto base=out.vertices.size();for(const auto&v:g){out.vertices.push_back(v.vertex);out.submissionCommands.push_back(v.command);}out.stripOffsets.push_back(static_cast<uint32_t>(base));std::vector<uint32_t>q;for(size_t i=0;i<g.size();++i)q.push_back(static_cast<uint32_t>(base+i));AddStrip(q,out.indices);}
 } else if(has30){
  for(const auto&v:all) out.vertices.push_back(v.vertex);
  std::vector<uint32_t> sequential; for(uint32_t i=0;i<out.vertices.size();++i) sequential.push_back(i);
  AddStrip(sequential,out.indices);
 }
 out.renderable=!out.vertices.empty()&&!out.indices.empty();out.commandCount=static_cast<uint32_t>((raw.size()-first)/kRecord);CalcBounds(out);
 out.pipeline=out.op_0033?"0x0033":(out.op_0030?"0x0030":"none");
 out.classification=out.renderable?"GEOMETRY":(out.op_003c?"SOCKET_ONLY":(out.op_0027||out.op_002e||out.op_002f||out.op_0030||out.op_0033?"OTHER":"EMPTY"));
 return out.vertexRecordCount!=0||out.renderable||out.op_003c!=0;
}
bool DecodeSection0(std::span<const uint8_t>resource,Section0Asset&out){out={};if(resource.size()<0x1c||U32(resource.data())!=6||U32(resource.data()+4)!=0x1c){out.error="not KOEI_GEO_06";return false;}auto sec1=U32(resource.data()+8);if(sec1<=0x20||sec1>resource.size()){out.error="invalid section0 boundary";return false;}const auto*s0=resource.data()+0x1c;auto n=U32(s0);if(!n||n>256){out.error="invalid part count";return false;}out.partCount=n;for(uint32_t i=0;i<n;++i){auto a=U32(s0+4+i*4),b=i+1<n?U32(s0+8+i*4):sec1-0x1c;if(b<=a||0x1c+b>resource.size()){out.error="invalid part directory";return false;}GeometryPart p;if(!DecodeSection0Part({resource.data()+0x1c+a,b-a},p)){out.error="part decode failed: "+p.error;return false;}p.offset=a;p.size=b-a;out.parts.push_back(std::move(p));}return true;}
bool DecodeResource1670Part12(std::span<const uint8_t>raw,Part12GeometryAsset&out){out={};GeometryPart p;if(!DecodeSection0Part(raw,p)){out.error=p.error;return false;}for(auto&v:p.vertices)out.vertices.push_back({v.x,v.y,v.z,v.u,v.v,v.auxiliary});out.indices=p.indices;out.bounds={p.bounds.minX,p.bounds.minY,p.bounds.minZ,p.bounds.maxX,p.bounds.maxY,p.bounds.maxZ};out.declaredVertexRecords=p.vertexRecordCount;out.submittedVertices=static_cast<uint32_t>(p.vertices.size());out.triangleCount=static_cast<uint32_t>(p.indices.size()/3);out.socketBone=p.socketBone;out.socketQw=p.socketQw;out.socketSlot=p.socketSlot;return true;}
}
