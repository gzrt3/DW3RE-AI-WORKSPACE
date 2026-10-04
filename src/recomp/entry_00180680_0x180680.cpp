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

// Function: entry_00180680
// Address: 0x180680 - 0x18073c
void entry_00180680_0x180680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180680_0x180680");
#endif

    switch (ctx->pc) {
        case 0x180688u: goto label_180688;
        case 0x180728u: goto label_180728;
        default: break;
    }

    ctx->pc = 0x180680u;

    // 0x180680: 0xc066440  jal         func_199100
    ctx->pc = 0x180680u;
    SET_GPR_U32(ctx, 31, 0x180688u);
    ctx->pc = 0x180684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180680u;
    // 0x180684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x180680u, 0x180688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180688u;
label_180688:
    // 0x180688: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x180688u;
    {
        const bool branch_taken_0x180688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180688) {
            ctx->pc = 0x18073Cu;
            return;
        }
    }
    ctx->pc = 0x180690u;
    // 0x180690: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x180690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x180694: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x180698: 0xac22f590  sw          $v0, -0xA70($at)
    ctx->pc = 0x180698u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x18069c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1806a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1806a8: 0x8c228000  lw          $v0, -0x8000($at)
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10008000u));
    // 0x1806ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1806b0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806b4: 0xac228000  sw          $v0, -0x8000($at)
    ctx->pc = 0x1806b4u;
    runtime->Store32(rdram, ctx, 0x10008000u, GPR_U32(ctx, 2));
    // 0x1806b8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1806bc: 0xac243810  sw          $a0, 0x3810($at)
    ctx->pc = 0x1806bcu;
    runtime->Store32(rdram, ctx, 0x10003810u, GPR_U32(ctx, 4));
    // 0x1806c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806c4: 0x8c229000  lw          $v0, -0x7000($at)
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1806c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1806cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806d0: 0xac229000  sw          $v0, -0x7000($at)
    ctx->pc = 0x1806d0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 2));
    // 0x1806d4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1806d8: 0xac243c10  sw          $a0, 0x3C10($at)
    ctx->pc = 0x1806d8u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4));
    // 0x1806dc: 0x4849e000  cfc2.ni     $t1, $vi28
    ctx->pc = 0x1806dcu;
    SET_GPR_U32(ctx, 9, ctx->vu0_fbrst);
    // 0x1806e0: 0x35290200  ori         $t1, $t1, 0x200
    ctx->pc = 0x1806e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)512);
    // 0x1806e4: 0x48c9e000  ctc2.ni     $t1, $vi28
    ctx->pc = 0x1806e4u;
    ctx->vu0_fbrst = GPR_U32(ctx, 9) & 0x00000C0Cu;
    // 0x1806e8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806ec: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x1806f0: 0x8c23a000  lw          $v1, -0x6000($at)
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1806f4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1806f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1806fc: 0xac23a000  sw          $v1, -0x6000($at)
    ctx->pc = 0x1806fcu;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 3));
    // 0x180700: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x180704: 0xac243000  sw          $a0, 0x3000($at)
    ctx->pc = 0x180704u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 4));
    // 0x180708: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18070c: 0xac20f590  sw          $zero, -0xA70($at)
    ctx->pc = 0x18070cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 0));
    // 0x180710: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x180714: 0x8c239000  lw          $v1, -0x7000($at)
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x180718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18071c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x180720: 0xc06614e  jal         func_198538
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x180724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180720u;
    // 0x180724: 0xac229000  sw          $v0, -0x7000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x180720u, 0x180728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x878787f4  lh          $a3, -0x780C($gp)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
    // 0x18072c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180734: 0xc0660e6  jal         func_198398
    ctx->pc = 0x180734u;
    SET_GPR_U32(ctx, 31, 0x18073Cu);
    ctx->pc = 0x180738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180734u;
    // 0x180738: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198398u, 0x180734u, 0x18073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18073Cu;
}
