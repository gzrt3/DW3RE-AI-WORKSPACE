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

// Function: FUN_00235d30
// Address: 0x235d30 - 0x235e10
void FUN_00235d30_0x235d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00235d30_0x235d30");
#endif

    switch (ctx->pc) {
        case 0x235d5cu: goto label_235d5c;
        case 0x235dc0u: goto label_235dc0;
        default: break;
    }

    ctx->pc = 0x235d30u;

    // 0x235d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235d34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x235d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x235d38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x235d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x235d40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x235d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x235d48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x235d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x235d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x235d50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x235d54: 0xc08d736  jal         func_235CD8
    ctx->pc = 0x235D54u;
    SET_GPR_U32(ctx, 31, 0x235D5Cu);
    ctx->pc = 0x235D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235D54u;
    // 0x235d58: 0x32130003  andi        $s3, $s0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CD8u, 0x235D54u, 0x235D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D5Cu;
label_235d5c:
    // 0x235d5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235d5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d60: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x235d64: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x235d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x235d68: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x235d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x235d6c: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x235d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x235d70: 0x3a660001  xori        $a2, $s3, 0x1
    ctx->pc = 0x235d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
    // 0x235d74: 0x3c0b0023  lui         $t3, 0x23
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)35 << 16));
    // 0x235d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x235d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d80: 0x244c0084  addiu       $t4, $v0, 0x84
    ctx->pc = 0x235d80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x235d84: 0x2484b2c0  addiu       $a0, $a0, -0x4D40
    ctx->pc = 0x235d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947520));
    // 0x235d88: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x235d88u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x235d8c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x235d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d90: 0x256b5cc0  addiu       $t3, $t3, 0x5CC0
    ctx->pc = 0x235d90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 23744));
    // 0x235d94: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x235d94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235d98: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x235d98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x235d9c: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x235d9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x235da0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x235DA0u;
    {
        const bool branch_taken_0x235da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DA0u;
        // 0x235da4: 0x24020095  addiu       $v0, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235da0) {
            ctx->pc = 0x235DF8u;
            goto label_235df8;
        }
    }
    ctx->pc = 0x235DA8u;
    // 0x235da8: 0xaf8082f8  sw          $zero, -0x7D08($gp)
    ctx->pc = 0x235da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 0));
    // 0x235dac: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x235DACu;
    {
        const bool branch_taken_0x235dac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x235DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DACu;
        // 0x235db0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dac) {
            ctx->pc = 0x235DB8u;
            goto label_235db8;
        }
    }
    ctx->pc = 0x235DB4u;
    // 0x235db4: 0xaf8282fc  sw          $v0, -0x7D04($gp)
    ctx->pc = 0x235db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 2));
label_235db8:
    // 0x235db8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x235DB8u;
    SET_GPR_U32(ctx, 31, 0x235DC0u);
    ctx->pc = 0x235DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DB8u;
    // 0x235dbc: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x235DB8u, 0x235DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235dc4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x235DC4u;
    {
        const bool branch_taken_0x235dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC4u;
        // 0x235dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dc4) {
            ctx->pc = 0x235DE0u;
            goto label_235de0;
        }
    }
    ctx->pc = 0x235DCCu;
    // 0x235dcc: 0x5262000a  beql        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x235DCCu;
    {
        const bool branch_taken_0x235dcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x235dcc) {
            ctx->pc = 0x235DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DCCu;
            // 0x235dd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235DF8u;
            goto label_235df8;
        }
    }
    ctx->pc = 0x235DD4u;
    // 0x235dd4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x235DD4u;
    {
        const bool branch_taken_0x235dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235dd4) {
            ctx->pc = 0x235DFCu;
            goto label_235dfc;
        }
    }
    ctx->pc = 0x235DDCu;
    // 0x235ddc: 0x0  nop
    ctx->pc = 0x235ddcu;
    // NOP
label_235de0:
    // 0x235de0: 0x2402ff9d  addiu       $v0, $zero, -0x63
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235de4: 0x2403ff9d  addiu       $v1, $zero, -0x63
    ctx->pc = 0x235de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
    // 0x235de8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x235de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x235dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235df0: 0xaf8282f8  sw          $v0, -0x7D08($gp)
    ctx->pc = 0x235df0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 2));
    // 0x235df4: 0xaf8082fc  sw          $zero, -0x7D04($gp)
    ctx->pc = 0x235df4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 0));
label_235df8:
    // 0x235df8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235dfc:
    // 0x235dfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x235dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235e00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x235e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235e04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235e08: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x235e08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x235e0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x235e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x235e10u;
}
