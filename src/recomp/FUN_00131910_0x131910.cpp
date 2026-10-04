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

// Function: FUN_00131910
// Address: 0x131910 - 0x13194c
void FUN_00131910_0x131910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131910_0x131910");
#endif

    switch (ctx->pc) {
        case 0x131928u: goto label_131928;
        default: break;
    }

    ctx->pc = 0x131910u;

    // 0x131910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13191c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13191cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131920: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x131920u;
    SET_GPR_U32(ctx, 31, 0x131928u);
    ctx->pc = 0x131924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131920u;
    // 0x131924: 0x84840004  lh          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x131920u, 0x131928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131928u;
label_131928:
    // 0x131928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131928u;
    {
        const bool branch_taken_0x131928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131928) {
            ctx->pc = 0x131938u;
            goto label_131938;
        }
    }
    ctx->pc = 0x131930u;
    // 0x131930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x131930u;
    {
        const bool branch_taken_0x131930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131930u;
        // 0x131934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131930) {
            ctx->pc = 0x131948u;
            goto label_131948;
        }
    }
    ctx->pc = 0x131938u;
label_131938:
    // 0x131938: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x131938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13193c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13193cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x131940: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x131944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x131944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131948:
    // 0x131948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13194cu;
}
