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

// Function: FUN_0019ffd0
// Address: 0x19ffd0 - 0x1a008c
void FUN_0019ffd0_0x19ffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ffd0_0x19ffd0");
#endif

    switch (ctx->pc) {
        case 0x19ffe8u: goto label_19ffe8;
        case 0x19fff8u: goto label_19fff8;
        case 0x1a0004u: goto label_1a0004;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0018u: goto label_1a0018;
        case 0x1a0028u: goto label_1a0028;
        case 0x1a0034u: goto label_1a0034;
        case 0x1a003cu: goto label_1a003c;
        case 0x1a0048u: goto label_1a0048;
        case 0x1a005cu: goto label_1a005c;
        case 0x1a0068u: goto label_1a0068;
        default: break;
    }

    ctx->pc = 0x19ffd0u;

    // 0x19ffd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ffd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ffd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ffd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ffdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ffe0: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19FFE0u;
    SET_GPR_U32(ctx, 31, 0x19FFE8u);
    ctx->pc = 0x19FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFE0u;
    // 0x19ffe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FFE0u, 0x19FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFE8u;
label_19ffe8:
    // 0x19ffe8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FFE8u;
    {
        const bool branch_taken_0x19ffe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FFE8u;
        // 0x19ffec: 0xae020840  sw          $v0, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ffe8) {
            ctx->pc = 0x1A000Cu;
            goto label_1a000c;
        }
    }
    ctx->pc = 0x19FFF0u;
    // 0x19fff0: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x19FFF0u;
    SET_GPR_U32(ctx, 31, 0x19FFF8u);
    ctx->pc = 0x19FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFF0u;
    // 0x19fff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x19FFF0u, 0x19FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFF8u;
label_19fff8:
    // 0x19fff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fffc: 0xc067c94  jal         func_19F250
    ctx->pc = 0x19FFFCu;
    SET_GPR_U32(ctx, 31, 0x1A0004u);
    ctx->pc = 0x1A0000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFFCu;
    // 0x1a0000: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x19FFFCu, 0x1A0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0004u;
label_1a0004:
    // 0x1a0004: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A0004u;
    SET_GPR_U32(ctx, 31, 0x1A000Cu);
    ctx->pc = 0x1A0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0004u;
    // 0x1a0008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A0004u, 0x1A000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0010: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0010u;
    SET_GPR_U32(ctx, 31, 0x1A0018u);
    ctx->pc = 0x1A0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0010u;
    // 0x1a0014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0010u, 0x1A0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0018u;
label_1a0018:
    // 0x1a0018: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0018u;
    {
        const bool branch_taken_0x1a0018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0018u;
        // 0x1a001c: 0xae020844  sw          $v0, 0x844($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0018) {
            ctx->pc = 0x1A003Cu;
            goto label_1a003c;
        }
    }
    ctx->pc = 0x1A0020u;
    // 0x1a0020: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A0020u;
    SET_GPR_U32(ctx, 31, 0x1A0028u);
    ctx->pc = 0x1A0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0020u;
    // 0x1a0024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A0020u, 0x1A0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0028u;
label_1a0028:
    // 0x1a0028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a002c: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1A002Cu;
    SET_GPR_U32(ctx, 31, 0x1A0034u);
    ctx->pc = 0x1A0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A002Cu;
    // 0x1a0030: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F250u, 0x1A002Cu, 0x1A0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0034u;
label_1a0034:
    // 0x1a0034: 0xc067ca0  jal         func_19F280
    ctx->pc = 0x1A0034u;
    SET_GPR_U32(ctx, 31, 0x1A003Cu);
    ctx->pc = 0x1A0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0034u;
    // 0x1a0038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F280u, 0x1A0034u, 0x1A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A003Cu;
label_1a003c:
    // 0x1a003c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a003cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0040: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0040u;
    SET_GPR_U32(ctx, 31, 0x1A0048u);
    ctx->pc = 0x1A0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0040u;
    // 0x1a0044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0040u, 0x1A0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0048u;
label_1a0048:
    // 0x1a0048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0048u;
    {
        const bool branch_taken_0x1a0048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0048u;
        // 0x1a004c: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0048) {
            ctx->pc = 0x1A005Cu;
            goto label_1a005c;
        }
    }
    ctx->pc = 0x1A0050u;
    // 0x1a0050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0054: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A0054u;
    SET_GPR_U32(ctx, 31, 0x1A005Cu);
    ctx->pc = 0x1A0058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0054u;
    // 0x1a0058: 0x24a5a1a8  addiu       $a1, $a1, -0x5E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A0054u, 0x1A005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A005Cu;
label_1a005c:
    // 0x1a005c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0060: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x1A0060u;
    SET_GPR_U32(ctx, 31, 0x1A0068u);
    ctx->pc = 0x1A0064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0060u;
    // 0x1a0064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x1A0060u, 0x1A0068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0068u;
label_1a0068:
    // 0x1a0068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0068u;
    {
        const bool branch_taken_0x1a0068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0068u;
        // 0x1a006c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0068) {
            ctx->pc = 0x1A0088u;
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A0070u;
    // 0x1a0070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0074: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1a0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1a0078: 0x24a5a1d0  addiu       $a1, $a1, -0x5E30
    ctx->pc = 0x1a0078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943184));
    // 0x1a007c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a007cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0080: 0x8068d2c  j           func_1A34B0
    ctx->pc = 0x1A0080u;
    ctx->pc = 0x1A0084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0080u;
    // 0x1a0084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    FUN_001a34b0_0x1a34b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0088u;
label_1a0088:
    // 0x1a0088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a008cu;
}
