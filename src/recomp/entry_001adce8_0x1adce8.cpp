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

// Function: entry_001adce8
// Address: 0x1adce8 - 0x1add5c
void entry_001adce8_0x1adce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adce8_0x1adce8");
#endif

    switch (ctx->pc) {
        case 0x1add2cu: goto label_1add2c;
        case 0x1add4cu: goto label_1add4c;
        default: break;
    }

    ctx->pc = 0x1adce8u;

    // 0x1adce8: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1adce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1adcec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1adcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1adcf0: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x1adcf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1adcf4: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x1adcf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1adcf8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1adcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1adcfc: 0x26735cd0  addiu       $s3, $s3, 0x5CD0
    ctx->pc = 0x1adcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 23760));
    // 0x1add00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1add00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add04: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1add04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1add08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1add08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1add0c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1add0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1add10: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1add10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1add14: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x1add14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1add18: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1add18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1add1c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1add1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1add20: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1add20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1add24: 0xc069446  jal         func_1A5118
    ctx->pc = 0x1ADD24u;
    SET_GPR_U32(ctx, 31, 0x1ADD2Cu);
    ctx->pc = 0x1ADD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD24u;
    // 0x1add28: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5118u, 0x1ADD24u, 0x1ADD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD2Cu;
label_1add2c:
    // 0x1add2c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1add30: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1add30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1add34: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1add34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1add38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1add38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add3c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1add3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1add40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1add40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1add44: 0xc0692f8  jal         func_1A4BE0
    ctx->pc = 0x1ADD44u;
    SET_GPR_U32(ctx, 31, 0x1ADD4Cu);
    ctx->pc = 0x1ADD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD44u;
    // 0x1add48: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BE0u, 0x1ADD44u, 0x1ADD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD4Cu;
label_1add4c:
    // 0x1add4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1add4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1add50: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ADD50u;
    {
        const bool branch_taken_0x1add50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD50u;
        // 0x1add54: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add50) {
            ctx->pc = 0x1ADD78u;
            return;
        }
    }
    ctx->pc = 0x1ADD58u;
    // 0x1add58: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1add58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    ctx->pc = 0x1add5cu;
}
