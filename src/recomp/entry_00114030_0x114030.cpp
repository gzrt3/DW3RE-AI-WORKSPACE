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

// Function: entry_00114030
// Address: 0x114030 - 0x114060
void entry_00114030_0x114030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114030_0x114030");
#endif

    switch (ctx->pc) {
        case 0x114048u: goto label_114048;
        default: break;
    }

    ctx->pc = 0x114030u;

    // 0x114030: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x114034: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x114034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x114038: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x114038u;
    {
        const bool branch_taken_0x114038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114038u;
        // 0x11403c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114038) {
            ctx->pc = 0x114068u;
            return;
        }
    }
    ctx->pc = 0x114040u;
    // 0x114040: 0xc045020  jal         func_114080
    ctx->pc = 0x114040u;
    SET_GPR_U32(ctx, 31, 0x114048u);
    ctx->pc = 0x114080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114080u, 0x114040u, 0x114048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114048u;
label_114048:
    // 0x114048: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x114048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x11404c: 0x3083000c  andi        $v1, $a0, 0xC
    ctx->pc = 0x11404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x114050: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114050u;
    {
        const bool branch_taken_0x114050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114050u;
        // 0x114054: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114050) {
            ctx->pc = 0x114060u;
            return;
        }
    }
    ctx->pc = 0x114058u;
    // 0x114058: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114058u;
    {
        const bool branch_taken_0x114058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114058) {
            ctx->pc = 0x114068u;
            return;
        }
    }
    ctx->pc = 0x114060u;
}
