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

// Function: entry_002356a8
// Address: 0x2356a8 - 0x2356fc
void entry_002356a8_0x2356a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002356a8_0x2356a8");
#endif

    switch (ctx->pc) {
        case 0x2356d0u: goto label_2356d0;
        case 0x2356f8u: goto label_2356f8;
        default: break;
    }

    ctx->pc = 0x2356a8u;

    // 0x2356a8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2356A8u;
    {
        const bool branch_taken_0x2356a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356A8u;
        // 0x2356ac: 0x1288c0  sll         $s1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a8) {
            ctx->pc = 0x2356FCu;
            return;
        }
    }
    ctx->pc = 0x2356B0u;
    // 0x2356b0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2356b4: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
    // 0x2356b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2356b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356bc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2356bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x58AD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58AD00u, _value); } while (0);
    // 0x2356c0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2356c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2356c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356c8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2356C8u;
    SET_GPR_U32(ctx, 31, 0x2356D0u);
    ctx->pc = 0x2356CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356C8u;
    // 0x2356cc: 0x26100204  addiu       $s0, $s0, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2356C8u, 0x2356D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356D0u;
label_2356d0:
    // 0x2356d0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2356d4: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
    // 0x2356d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2356dc: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x2356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x2356e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2356e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2356e4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2356e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2356e8: 0x26260004  addiu       $a2, $s1, 0x4
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2356ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2356ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2356f0: 0xc08d192  jal         func_234648
    ctx->pc = 0x2356F0u;
    SET_GPR_U32(ctx, 31, 0x2356F8u);
    ctx->pc = 0x2356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356F0u;
    // 0x2356f4: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x2356F0u, 0x2356F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2356f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2356fcu;
}
