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

// Function: FUN_002265e0
// Address: 0x2265e0 - 0x22661c
void FUN_002265e0_0x2265e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002265e0_0x2265e0");
#endif

    switch (ctx->pc) {
        case 0x226614u: goto label_226614;
        default: break;
    }

    ctx->pc = 0x2265e0u;

    // 0x2265e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2265e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x2265e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2265ec: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2265ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2265f0: 0x802351ec  lb          $v1, 0x51EC($at)
    ctx->pc = 0x2265f0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3651ECu));
    // 0x2265f4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2265F4u;
    {
        const bool branch_taken_0x2265f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2265f4) {
            ctx->pc = 0x226614u;
            goto label_226614;
        }
    }
    ctx->pc = 0x2265FCu;
    // 0x2265fc: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2265fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x226600: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x226604: 0xa02251ec  sb          $v0, 0x51EC($at)
    ctx->pc = 0x226604u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3651ECu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3651ECu, _value); } while (0);
    // 0x226608: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x226608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22660c: 0xc05ae74  jal         func_16B9D0
    ctx->pc = 0x22660Cu;
    SET_GPR_U32(ctx, 31, 0x226614u);
    ctx->pc = 0x226610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22660Cu;
    // 0x226610: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B9D0u, 0x22660Cu, 0x226614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226614u;
label_226614:
    // 0x226614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22661cu;
}
