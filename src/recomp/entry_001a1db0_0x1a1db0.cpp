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

// Function: entry_001a1db0
// Address: 0x1a1db0 - 0x1a1e10
void entry_001a1db0_0x1a1db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1db0_0x1a1db0");
#endif

    switch (ctx->pc) {
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1e0cu: goto label_1a1e0c;
        default: break;
    }

    ctx->pc = 0x1a1db0u;

label_1a1db0:
    // 0x1a1db0: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
label_1a1db4:
    if (ctx->pc == 0x1A1DB4u) {
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB8u;
        goto label_1a1db8;
    }
    ctx->pc = 0x1A1DB0u;
    {
        const bool branch_taken_0x1a1db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db0) {
            ctx->pc = 0x1A1E10u;
            return;
        }
    }
    ctx->pc = 0x1A1DB8u;
label_1a1db8:
    // 0x1a1db8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a1dbc:
    if (ctx->pc == 0x1A1DBCu) {
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DC0u;
        goto label_1a1dc0;
    }
    ctx->pc = 0x1A1DB8u;
    {
        const bool branch_taken_0x1a1db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db8) {
            ctx->pc = 0x1A1E10u;
            return;
        }
    }
    ctx->pc = 0x1A1DC0u;
label_1a1dc0:
    // 0x1a1dc0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a1dc4:
    // 0x1a1dc4: 0xc06864c  jal         func_1A1930
label_1a1dc8:
    if (ctx->pc == 0x1A1DC8u) {
        ctx->pc = 0x1A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC4u;
        // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DCCu;
        goto label_1a1dcc;
    }
    ctx->pc = 0x1A1DC4u;
    SET_GPR_U32(ctx, 31, 0x1A1DCCu);
    ctx->pc = 0x1A1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DC4u;
    // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1DC4u, 0x1A1DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DCCu;
label_1a1dcc:
    // 0x1a1dcc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1dd0:
    // 0x1a1dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dd4:
    // 0x1a1dd4: 0xc06864c  jal         func_1A1930
label_1a1dd8:
    if (ctx->pc == 0x1A1DD8u) {
        ctx->pc = 0x1A1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DD4u;
        // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DDCu;
        goto label_1a1ddc;
    }
    ctx->pc = 0x1A1DD4u;
    SET_GPR_U32(ctx, 31, 0x1A1DDCu);
    ctx->pc = 0x1A1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DD4u;
    // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1930u, 0x1A1DD4u, 0x1A1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DDCu;
label_1a1ddc:
    // 0x1a1ddc: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1de0:
    // 0x1a1de0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de4:
    // 0x1a1de4: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1de8:
    // 0x1a1de8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1dec:
    // 0x1a1dec: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1df0:
    // 0x1a1df0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1df4:
    // 0x1a1df4: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x1a1df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1df8:
    // 0x1a1df8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1a1dfc:
    // 0x1a1dfc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1e00:
    // 0x1a1e00: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1a1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1a1e04:
    // 0x1a1e04: 0x60f809  jalr        $v1
label_1a1e08:
    if (ctx->pc == 0x1A1E08u) {
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E0Cu;
        goto label_1a1e0c;
    }
    ctx->pc = 0x1A1E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E0Cu);
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E04u, 0x1A1E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E0Cu;
label_1a1e0c:
    // 0x1a1e0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1e0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a1e10u;
}
