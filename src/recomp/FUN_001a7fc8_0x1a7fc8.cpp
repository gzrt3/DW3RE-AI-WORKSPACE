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

// Function: FUN_001a7fc8
// Address: 0x1a7fc8 - 0x1a801c
void FUN_001a7fc8_0x1a7fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a7fc8_0x1a7fc8");
#endif

    switch (ctx->pc) {
        case 0x1a8000u: goto label_1a8000;
        case 0x1a800cu: goto label_1a800c;
        default: break;
    }

    ctx->pc = 0x1a7fc8u;

    // 0x1a7fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7fcc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7fd0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a7fd4: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a7fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a7fd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7fdc: 0x8e025c00  lw          $v0, 0x5C00($s0)
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285C00u));
    // 0x1a7fe0: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A7FE0u;
    {
        const bool branch_taken_0x1a7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FE0u;
        // 0x1a7fe4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fe0) {
            ctx->pc = 0x1A8018u;
            goto label_1a8018;
        }
    }
    ctx->pc = 0x1A7FE8u;
    // 0x1a7fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7fec: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1a7fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1a7ff0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a7ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7ff8: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A7FF8u;
    SET_GPR_U32(ctx, 31, 0x1A8000u);
    ctx->pc = 0x1A7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FF8u;
    // 0x1a7ffc: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A7FF8u, 0x1A8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8000u;
label_1a8000:
    // 0x1a8000: 0xae025c00  sw          $v0, 0x5C00($s0)
    ctx->pc = 0x1a8000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23552), GPR_U32(ctx, 2));
    // 0x1a8004: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A8004u;
    SET_GPR_U32(ctx, 31, 0x1A800Cu);
    ctx->pc = 0x1A8008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8004u;
    // 0x1a8008: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A8004u, 0x1A800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A800Cu;
label_1a800c:
    // 0x1a800c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a800cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1a8010: 0xac625c04  sw          $v0, 0x5C04($v1)
    ctx->pc = 0x1a8010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x285C04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285C04u, _value); } while (0);
    // 0x1a8014: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8018:
    // 0x1a8018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a801cu;
}
