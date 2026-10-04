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

// Function: entry_001b7fd4
// Address: 0x1b7fd4 - 0x1b8050
void entry_001b7fd4_0x1b7fd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7fd4_0x1b7fd4");
#endif

    ctx->pc = 0x1b7fd4u;

    // 0x1b7fd4: 0x30880fff  andi        $t0, $a0, 0xFFF
    ctx->pc = 0x1b7fd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1b7fd8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1b7fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b7fdc: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1b7fe0: 0x24a30032  addiu       $v1, $a1, 0x32
    ctx->pc = 0x1b7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
    // 0x1b7fe4: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1b7fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1b7fe8: 0x2407f000  addiu       $a3, $zero, -0x1000
    ctx->pc = 0x1b7fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1b7fec: 0x33300  sll         $a2, $v1, 12
    ctx->pc = 0x1b7fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x1b7ff0: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1b7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1b7ff4: 0x34650fff  ori         $a1, $v1, 0xFFF
    ctx->pc = 0x1b7ff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x1b7ff8: 0x94830018  lhu         $v1, 0x18($a0)
    ctx->pc = 0x1b7ff8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b7ffc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1b7ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1b8000: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1b8000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1b8004: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x1b8004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b8008: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b8008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1b800c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1b800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b8010: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b8010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b8014: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b8014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b8018: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1b8018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1b801c: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b801cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1b8020: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x1b8020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1b8024: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1b8024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1b8028: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1b8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1b802c: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x1b802cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b8030: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1b8030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1b8034: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1b8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1b8038: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1b8038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1b803c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1b803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1b8040: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8040u;
        // 0x1b8044: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8048u;
    // 0x1b8048: 0x0  nop
    ctx->pc = 0x1b8048u;
    // NOP
    // 0x1b804c: 0x0  nop
    ctx->pc = 0x1b804cu;
    // NOP
    ctx->pc = 0x1b8050u;
}
