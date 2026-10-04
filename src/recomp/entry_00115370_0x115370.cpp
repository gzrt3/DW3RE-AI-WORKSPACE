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

// Function: entry_00115370
// Address: 0x115370 - 0x115384
void entry_00115370_0x115370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115370_0x115370");
#endif

    ctx->pc = 0x115370u;

    // 0x115370: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115374: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x115374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x115378: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x115378u;
    {
        const bool branch_taken_0x115378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115378u;
        // 0x11537c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115378) {
            ctx->pc = 0x115384u;
            return;
        }
    }
    ctx->pc = 0x115380u;
    // 0x115380: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x115380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->pc = 0x115384u;
}
