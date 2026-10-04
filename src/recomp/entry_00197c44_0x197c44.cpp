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

// Function: entry_00197c44
// Address: 0x197c44 - 0x197c80
void entry_00197c44_0x197c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197c44_0x197c44");
#endif

    ctx->pc = 0x197c44u;

    // 0x197c44: 0x0  nop
    ctx->pc = 0x197c44u;
    // NOP
    // 0x197c48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x197c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197c50: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197c54: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x197c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x197c58: 0x1043fff3  beq         $v0, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x197C58u;
    {
        const bool branch_taken_0x197c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x197c58) {
            ctx->pc = 0x197C28u;
            return;
        }
    }
    ctx->pc = 0x197C60u;
    // 0x197c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x197c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x197C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C6Cu;
        // 0x197c70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197C74u;
    // 0x197c74: 0x0  nop
    ctx->pc = 0x197c74u;
    // NOP
    // 0x197c78: 0x0  nop
    ctx->pc = 0x197c78u;
    // NOP
    // 0x197c7c: 0x0  nop
    ctx->pc = 0x197c7cu;
    // NOP
    ctx->pc = 0x197c80u;
}
