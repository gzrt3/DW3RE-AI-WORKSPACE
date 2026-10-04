#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0021c740
// Address: 0x21c740 - 0x21c7cc
void entry_0021c740_0x21c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c740_0x21c740");
#endif

    ctx->pc = 0x21c740u;

    // 0x21c740: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c740u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x21c744: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x21c744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x21c748: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x21C748u;
    {
        const bool branch_taken_0x21c748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c748) {
            ctx->pc = 0x21C7CCu;
            return;
        }
    }
    ctx->pc = 0x21C750u;
    // 0x21c750: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21c754: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x21c758: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x21c75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c760: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x21c764: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c76c: 0x0  nop
    ctx->pc = 0x21c76cu;
    // NOP
    // 0x21c770: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x21c770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x21c774: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c778: 0x0  nop
    ctx->pc = 0x21c778u;
    // NOP
    // 0x21c77c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C77Cu;
    {
        const bool branch_taken_0x21c77c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C77Cu;
        // 0x21c780: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c77c) {
            ctx->pc = 0x21C798u;
            goto label_21c798;
        }
    }
    ctx->pc = 0x21C784u;
    // 0x21c784: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c788: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c790: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C790u;
    {
        const bool branch_taken_0x21c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c790) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C798u;
label_21c798:
    // 0x21c798: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c7a0: 0x0  nop
    ctx->pc = 0x21c7a0u;
    // NOP
    // 0x21c7a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c7a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c7a8: 0x0  nop
    ctx->pc = 0x21c7a8u;
    // NOP
    // 0x21c7ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C7ACu;
    {
        const bool branch_taken_0x21c7ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c7ac) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7B4u;
    // 0x21c7b4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c7b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c7c0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C7C0u;
    {
        const bool branch_taken_0x21c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7c0) {
            ctx->pc = 0x21C7C8u;
            goto label_21c7c8;
        }
    }
    ctx->pc = 0x21C7C8u;
label_21c7c8:
    // 0x21c7c8: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x21c7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    ctx->pc = 0x21c7ccu;
}
