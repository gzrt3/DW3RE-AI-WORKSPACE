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

// Function: FUN_0016bd90
// Address: 0x16bd90 - 0x16be10
void FUN_0016bd90_0x16bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bd90_0x16bd90");
#endif

    switch (ctx->pc) {
        case 0x16bdc0u: goto label_16bdc0;
        default: break;
    }

    ctx->pc = 0x16bd90u;

    // 0x16bd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bd94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16bd98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bd9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bd9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bda0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bda4: 0x2a220026  slti        $v0, $s1, 0x26
    ctx->pc = 0x16bda4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x16bda8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BDA8u;
    {
        const bool branch_taken_0x16bda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda8) {
            ctx->pc = 0x16BDB8u;
            goto label_16bdb8;
        }
    }
    ctx->pc = 0x16BDB0u;
    // 0x16bdb0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16BDB0u;
    {
        const bool branch_taken_0x16bdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDB0u;
        // 0x16bdb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdb0) {
            ctx->pc = 0x16BE0Cu;
            goto label_16be0c;
        }
    }
    ctx->pc = 0x16BDB8u;
label_16bdb8:
    // 0x16bdb8: 0xc055e04  jal         func_157810
    ctx->pc = 0x16BDB8u;
    SET_GPR_U32(ctx, 31, 0x16BDC0u);
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x16BDB8u, 0x16BDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDC0u;
label_16bdc0:
    // 0x16bdc0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16bdc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16BDC4u;
    {
        const bool branch_taken_0x16bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDC4u;
        // 0x16bdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bdc4) {
            ctx->pc = 0x16BE0Cu;
            goto label_16be0c;
        }
    }
    ctx->pc = 0x16BDCCu;
    // 0x16bdcc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bdd0: 0x2402ffc9  addiu       $v0, $zero, -0x37
    ctx->pc = 0x16bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967241));
    // 0x16bdd4: 0xac311eb4  sw          $s1, 0x1EB4($at)
    ctx->pc = 0x16bdd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x281EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB4u, _value); } while (0);
    // 0x16bdd8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bddc: 0xac301eb8  sw          $s0, 0x1EB8($at)
    ctx->pc = 0x16bddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x281EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB8u, _value); } while (0);
    // 0x16bde0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bde4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16bde4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bde8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16bde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16bdec: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bdf0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bdf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16bdf4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16bdf8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16bdfc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x16be00: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16be04: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16be04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16be08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16be08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16be0c:
    // 0x16be0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16be0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16be10u;
}
