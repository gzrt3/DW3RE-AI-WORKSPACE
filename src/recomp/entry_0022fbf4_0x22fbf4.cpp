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

// Function: entry_0022fbf4
// Address: 0x22fbf4 - 0x22fc40
void entry_0022fbf4_0x22fbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022fbf4_0x22fbf4");
#endif

    ctx->pc = 0x22fbf4u;

    // 0x22fbf4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fbf8: 0xac230480  sw          $v1, 0x480($at)
    ctx->pc = 0x22fbf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x290480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290480u, _value); } while (0);
    // 0x22fbfc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fc00: 0x2463044c  addiu       $v1, $v1, 0x44C
    ctx->pc = 0x22fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1100));
    // 0x22fc04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fc08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc0c: 0x28810027  slti        $at, $a0, 0x27
    ctx->pc = 0x22fc0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fc10: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x22FC10u;
    {
        const bool branch_taken_0x22fc10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fc10) {
            ctx->pc = 0x22FC40u;
            return;
        }
    }
    ctx->pc = 0x22FC18u;
    // 0x22fc18: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x22fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x22fc1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22fc20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fc24: 0x2442ff8c  addiu       $v0, $v0, -0x74
    ctx->pc = 0x22fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967180));
    // 0x22fc28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22fc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22fc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fc30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fc34: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x22fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x22fc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FC38u;
    {
        const bool branch_taken_0x22fc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FC38u;
        // 0x22fc3c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fc38) {
            ctx->pc = 0x22FC44u;
            return;
        }
    }
    ctx->pc = 0x22FC40u;
}
