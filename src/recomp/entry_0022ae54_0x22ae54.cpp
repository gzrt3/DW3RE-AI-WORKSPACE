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

// Function: entry_0022ae54
// Address: 0x22ae54 - 0x22aebc
void entry_0022ae54_0x22ae54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ae54_0x22ae54");
#endif

    switch (ctx->pc) {
        case 0x22ae68u: goto label_22ae68;
        default: break;
    }

    ctx->pc = 0x22ae54u;

    // 0x22ae54: 0x0  nop
    ctx->pc = 0x22ae54u;
    // NOP
    // 0x22ae58: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22AE58u;
    {
        const bool branch_taken_0x22ae58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE58u;
        // 0x22ae5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae58) {
            ctx->pc = 0x22AEBCu;
            return;
        }
    }
    ctx->pc = 0x22AE60u;
    // 0x22ae60: 0xc0590dc  jal         func_164370
    ctx->pc = 0x22AE60u;
    SET_GPR_U32(ctx, 31, 0x22AE68u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22AE60u, 0x22AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE68u;
label_22ae68:
    // 0x22ae68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22AE68u;
    {
        const bool branch_taken_0x22ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae68) {
            ctx->pc = 0x22AEBCu;
            return;
        }
    }
    ctx->pc = 0x22AE70u;
    // 0x22ae70: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x22ae70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x22ae74: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x22ae78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x22ae7c: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x22ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
    // 0x22ae80: 0x2463aed0  addiu       $v1, $v1, -0x5130
    ctx->pc = 0x22ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946512));
    // 0x22ae84: 0xa4450014  sh          $a1, 0x14($v0)
    ctx->pc = 0x22ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x22ae88: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x22ae88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x22ae8c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22ae90: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22ae94: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22ae98: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22ae9c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x22aea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22aea4: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x22aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
    // 0x22aea8: 0xac500060  sw          $s0, 0x60($v0)
    ctx->pc = 0x22aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
    // 0x22aeac: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x22aeacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22aeb0: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x22aeb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x22aeb4: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x22aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
    // 0x22aeb8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    ctx->pc = 0x22aebcu;
}
