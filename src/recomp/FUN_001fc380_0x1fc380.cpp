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

// Function: FUN_001fc380
// Address: 0x1fc380 - 0x1fc41c
void FUN_001fc380_0x1fc380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fc380_0x1fc380");
#endif

    switch (ctx->pc) {
        case 0x1fc3c4u: goto label_1fc3c4;
        case 0x1fc3e4u: goto label_1fc3e4;
        case 0x1fc3f0u: goto label_1fc3f0;
        case 0x1fc400u: goto label_1fc400;
        case 0x1fc414u: goto label_1fc414;
        default: break;
    }

    ctx->pc = 0x1fc380u;

    // 0x1fc380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc384: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fc388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fc38c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1fc390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fc394: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1fc394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1fc398: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1fc398u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1fc39c: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1fc3a0: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x1fc3a4: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1fc3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x1fc3a8: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1fc3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x1fc3ac: 0x2484a6c0  addiu       $a0, $a0, -0x5940
    ctx->pc = 0x1fc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944448));
    // 0x1fc3b0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1fc3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1fc3b4: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1fc3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fc3b8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fc3bc: 0xc066e2a  jal         func_19B8A8
    ctx->pc = 0x1FC3BCu;
    SET_GPR_U32(ctx, 31, 0x1FC3C4u);
    ctx->pc = 0x1FC3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3BCu;
    // 0x1fc3c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8A8u, 0x1FC3BCu, 0x1FC3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3C4u;
label_1fc3c4:
    // 0x1fc3c4: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1fc3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    // 0x1fc3c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1fc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1fc3cc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1fc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x1fc3d0: 0x24429b40  addiu       $v0, $v0, -0x64C0
    ctx->pc = 0x1fc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941504));
    // 0x1fc3d4: 0x2484a700  addiu       $a0, $a0, -0x5900
    ctx->pc = 0x1fc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
    // 0x1fc3d8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fc3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fc3dc: 0xc066e2a  jal         func_19B8A8
    ctx->pc = 0x1FC3DCu;
    SET_GPR_U32(ctx, 31, 0x1FC3E4u);
    ctx->pc = 0x1FC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3DCu;
    // 0x1fc3e0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8A8u, 0x1FC3DCu, 0x1FC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3E4u;
label_1fc3e4:
    // 0x1fc3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3e8: 0xc066c5c  jal         func_19B170
    ctx->pc = 0x1FC3E8u;
    SET_GPR_U32(ctx, 31, 0x1FC3F0u);
    ctx->pc = 0x1FC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3E8u;
    // 0x1fc3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B170u, 0x1FC3E8u, 0x1FC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC3F0u;
label_1fc3f0:
    // 0x1fc3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc3f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc3f8: 0xc066d10  jal         func_19B440
    ctx->pc = 0x1FC3F8u;
    SET_GPR_U32(ctx, 31, 0x1FC400u);
    ctx->pc = 0x1FC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC3F8u;
    // 0x1fc3fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B440u, 0x1FC3F8u, 0x1FC400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC400u;
label_1fc400:
    // 0x1fc400: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1fc400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x1fc404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc408: 0x24a5a6b0  addiu       $a1, $a1, -0x5950
    ctx->pc = 0x1fc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944432));
    // 0x1fc40c: 0xc066d36  jal         func_19B4D8
    ctx->pc = 0x1FC40Cu;
    SET_GPR_U32(ctx, 31, 0x1FC414u);
    ctx->pc = 0x1FC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC40Cu;
    // 0x1fc410: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B4D8u, 0x1FC40Cu, 0x1FC414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC414u;
label_1fc414:
    // 0x1fc414: 0xc066c46  jal         func_19B118
    ctx->pc = 0x1FC414u;
    SET_GPR_U32(ctx, 31, 0x1FC41Cu);
    ctx->pc = 0x1FC418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC414u;
    // 0x1fc418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x1FC414u, 0x1FC41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC41Cu;
}
