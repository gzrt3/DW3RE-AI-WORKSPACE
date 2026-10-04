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

// Function: entry_001b18dc
// Address: 0x1b18dc - 0x1b1930
void entry_001b18dc_0x1b18dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b18dc_0x1b18dc");
#endif

    switch (ctx->pc) {
        case 0x1b18e4u: goto label_1b18e4;
        case 0x1b190cu: goto label_1b190c;
        case 0x1b192cu: goto label_1b192c;
        default: break;
    }

    ctx->pc = 0x1b18dcu;

    // 0x1b18dc: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B18DCu;
    SET_GPR_U32(ctx, 31, 0x1B18E4u);
    ctx->pc = 0x1B18E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18DCu;
    // 0x1b18e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B18DCu, 0x1B18E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18E4u;
label_1b18e4:
    // 0x1b18e4: 0x260977c0  addiu       $t1, $s0, 0x77C0
    ctx->pc = 0x1b18e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 30656));
    // 0x1b18e8: 0x26846200  addiu       $a0, $s4, 0x6200
    ctx->pc = 0x1b18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25088));
    // 0x1b18ec: 0x26676280  addiu       $a3, $s3, 0x6280
    ctx->pc = 0x1b18ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b18f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b18f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b18f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b18f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18fc: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b18fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1900: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1904: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1904u;
    SET_GPR_U32(ctx, 31, 0x1B190Cu);
    ctx->pc = 0x1B1908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1904u;
    // 0x1b1908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1904u, 0x1B190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B190Cu;
label_1b190c:
    // 0x1b190c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1910: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1910u;
    {
        const bool branch_taken_0x1b1910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1910u;
        // 0x1b1914: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1910) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B1918u;
    // 0x1b1918: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b1918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b191c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B192Cu;
            goto label_1b192c;
        }
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1924u;
    SET_GPR_U32(ctx, 31, 0x1B192Cu);
    ctx->pc = 0x1B1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1924u;
    // 0x1b1928: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1924u, 0x1B192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B192Cu;
label_1b192c:
    // 0x1b192c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1930u;
}
