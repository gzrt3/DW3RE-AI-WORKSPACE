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

// Function: FUN_001ae000
// Address: 0x1ae000 - 0x1ae1dc
void FUN_001ae000_0x1ae000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ae000_0x1ae000");
#endif

    switch (ctx->pc) {
        case 0x1ae05cu: goto label_1ae05c;
        case 0x1ae0b4u: goto label_1ae0b4;
        case 0x1ae0d0u: goto label_1ae0d0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae144u: goto label_1ae144;
        default: break;
    }

    ctx->pc = 0x1ae000u;

    // 0x1ae000: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ae000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ae004: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ae004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ae008: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ae008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ae00c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ae00cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae010: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae014: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ae014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae018: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1ae018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1ae01c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ae01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae020: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1ae020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1ae024: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x1ae024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x1ae028: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1ae028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1ae02c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1ae02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1ae030: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1ae030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1ae034: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ae038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE038u;
    {
        const bool branch_taken_0x1ae038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae038) {
            ctx->pc = 0x1AE064u;
            goto label_1ae064;
        }
    }
    ctx->pc = 0x1AE040u;
    // 0x1ae040: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ae044: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287214u));
    // 0x1ae048: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1AE048u;
    {
        const bool branch_taken_0x1ae048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE048u;
        // 0x1ae04c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae048) {
            ctx->pc = 0x1AE14Cu;
            goto label_1ae14c;
        }
    }
    ctx->pc = 0x1AE050u;
    // 0x1ae050: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ae050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae054: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1AE054u;
    SET_GPR_U32(ctx, 31, 0x1AE05Cu);
    ctx->pc = 0x1AE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE054u;
    // 0x1ae058: 0x2484a890  addiu       $a0, $a0, -0x5770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1AE054u, 0x1AE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE05Cu;
label_1ae05c:
    // 0x1ae05c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1AE05Cu;
    {
        const bool branch_taken_0x1ae05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE05Cu;
        // 0x1ae060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae05c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE064u;
label_1ae064:
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
            goto label_1ae14c;
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
            goto label_1ae1b4;
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
            goto label_1ae154;
        }
    }
    ctx->pc = 0x1AE14Cu;
label_1ae14c:
    // 0x1ae14c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AE14Cu;
    {
        const bool branch_taken_0x1ae14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae14c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE154u;
label_1ae154:
    // 0x1ae154: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ae158: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1ae15c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae160: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ae164: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1ae168: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x1ae16c: 0x27c45cd0  addiu       $a0, $fp, 0x5CD0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
    // 0x1ae170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae174: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1ae178: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ae17c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ae180: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae184: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ae188: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1ae18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ae198: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae19c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1ae1a0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x1ae1a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1ae1ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ae1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae1b4:
    // 0x1ae1b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ae1b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae1bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae1c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae1c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae1c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae1cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae1d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae1d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ae1dcu;
}
