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

// Function: entry_001163f0
// Address: 0x1163f0 - 0x11642c
void entry_001163f0_0x1163f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001163f0_0x1163f0");
#endif

    switch (ctx->pc) {
        case 0x1163fcu: goto label_1163fc;
        default: break;
    }

    ctx->pc = 0x1163f0u;

    // 0x1163f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1163f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f4: 0xc050564  jal         func_141590
    ctx->pc = 0x1163F4u;
    SET_GPR_U32(ctx, 31, 0x1163FCu);
    ctx->pc = 0x141590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141590u, 0x1163F4u, 0x1163FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163FCu;
label_1163fc:
    // 0x1163fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1163fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116400: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x116400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x116404: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116408: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x116408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x11640c: 0x8624003c  lh          $a0, 0x3C($s1)
    ctx->pc = 0x11640cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x116410: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x116414: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x116414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x116418: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x116418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11641c: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x11641cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x116420: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116424: 0xa623018c  sh          $v1, 0x18C($s1)
    ctx->pc = 0x116424u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 396), (uint16_t)GPR_U32(ctx, 3));
    // 0x116428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11642cu;
}
