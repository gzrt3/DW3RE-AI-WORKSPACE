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

// Function: FUN_001a68c0
// Address: 0x1a68c0 - 0x1a6918
void FUN_001a68c0_0x1a68c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a68c0_0x1a68c0");
#endif

    switch (ctx->pc) {
        case 0x1a6908u: goto label_1a6908;
        default: break;
    }

    ctx->pc = 0x1a68c0u;

    // 0x1a68c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a68c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a68c4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a68c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a68c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a68cc: 0x24425fb8  addiu       $v0, $v0, 0x5FB8
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24504));
    // 0x1a68d0: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a68d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a68d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a68d8: 0x8e115b64  lw          $s1, 0x5B64($s0)
    ctx->pc = 0x1a68d8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x285B64u));
    // 0x1a68dc: 0xffa50078  sd          $a1, 0x78($sp)
    ctx->pc = 0x1a68dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x1a68e0: 0xae025b64  sw          $v0, 0x5B64($s0)
    ctx->pc = 0x1a68e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x285B64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285B64u, _value); } while (0);
    // 0x1a68e4: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1a68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1a68e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a68e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a68ec: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x1a68ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x1a68f0: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x1a68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x1a68f4: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x1a68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x1a68f8: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x1a68f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x1a68fc: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x1a68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x1a6900: 0xc0698a6  jal         func_1A6298
    ctx->pc = 0x1A6900u;
    SET_GPR_U32(ctx, 31, 0x1A6908u);
    ctx->pc = 0x1A6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6900u;
    // 0x1a6904: 0xffab00a8  sd          $t3, 0xA8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6298u, 0x1A6900u, 0x1A6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6908u;
label_1a6908:
    // 0x1a6908: 0xae115b64  sw          $s1, 0x5B64($s0)
    ctx->pc = 0x1a6908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23396), GPR_U32(ctx, 17));
    // 0x1a690c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6910: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6918u;
}
