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

// Function: FUN_0015ebe0
// Address: 0x15ebe0 - 0x15ec6c
void FUN_0015ebe0_0x15ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015ebe0_0x15ebe0");
#endif

    switch (ctx->pc) {
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec3cu: goto label_15ec3c;
        case 0x15ec48u: goto label_15ec48;
        default: break;
    }

    ctx->pc = 0x15ebe0u;

    // 0x15ebe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ebe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15ebe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ebec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ebf0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x15ebf4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x15ebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15ebf8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15EBF8u;
    {
        const bool branch_taken_0x15ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBF8u;
        // 0x15ebfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebf8) {
            ctx->pc = 0x15EC34u;
            goto label_15ec34;
        }
    }
    ctx->pc = 0x15EC00u;
    // 0x15ec00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ec00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x15ec04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15ec08: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x15ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_15ec0c:
    // 0x15ec0c: 0x0  nop
    ctx->pc = 0x15ec0cu;
    // NOP
    // 0x15ec10: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ec14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15ec18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15ec1c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x15ec1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ec20: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x15ec24: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15EC24u;
    {
        const bool branch_taken_0x15ec24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ec24) {
            ctx->pc = 0x15EC0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec0c;
        }
    }
    ctx->pc = 0x15EC2Cu;
    // 0x15ec2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EC68u;
            goto label_15ec68;
        }
    }
    ctx->pc = 0x15EC34u;
label_15ec34:
    // 0x15ec34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ec34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ec38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec3c:
    // 0x15ec3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ec40: 0xc070080  jal         func_1C0200
    ctx->pc = 0x15EC40u;
    SET_GPR_U32(ctx, 31, 0x15EC48u);
    ctx->pc = 0x15EC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC40u;
    // 0x15ec44: 0x24050e40  addiu       $a1, $zero, 0xE40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x15EC40u, 0x15EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC48u;
label_15ec48:
    // 0x15ec48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x15ec4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ec4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15ec50: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x15ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x15ec54: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15ec58: 0x2a23000d  slti        $v1, $s1, 0xD
    ctx->pc = 0x15ec58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x15ec5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15ec60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15EC60u;
    {
        const bool branch_taken_0x15ec60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec60) {
            ctx->pc = 0x15EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ec3c;
        }
    }
    ctx->pc = 0x15EC68u;
label_15ec68:
    // 0x15ec68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ec68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x15ec6cu;
}
