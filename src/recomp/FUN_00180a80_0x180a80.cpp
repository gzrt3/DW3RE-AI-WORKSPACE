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

// Function: FUN_00180a80
// Address: 0x180a80 - 0x180b18
void FUN_00180a80_0x180a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180a80_0x180a80");
#endif

    switch (ctx->pc) {
        case 0x180a90u: goto label_180a90;
        case 0x180b14u: goto label_180b14;
        default: break;
    }

    ctx->pc = 0x180a80u;

    // 0x180a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180a88: 0xc06c236  jal         func_1B08D8
    ctx->pc = 0x180A88u;
    SET_GPR_U32(ctx, 31, 0x180A90u);
    ctx->pc = 0x180A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A88u;
    // 0x180a8c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B08D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B08D8u, 0x180A88u, 0x180A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A90u;
label_180a90:
    // 0x180a90: 0x93a3001b  lbu         $v1, 0x1B($sp)
    ctx->pc = 0x180a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
    // 0x180a94: 0x93a5001a  lbu         $a1, 0x1A($sp)
    ctx->pc = 0x180a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x180a98: 0x93a20019  lbu         $v0, 0x19($sp)
    ctx->pc = 0x180a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x180a9c: 0x34903  sra         $t1, $v1, 4
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 4));
    // 0x180aa0: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x180aa4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180aa8: 0x53103  sra         $a2, $a1, 4
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 4));
    // 0x180aac: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180ab0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x180ab4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180ab8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x180abc: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x180ac0: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x180ac4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x180ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x180ac8: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x180acc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ad0: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x180ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x180ad4: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x180ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x180ad8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x180adc: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x180ae0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x180ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x180ae4: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x180ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x180ae8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180aec: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x180af0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x180af4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180af8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x180afc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x180afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x180b00: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x180b04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x180b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180b0c: 0xc08f0c6  jal         func_23C318
    ctx->pc = 0x180B0Cu;
    SET_GPR_U32(ctx, 31, 0x180B14u);
    ctx->pc = 0x180B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180B0Cu;
    // 0x180b10: 0x34440001  ori         $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C318u, 0x180B0Cu, 0x180B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B14u;
label_180b14:
    // 0x180b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x180b18u;
}
