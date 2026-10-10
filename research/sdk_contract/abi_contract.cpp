#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <mutex>
#include <string>
#include <unordered_map>
#include <iostream>
#include "State.h"

static_assert(sizeof(t_SifRpcHeader)==16);
static_assert(offsetof(t_SifRpcHeader,pkt_addr)==0);
static_assert(sizeof(t_SifRpcHeader::pkt_addr)==4);
static_assert(offsetof(t_SifRpcHeader,rpc_id)==4);
static_assert(sizeof(t_SifRpcHeader::rpc_id)==4);
static_assert(offsetof(t_SifRpcHeader,sema_id)==8);
static_assert(sizeof(t_SifRpcHeader::sema_id)==4);
static_assert(offsetof(t_SifRpcHeader,mode)==12);
static_assert(sizeof(t_SifRpcHeader::mode)==4);
static_assert(sizeof(t_SifRpcClientData)==40);
static_assert(offsetof(t_SifRpcClientData,hdr)==0);
static_assert(sizeof(t_SifRpcClientData::hdr)==16);
static_assert(offsetof(t_SifRpcClientData,command)==16);
static_assert(sizeof(t_SifRpcClientData::command)==4);
static_assert(offsetof(t_SifRpcClientData,buf)==20);
static_assert(sizeof(t_SifRpcClientData::buf)==4);
static_assert(offsetof(t_SifRpcClientData,cbuf)==24);
static_assert(sizeof(t_SifRpcClientData::cbuf)==4);
static_assert(offsetof(t_SifRpcClientData,end_function)==28);
static_assert(sizeof(t_SifRpcClientData::end_function)==4);
static_assert(offsetof(t_SifRpcClientData,end_param)==32);
static_assert(sizeof(t_SifRpcClientData::end_param)==4);
static_assert(offsetof(t_SifRpcClientData,server)==36);
static_assert(sizeof(t_SifRpcClientData::server)==4);
static_assert(sizeof(t_SifRpcServerData)==68);
static_assert(offsetof(t_SifRpcServerData,sid)==0);
static_assert(sizeof(t_SifRpcServerData::sid)==4);
static_assert(offsetof(t_SifRpcServerData,func)==4);
static_assert(sizeof(t_SifRpcServerData::func)==4);
static_assert(offsetof(t_SifRpcServerData,buf)==8);
static_assert(sizeof(t_SifRpcServerData::buf)==4);
static_assert(offsetof(t_SifRpcServerData,size)==12);
static_assert(sizeof(t_SifRpcServerData::size)==4);
static_assert(offsetof(t_SifRpcServerData,cfunc)==16);
static_assert(sizeof(t_SifRpcServerData::cfunc)==4);
static_assert(offsetof(t_SifRpcServerData,cbuf)==20);
static_assert(sizeof(t_SifRpcServerData::cbuf)==4);
static_assert(offsetof(t_SifRpcServerData,size2)==24);
static_assert(sizeof(t_SifRpcServerData::size2)==4);
static_assert(offsetof(t_SifRpcServerData,client)==28);
static_assert(sizeof(t_SifRpcServerData::client)==4);
static_assert(offsetof(t_SifRpcServerData,pkt_addr)==32);
static_assert(sizeof(t_SifRpcServerData::pkt_addr)==4);
static_assert(offsetof(t_SifRpcServerData,rpc_number)==36);
static_assert(sizeof(t_SifRpcServerData::rpc_number)==4);
static_assert(offsetof(t_SifRpcServerData,recvbuf)==40);
static_assert(sizeof(t_SifRpcServerData::recvbuf)==4);
static_assert(offsetof(t_SifRpcServerData,rsize)==44);
static_assert(sizeof(t_SifRpcServerData::rsize)==4);
static_assert(offsetof(t_SifRpcServerData,rmode)==48);
static_assert(sizeof(t_SifRpcServerData::rmode)==4);
static_assert(offsetof(t_SifRpcServerData,rid)==52);
static_assert(sizeof(t_SifRpcServerData::rid)==4);
static_assert(offsetof(t_SifRpcServerData,link)==56);
static_assert(sizeof(t_SifRpcServerData::link)==4);
static_assert(offsetof(t_SifRpcServerData,next)==60);
static_assert(sizeof(t_SifRpcServerData::next)==4);
static_assert(offsetof(t_SifRpcServerData,base)==64);
static_assert(sizeof(t_SifRpcServerData::base)==4);
static_assert(sizeof(t_SifRpcDataQueue)==24);
static_assert(offsetof(t_SifRpcDataQueue,thread_id)==0);
static_assert(sizeof(t_SifRpcDataQueue::thread_id)==4);
static_assert(offsetof(t_SifRpcDataQueue,active)==4);
static_assert(sizeof(t_SifRpcDataQueue::active)==4);
static_assert(offsetof(t_SifRpcDataQueue,link)==8);
static_assert(sizeof(t_SifRpcDataQueue::link)==4);
static_assert(offsetof(t_SifRpcDataQueue,start)==12);
static_assert(sizeof(t_SifRpcDataQueue::start)==4);
static_assert(offsetof(t_SifRpcDataQueue,end)==16);
static_assert(sizeof(t_SifRpcDataQueue::end)==4);
static_assert(offsetof(t_SifRpcDataQueue,next)==20);
static_assert(sizeof(t_SifRpcDataQueue::next)==4);

int main() {
    std::cout << "RPC layout assertions: 72 passed\n";
}
