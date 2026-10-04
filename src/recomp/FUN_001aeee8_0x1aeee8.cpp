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

// Function: FUN_001aeee8
// Address: 0x1aeee8 - 0x1aef34
void FUN_001aeee8_0x1aeee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aeee8_0x1aeee8");
#endif

    ctx->pc = 0x1aeee8u;

    // 0x1aeee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aeee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aeeec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aeeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aeef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aeef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aeef4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1aeef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aeef8: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aeef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1aeefc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aeefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aef00: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1aef00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1aef04: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1aef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1aef08: 0xac465ec0  sw          $a2, 0x5EC0($v0)
    ctx->pc = 0x1aef08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1aef0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aef10: 0x24645c80  addiu       $a0, $v1, 0x5C80
    ctx->pc = 0x1aef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x1aef14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aef18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aef18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aef1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef20: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aef20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aef24: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef28: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aef2c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AEF2Cu;
    SET_GPR_U32(ctx, 31, 0x1AEF34u);
    ctx->pc = 0x1AEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF2Cu;
    // 0x1aef30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AEF2Cu, 0x1AEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF34u;
}
