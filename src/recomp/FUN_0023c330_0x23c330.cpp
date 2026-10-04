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

// Function: FUN_0023c330
// Address: 0x23c330 - 0x23c38c
void FUN_0023c330_0x23c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c330_0x23c330");
#endif

    switch (ctx->pc) {
        case 0x23c364u: goto label_23c364;
        default: break;
    }

    ctx->pc = 0x23c330u;

    // 0x23c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c334: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23c334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x23c338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c33c: 0x3c055851  lui         $a1, 0x5851
    ctx->pc = 0x23c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22609 << 16));
    // 0x23c340: 0x34a5f42d  ori         $a1, $a1, 0xF42D
    ctx->pc = 0x23c340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62509);
    // 0x23c344: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x23c348: 0x34a54c95  ori         $a1, $a1, 0x4C95
    ctx->pc = 0x23c348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19605);
    // 0x23c34c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23c34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x23c350: 0x34a57f2d  ori         $a1, $a1, 0x7F2D
    ctx->pc = 0x23c350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32557);
    // 0x23c354: 0x8c500818  lw          $s0, 0x818($v0)
    ctx->pc = 0x23c354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x23c358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c35c: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x23C35Cu;
    SET_GPR_U32(ctx, 31, 0x23C364u);
    ctx->pc = 0x23C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C35Cu;
    // 0x23c360: 0xde0400a8  ld          $a0, 0xA8($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x23C35Cu, 0x23C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C364u;
label_23c364:
    // 0x23c364: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x23c364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x23c368: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x23c368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x23c36c: 0x64430001  daddiu      $v1, $v0, 0x1
    ctx->pc = 0x23c36cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x23c370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c374: 0x3103e  dsrl32      $v0, $v1, 0
    ctx->pc = 0x23c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23c378: 0xfe0300a8  sd          $v1, 0xA8($s0)
    ctx->pc = 0x23c378u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 168), GPR_U64(ctx, 3));
    // 0x23c37c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23c380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23c388: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23c388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x23c38cu;
}
