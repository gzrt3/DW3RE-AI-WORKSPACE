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

// Function: entry_001758ec
// Address: 0x1758ec - 0x175934
void entry_001758ec_0x1758ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001758ec_0x1758ec");
#endif

    switch (ctx->pc) {
        case 0x175908u: goto label_175908;
        default: break;
    }

    ctx->pc = 0x1758ecu;

    // 0x1758ec: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1758ECu;
    {
        const bool branch_taken_0x1758ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1758ec) {
            ctx->pc = 0x175934u;
            return;
        }
    }
    ctx->pc = 0x1758F4u;
    // 0x1758f4: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x1758f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
    // 0x1758f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1758F8u;
    {
        const bool branch_taken_0x1758f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758F8u;
        // 0x1758fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758f8) {
            ctx->pc = 0x175934u;
            return;
        }
    }
    ctx->pc = 0x175900u;
    // 0x175900: 0xc05d68c  jal         func_175A30
    ctx->pc = 0x175900u;
    SET_GPR_U32(ctx, 31, 0x175908u);
    ctx->pc = 0x175904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175900u;
    // 0x175904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A30u, 0x175900u, 0x175908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175908u;
label_175908:
    // 0x175908: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17590c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175910: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175914: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x175918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x175918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17591c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17591cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175920: 0xa0430015  sb          $v1, 0x15($v0)
    ctx->pc = 0x175920u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x175924: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x175924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175928: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x175928u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x17592c: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x17592Cu;
    SET_GPR_U32(ctx, 31, 0x175934u);
    ctx->pc = 0x175930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17592Cu;
    // 0x175930: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x17592Cu, 0x175934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175934u;
}
