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

// Function: entry_001a1cc4
// Address: 0x1a1cc4 - 0x1a1d48
void entry_001a1cc4_0x1a1cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1cc4_0x1a1cc4");
#endif

    switch (ctx->pc) {
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1cfcu: goto label_1a1cfc;
        case 0x1a1d0cu: goto label_1a1d0c;
        case 0x1a1d3cu: goto label_1a1d3c;
        default: break;
    }

    ctx->pc = 0x1a1cc4u;

label_1a1cc4:
    // 0x1a1cc4: 0xc0685e2  jal         func_1A1788
label_1a1cc8:
    if (ctx->pc == 0x1A1CC8u) {
        ctx->pc = 0x1A1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CC4u;
        // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CCCu;
        goto label_1a1ccc;
    }
    ctx->pc = 0x1A1CC4u;
    SET_GPR_U32(ctx, 31, 0x1A1CCCu);
    ctx->pc = 0x1A1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CC4u;
    // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1CC4u, 0x1A1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CCCu;
label_1a1ccc:
    // 0x1a1ccc: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1cd0:
    // 0x1a1cd0: 0x14430055  bne         $v0, $v1, . + 4 + (0x55 << 2)
label_1a1cd4:
    if (ctx->pc == 0x1A1CD4u) {
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CD8u;
        goto label_1a1cd8;
    }
    ctx->pc = 0x1A1CD0u;
    {
        const bool branch_taken_0x1a1cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cd0) {
            ctx->pc = 0x1A1E28u;
            return;
        }
    }
    ctx->pc = 0x1A1CD8u;
label_1a1cd8:
    // 0x1a1cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cdc:
    // 0x1a1cdc: 0xc0687fe  jal         func_1A1FF8
label_1a1ce0:
    if (ctx->pc == 0x1A1CE0u) {
        ctx->pc = 0x1A1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CDCu;
        // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CE4u;
        goto label_1a1ce4;
    }
    ctx->pc = 0x1A1CDCu;
    SET_GPR_U32(ctx, 31, 0x1A1CE4u);
    ctx->pc = 0x1A1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CDCu;
    // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1FF8u, 0x1A1CDCu, 0x1A1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0x10000050  b           . + 4 + (0x50 << 2)
label_1a1ce8:
    if (ctx->pc == 0x1A1CE8u) {
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CECu;
        goto label_1a1cec;
    }
    ctx->pc = 0x1A1CE4u;
    {
        const bool branch_taken_0x1a1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce4) {
            ctx->pc = 0x1A1E28u;
            return;
        }
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x0  nop
    ctx->pc = 0x1a1cecu;
    // NOP
label_1a1cf0:
    // 0x1a1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cf4:
    // 0x1a1cf4: 0xc06864c  jal         func_1A1930
label_1a1cf8:
    if (ctx->pc == 0x1A1CF8u) {
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CFCu;
        goto label_1a1cfc;
    }
    ctx->pc = 0x1A1CF4u;
    SET_GPR_U32(ctx, 31, 0x1A1CFCu);
    ctx->pc = 0x1A1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CF4u;
    // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1CF4u, 0x1A1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1CFCu;
label_1a1cfc:
    // 0x1a1cfc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1d00:
    // 0x1a1d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d04:
    // 0x1a1d04: 0xc06864c  jal         func_1A1930
label_1a1d08:
    if (ctx->pc == 0x1A1D08u) {
        ctx->pc = 0x1A1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D04u;
        // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D0Cu;
        goto label_1a1d0c;
    }
    ctx->pc = 0x1A1D04u;
    SET_GPR_U32(ctx, 31, 0x1A1D0Cu);
    ctx->pc = 0x1A1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D04u;
    // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1D04u, 0x1A1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D0Cu;
label_1a1d0c:
    // 0x1a1d0c: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1d0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1d10:
    // 0x1a1d10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d14:
    // 0x1a1d14: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1d18:
    // 0x1a1d18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1d1c:
    // 0x1a1d1c: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1d20:
    // 0x1a1d20: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x1a1d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1d24:
    // 0x1a1d24: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a1d28:
    // 0x1a1d28: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a1d2c:
    // 0x1a1d2c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1d30:
    // 0x1a1d30: 0xafa8008c  sw          $t0, 0x8C($sp)
    ctx->pc = 0x1a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 8));
label_1a1d34:
    // 0x1a1d34: 0xe0f809  jalr        $a3
label_1a1d38:
    if (ctx->pc == 0x1A1D38u) {
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D3Cu;
        goto label_1a1d3c;
    }
    ctx->pc = 0x1A1D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A1D3Cu);
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D34u, 0x1A1D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D3Cu;
label_1a1d3c:
    // 0x1a1d3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d40:
    // 0x1a1d40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a1d44:
    if (ctx->pc == 0x1A1D44u) {
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D48u;
        goto label_fallthrough_0x1a1d40;
    }
    ctx->pc = 0x1A1D40u;
    {
        const bool branch_taken_0x1a1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d40) {
            ctx->pc = 0x1A1DB0u;
            return;
        }
    }
label_fallthrough_0x1a1d40:
    ctx->pc = 0x1A1D48u;
}
