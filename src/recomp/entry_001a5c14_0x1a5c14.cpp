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

// Function: entry_001a5c14
// Address: 0x1a5c14 - 0x1a5c64
void entry_001a5c14_0x1a5c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c14_0x1a5c14");
#endif

    switch (ctx->pc) {
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c40u: goto label_1a5c40;
        default: break;
    }

    ctx->pc = 0x1a5c14u;

    // 0x1a5c14: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c18: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5c1c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a5c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a5c20: 0xc069660  jal         func_1A5980
    ctx->pc = 0x1A5C20u;
    SET_GPR_U32(ctx, 31, 0x1A5C28u);
    ctx->pc = 0x1A5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C20u;
    // 0x1a5c24: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5980u, 0x1A5C20u, 0x1A5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C28u;
label_1a5c28:
    // 0x1a5c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c2c: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5C2Cu;
    {
        const bool branch_taken_0x1a5c2c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1a5c2c) {
            ctx->pc = 0x1A5C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C2Cu;
            // 0x1a5c30: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C48u;
            goto label_1a5c48;
        }
    }
    ctx->pc = 0x1A5C34u;
    // 0x1a5c34: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a5c38: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5C38u;
    SET_GPR_U32(ctx, 31, 0x1A5C40u);
    ctx->pc = 0x1A5C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C38u;
    // 0x1a5c3c: 0x2484a528  addiu       $a0, $a0, -0x5AD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5C38u, 0x1A5C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C40u;
label_1a5c40:
    // 0x1a5c40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A5C40u;
    {
        const bool branch_taken_0x1a5c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c40) {
            ctx->pc = 0x1A5C80u;
            return;
        }
    }
    ctx->pc = 0x1A5C48u;
label_1a5c48:
    // 0x1a5c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a5c50: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a5c54: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1a5c58: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a5c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1a5c5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A5C5Cu;
    {
        const bool branch_taken_0x1a5c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C5Cu;
        // 0x1a5c60: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c5c) {
            ctx->pc = 0x1A5C88u;
            return;
        }
    }
    ctx->pc = 0x1A5C64u;
}
