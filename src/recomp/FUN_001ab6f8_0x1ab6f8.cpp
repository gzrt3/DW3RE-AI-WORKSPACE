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

// Function: FUN_001ab6f8
// Address: 0x1ab6f8 - 0x1ab760
void FUN_001ab6f8_0x1ab6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab6f8_0x1ab6f8");
#endif

    switch (ctx->pc) {
        case 0x1ab74cu: goto label_1ab74c;
        default: break;
    }

    ctx->pc = 0x1ab6f8u;

    // 0x1ab6f8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1ab6fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab700: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1ab700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285C10u));
    // 0x1ab704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ab704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab70c: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB70Cu;
    {
        const bool branch_taken_0x1ab70c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB70Cu;
        // 0x1ab710: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab70c) {
            ctx->pc = 0x1AB754u;
            goto label_1ab754;
        }
    }
    ctx->pc = 0x1AB714u;
    // 0x1ab714: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab714u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1ab718: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab71c: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1ab71cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x374640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374640u, _value); } while (0);
    // 0x1ab720: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab720u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab724: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1ab728: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
    // 0x1ab72c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab738: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1ab738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab73c: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab744: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB744u;
    SET_GPR_U32(ctx, 31, 0x1AB74Cu);
    ctx->pc = 0x1AB748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB744u;
    // 0x1ab748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB744u, 0x1AB74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB74Cu;
label_1ab74c:
    // 0x1ab74c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB74Cu;
    {
        const bool branch_taken_0x1ab74c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB74Cu;
        // 0x1ab750: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab74c) {
            ctx->pc = 0x1AB758u;
            goto label_1ab758;
        }
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab758:
    // 0x1ab758: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab75c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ab760u;
}
