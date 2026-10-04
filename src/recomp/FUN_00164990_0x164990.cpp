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

// Function: FUN_00164990
// Address: 0x164990 - 0x164a2c
void FUN_00164990_0x164990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00164990_0x164990");
#endif

    switch (ctx->pc) {
        case 0x1649a4u: goto label_1649a4;
        case 0x1649b8u: goto label_1649b8;
        case 0x1649ccu: goto label_1649cc;
        case 0x1649e0u: goto label_1649e0;
        case 0x1649f4u: goto label_1649f4;
        case 0x164a04u: goto label_164a04;
        case 0x164a18u: goto label_164a18;
        case 0x164a20u: goto label_164a20;
        case 0x164a28u: goto label_164a28;
        default: break;
    }

    ctx->pc = 0x164990u;

    // 0x164990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164994: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16499c: 0xc070080  jal         func_1C0200
    ctx->pc = 0x16499Cu;
    SET_GPR_U32(ctx, 31, 0x1649A4u);
    ctx->pc = 0x1649A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16499Cu;
    // 0x1649a0: 0x24056720  addiu       $a1, $zero, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x16499Cu, 0x1649A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649A4u;
label_1649a4:
    // 0x1649a4: 0xaf82869c  sw          $v0, -0x7964($gp)
    ctx->pc = 0x1649a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936220), GPR_U32(ctx, 2));
    // 0x1649a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1649ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1649b0: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1649B0u;
    SET_GPR_U32(ctx, 31, 0x1649B8u);
    ctx->pc = 0x1649B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649B0u;
    // 0x1649b4: 0x34450740  ori         $a1, $v0, 0x740 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1856);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1649B0u, 0x1649B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649B8u;
label_1649b8:
    // 0x1649b8: 0xaf828690  sw          $v0, -0x7970($gp)
    ctx->pc = 0x1649b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936208), GPR_U32(ctx, 2));
    // 0x1649bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1649c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1649c4: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1649C4u;
    SET_GPR_U32(ctx, 31, 0x1649CCu);
    ctx->pc = 0x1649C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649C4u;
    // 0x1649c8: 0x34450e80  ori         $a1, $v0, 0xE80 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3712);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1649C4u, 0x1649CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649CCu;
label_1649cc:
    // 0x1649cc: 0xaf828684  sw          $v0, -0x797C($gp)
    ctx->pc = 0x1649ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
    // 0x1649d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1649d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1649d8: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1649D8u;
    SET_GPR_U32(ctx, 31, 0x1649E0u);
    ctx->pc = 0x1649DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649D8u;
    // 0x1649dc: 0x3445a040  ori         $a1, $v0, 0xA040 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1649D8u, 0x1649E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649E0u;
label_1649e0:
    // 0x1649e0: 0xaf828678  sw          $v0, -0x7988($gp)
    ctx->pc = 0x1649e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 2));
    // 0x1649e4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1649e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1649ec: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1649ECu;
    SET_GPR_U32(ctx, 31, 0x1649F4u);
    ctx->pc = 0x1649F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649ECu;
    // 0x1649f0: 0x34450140  ori         $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1649ECu, 0x1649F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649F4u;
label_1649f4:
    // 0x1649f4: 0xaf82866c  sw          $v0, -0x7994($gp)
    ctx->pc = 0x1649f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936172), GPR_U32(ctx, 2));
    // 0x1649f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1649fc: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649FCu;
    // 0x164a00: 0x24055780  addiu       $a1, $zero, 0x5780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1649FCu, 0x164A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A04u;
label_164a04:
    // 0x164a04: 0xaf828660  sw          $v0, -0x79A0($gp)
    ctx->pc = 0x164a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 2));
    // 0x164a08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164a0c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x164a10: 0xc070080  jal         func_1C0200
    ctx->pc = 0x164A10u;
    SET_GPR_U32(ctx, 31, 0x164A18u);
    ctx->pc = 0x164A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A10u;
    // 0x164a14: 0x34452cc0  ori         $a1, $v0, 0x2CC0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11456);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x164A10u, 0x164A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A18u;
label_164a18:
    // 0x164a18: 0xc05cde8  jal         func_1737A0
    ctx->pc = 0x164A18u;
    SET_GPR_U32(ctx, 31, 0x164A20u);
    ctx->pc = 0x164A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164A18u;
    // 0x164a1c: 0xaf828654  sw          $v0, -0x79AC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1737A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1737A0u, 0x164A18u, 0x164A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A20u;
label_164a20:
    // 0x164a20: 0xc07f10c  jal         func_1FC430
    ctx->pc = 0x164A20u;
    SET_GPR_U32(ctx, 31, 0x164A28u);
    ctx->pc = 0x1FC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC430u, 0x164A20u, 0x164A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A28u;
label_164a28:
    // 0x164a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x164a2cu;
}
