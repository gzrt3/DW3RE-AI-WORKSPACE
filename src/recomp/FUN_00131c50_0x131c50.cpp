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

// Function: FUN_00131c50
// Address: 0x131c50 - 0x131cc4
void FUN_00131c50_0x131c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131c50_0x131c50");
#endif

    switch (ctx->pc) {
        case 0x131ca8u: goto label_131ca8;
        case 0x131cb8u: goto label_131cb8;
        default: break;
    }

    ctx->pc = 0x131c50u;

    // 0x131c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131c54: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x131c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131c60: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x131c60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x131c64: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x131c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x131c68: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x131C68u;
    {
        const bool branch_taken_0x131c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131c68) {
            ctx->pc = 0x131CC0u;
            goto label_131cc0;
        }
    }
    ctx->pc = 0x131C70u;
    // 0x131c70: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x131c74: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x131c78: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x131c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
    // 0x131c7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x131c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x131c80: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x131c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x131c84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x131c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x131c88: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x131c8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x131c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x131c90: 0x906400a9  lbu         $a0, 0xA9($v1)
    ctx->pc = 0x131c90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 169)));
    // 0x131c94: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131C94u;
    {
        const bool branch_taken_0x131c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x131C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131C94u;
        // 0x131c98: 0x247000a4  addiu       $s0, $v1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131c94) {
            ctx->pc = 0x131CB0u;
            goto label_131cb0;
        }
    }
    ctx->pc = 0x131C9Cu;
    // 0x131c9c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x131c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x131ca0: 0xc05aff4  jal         func_16BFD0
    ctx->pc = 0x131CA0u;
    SET_GPR_U32(ctx, 31, 0x131CA8u);
    ctx->pc = 0x131CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CA0u;
    // 0x131ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BFD0u, 0x131CA0u, 0x131CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CA8u;
label_131ca8:
    // 0x131ca8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x131CA8u;
    {
        const bool branch_taken_0x131ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CA8u;
        // 0x131cac: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ca8) {
            ctx->pc = 0x131CBCu;
            goto label_131cbc;
        }
    }
    ctx->pc = 0x131CB0u;
label_131cb0:
    // 0x131cb0: 0xc05b2e4  jal         func_16CB90
    ctx->pc = 0x131CB0u;
    SET_GPR_U32(ctx, 31, 0x131CB8u);
    ctx->pc = 0x16CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CB90u, 0x131CB0u, 0x131CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CB8u;
label_131cb8:
    // 0x131cb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_131cbc:
    // 0x131cbc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x131cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_131cc0:
    // 0x131cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x131cc4u;
}
