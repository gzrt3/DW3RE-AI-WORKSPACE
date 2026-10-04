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

// Function: FUN_0016daf0
// Address: 0x16daf0 - 0x16db54
void FUN_0016daf0_0x16daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016daf0_0x16daf0");
#endif

    ctx->pc = 0x16daf0u;

    // 0x16daf0: 0x480000d  bltz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x16DAF0u;
    {
        const bool branch_taken_0x16daf0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DAF0u;
        // 0x16daf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16daf0) {
            ctx->pc = 0x16DB28u;
            goto label_16db28;
        }
    }
    ctx->pc = 0x16DAF8u;
    // 0x16daf8: 0x28810017  slti        $at, $a0, 0x17
    ctx->pc = 0x16daf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x16dafc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16DAFCu;
    {
        const bool branch_taken_0x16dafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dafc) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB04u;
    // 0x16db04: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16DB04u;
    {
        const bool branch_taken_0x16db04 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x16DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB04u;
        // 0x16db08: 0x28a10007  slti        $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db04) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB0Cu;
    // 0x16db0c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB0Cu;
    {
        const bool branch_taken_0x16db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db0c) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB14u;
    // 0x16db14: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DB14u;
    {
        const bool branch_taken_0x16db14 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB14u;
        // 0x16db18: 0x28c10029  slti        $at, $a2, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db14) {
            ctx->pc = 0x16DB24u;
            goto label_16db24;
        }
    }
    ctx->pc = 0x16DB1Cu;
    // 0x16db1c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DB1Cu;
    {
        const bool branch_taken_0x16db1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB1Cu;
        // 0x16db20: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db1c) {
            ctx->pc = 0x16DB30u;
            goto label_16db30;
        }
    }
    ctx->pc = 0x16DB24u;
label_16db24:
    // 0x16db24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16db24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16db28:
    // 0x16db28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16DB28u;
    {
        const bool branch_taken_0x16db28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16db28) {
            ctx->pc = 0x16DB54u;
            return;
        }
    }
    ctx->pc = 0x16DB30u;
label_16db30:
    // 0x16db30: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16db34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16db38: 0x244215f0  addiu       $v0, $v0, 0x15F0
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5616));
    // 0x16db3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16db40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16db44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16db48: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x16db48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16db4c: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x16db50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16db50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x16db54u;
}
