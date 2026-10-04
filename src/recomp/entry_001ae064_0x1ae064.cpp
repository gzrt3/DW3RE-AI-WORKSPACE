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

// Function: entry_001ae064
// Address: 0x1ae064 - 0x1ae14c
void entry_001ae064_0x1ae064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae064_0x1ae064");
#endif

    switch (ctx->pc) {
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae144u: goto label_1ae144;
        default: break;
    }

    ctx->pc = 0x1ae064u;

    // 0x1ae064: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1ae068: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ae06c: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1ae06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae070: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1ae070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae074: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1ae074u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x1ae078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae07c: 0x27c25cd0  addiu       $v0, $fp, 0x5CD0
    ctx->pc = 0x1ae07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
    // 0x1ae080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae088: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ae08c: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1AE08Cu;
    {
        const bool branch_taken_0x1ae08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE08Cu;
        // 0x1ae090: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae08c) {
            ctx->pc = 0x1AE0BCu;
            goto label_1ae0bc;
        }
    }
    ctx->pc = 0x1AE094u;
    // 0x1ae094: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ae098: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287214u));
    // 0x1ae09c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1AE09Cu;
    {
        const bool branch_taken_0x1ae09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE09Cu;
        // 0x1ae0a0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae09c) {
            ctx->pc = 0x1AE14Cu;
            return;
        }
    }
    ctx->pc = 0x1AE0A4u;
    // 0x1ae0a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ae0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0a8: 0x2484a8c0  addiu       $a0, $a0, -0x5740
    ctx->pc = 0x1ae0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944960));
    // 0x1ae0ac: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1AE0ACu;
    SET_GPR_U32(ctx, 31, 0x1AE0B4u);
    ctx->pc = 0x1AE0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ACu;
    // 0x1ae0b0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1AE0ACu, 0x1AE0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE0B4u;
label_1ae0b4:
    // 0x1ae0b4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AE0B4u;
    {
        const bool branch_taken_0x1ae0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0B4u;
        // 0x1ae0b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0b4) {
            ctx->pc = 0x1AE1B4u;
            return;
        }
    }
    ctx->pc = 0x1AE0BCu;
label_1ae0bc:
    // 0x1ae0bc: 0x3c170037  lui         $s7, 0x37
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
    // 0x1ae0c0: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1ae0c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae0c4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1ae0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae0c8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae0cc: 0x0  nop
    ctx->pc = 0x1ae0ccu;
    // NOP
label_1ae0d0:
    // 0x1ae0d0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1ae0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1ae0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae0d8: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x1ae0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x1ae0dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ae0e0: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x1ae0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ae0e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ae0e8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1ae0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae0ec: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1AE0ECu;
    SET_GPR_U32(ctx, 31, 0x1AE0F4u);
    ctx->pc = 0x1AE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ECu;
    // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1AE0ECu, 0x1AE0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE0F4u;
label_1ae0f4:
    // 0x1ae0f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1ae0f8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1AE0F8u;
    {
        const bool branch_taken_0x1ae0f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0f8) {
            ctx->pc = 0x1AE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE100u;
    // 0x1ae100: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae104: 0x26f05ec0  addiu       $s0, $s7, 0x5EC0
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24256));
    // 0x1ae108: 0xaef15ec0  sw          $s1, 0x5EC0($s7)
    ctx->pc = 0x1ae108u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24256), GPR_U32(ctx, 17));
    // 0x1ae10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ae110: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1ae110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1ae114: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1ae118: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1ae11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae120: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1ae120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1ae124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae12c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ae130: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae138: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ae13c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AE13Cu;
    SET_GPR_U32(ctx, 31, 0x1AE144u);
    ctx->pc = 0x1AE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE13Cu;
    // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AE13Cu, 0x1AE144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE144u;
label_1ae144:
    // 0x1ae144: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE144u;
    {
        const bool branch_taken_0x1ae144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae144) {
            ctx->pc = 0x1AE154u;
            return;
        }
    }
    ctx->pc = 0x1AE14Cu;
}
