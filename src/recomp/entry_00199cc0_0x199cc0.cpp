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

// Function: entry_00199cc0
// Address: 0x199cc0 - 0x199d0c
void entry_00199cc0_0x199cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199cc0_0x199cc0");
#endif

    switch (ctx->pc) {
        case 0x199cc8u: goto label_199cc8;
        default: break;
    }

    ctx->pc = 0x199cc0u;

    // 0x199cc0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199CC0u, 0x199CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199ccc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199cd0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x199cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x199cd4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199cd8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x199cd8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199cdc: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
    // 0x199ce0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x199ce4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x199ce4u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x199ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199cec: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x199cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x199cf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199cf4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x199cf4u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 5));
    // 0x199cf8: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x199cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x199cfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199d00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x199d00u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 5));
    // 0x199d04: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x199D04u;
    {
        const bool branch_taken_0x199d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D04u;
        // 0x199d08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d04) {
            ctx->pc = 0x199F28u;
            return;
        }
    }
    ctx->pc = 0x199D0Cu;
}
