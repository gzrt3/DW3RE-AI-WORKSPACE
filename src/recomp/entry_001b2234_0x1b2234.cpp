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

// Function: entry_001b2234
// Address: 0x1b2234 - 0x1b2288
void entry_001b2234_0x1b2234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2234_0x1b2234");
#endif

    switch (ctx->pc) {
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2284u: goto label_1b2284;
        default: break;
    }

    ctx->pc = 0x1b2234u;

    // 0x1b2234: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b2238: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b2238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
    // 0x1b223c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2240: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b2244: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2248: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b224c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2254: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b2254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b2258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b225c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B225Cu;
    SET_GPR_U32(ctx, 31, 0x1B2264u);
    ctx->pc = 0x1B2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B225Cu;
    // 0x1b2260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B225Cu, 0x1B2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2264u;
label_1b2264:
    // 0x1b2264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2268: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2268u;
    {
        const bool branch_taken_0x1b2268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2268) {
            ctx->pc = 0x1B227Cu;
            goto label_1b227c;
        }
    }
    ctx->pc = 0x1B2270u;
    // 0x1b2270: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2284u;
            goto label_1b2284;
        }
    }
    ctx->pc = 0x1B227Cu;
label_1b227c:
    // 0x1b227c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B227Cu;
    SET_GPR_U32(ctx, 31, 0x1B2284u);
    ctx->pc = 0x1B2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B227Cu;
    // 0x1b2280: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B227Cu, 0x1B2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2284u;
label_1b2284:
    // 0x1b2284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2288u;
}
