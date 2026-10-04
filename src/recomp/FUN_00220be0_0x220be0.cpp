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

// Function: FUN_00220be0
// Address: 0x220be0 - 0x220c58
void FUN_00220be0_0x220be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00220be0_0x220be0");
#endif

    switch (ctx->pc) {
        case 0x220bfcu: goto label_220bfc;
        default: break;
    }

    ctx->pc = 0x220be0u;

    // 0x220be0: 0x3c090030  lui         $t1, 0x30
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)48 << 16));
    // 0x220be4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x220be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220be8: 0x2529b4e0  addiu       $t1, $t1, -0x4B20
    ctx->pc = 0x220be8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948064));
    // 0x220bec: 0x24080077  addiu       $t0, $zero, 0x77
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x220bf0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x220bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x220bf4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x220bf8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x220bf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220bfc:
    // 0x220bfc: 0x0  nop
    ctx->pc = 0x220bfcu;
    // NOP
    // 0x220c00: 0x9523000a  lhu         $v1, 0xA($t1)
    ctx->pc = 0x220c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x220c04: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220C04u;
    {
        const bool branch_taken_0x220c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c04) {
            ctx->pc = 0x220C2Cu;
            goto label_220c2c;
        }
    }
    ctx->pc = 0x220C0Cu;
    // 0x220c0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220C0Cu;
    {
        const bool branch_taken_0x220c0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C0Cu;
        // 0x220c10: 0xa525000a  sh          $a1, 0xA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c0c) {
            ctx->pc = 0x220C18u;
            goto label_220c18;
        }
    }
    ctx->pc = 0x220C14u;
    // 0x220c14: 0xa1280018  sb          $t0, 0x18($t1)
    ctx->pc = 0x220c14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 8));
label_220c18:
    // 0x220c18: 0x91230010  lbu         $v1, 0x10($t1)
    ctx->pc = 0x220c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x220c1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x220C1Cu;
    {
        const bool branch_taken_0x220c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x220c1c) {
            ctx->pc = 0x220C40u;
            goto label_220c40;
        }
    }
    ctx->pc = 0x220C24u;
    // 0x220c24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x220C24u;
    {
        const bool branch_taken_0x220c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C24u;
        // 0x220c28: 0xa1270010  sb          $a3, 0x10($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c24) {
            ctx->pc = 0x220C40u;
            goto label_220c40;
        }
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x0  nop
    ctx->pc = 0x220c2cu;
    // NOP
    // 0x220c30: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x220c34: 0x296300ff  slti        $v1, $t3, 0xFF
    ctx->pc = 0x220c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x220c38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x220C38u;
    {
        const bool branch_taken_0x220c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C38u;
        // 0x220c3c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c38) {
            ctx->pc = 0x220BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220bfc;
        }
    }
    ctx->pc = 0x220C40u;
label_220c40:
    // 0x220c40: 0x15660005  bne         $t3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x220C40u;
    {
        const bool branch_taken_0x220c40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x220c40) {
            ctx->pc = 0x220C58u;
            return;
        }
    }
    ctx->pc = 0x220C48u;
    // 0x220c48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x220c4c: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x220c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x220c50: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x220C50u;
    {
        const bool branch_taken_0x220c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C50u;
        // 0x220c54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c50) {
            ctx->pc = 0x220BFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220bfc;
        }
    }
    ctx->pc = 0x220C58u;
}
