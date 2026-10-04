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

// Function: entry_001c0404
// Address: 0x1c0404 - 0x1c0480
void entry_001c0404_0x1c0404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0404_0x1c0404");
#endif

    ctx->pc = 0x1c0404u;

    // 0x1c0404: 0x0  nop
    ctx->pc = 0x1c0404u;
    // NOP
    // 0x1c0408: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c040c: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A9Cu));
    // 0x1c0410: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1c0410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c0414: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0414u;
    {
        const bool branch_taken_0x1c0414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0414) {
            ctx->pc = 0x1C0424u;
            goto label_1c0424;
        }
    }
    ctx->pc = 0x1C041Cu;
    // 0x1c041c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0420: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
label_1c0424:
    // 0x1c0424: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C042Cu;
    // 0x1c042c: 0x0  nop
    ctx->pc = 0x1c042cu;
    // NOP
    // 0x1c0430: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0434: 0x8c264a98  lw          $a2, 0x4A98($at)
    ctx->pc = 0x1c0434u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c0438: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c043c: 0x8c254a9c  lw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c043cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x464A9Cu));
    // 0x1c0440: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0444: 0x8c244aa8  lw          $a0, 0x4AA8($at)
    ctx->pc = 0x1c0444u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x464AA8u));
    // 0x1c0448: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c044c: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c044cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464AACu));
    // 0x1c0450: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0454: 0xac264aa0  sw          $a2, 0x4AA0($at)
    ctx->pc = 0x1c0454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x464AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AA0u, _value); } while (0);
    // 0x1c0458: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c045c: 0xac254aa4  sw          $a1, 0x4AA4($at)
    ctx->pc = 0x1c045cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464AA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AA4u, _value); } while (0);
    // 0x1c0460: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0464: 0xac244ab0  sw          $a0, 0x4AB0($at)
    ctx->pc = 0x1c0464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x464AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AB0u, _value); } while (0);
    // 0x1c0468: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c046c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C046Cu;
        // 0x1c0470: 0xac234ab4  sw          $v1, 0x4AB4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0474u;
    // 0x1c0474: 0x0  nop
    ctx->pc = 0x1c0474u;
    // NOP
    // 0x1c0478: 0x0  nop
    ctx->pc = 0x1c0478u;
    // NOP
    // 0x1c047c: 0x0  nop
    ctx->pc = 0x1c047cu;
    // NOP
    ctx->pc = 0x1c0480u;
}
