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

// Function: entry_0014d93c
// Address: 0x14d93c - 0x14d990
void entry_0014d93c_0x14d93c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d93c_0x14d93c");
#endif

    switch (ctx->pc) {
        case 0x14d988u: goto label_14d988;
        default: break;
    }

    ctx->pc = 0x14d93cu;

    // 0x14d93c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d940: 0x14c30013  bne         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14D940u;
    {
        const bool branch_taken_0x14d940 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D940u;
        // 0x14d944: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d940) {
            ctx->pc = 0x14D990u;
            return;
        }
    }
    ctx->pc = 0x14D948u;
    // 0x14d948: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d94c: 0x8c630200  lw          $v1, 0x200($v1)
    ctx->pc = 0x14d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14d950: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D950u;
    {
        const bool branch_taken_0x14d950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d950) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D958u;
    // 0x14d958: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x14d958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14d95c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14D95Cu;
    {
        const bool branch_taken_0x14d95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d95c) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D964u;
    // 0x14d964: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d968: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x14d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x14d96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d970: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x14d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d978: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14d978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14d97c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d980: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14D980u;
    SET_GPR_U32(ctx, 31, 0x14D988u);
    ctx->pc = 0x14D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D980u;
    // 0x14d984: 0x8c440200  lw          $a0, 0x200($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14D980u, 0x14D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D988u;
label_14d988:
    // 0x14d988: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14D988u;
    {
        const bool branch_taken_0x14d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D988u;
        // 0x14d98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d988) {
            ctx->pc = 0x14D9DCu;
            return;
        }
    }
    ctx->pc = 0x14D990u;
}
