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

// Function: entry_0014ec18
// Address: 0x14ec18 - 0x14ec7c
void entry_0014ec18_0x14ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ec18_0x14ec18");
#endif

    ctx->pc = 0x14ec18u;

    // 0x14ec18: 0x14e00048  bnez        $a3, . + 4 + (0x48 << 2)
    ctx->pc = 0x14EC18u;
    {
        const bool branch_taken_0x14ec18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0x33080  sll         $a2, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec18) {
            ctx->pc = 0x14ED3Cu;
            return;
        }
    }
    ctx->pc = 0x14EC20u;
    // 0x14ec20: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x14ec24: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x14ec24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14ec28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x14ec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x14ec2c: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x14ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x14ec30: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x14ec30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ec34: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x14ec34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14ec38: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x14ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x14ec3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x14ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x14ec40: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x14ec40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x14ec44: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x14ec44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14ec48: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x14ec48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14ec4c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x14ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14ec50: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x14ec50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14ec54: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x14ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14ec58: 0xd8e10020  lqc2        $vf1, 0x20($a3)
    ctx->pc = 0x14ec58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x14ec5c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x14ec5cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14ec60: 0xd8e10030  lqc2        $vf1, 0x30($a3)
    ctx->pc = 0x14ec60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x14ec64: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x14ec64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14ec68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ec6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14ec70: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x14ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14ec74: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x14EC74u;
    {
        const bool branch_taken_0x14ec74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC74u;
        // 0x14ec78: 0xa0a6008c  sb          $a2, 0x8C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec74) {
            ctx->pc = 0x14ED3Cu;
            return;
        }
    }
    ctx->pc = 0x14EC7Cu;
}
