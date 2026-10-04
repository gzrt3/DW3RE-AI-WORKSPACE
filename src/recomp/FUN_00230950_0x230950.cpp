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

// Function: FUN_00230950
// Address: 0x230950 - 0x2309bc
void FUN_00230950_0x230950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00230950_0x230950");
#endif

    switch (ctx->pc) {
        case 0x230998u: goto label_230998;
        case 0x2309a0u: goto label_2309a0;
        default: break;
    }

    ctx->pc = 0x230950u;

    // 0x230950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x230954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x230954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x230958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23095c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x230960: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x230960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x230964: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x230964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x230968: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x230968u;
    {
        const bool branch_taken_0x230968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230968) {
            ctx->pc = 0x2309B8u;
            goto label_2309b8;
        }
    }
    ctx->pc = 0x230970u;
    // 0x230970: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x230970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x230974: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x230974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x230978: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x230978u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x23097c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23097Cu;
    {
        const bool branch_taken_0x23097c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23097c) {
            ctx->pc = 0x23098Cu;
            goto label_23098c;
        }
    }
    ctx->pc = 0x230984u;
    // 0x230984: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x230984u;
    {
        const bool branch_taken_0x230984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230984u;
        // 0x230988: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230984) {
            ctx->pc = 0x2309BCu;
            return;
        }
    }
    ctx->pc = 0x23098Cu;
label_23098c:
    // 0x23098c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x23098cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x230990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x230990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230994: 0x2610aae0  addiu       $s0, $s0, -0x5520
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
label_230998:
    // 0x230998: 0xc044a6c  jal         func_1129B0
    ctx->pc = 0x230998u;
    SET_GPR_U32(ctx, 31, 0x2309A0u);
    ctx->pc = 0x23099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230998u;
    // 0x23099c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1129B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1129B0u, 0x230998u, 0x2309A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309A0u;
label_2309a0:
    // 0x2309a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2309a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2309a4: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x2309a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x2309a8: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2309a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2309ac: 0x0  nop
    ctx->pc = 0x2309acu;
    // NOP
    // 0x2309b0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2309B0u;
    {
        const bool branch_taken_0x2309b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2309b0) {
            ctx->pc = 0x230998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230998;
        }
    }
    ctx->pc = 0x2309B8u;
label_2309b8:
    // 0x2309b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2309b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x2309bcu;
}
