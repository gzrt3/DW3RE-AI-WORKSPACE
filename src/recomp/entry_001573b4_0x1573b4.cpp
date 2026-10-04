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

// Function: entry_001573b4
// Address: 0x1573b4 - 0x1573d0
void entry_001573b4_0x1573b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001573b4_0x1573b4");
#endif

    ctx->pc = 0x1573b4u;

    // 0x1573b4: 0x258d0001  addiu       $t5, $t4, 0x1
    ctx->pc = 0x1573b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1573b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1573b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1573bc: 0x29a10004  slti        $at, $t5, 0x4
    ctx->pc = 0x1573bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1573c0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1573C0u;
    {
        const bool branch_taken_0x1573c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1573C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573C0u;
        // 0x1573c4: 0xd4880  sll         $t1, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573c0) {
            ctx->pc = 0x1573F8u;
            return;
        }
    }
    ctx->pc = 0x1573C8u;
    // 0x1573c8: 0xea1821  addu        $v1, $a3, $t2
    ctx->pc = 0x1573c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1573cc: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1573ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    ctx->pc = 0x1573d0u;
}
