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

// Function: FUN_001809b0
// Address: 0x1809b0 - 0x180a38
void FUN_001809b0_0x1809b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001809b0_0x1809b0");
#endif

    switch (ctx->pc) {
        case 0x1809c0u: goto label_1809c0;
        case 0x1809c8u: goto label_1809c8;
        default: break;
    }

    ctx->pc = 0x1809b0u;

    // 0x1809b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1809b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1809b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1809b8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1809B8u;
    SET_GPR_U32(ctx, 31, 0x1809C0u);
    ctx->pc = 0x170700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170700u, 0x1809B8u, 0x1809C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809C0u;
label_1809c0:
    // 0x1809c0: 0xc05bfe4  jal         func_16FF90
    ctx->pc = 0x1809C0u;
    SET_GPR_U32(ctx, 31, 0x1809C8u);
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x1809C0u, 0x1809C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809C8u;
label_1809c8:
    // 0x1809c8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1809cc: 0x94284530  lhu         $t0, 0x4530($at)
    ctx->pc = 0x1809ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)FAST_READ16(0x364530u));
    // 0x1809d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1809d4: 0x94274552  lhu         $a3, 0x4552($at)
    ctx->pc = 0x1809d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x364552u));
    // 0x1809d8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1809dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1809e0: 0x94264532  lhu         $a2, 0x4532($at)
    ctx->pc = 0x1809e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17714)));
    // 0x1809e4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1809e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1809e8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1809e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1809ec: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1809ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1809f0: 0xff8787d0  sd          $a3, -0x7830($gp)
    ctx->pc = 0x1809f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 7));
    // 0x1809f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1809f8: 0x94254554  lhu         $a1, 0x4554($at)
    ctx->pc = 0x1809f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x364554u));
    // 0x1809fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x180a00: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x180a04: 0x94244534  lhu         $a0, 0x4534($at)
    ctx->pc = 0x180a04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17716)));
    // 0x180a08: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x180a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x180a0c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x180a10: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x180a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x180a14: 0xff8587c8  sd          $a1, -0x7838($gp)
    ctx->pc = 0x180a14u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 5));
    // 0x180a18: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x180a1c: 0x94234556  lhu         $v1, 0x4556($at)
    ctx->pc = 0x180a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x364556u));
    // 0x180a20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x180a24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x180a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x180a28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x180a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x180a2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x180a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x180a30: 0xff8387c0  sd          $v1, -0x7840($gp)
    ctx->pc = 0x180a30u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 3));
    // 0x180a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x180a38u;
}
