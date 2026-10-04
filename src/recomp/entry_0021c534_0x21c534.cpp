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

// Function: entry_0021c534
// Address: 0x21c534 - 0x21c570
void entry_0021c534_0x21c534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c534_0x21c534");
#endif

    switch (ctx->pc) {
        case 0x21c53cu: goto label_21c53c;
        case 0x21c544u: goto label_21c544;
        case 0x21c54cu: goto label_21c54c;
        case 0x21c56cu: goto label_21c56c;
        default: break;
    }

    ctx->pc = 0x21c534u;

    // 0x21c534: 0xc053250  jal         func_14C940
    ctx->pc = 0x21C534u;
    SET_GPR_U32(ctx, 31, 0x21C53Cu);
    ctx->pc = 0x21C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C534u;
    // 0x21c538: 0x8f8480d0  lw          $a0, -0x7F30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C940u, 0x21C534u, 0x21C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C53Cu;
label_21c53c:
    // 0x21c53c: 0xc055478  jal         func_1551E0
    ctx->pc = 0x21C53Cu;
    SET_GPR_U32(ctx, 31, 0x21C544u);
    ctx->pc = 0x1551E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1551E0u, 0x21C53Cu, 0x21C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C544u;
label_21c544:
    // 0x21c544: 0xc064710  jal         func_191C40
    ctx->pc = 0x21C544u;
    SET_GPR_U32(ctx, 31, 0x21C54Cu);
    ctx->pc = 0x191C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C40u, 0x21C544u, 0x21C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C54Cu;
label_21c54c:
    // 0x21c54c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c550: 0x90228ea2  lbu         $v0, -0x715E($at)
    ctx->pc = 0x21c550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c554: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21C554u;
    {
        const bool branch_taken_0x21c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C554u;
        // 0x21c558: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c554) {
            ctx->pc = 0x21C570u;
            return;
        }
    }
    ctx->pc = 0x21C55Cu;
    // 0x21c55c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x21c55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x21c560: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c564: 0xc045460  jal         func_115180
    ctx->pc = 0x21C564u;
    SET_GPR_U32(ctx, 31, 0x21C56Cu);
    ctx->pc = 0x21C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C564u;
    // 0x21c568: 0x24a58d00  addiu       $a1, $a1, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115180u, 0x21C564u, 0x21C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C56Cu;
label_21c56c:
    // 0x21c56c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21c570u;
}
