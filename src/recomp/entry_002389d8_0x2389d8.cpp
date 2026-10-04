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

// Function: entry_002389d8
// Address: 0x2389d8 - 0x238a30
void entry_002389d8_0x2389d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002389d8_0x2389d8");
#endif

    ctx->pc = 0x2389d8u;

    // 0x2389d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2389d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2389dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2389dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2389e0: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2389e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2389e4: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x2389e8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2389ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2389ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2389f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2389f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2389f4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2389f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2389f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2389fc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x238a00: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x238a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x238a04: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x238a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x238a08: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x238a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x238a0c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x238a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x238a10: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x238a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x238a14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x238a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238a20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238a20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238a28: 0x3e00008  jr          $ra
    ctx->pc = 0x238A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238A30u;
}
