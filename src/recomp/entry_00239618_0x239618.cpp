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

// Function: entry_00239618
// Address: 0x239618 - 0x239650
void entry_00239618_0x239618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239618_0x239618");
#endif

    ctx->pc = 0x239618u;

    // 0x239618: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x239618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23961c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x239620: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x239620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x239624: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x239624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x239628: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239628u;
    {
        const bool branch_taken_0x239628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239628u;
        // 0x23962c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239628) {
            ctx->pc = 0x239650u;
            return;
        }
    }
    ctx->pc = 0x239630u;
    // 0x239630: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x239634: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x239638: 0x2442c9b0  addiu       $v0, $v0, -0x3650
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953392));
    // 0x23963c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23963Cu;
    {
        const bool branch_taken_0x23963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23963c) {
            ctx->pc = 0x239654u;
            return;
        }
    }
    ctx->pc = 0x239644u;
    // 0x239644: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x239644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x239648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239648u;
    {
        const bool branch_taken_0x239648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239648u;
        // 0x23964c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239648) {
            ctx->pc = 0x239658u;
            return;
        }
    }
    ctx->pc = 0x239650u;
}
