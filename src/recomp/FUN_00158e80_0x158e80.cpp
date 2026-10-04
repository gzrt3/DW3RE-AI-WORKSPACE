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

// Function: FUN_00158e80
// Address: 0x158e80 - 0x158f70
void FUN_00158e80_0x158e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158e80_0x158e80");
#endif

    switch (ctx->pc) {
        case 0x158ee0u: goto label_158ee0;
        default: break;
    }

    ctx->pc = 0x158e80u;

    // 0x158e80: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x158e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158e88: 0x45200  sll         $t2, $a0, 8
    ctx->pc = 0x158e88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x158e8c: 0x3c0b002f  lui         $t3, 0x2F
    ctx->pc = 0x158e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)47 << 16));
    // 0x158e90: 0x1446823  subu        $t5, $t2, $a0
    ctx->pc = 0x158e90u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x158e94: 0x256b2570  addiu       $t3, $t3, 0x2570
    ctx->pc = 0x158e94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 9584));
    // 0x158e98: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x158e98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x158e9c: 0x24070383  addiu       $a3, $zero, 0x383
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x158ea0: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x158ea4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x158ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x158ea8: 0x468c0  sll         $t5, $a0, 3
    ctx->pc = 0x158ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x158eac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x158eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158eb0: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x158eb4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158eb8: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x158eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x158ebc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x158ec0: 0xd5880  sll         $t3, $t5, 2
    ctx->pc = 0x158ec0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x158ec4: 0x16d6023  subu        $t4, $t3, $t5
    ctx->pc = 0x158ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x158ec8: 0x248b0000  addiu       $t3, $a0, 0x0
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x158ecc: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x158eccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x158ed0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x158ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x158ed4: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x158ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x158ed8: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x158ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x158edc: 0x248d0000  addiu       $t5, $a0, 0x0
    ctx->pc = 0x158edcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_158ee0:
    // 0x158ee0: 0x1a67821  addu        $t7, $t5, $a2
    ctx->pc = 0x158ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 6)));
    // 0x158ee4: 0x91ec0222  lbu         $t4, 0x222($t7)
    ctx->pc = 0x158ee4u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 546)));
    // 0x158ee8: 0x1580001c  bnez        $t4, . + 4 + (0x1C << 2)
    ctx->pc = 0x158EE8u;
    {
        const bool branch_taken_0x158ee8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x158ee8) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158EF0u;
    // 0x158ef0: 0x85e40232  lh          $a0, 0x232($t7)
    ctx->pc = 0x158ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 562)));
    // 0x158ef4: 0x15800019  bnez        $t4, . + 4 + (0x19 << 2)
    ctx->pc = 0x158EF4u;
    {
        const bool branch_taken_0x158ef4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x158EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158EF4u;
        // 0x158ef8: 0x857021  addu        $t6, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ef4) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158EFCu;
    // 0x158efc: 0x91ec0220  lbu         $t4, 0x220($t7)
    ctx->pc = 0x158efcu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 544)));
    // 0x158f00: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x158f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x158f04: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x158f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x158f08: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x158f0c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x158f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x158f10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x158f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158f14: 0x90840015  lbu         $a0, 0x15($a0)
    ctx->pc = 0x158f14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x158f18: 0x108a0010  beq         $a0, $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x158F18u;
    {
        const bool branch_taken_0x158f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 10));
        if (branch_taken_0x158f18) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F20u;
    // 0x158f20: 0x1089000e  beq         $a0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x158F20u;
    {
        const bool branch_taken_0x158f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x158f20) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F28u;
    // 0x158f28: 0x1088000c  beq         $a0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x158F28u;
    {
        const bool branch_taken_0x158f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x158f28) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F30u;
    // 0x158f30: 0xa5ee0230  sh          $t6, 0x230($t7)
    ctx->pc = 0x158f30u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 14));
    // 0x158f34: 0x85e40230  lh          $a0, 0x230($t7)
    ctx->pc = 0x158f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 560)));
    // 0x158f38: 0x28810384  slti        $at, $a0, 0x384
    ctx->pc = 0x158f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x158f3c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x158F3Cu;
    {
        const bool branch_taken_0x158f3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x158f3c) {
            ctx->pc = 0x158F4Cu;
            goto label_158f4c;
        }
    }
    ctx->pc = 0x158F44u;
    // 0x158f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x158F44u;
    {
        const bool branch_taken_0x158f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F44u;
        // 0x158f48: 0xa5e70230  sh          $a3, 0x230($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f44) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F4Cu;
label_158f4c:
    // 0x158f4c: 0x0  nop
    ctx->pc = 0x158f4cu;
    // NOP
    // 0x158f50: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x158F50u;
    {
        const bool branch_taken_0x158f50 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x158f50) {
            ctx->pc = 0x158F5Cu;
            goto label_158f5c;
        }
    }
    ctx->pc = 0x158F58u;
    // 0x158f58: 0xa5e90230  sh          $t1, 0x230($t7)
    ctx->pc = 0x158f58u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 560), (uint16_t)GPR_U32(ctx, 9));
label_158f5c:
    // 0x158f5c: 0x0  nop
    ctx->pc = 0x158f5cu;
    // NOP
    // 0x158f60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x158f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x158f64: 0x2864000c  slti        $a0, $v1, 0xC
    ctx->pc = 0x158f64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x158f68: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x158F68u;
    {
        const bool branch_taken_0x158f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x158F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158F68u;
        // 0x158f6c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158f68) {
            ctx->pc = 0x158EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158ee0;
        }
    }
    ctx->pc = 0x158F70u;
}
