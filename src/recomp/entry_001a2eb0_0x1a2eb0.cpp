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

// Function: entry_001a2eb0
// Address: 0x1a2eb0 - 0x1a2f58
void entry_001a2eb0_0x1a2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2eb0_0x1a2eb0");
#endif

    switch (ctx->pc) {
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f48u: goto label_1a2f48;
        default: break;
    }

    ctx->pc = 0x1a2eb0u;

label_1a2eb0:
    // 0x1a2eb0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1a2eb4:
    if (ctx->pc == 0x1A2EB4u) {
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB8u;
        goto label_1a2eb8;
    }
    ctx->pc = 0x1A2EB0u;
    {
        const bool branch_taken_0x1a2eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EB0u;
        // 0x1a2eb4: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2eb0) {
            ctx->pc = 0x1A2F58u;
            return;
        }
    }
    ctx->pc = 0x1A2EB8u;
label_1a2eb8:
    // 0x1a2eb8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1a2ebc:
    // 0x1a2ebc: 0x2442a360  addiu       $v0, $v0, -0x5CA0
    ctx->pc = 0x1a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943584));
label_1a2ec0:
    // 0x1a2ec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a2ec4:
    // 0x1a2ec4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2ec8:
    // 0x1a2ec8: 0x800008  jr          $a0
label_1a2ecc:
    if (ctx->pc == 0x1A2ECCu) {
        ctx->pc = 0x1A2ED0u;
        goto label_1a2ed0;
    }
    ctx->pc = 0x1A2EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A2ED0u;
label_1a2ed0:
    // 0x1a2ed0: 0xc068c94  jal         func_1A3250
label_1a2ed4:
    if (ctx->pc == 0x1A2ED4u) {
        ctx->pc = 0x1A2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2ED0u;
        // 0x1a2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2ED8u;
        goto label_1a2ed8;
    }
    ctx->pc = 0x1A2ED0u;
    SET_GPR_U32(ctx, 31, 0x1A2ED8u);
    ctx->pc = 0x1A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2ED0u;
    // 0x1a2ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x1A2ED0u, 0x1A2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2ED8u;
label_1a2ed8:
    // 0x1a2ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2edc:
    // 0x1a2edc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a2ee0:
    if (ctx->pc == 0x1A2EE0u) {
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EE4u;
        goto label_1a2ee4;
    }
    ctx->pc = 0x1A2EDCu;
    {
        const bool branch_taken_0x1a2edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EDCu;
        // 0x1a2ee0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2edc) {
            ctx->pc = 0x1A2F58u;
            return;
        }
    }
    ctx->pc = 0x1A2EE4u;
label_1a2ee4:
    // 0x1a2ee4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1a2ee8:
    // 0x1a2ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2eec:
    // 0x1a2eec: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1a2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1a2ef0:
    // 0x1a2ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ef4:
    // 0x1a2ef4: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1a2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_1a2ef8:
    // 0x1a2ef8: 0xc068c2a  jal         func_1A30A8
label_1a2efc:
    if (ctx->pc == 0x1A2EFCu) {
        ctx->pc = 0x1A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EF8u;
        // 0x1a2efc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F00u;
        goto label_1a2f00;
    }
    ctx->pc = 0x1A2EF8u;
    SET_GPR_U32(ctx, 31, 0x1A2F00u);
    ctx->pc = 0x1A2EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EF8u;
    // 0x1a2efc: 0x8e060094  lw          $a2, 0x94($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2EF8u, 0x1A2F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F00u;
label_1a2f00:
    // 0x1a2f00: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1a2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1a2f04:
    // 0x1a2f04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f08:
    // 0x1a2f08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f0c:
    // 0x1a2f0c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a2f10:
    if (ctx->pc == 0x1A2F10u) {
        ctx->pc = 0x1A2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F0Cu;
        // 0x1a2f10: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F14u;
        goto label_1a2f14;
    }
    ctx->pc = 0x1A2F0Cu;
    {
        const bool branch_taken_0x1a2f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F0Cu;
        // 0x1a2f10: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f0c) {
            ctx->pc = 0x1A2F58u;
            return;
        }
    }
    ctx->pc = 0x1A2F14u;
label_1a2f14:
    // 0x1a2f14: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x1a2f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1a2f18:
    // 0x1a2f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f1c:
    // 0x1a2f1c: 0xc068c2a  jal         func_1A30A8
label_1a2f20:
    if (ctx->pc == 0x1A2F20u) {
        ctx->pc = 0x1A2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F1Cu;
        // 0x1a2f20: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F24u;
        goto label_1a2f24;
    }
    ctx->pc = 0x1A2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F24u);
    ctx->pc = 0x1A2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F1Cu;
    // 0x1a2f20: 0x8e060098  lw          $a2, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2F1Cu, 0x1A2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F24u;
label_1a2f24:
    // 0x1a2f24: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1a2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1a2f28:
    // 0x1a2f28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f2c:
    // 0x1a2f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f30:
    // 0x1a2f30: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a2f34:
    if (ctx->pc == 0x1A2F34u) {
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F38u;
        goto label_1a2f38;
    }
    ctx->pc = 0x1A2F30u;
    {
        const bool branch_taken_0x1a2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F30u;
        // 0x1a2f34: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f30) {
            ctx->pc = 0x1A2F58u;
            return;
        }
    }
    ctx->pc = 0x1A2F38u;
label_1a2f38:
    // 0x1a2f38: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1a2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1a2f3c:
    // 0x1a2f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f40:
    // 0x1a2f40: 0xc068c2a  jal         func_1A30A8
label_1a2f44:
    if (ctx->pc == 0x1A2F44u) {
        ctx->pc = 0x1A2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F40u;
        // 0x1a2f44: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F48u;
        goto label_1a2f48;
    }
    ctx->pc = 0x1A2F40u;
    SET_GPR_U32(ctx, 31, 0x1A2F48u);
    ctx->pc = 0x1A2F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F40u;
    // 0x1a2f44: 0x8e06009c  lw          $a2, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A30A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A30A8u, 0x1A2F40u, 0x1A2F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1a2f4c:
    // 0x1a2f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f50:
    // 0x1a2f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2f54:
    // 0x1a2f54: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x1a2f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    ctx->pc = 0x1a2f58u;
}
