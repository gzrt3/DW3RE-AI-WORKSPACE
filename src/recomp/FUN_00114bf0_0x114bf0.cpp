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

// Function: FUN_00114bf0
// Address: 0x114bf0 - 0x114ccc
void FUN_00114bf0_0x114bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114bf0_0x114bf0");
#endif

    switch (ctx->pc) {
        case 0x114c40u: goto label_114c40;
        default: break;
    }

    ctx->pc = 0x114bf0u;

    // 0x114bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x114bf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x114bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x114bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x114bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c00: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x114C00u;
    {
        const bool branch_taken_0x114c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c00) {
            ctx->pc = 0x114CC8u;
            goto label_114cc8;
        }
    }
    ctx->pc = 0x114C08u;
    // 0x114c08: 0x8603002c  lh          $v1, 0x2C($s0)
    ctx->pc = 0x114c08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x114c0c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x114C0Cu;
    {
        const bool branch_taken_0x114c0c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x114c0c) {
            ctx->pc = 0x114C40u;
            goto label_114c40;
        }
    }
    ctx->pc = 0x114C14u;
    // 0x114c14: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x114c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c1c: 0x82050029  lb          $a1, 0x29($s0)
    ctx->pc = 0x114c1cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x114c20: 0x908601a2  lbu         $a2, 0x1A2($a0)
    ctx->pc = 0x114c20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x114c24: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x114c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x114c28: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x114c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x114c2c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x114c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x114c30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x114C30u;
    {
        const bool branch_taken_0x114c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c30) {
            ctx->pc = 0x114C40u;
            goto label_114c40;
        }
    }
    ctx->pc = 0x114C38u;
    // 0x114c38: 0xc050564  jal         func_141590
    ctx->pc = 0x114C38u;
    SET_GPR_U32(ctx, 31, 0x114C40u);
    ctx->pc = 0x141590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141590u, 0x114C38u, 0x114C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C40u;
label_114c40:
    // 0x114c40: 0x82050029  lb          $a1, 0x29($s0)
    ctx->pc = 0x114c40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x114c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c48: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x114c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c4c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x114c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x114c50: 0x386500ff  xori        $a1, $v1, 0xFF
    ctx->pc = 0x114c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x114c54: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x114c54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x114c58: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x114c58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x114c5c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x114c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x114c60: 0xa08301a2  sb          $v1, 0x1A2($a0)
    ctx->pc = 0x114c60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 418), (uint8_t)GPR_U32(ctx, 3));
    // 0x114c64: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x114c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c68: 0x906301a2  lbu         $v1, 0x1A2($v1)
    ctx->pc = 0x114c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 418)));
    // 0x114c6c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x114C6Cu;
    {
        const bool branch_taken_0x114c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114c6c) {
            ctx->pc = 0x114C84u;
            goto label_114c84;
        }
    }
    ctx->pc = 0x114C74u;
    // 0x114c74: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x114c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x114c78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x114c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x114c7c: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x114c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x114c80: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x114c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_114c84:
    // 0x114c84: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x114c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x114c88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x114c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x114c8c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x114c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x114c90: 0xa600002c  sh          $zero, 0x2C($s0)
    ctx->pc = 0x114c90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x114c94: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x114c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x114c98: 0x82050029  lb          $a1, 0x29($s0)
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x114c9c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x114c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x114ca0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x114ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114ca4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x114ca8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x114ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x114cac: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x114cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x114cb0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x114cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x114cb4: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x114cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cb8: 0xa2030033  sb          $v1, 0x33($s0)
    ctx->pc = 0x114cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cbc: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x114cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cc0: 0xa2030035  sb          $v1, 0x35($s0)
    ctx->pc = 0x114cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x114cc4: 0xa2030036  sb          $v1, 0x36($s0)
    ctx->pc = 0x114cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 3));
label_114cc8:
    // 0x114cc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x114cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x114cccu;
}
