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

// Function: entry_001b021c
// Address: 0x1b021c - 0x1b026c
void entry_001b021c_0x1b021c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b021c_0x1b021c");
#endif

    switch (ctx->pc) {
        case 0x1b0238u: goto label_1b0238;
        case 0x1b0264u: goto label_1b0264;
        default: break;
    }

    ctx->pc = 0x1b021cu;

    // 0x1b021c: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1b021cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
    // 0x1b0220: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b0220u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
    // 0x1b0224: 0x269061d0  addiu       $s0, $s4, 0x61D0
    ctx->pc = 0x1b0224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 25040));
    // 0x1b0228: 0xae9261d0  sw          $s2, 0x61D0($s4)
    ctx->pc = 0x1b0228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3761D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3761D0u, _value); } while (0);
    // 0x1b022c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0230: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0230u;
    SET_GPR_U32(ctx, 31, 0x1B0238u);
    ctx->pc = 0x1B0234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0230u;
    // 0x1b0234: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0230u, 0x1B0238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0238u;
label_1b0238:
    // 0x1b0238: 0x26f18480  addiu       $s1, $s7, -0x7B80
    ctx->pc = 0x1b0238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935680));
    // 0x1b023c: 0x26a46190  addiu       $a0, $s5, 0x6190
    ctx->pc = 0x1b023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
    // 0x1b0240: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b0240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0244: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b024c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b024cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0250: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0254: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b0254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b025c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B025Cu;
    SET_GPR_U32(ctx, 31, 0x1B0264u);
    ctx->pc = 0x1B0260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B025Cu;
    // 0x1b0260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B025Cu, 0x1B0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0264u;
label_1b0264:
    // 0x1b0264: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0264u;
            // 0x1b0268: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B028Cu;
            return;
        }
    }
    ctx->pc = 0x1B026Cu;
}
