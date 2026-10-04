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

// Function: FUN_00113cc0
// Address: 0x113cc0 - 0x113d4c
void FUN_00113cc0_0x113cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113cc0_0x113cc0");
#endif

    switch (ctx->pc) {
        case 0x113cf4u: goto label_113cf4;
        case 0x113d08u: goto label_113d08;
        default: break;
    }

    ctx->pc = 0x113cc0u;

    // 0x113cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x113cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cd4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x113cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x113cd8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x113cd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x113cdc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x113cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113ce0: 0xa08200be  sb          $v0, 0xBE($a0)
    ctx->pc = 0x113ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 190), (uint8_t)GPR_U32(ctx, 2));
    // 0x113ce4: 0x808200be  lb          $v0, 0xBE($a0)
    ctx->pc = 0x113ce4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 190)));
    // 0x113ce8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x113ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x113cec: 0xc070080  jal         func_1C0200
    ctx->pc = 0x113CECu;
    SET_GPR_U32(ctx, 31, 0x113CF4u);
    ctx->pc = 0x113CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CECu;
    // 0x113cf0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x113CECu, 0x113CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF4u;
label_113cf4:
    // 0x113cf4: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x113cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x113cf8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x113cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113cfc: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x113cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x113d00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x113D00u;
    {
        const bool branch_taken_0x113d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D00u;
        // 0x113d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d00) {
            ctx->pc = 0x113D34u;
            goto label_113d34;
        }
    }
    ctx->pc = 0x113D08u;
label_113d08:
    // 0x113d08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x113d0c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x113d10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x113d14: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x113d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x113d18: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x113d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113d1c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x113d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x113d20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x113d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x113d24: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x113d28: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x113d2c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x113d30: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_113d34:
    // 0x113d34: 0x0  nop
    ctx->pc = 0x113d34u;
    // NOP
    // 0x113d38: 0x822300be  lb          $v1, 0xBE($s1)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113d3c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x113d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113d40: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x113D40u;
    {
        const bool branch_taken_0x113d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d40) {
            ctx->pc = 0x113D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113d08;
        }
    }
    ctx->pc = 0x113D48u;
    // 0x113d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x113d4cu;
}
