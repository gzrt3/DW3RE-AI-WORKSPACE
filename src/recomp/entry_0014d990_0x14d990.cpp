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

// Function: entry_0014d990
// Address: 0x14d990 - 0x14d9dc
void entry_0014d990_0x14d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d990_0x14d990");
#endif

    switch (ctx->pc) {
        case 0x14d9d8u: goto label_14d9d8;
        default: break;
    }

    ctx->pc = 0x14d990u;

    // 0x14d990: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D990u;
    {
        const bool branch_taken_0x14d990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d990) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D998u;
    // 0x14d998: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d99c: 0x8c630200  lw          $v1, 0x200($v1)
    ctx->pc = 0x14d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14d9a0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14D9A0u;
    {
        const bool branch_taken_0x14d9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9a0) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D9A8u;
    // 0x14d9a8: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x14d9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14d9ac: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D9ACu;
    {
        const bool branch_taken_0x14d9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ac) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D9B4u;
    // 0x14d9b4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d9b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x14d9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d9c0: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x14d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d9c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d9c8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14d9cc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d9d0: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14D9D0u;
    SET_GPR_U32(ctx, 31, 0x14D9D8u);
    ctx->pc = 0x14D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9D0u;
    // 0x14d9d4: 0x8c440200  lw          $a0, 0x200($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14D9D0u, 0x14D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9D8u;
label_14d9d8:
    // 0x14d9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14d9dcu;
}
