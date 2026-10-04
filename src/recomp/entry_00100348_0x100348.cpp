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

// Function: entry_00100348
// Address: 0x100348 - 0x1003b8
void entry_00100348_0x100348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100348_0x100348");
#endif

    switch (ctx->pc) {
        case 0x100380u: goto label_100380;
        case 0x1003b0u: goto label_1003b0;
        default: break;
    }

    ctx->pc = 0x100348u;

    // 0x100348: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100348u;
    {
        const bool branch_taken_0x100348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100348) {
            ctx->pc = 0x1003B8u;
            return;
        }
    }
    ctx->pc = 0x100350u;
    // 0x100350: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100354: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100358: 0x24424c80  addiu       $v0, $v0, 0x4C80
    ctx->pc = 0x100358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19584));
    // 0x10035c: 0x24a53640  addiu       $a1, $a1, 0x3640
    ctx->pc = 0x10035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    // 0x100360: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100368: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10036c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10036cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100370: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x100370u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x100374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100378: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100378u;
    SET_GPR_U32(ctx, 31, 0x100380u);
    ctx->pc = 0x10037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100378u;
    // 0x10037c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100378u, 0x100380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100380u;
label_100380:
    // 0x100380: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100384: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100388: 0x24426ea0  addiu       $v0, $v0, 0x6EA0
    ctx->pc = 0x100388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28320));
    // 0x10038c: 0x24a555d0  addiu       $a1, $a1, 0x55D0
    ctx->pc = 0x10038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21968));
    // 0x100390: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100398: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10039c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10039cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1003a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1003a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003a8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1003A8u;
    SET_GPR_U32(ctx, 31, 0x1003B0u);
    ctx->pc = 0x1003ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003A8u;
    // 0x1003ac: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1003A8u, 0x1003B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003B0u;
label_1003b0:
    // 0x1003b0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1003B0u;
    {
        const bool branch_taken_0x1003b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1003b0) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x1003B8u;
}
