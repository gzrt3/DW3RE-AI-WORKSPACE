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

// Function: FUN_001677e0
// Address: 0x1677e0 - 0x167808
void FUN_001677e0_0x1677e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001677e0_0x1677e0");
#endif

    switch (ctx->pc) {
        case 0x167804u: goto label_167804;
        default: break;
    }

    ctx->pc = 0x1677e0u;

    // 0x1677e0: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x1677e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1677e8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1677e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1677ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1677ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1677f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1677f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1677f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1677f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1677f8: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1677f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1677fc: 0xc059b50  jal         func_166D40
    ctx->pc = 0x1677FCu;
    SET_GPR_U32(ctx, 31, 0x167804u);
    ctx->pc = 0x167800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1677FCu;
    // 0x167800: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x1677FCu, 0x167804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167804u;
label_167804:
    // 0x167804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x167808u;
}
