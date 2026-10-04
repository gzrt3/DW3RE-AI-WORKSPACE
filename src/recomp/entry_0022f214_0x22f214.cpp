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

// Function: entry_0022f214
// Address: 0x22f214 - 0x22f260
void entry_0022f214_0x22f214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f214_0x22f214");
#endif

    ctx->pc = 0x22f214u;

    // 0x22f214: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f218: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f21c: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B025Cu));
    // 0x22f220: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x22F220u;
    {
        const bool branch_taken_0x22f220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f220) {
            ctx->pc = 0x22F260u;
            return;
        }
    }
    ctx->pc = 0x22F228u;
    // 0x22f228: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f22c: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00C4u));
    // 0x22f230: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F230u;
    {
        const bool branch_taken_0x22f230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f230) {
            ctx->pc = 0x22F260u;
            return;
        }
    }
    ctx->pc = 0x22F238u;
    // 0x22f238: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f23c: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0304u));
    // 0x22f240: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F240u;
    {
        const bool branch_taken_0x22f240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f240) {
            ctx->pc = 0x22F260u;
            return;
        }
    }
    ctx->pc = 0x22F248u;
    // 0x22f248: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f24c: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f24cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B031Cu));
    // 0x22f250: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F250u;
    {
        const bool branch_taken_0x22f250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f250) {
            ctx->pc = 0x22F260u;
            return;
        }
    }
    ctx->pc = 0x22F258u;
    // 0x22f258: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F258u;
    SET_GPR_U32(ctx, 31, 0x22F260u);
    ctx->pc = 0x22F25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F258u;
    // 0x22f25c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F258u, 0x22F260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F260u;
}
