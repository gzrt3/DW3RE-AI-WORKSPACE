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

// Function: entry_001b04e4
// Address: 0x1b04e4 - 0x1b0544
void entry_001b04e4_0x1b04e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b04e4_0x1b04e4");
#endif

    switch (ctx->pc) {
        case 0x1b0528u: goto label_1b0528;
        default: break;
    }

    ctx->pc = 0x1b04e4u;

    // 0x1b04e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b04e8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1b04e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1b04ec: 0xae0272d4  sw          $v0, 0x72D4($s0)
    ctx->pc = 0x1b04ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D4u, _value); } while (0);
    // 0x1b04f0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1b04f4: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b04f8: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b04f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b04fc: 0xae2272b0  sw          $v0, 0x72B0($s1)
    ctx->pc = 0x1b04fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
    // 0x1b0500: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1b0504: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1b0504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1b0508: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b050c: 0x256bf348  addiu       $t3, $t3, -0xCB8
    ctx->pc = 0x1b050cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294964040));
    // 0x1b0510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b0514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0518: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1b0518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b051c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b051cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0520: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B0520u;
    SET_GPR_U32(ctx, 31, 0x1B0528u);
    ctx->pc = 0x1B0524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0520u;
    // 0x1b0524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B0520u, 0x1B0528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0528u;
label_1b0528:
    // 0x1b0528: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0528u;
    {
        const bool branch_taken_0x1b0528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0528) {
            ctx->pc = 0x1B052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0528u;
            // 0x1b052c: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B054Cu;
            return;
        }
    }
    ctx->pc = 0x1B0530u;
    // 0x1b0530: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1b0534: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0538: 0xae2072b0  sw          $zero, 0x72B0($s1)
    ctx->pc = 0x1b0538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 0));
    // 0x1b053c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B053Cu;
    SET_GPR_U32(ctx, 31, 0x1B0544u);
    ctx->pc = 0x1B0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B053Cu;
    // 0x1b0540: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B053Cu, 0x1B0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0544u;
}
