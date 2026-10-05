#pragma once
#include <cstdint>
namespace fate::native_iop {
struct Module { const char* name; uint64_t size; const char* sha256; bool hle; };
inline constexpr Module manifest[]{
    {"SYSMEM",4625u,"1b03e6ffd2042c2545cf1a78ab937b6b57ccda037783e7ad52467bb9f5556054",true},
    {"LOADCORE",9849u,"51c9e79f4529d3590643a46ce63d73433b377a38ccc9fd0fad59a25b463d3bd3",true},
    {"EXCEPMAN",3033u,"5c608046da492f3621a42828f49c3aadb0ee3247289af60766d34b4461ed26ed",false},
    {"INTRMANP",6657u,"95bd617db528cda0cc375babd301776b3b9558920380fc99b1adf5cacdba83da",true},
    {"INTRMANI",7729u,"779e22c247261fa6b72b92bdfae0783da146294e683f89e0e41c71f47234669e",true},
    {"SSBUSC",1897u,"ffd736dd649714451ca94dd60b956cbf3495a2d8943a8bb5f1a59bafe6f992d9",false},
    {"DMACMAN",14069u,"b0c35cb83cc61385cc86b1665b7a65e49dda71588feffc3ba70575267f1cc559",false},
    {"TIMEMANP",3033u,"9624ffa50f75e11502212dea14b6433353f24c209523b8067576b34690e64bcd",true},
    {"TIMEMANI",6069u,"1825b7fb1517f340b9e5dddf7c52d3a911e58055a00aa9472a4e18a195c1dbfd",true},
    {"SYSCLIB",10205u,"e57edb4df3c50d58d4af7c5e2a502b072783a8feb43c00d277db5a1733374fce",false},
    {"HEAPLIB",3313u,"fef6731f6c8d10ac7ed1785502c071c4ecb6b416cdd3f53104aeed48e543ddd2",true},
    {"EECONF",3905u,"40ef1a2ecff470829a3d9aee9237c597b783ee27ced876893e0980559a9a5fb7",false},
    {"THREADMAN",39421u,"61bef97ca94a8cbd96ffd442fbbd84c10fdef95dfe5e4ae5b23674bb810f9092",true},
    {"VBLANK",3465u,"5181693327dfd6ee0be8e2331a287109098e26253a4788a5d121f1fd73f1e4ce",true},
    {"IOMAN",12545u,"4539b1716fbb2fdb65590d8e445e99101791897049712a73f08797aec26b59f1",true},
    {"MODLOAD",17997u,"4a9027499d8fe06ced66d0ab66a9e930b30943c17fd2b5ae5f0bf76abf8360a7",false},
    {"ROMDRV",3881u,"753d9d4767d5a4ca7c891624f569cda47c3b591c23c62a0742ea5b0fa8375846",true},
    {"STDIO",3377u,"f24ecef688f1af0d659aad5472a9056db843005b06b176899a4fe76c74fd69fd",true},
    {"SIFMAN",5937u,"999a2aeeb1fca70a4b89ee13a4db5cd8fbb15f503d8a9d336b184e57d70c6dcd",true},
    {"IGREETING",4185u,"318a20420bf85f22eda86d0aa666e62f71153bec358a1b155702a7035419da6a",false},
    {"SIFCMD",10105u,"cbea6f65e4f38b2c212ebdbacfed21451a1cb46b8c1286ff3e2ef7408956af8a",true},
    {"REBOOT",1985u,"2b6cfb7a6f8251629d39480349c739fb105fab97b3cae1ff7d984bf5134eb8b4",false},
    {"LOADFILE",11617u,"53738d5ad16f42472a698d0937393fe6e53af0ad643101f4d7b0e0e6b52858f0",false},
    {"CDVDMAN",72389u,"a79d31b188b9738d9eeecee2b31f3cc8acd3af424fda7ba2c794de5b81d7eb8d",true},
    {"CDVDFSV",40661u,"02cd6102a92074f7bcab557e66eec51a3cd52a32742863109c89ac6037818ccc",false},
    {"SIFINIT",1041u,"a7558548ad86e0c2835d05bcf6a112b4cbf4cfe1177e56c1997e83bc1c8bce6c",false},
    {"FILEIO",20629u,"e0c0ecc0f4869e1bc364cba7dac46add8a97f5d33a1e995a9132c7c1fb8165f9",false},
    {"SECRMAN",17633u,"97b4628862efda71163320ac96394bbacde725399d720db0ca20c6993cb2cb27",false},
    {"EESYNC",1545u,"d22329d916442790f5626f0ece082452bbc11d15c2ccbb13e90d5cf4d9f44ddb",false},
};
}
