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

// Function: FUN_00131ae0
// Address: 0x131ae0 - 0x131b24
void FUN_00131ae0_0x131ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131ae0_0x131ae0");
#endif

    switch (ctx->pc) {
        case 0x131b20u: goto label_131b20;
        default: break;
    }

    ctx->pc = 0x131ae0u;

    // 0x131ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131ae4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131aec: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x131aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x131af0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131af4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x131AF4u;
    {
        const bool branch_taken_0x131af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131af4) {
            ctx->pc = 0x131B20u;
            goto label_131b20;
        }
    }
    ctx->pc = 0x131AFCu;
    // 0x131afc: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x131afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131b00: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x131b04: 0x24429f20  addiu       $v0, $v0, -0x60E0
    ctx->pc = 0x131b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942496));
    // 0x131b08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x131b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x131b0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131b10: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x131b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131b18: 0xc05b2e4  jal         func_16CB90
    ctx->pc = 0x131B18u;
    SET_GPR_U32(ctx, 31, 0x131B20u);
    ctx->pc = 0x131B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B18u;
    // 0x131b1c: 0x904400a9  lbu         $a0, 0xA9($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 169)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x131B18u, 0x131B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B20u;
label_131b20:
    // 0x131b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x131b24u;
}
