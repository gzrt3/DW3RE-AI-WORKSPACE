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

// Function: entry_0010fb60
// Address: 0x10fb60 - 0x10fbec
void entry_0010fb60_0x10fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb60_0x10fb60");
#endif

    ctx->pc = 0x10fb60u;

    // 0x10fb60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fb60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fb64: 0x2483fffe  addiu       $v1, $a0, -0x2
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x10fb68: 0x8c2b4970  lw          $t3, 0x4970($at)
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x334970u));
    // 0x10fb6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x10fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10fb70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10fb74: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x10fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x10fb78: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x10fb78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10fb7c: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x10fb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10fb80: 0x34840  sll         $t1, $v1, 1
    ctx->pc = 0x10fb80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10fb84: 0x24c618d4  addiu       $a2, $a2, 0x18D4
    ctx->pc = 0x10fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6356));
    // 0x10fb88: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x10fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x10fb8c: 0x246318d5  addiu       $v1, $v1, 0x18D5
    ctx->pc = 0x10fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6357));
    // 0x10fb90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fb94: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x10fb94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x10fb98: 0x90254928  lbu         $a1, 0x4928($at)
    ctx->pc = 0x10fb98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18728)));
    // 0x10fb9c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x10fb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x10fba0: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x10fba0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x10fba4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x10fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x10fba8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x10fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10fbac: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x10fbacu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10fbb0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x10fbb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10fbb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fbb8: 0x90244929  lbu         $a0, 0x4929($at)
    ctx->pc = 0x10fbb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334929u));
    // 0x10fbbc: 0xa65023  subu        $t2, $a1, $a2
    ctx->pc = 0x10fbbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x10fbc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fbc4: 0x8c2e4afc  lw          $t6, 0x4AFC($at)
    ctx->pc = 0x10fbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x334AFCu));
    // 0x10fbc8: 0x15c0000a  bnez        $t6, . + 4 + (0xA << 2)
    ctx->pc = 0x10FBC8u;
    {
        const bool branch_taken_0x10fbc8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC8u;
        // 0x10fbcc: 0x835823  subu        $t3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbc8) {
            ctx->pc = 0x10FBF4u;
            return;
        }
    }
    ctx->pc = 0x10FBD0u;
    // 0x10fbd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10fbd4: 0x8c234af8  lw          $v1, 0x4AF8($at)
    ctx->pc = 0x10fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334AF8u));
    // 0x10fbd8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FBD8u;
    {
        const bool branch_taken_0x10fbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBD8u;
        // 0x10fbdc: 0x240e0090  addiu       $t6, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbd8) {
            ctx->pc = 0x10FBECu;
            return;
        }
    }
    ctx->pc = 0x10FBE0u;
    // 0x10fbe0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10FBE0u;
    {
        const bool branch_taken_0x10fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBE0u;
        // 0x10fbe4: 0x240e00a0  addiu       $t6, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbe0) {
            ctx->pc = 0x10FC20u;
            return;
        }
    }
    ctx->pc = 0x10FBE8u;
    // 0x10fbe8: 0x240e0090  addiu       $t6, $zero, 0x90
    ctx->pc = 0x10fbe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->pc = 0x10fbecu;
}
