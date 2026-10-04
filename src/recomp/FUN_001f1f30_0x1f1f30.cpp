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

// Function: FUN_001f1f30
// Address: 0x1f1f30 - 0x1f2048
void FUN_001f1f30_0x1f1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1f30_0x1f1f30");
#endif

    switch (ctx->pc) {
        case 0x1f1fd4u: goto label_1f1fd4;
        case 0x1f1fe8u: goto label_1f1fe8;
        default: break;
    }

    ctx->pc = 0x1f1f30u;

    // 0x1f1f30: 0x8f848fc4  lw          $a0, -0x703C($gp)
    ctx->pc = 0x1f1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
    // 0x1f1f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1f38: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F1F38u;
    {
        const bool branch_taken_0x1f1f38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F38u;
        // 0x1f1f3c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f38) {
            ctx->pc = 0x1F1F7Cu;
            goto label_1f1f7c;
        }
    }
    ctx->pc = 0x1F1F40u;
    // 0x1f1f40: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x1f1f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f1f44: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1f48: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1f1f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f1f4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F4Cu;
    {
        const bool branch_taken_0x1f1f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F4Cu;
        // 0x1f1f50: 0xaf838fc0  sw          $v1, -0x7040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f4c) {
            ctx->pc = 0x1F1F5Cu;
            goto label_1f1f5c;
        }
    }
    ctx->pc = 0x1F1F54u;
    // 0x1f1f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F54u;
    {
        const bool branch_taken_0x1f1f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F54u;
        // 0x1f1f58: 0x8f838fc0  lw          $v1, -0x7040($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f54) {
            ctx->pc = 0x1F1F60u;
            goto label_1f1f60;
        }
    }
    ctx->pc = 0x1F1F5Cu;
label_1f1f5c:
    // 0x1f1f5c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1f1f60:
    // 0x1f1f60: 0xaf838fc0  sw          $v1, -0x7040($gp)
    ctx->pc = 0x1f1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
    // 0x1f1f64: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x1f1f64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1f1f68: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1F68u;
    {
        const bool branch_taken_0x1f1f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f68) {
            ctx->pc = 0x1F1FB0u;
            goto label_1f1fb0;
        }
    }
    ctx->pc = 0x1F1F70u;
    // 0x1f1f70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F1F70u;
    {
        const bool branch_taken_0x1f1f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F70u;
        // 0x1f1f74: 0xaf808fc4  sw          $zero, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f70) {
            ctx->pc = 0x1F1FB0u;
            goto label_1f1fb0;
        }
    }
    ctx->pc = 0x1F1F78u;
    // 0x1f1f78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f1f7c:
    // 0x1f1f7c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1F7Cu;
    {
        const bool branch_taken_0x1f1f7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1f7c) {
            ctx->pc = 0x1F1FB0u;
            goto label_1f1fb0;
        }
    }
    ctx->pc = 0x1F1F84u;
    // 0x1f1f84: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x1f1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f1f88: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f1f8c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1f1f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1f90: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1F90u;
    {
        const bool branch_taken_0x1f1f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F90u;
        // 0x1f1f94: 0xaf838fc0  sw          $v1, -0x7040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f90) {
            ctx->pc = 0x1F1FA0u;
            goto label_1f1fa0;
        }
    }
    ctx->pc = 0x1F1F98u;
    // 0x1f1f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1F98u;
    {
        const bool branch_taken_0x1f1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F98u;
        // 0x1f1f9c: 0x8f838fc0  lw          $v1, -0x7040($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f98) {
            ctx->pc = 0x1F1FA4u;
            goto label_1f1fa4;
        }
    }
    ctx->pc = 0x1F1FA0u;
label_1f1fa0:
    // 0x1f1fa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f1fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fa4:
    // 0x1f1fa4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1FA4u;
    {
        const bool branch_taken_0x1f1fa4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FA4u;
        // 0x1f1fa8: 0xaf838fc0  sw          $v1, -0x7040($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fa4) {
            ctx->pc = 0x1F1FB0u;
            goto label_1f1fb0;
        }
    }
    ctx->pc = 0x1F1FACu;
    // 0x1f1fac: 0xaf808fc4  sw          $zero, -0x703C($gp)
    ctx->pc = 0x1f1facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 0));
label_1f1fb0:
    // 0x1f1fb0: 0x8f838fc0  lw          $v1, -0x7040($gp)
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
    // 0x1f1fb4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1FB4u;
    {
        const bool branch_taken_0x1f1fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1fb4) {
            ctx->pc = 0x1F2044u;
            goto label_1f2044;
        }
    }
    ctx->pc = 0x1F1FBCu;
    // 0x1f1fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1f1fc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fc8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1f1fcc: 0x27878fa8  addiu       $a3, $gp, -0x7058
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938536));
    // 0x1f1fd0: 0x24a5bfa0  addiu       $a1, $a1, -0x4060
    ctx->pc = 0x1f1fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
label_1f1fd4:
    // 0x1f1fd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f1fd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1fd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1fdc: 0xac1821  addu        $v1, $a1, $t4
    ctx->pc = 0x1f1fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1f1fe0: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1f1fe4: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f1fe8:
    // 0x1f1fe8: 0x8f838fb0  lw          $v1, -0x7050($gp)
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938544)));
    // 0x1f1fec: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FECu;
    {
        const bool branch_taken_0x1f1fec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1fec) {
            ctx->pc = 0x1F2000u;
            goto label_1f2000;
        }
    }
    ctx->pc = 0x1F1FF4u;
    // 0x1f1ff4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f1ff8: 0x11230009  beq         $t1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1FF8u;
    {
        const bool branch_taken_0x1f1ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1ff8) {
            ctx->pc = 0x1F2020u;
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2000u;
label_1f2000:
    // 0x1f2000: 0x8a6821  addu        $t5, $a0, $t2
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1f2004: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1f2008: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2008u;
    {
        const bool branch_taken_0x1f2008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f2008) {
            ctx->pc = 0x1F2020u;
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2010u;
    // 0x1f2010: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1f2014: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f2014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2018: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f2018u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f201c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1f201cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_1f2020:
    // 0x1f2020: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2024: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x1f2024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2028: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1F2028u;
    {
        const bool branch_taken_0x1f2028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2028u;
        // 0x1f202c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2028) {
            ctx->pc = 0x1F1FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1fe8;
        }
    }
    ctx->pc = 0x1F2030u;
    // 0x1f2030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f2034: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x1f2038: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f203c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F203Cu;
        // 0x1f2040: 0x258c0028  addiu       $t4, $t4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F1FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1fd4;
        }
    }
    ctx->pc = 0x1F2044u;
label_1f2044:
    // 0x1f2044: 0x0  nop
    ctx->pc = 0x1f2044u;
    // NOP
    ctx->pc = 0x1f2048u;
}
