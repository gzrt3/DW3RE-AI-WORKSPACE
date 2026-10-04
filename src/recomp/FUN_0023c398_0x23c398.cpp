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

// Function: FUN_0023c398
// Address: 0x23c398 - 0x23c3f0
void FUN_0023c398_0x23c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c398_0x23c398");
#endif

    switch (ctx->pc) {
        case 0x23c3c8u: goto label_23c3c8;
        default: break;
    }

    ctx->pc = 0x23c398u;

    // 0x23c398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c39c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x23c3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c3a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c3ac: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23c3acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x23c3b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23c3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c3c0: 0xc06939a  jal         func_1A4E68
    ctx->pc = 0x23C3C0u;
    SET_GPR_U32(ctx, 31, 0x23C3C8u);
    ctx->pc = 0x23C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C3C0u;
    // 0x23c3c4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E68u, 0x23C3C0u, 0x23C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C3C8u;
label_23c3c8:
    // 0x23c3c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c3c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c3cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c3d0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C3D0u;
    {
        const bool branch_taken_0x23c3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x23C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C3D0u;
        // 0x23c3d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c3d0) {
            ctx->pc = 0x23C3E4u;
            goto label_23c3e4;
        }
    }
    ctx->pc = 0x23C3D8u;
    // 0x23c3d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23c3dc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23C3DCu;
    {
        const bool branch_taken_0x23c3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23c3dc) {
            ctx->pc = 0x23C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23C3DCu;
            // 0x23c3e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C3E4u;
            goto label_23c3e4;
        }
    }
    ctx->pc = 0x23C3E4u;
label_23c3e4:
    // 0x23c3e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c3e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c3e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c3ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x23c3f0u;
}
