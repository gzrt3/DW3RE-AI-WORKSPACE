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

// Function: FUN_00137f40
// Address: 0x137f40 - 0x138008
void FUN_00137f40_0x137f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137f40_0x137f40");
#endif

    switch (ctx->pc) {
        case 0x137f78u: goto label_137f78;
        case 0x137facu: goto label_137fac;
        default: break;
    }

    ctx->pc = 0x137f40u;

    // 0x137f40: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137f44: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x137f48: 0x8c26a4a4  lw          $a2, -0x5B5C($at)
    ctx->pc = 0x137f48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x30A4A4u));
    // 0x137f4c: 0x24a5a4a0  addiu       $a1, $a1, -0x5B60
    ctx->pc = 0x137f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943904));
    // 0x137f50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x137f50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f54: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x137f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x137f58: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x137f58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137f5c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137f60: 0x8c27a4a8  lw          $a3, -0x5B58($at)
    ctx->pc = 0x137f60u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x30A4A8u));
    // 0x137f64: 0x25230004  addiu       $v1, $t1, 0x4
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x137f68: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x137f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x137f6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x137f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x137f70: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x137F70u;
    {
        const bool branch_taken_0x137f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F70u;
        // 0x137f74: 0xc34021  addu        $t0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f70) {
            ctx->pc = 0x137FF8u;
            goto label_137ff8;
        }
    }
    ctx->pc = 0x137F78u;
label_137f78:
    // 0x137f78: 0x8cec0004  lw          $t4, 0x4($a3)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x137f7c: 0x189182b  sltu        $v1, $t4, $t1
    ctx->pc = 0x137f7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x137f80: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137F80u;
    {
        const bool branch_taken_0x137f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137f80) {
            ctx->pc = 0x137F8Cu;
            goto label_137f8c;
        }
    }
    ctx->pc = 0x137F88u;
    // 0x137f88: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x137f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137f8c:
    // 0x137f8c: 0x0  nop
    ctx->pc = 0x137f8cu;
    // NOP
    // 0x137f90: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x137f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x137f94: 0xc082a  slt         $at, $zero, $t4
    ctx->pc = 0x137f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x137f98: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x137f98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x137f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fa0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x137FA0u;
    {
        const bool branch_taken_0x137fa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FA0u;
        // 0x137fa4: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fa0) {
            ctx->pc = 0x137FD8u;
            goto label_137fd8;
        }
    }
    ctx->pc = 0x137FA8u;
    // 0x137fa8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x137fa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137fac:
    // 0x137fac: 0x0  nop
    ctx->pc = 0x137facu;
    // NOP
    // 0x137fb0: 0xcd1821  addu        $v1, $a2, $t5
    ctx->pc = 0x137fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x137fb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137fb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x137fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x137fbc: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x137fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x137fc0: 0x0  nop
    ctx->pc = 0x137fc0u;
    // NOP
    // 0x137fc4: 0x0  nop
    ctx->pc = 0x137fc4u;
    // NOP
    // 0x137fc8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x137fc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x137fcc: 0x16c182a  slt         $v1, $t3, $t4
    ctx->pc = 0x137fccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x137fd0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x137FD0u;
    {
        const bool branch_taken_0x137fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FD0u;
        // 0x137fd4: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fd0) {
            ctx->pc = 0x137FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137fac;
        }
    }
    ctx->pc = 0x137FD8u;
label_137fd8:
    // 0x137fd8: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x137fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x137fdc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x137FDCu;
    {
        const bool branch_taken_0x137fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137fdc) {
            ctx->pc = 0x137FE8u;
            goto label_137fe8;
        }
    }
    ctx->pc = 0x137FE4u;
    // 0x137fe4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x137fe4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_137fe8:
    // 0x137fe8: 0x25c30004  addiu       $v1, $t6, 0x4
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x137fec: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x137fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x137ff0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x137ff4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x137ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_137ff8:
    // 0x137ff8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x137ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137ffc: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x137ffcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138000: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x138000u;
    {
        const bool branch_taken_0x138000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x138000) {
            ctx->pc = 0x137F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137f78;
        }
    }
    ctx->pc = 0x138008u;
}
