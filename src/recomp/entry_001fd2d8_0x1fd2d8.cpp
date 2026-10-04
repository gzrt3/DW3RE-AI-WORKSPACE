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

// Function: entry_001fd2d8
// Address: 0x1fd2d8 - 0x1fd33c
void entry_001fd2d8_0x1fd2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd2d8_0x1fd2d8");
#endif

    ctx->pc = 0x1fd2d8u;

    // 0x1fd2d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1fd2dc: 0x24070190  addiu       $a3, $zero, 0x190
    ctx->pc = 0x1fd2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1fd2e0: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1fd2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd2e4: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1fd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x1fd2e8: 0x3485851f  ori         $a1, $a0, 0x851F
    ctx->pc = 0x1fd2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x1fd2ec: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1fd2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1fd2f0: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1fd2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fd2f4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fd2f8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd2fc: 0x0  nop
    ctx->pc = 0x1fd2fcu;
    // NOP
    // 0x1fd300: 0x0  nop
    ctx->pc = 0x1fd300u;
    // NOP
    // 0x1fd304: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd304u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1fd308: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd308u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1fd30c: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1fd30cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1fd310: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fd314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1fd314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1fd318: 0x86460006  lh          $a2, 0x6($s2)
    ctx->pc = 0x1fd318u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1fd31c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1fd31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1fd320: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fd324: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1fd324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1fd328: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1fd328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fd32c: 0x28a10191  slti        $at, $a1, 0x191
    ctx->pc = 0x1fd32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1fd330: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD330u;
    {
        const bool branch_taken_0x1fd330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD330u;
        // 0x1fd334: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd330) {
            ctx->pc = 0x1FD33Cu;
            return;
        }
    }
    ctx->pc = 0x1FD338u;
    // 0x1fd338: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1fd338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd33cu;
}
