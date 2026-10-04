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

// Function: FUN_001b1980
// Address: 0x1b1980 - 0x1b19c4
void FUN_001b1980_0x1b1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1980_0x1b1980");
#endif

    switch (ctx->pc) {
        case 0x1b19a0u: goto label_1b19a0;
        case 0x1b19b0u: goto label_1b19b0;
        default: break;
    }

    ctx->pc = 0x1b1980u;

    // 0x1b1980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b1984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1988: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b1988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b198c: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1b198cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
    // 0x1b1990: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x1b1990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1b1994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b1994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b1998: 0xc0691c4  jal         func_1A4710
    ctx->pc = 0x1B1998u;
    SET_GPR_U32(ctx, 31, 0x1B19A0u);
    ctx->pc = 0x1B199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1998u;
    // 0x1b199c: 0x26101958  addiu       $s0, $s0, 0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4710u, 0x1B1998u, 0x1B19A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19A0u;
label_1b19a0:
    // 0x1b19a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b19a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b19a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b19a8: 0xc069168  jal         func_1A45A0
    ctx->pc = 0x1B19A8u;
    SET_GPR_U32(ctx, 31, 0x1B19B0u);
    ctx->pc = 0x1B19ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19A8u;
    // 0x1b19ac: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A0u, 0x1B19A8u, 0x1B19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B19B0u;
label_1b19b0:
    // 0x1b19b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b19b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b19b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b19bc: 0x80691d0  j           func_1A4740
    ctx->pc = 0x1B19BCu;
    ctx->pc = 0x1B19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B19BCu;
    // 0x1b19c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    FUN_001a4740_0x1a4740(rdram, ctx, runtime); return;
    ctx->pc = 0x1B19C4u;
}
