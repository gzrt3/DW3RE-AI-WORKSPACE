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

// Function: entry_001b01a4
// Address: 0x1b01a4 - 0x1b021c
void entry_001b01a4_0x1b01a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b01a4_0x1b01a4");
#endif

    switch (ctx->pc) {
        case 0x1b01a8u: goto label_1b01a8;
        case 0x1b01bcu: goto label_1b01bc;
        case 0x1b01dcu: goto label_1b01dc;
        case 0x1b01e8u: goto label_1b01e8;
        default: break;
    }

    ctx->pc = 0x1b01a4u;

    // 0x1b01a4: 0x26b06190  addiu       $s0, $s5, 0x6190
    ctx->pc = 0x1b01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
label_1b01a8:
    // 0x1b01a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b01ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b01b0: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x1b01b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x1b01b4: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1B01B4u;
    SET_GPR_U32(ctx, 31, 0x1B01BCu);
    ctx->pc = 0x1B01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01B4u;
    // 0x1b01b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1B01B4u, 0x1B01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01BCu;
label_1b01bc:
    // 0x1b01bc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B01BCu;
    {
        const bool branch_taken_0x1b01bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b01bc) {
            ctx->pc = 0x1B01C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B01BCu;
            // 0x1b01c0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B020Cu;
            goto label_1b020c;
        }
    }
    ctx->pc = 0x1B01C4u;
    // 0x1b01c4: 0x8ec27290  lw          $v0, 0x7290($s6)
    ctx->pc = 0x1b01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b01c8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B01C8u;
    {
        const bool branch_taken_0x1b01c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B01C8u;
        // 0x1b01cc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b01c8) {
            ctx->pc = 0x1B01E0u;
            goto label_1b01e0;
        }
    }
    ctx->pc = 0x1B01D0u;
    // 0x1b01d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b01d4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B01D4u;
    SET_GPR_U32(ctx, 31, 0x1B01DCu);
    ctx->pc = 0x1B01D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B01D4u;
    // 0x1b01d8: 0x2484aac8  addiu       $a0, $a0, -0x5538 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B01D4u, 0x1B01DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B01DCu;
label_1b01dc:
    // 0x1b01dc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1b01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1b01e0:
    // 0x1b01e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b01e4: 0x0  nop
    ctx->pc = 0x1b01e4u;
    // NOP
label_1b01e8:
    // 0x1b01e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b01ec: 0x0  nop
    ctx->pc = 0x1b01ecu;
    // NOP
    // 0x1b01f0: 0x0  nop
    ctx->pc = 0x1b01f0u;
    // NOP
    // 0x1b01f4: 0x0  nop
    ctx->pc = 0x1b01f4u;
    // NOP
    // 0x1b01f8: 0x0  nop
    ctx->pc = 0x1b01f8u;
    // NOP
    // 0x1b01fc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B01FCu;
    {
        const bool branch_taken_0x1b01fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b01fc) {
            ctx->pc = 0x1B01E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01e8;
        }
    }
    ctx->pc = 0x1B0204u;
    // 0x1b0204: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B0204u;
    {
        const bool branch_taken_0x1b0204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0204u;
        // 0x1b0208: 0x26b06190  addiu       $s0, $s5, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0204) {
            ctx->pc = 0x1B01A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b01a8;
        }
    }
    ctx->pc = 0x1B020Cu;
label_1b020c:
    // 0x1b020c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1B020Cu;
    {
        const bool branch_taken_0x1b020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B020Cu;
        // 0x1b0210: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b020c) {
            ctx->pc = 0x1B0180u;
            return;
        }
    }
    ctx->pc = 0x1B0214u;
    // 0x1b0214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0214u;
    {
        const bool branch_taken_0x1b0214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0214u;
        // 0x1b0218: 0xae2072c4  sw          $zero, 0x72C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0214) {
            ctx->pc = 0x1B0224u;
            return;
        }
    }
    ctx->pc = 0x1B021Cu;
}
