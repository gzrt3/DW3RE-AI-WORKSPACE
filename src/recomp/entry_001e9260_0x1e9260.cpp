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

// Function: entry_001e9260
// Address: 0x1e9260 - 0x1e92bc
void entry_001e9260_0x1e9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9260_0x1e9260");
#endif

    switch (ctx->pc) {
        case 0x1e929cu: goto label_1e929c;
        case 0x1e92b4u: goto label_1e92b4;
        default: break;
    }

    ctx->pc = 0x1e9260u;

    // 0x1e9260: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1e9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1e9264: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e9268: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1E9268u;
    {
        const bool branch_taken_0x1e9268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9268u;
        // 0x1e926c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9268) {
            ctx->pc = 0x1E936Cu;
            return;
        }
    }
    ctx->pc = 0x1E9270u;
    // 0x1e9270: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E9270u;
    {
        const bool branch_taken_0x1e9270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9270) {
            ctx->pc = 0x1E936Cu;
            return;
        }
    }
    ctx->pc = 0x1E9278u;
    // 0x1e9278: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x1e9278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1e927c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1e927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1e9280: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E9280u;
    {
        const bool branch_taken_0x1e9280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E9284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9280u;
        // 0x1e9284: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9280) {
            ctx->pc = 0x1E936Cu;
            return;
        }
    }
    ctx->pc = 0x1E9288u;
    // 0x1e9288: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e928c: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e9290: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x1e9290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e9294: 0xc043274  jal         func_10C9D0
    ctx->pc = 0x1E9294u;
    SET_GPR_U32(ctx, 31, 0x1E929Cu);
    ctx->pc = 0x1E9298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9294u;
    // 0x1e9298: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9D0u, 0x1E9294u, 0x1E929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E929Cu;
label_1e929c:
    // 0x1e929c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E929Cu;
    {
        const bool branch_taken_0x1e929c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E929Cu;
        // 0x1e92a0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e929c) {
            ctx->pc = 0x1E92BCu;
            return;
        }
    }
    ctx->pc = 0x1E92A4u;
    // 0x1e92a4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e92a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e92a8: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1e92a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e92ac: 0xc0435cc  jal         func_10D730
    ctx->pc = 0x1E92ACu;
    SET_GPR_U32(ctx, 31, 0x1E92B4u);
    ctx->pc = 0x1E92B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92ACu;
    // 0x1e92b0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D730u, 0x1E92ACu, 0x1E92B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92B4u;
label_1e92b4:
    // 0x1e92b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E92B4u;
    {
        const bool branch_taken_0x1e92b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e92b4) {
            ctx->pc = 0x1E9308u;
            return;
        }
    }
    ctx->pc = 0x1E92BCu;
}
