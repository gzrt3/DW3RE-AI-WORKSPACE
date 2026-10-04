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

// Function: FUN_001ae8e8
// Address: 0x1ae8e8 - 0x1ae950
void FUN_001ae8e8_0x1ae8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae8e8_0x1ae8e8");
#endif

    ctx->pc = 0x1ae8e8u;

    // 0x1ae8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ae8ec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ae8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1ae8f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ae8f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ae8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ae8f8: 0x24705ec0  addiu       $s0, $v1, 0x5EC0
    ctx->pc = 0x1ae8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24256));
    // 0x1ae8fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae900: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ae904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae908: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ae908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ae90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ae90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae910: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1ae910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x375ECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375ECCu, _value); } while (0);
    // 0x1ae914: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ae918: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x1ae918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x375ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375ED0u, _value); } while (0);
    // 0x1ae91c: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1ae920: 0xac625ec0  sw          $v0, 0x5EC0($v1)
    ctx->pc = 0x1ae920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1ae924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae928: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1ae928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1ae92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae930: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1ae930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x375EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC8u, _value); } while (0);
    // 0x1ae934: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ae93c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae940: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae940u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae944: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae944u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae948: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AE948u;
    SET_GPR_U32(ctx, 31, 0x1AE950u);
    ctx->pc = 0x1AE94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE948u;
    // 0x1ae94c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AE948u, 0x1AE950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE950u;
}
