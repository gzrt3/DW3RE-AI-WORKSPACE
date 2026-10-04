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

// Function: entry_001153c4
// Address: 0x1153c4 - 0x115400
void entry_001153c4_0x1153c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001153c4_0x1153c4");
#endif

    ctx->pc = 0x1153c4u;

    // 0x1153c4: 0x28a10060  slti        $at, $a1, 0x60
    ctx->pc = 0x1153c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1153c8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1153C8u;
    {
        const bool branch_taken_0x1153c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153C8u;
        // 0x1153cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153c8) {
            ctx->pc = 0x115400u;
            return;
        }
    }
    ctx->pc = 0x1153D0u;
    // 0x1153d0: 0x28a10089  slti        $at, $a1, 0x89
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1153d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1153D4u;
    {
        const bool branch_taken_0x1153d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1153d4) {
            ctx->pc = 0x115400u;
            return;
        }
    }
    ctx->pc = 0x1153DCu;
    // 0x1153dc: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x1153e0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1153e4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153e8: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x1153e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1153ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1153ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1153f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1153f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1153f8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1153fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x115400u;
}
