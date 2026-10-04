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

// Function: entry_00158ee0
// Address: 0x158ee0 - 0x158f4c
void entry_00158ee0_0x158ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158ee0_0x158ee0");
#endif

    ctx->pc = 0x158ee0u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x158F20u;
    // 0x158f20: 0x1089000e  beq         $a0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x158F20u;
    {
        const bool branch_taken_0x158f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        if (branch_taken_0x158f20) {
            ctx->pc = 0x158F5Cu;
            return;
        }
    }
    ctx->pc = 0x158F28u;
    // 0x158f28: 0x1088000c  beq         $a0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x158F28u;
    {
        const bool branch_taken_0x158f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x158f28) {
            ctx->pc = 0x158F5Cu;
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x158F4Cu;
}
