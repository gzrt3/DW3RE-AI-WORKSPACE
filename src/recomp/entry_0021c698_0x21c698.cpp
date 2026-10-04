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

// Function: entry_0021c698
// Address: 0x21c698 - 0x21c740
void entry_0021c698_0x21c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c698_0x21c698");
#endif

    switch (ctx->pc) {
        case 0x21c6a8u: goto label_21c6a8;
        default: break;
    }

    ctx->pc = 0x21c698u;

    // 0x21c698: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
    // 0x21c69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c6a0: 0xc04fe24  jal         func_13F890
    ctx->pc = 0x21C6A0u;
    SET_GPR_U32(ctx, 31, 0x21C6A8u);
    ctx->pc = 0x13F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F890u, 0x21C6A0u, 0x21C6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C6A8u;
label_21c6a8:
    // 0x21c6a8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x21c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x21c6ac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x21c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x21c6b0: 0xdf8387d0  ld          $v1, -0x7830($gp)
    ctx->pc = 0x21c6b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x21c6b4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x21c6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x21c6b8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x21C6B8u;
    {
        const bool branch_taken_0x21c6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c6b8) {
            ctx->pc = 0x21C740u;
            return;
        }
    }
    ctx->pc = 0x21C6C0u;
    // 0x21c6c0: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x21c6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21c6c4: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x21c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x21c6c8: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x21c6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x21c6cc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21c6ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21c6d0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x21c6d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c6d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c6dc: 0x0  nop
    ctx->pc = 0x21c6dcu;
    // NOP
    // 0x21c6e0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21c6e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21c6e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c6e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c6e8: 0x0  nop
    ctx->pc = 0x21c6e8u;
    // NOP
    // 0x21c6ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C6ECu;
    {
        const bool branch_taken_0x21c6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C6ECu;
        // 0x21c6f0: 0x3c03c049  lui         $v1, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c6ec) {
            ctx->pc = 0x21C708u;
            goto label_21c708;
        }
    }
    ctx->pc = 0x21C6F4u;
    // 0x21c6f4: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c6f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c6fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c6fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C700u;
    {
        const bool branch_taken_0x21c700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C700u;
        // 0x21c704: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c700) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C708u;
label_21c708:
    // 0x21c708: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c70c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c710: 0x0  nop
    ctx->pc = 0x21c710u;
    // NOP
    // 0x21c714: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21c714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21c718: 0x0  nop
    ctx->pc = 0x21c718u;
    // NOP
    // 0x21c71c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21C71Cu;
    {
        const bool branch_taken_0x21c71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21c71c) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C724u;
    // 0x21c724: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x21c724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x21c728: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x21c728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x21c72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c730: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C730u;
    {
        const bool branch_taken_0x21c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C730u;
        // 0x21c734: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c730) {
            ctx->pc = 0x21C738u;
            goto label_21c738;
        }
    }
    ctx->pc = 0x21C738u;
label_21c738:
    // 0x21c738: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21C738u;
    {
        const bool branch_taken_0x21c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0xe6010044  swc1        $f1, 0x44($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c738) {
            ctx->pc = 0x21C7CCu;
            return;
        }
    }
    ctx->pc = 0x21C740u;
}
