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

// Function: FUN_001aebf0
// Address: 0x1aebf0 - 0x1aec54
void FUN_001aebf0_0x1aebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aebf0_0x1aebf0");
#endif

    ctx->pc = 0x1aebf0u;

    // 0x1aebf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aebf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aebf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aebf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aebfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1aec00: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aec00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1aec04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aec08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1aec0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aec0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aec14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aec14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec18: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1aec18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x375ECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375ECCu, _value); } while (0);
    // 0x1aec1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aec20: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aec20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1aec24: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1aec28: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aec28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1aec2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec30: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aec30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x375EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC8u, _value); } while (0);
    // 0x1aec34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aec34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1aec3c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aec3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec40: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aec44: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec48: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aec4c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC54u);
    ctx->pc = 0x1AEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEC4Cu;
    // 0x1aec50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AEC4Cu, 0x1AEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC54u;
}
