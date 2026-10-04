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

// Function: entry_001fd4e8
// Address: 0x1fd4e8 - 0x1fd54c
void entry_001fd4e8_0x1fd4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd4e8_0x1fd4e8");
#endif

    ctx->pc = 0x1fd4e8u;

    // 0x1fd4e8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fd4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1fd4ec: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1fd4f0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1fd4f4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1fd4f8: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x1fd4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1fd4fc: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1fd500: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1fd504: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1fd508: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x1fd508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd50c: 0x0  nop
    ctx->pc = 0x1fd50cu;
    // NOP
    // 0x1fd510: 0x0  nop
    ctx->pc = 0x1fd510u;
    // NOP
    // 0x1fd514: 0x2010  mfhi        $a0
    ctx->pc = 0x1fd514u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1fd518: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x1fd518u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1fd51c: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1fd51cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1fd520: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1fd520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fd524: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x1fd524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x1fd528: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x1fd528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fd52c: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x1fd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1fd530: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fd534: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x1fd534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x1fd538: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x1fd538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1fd53c: 0x28810191  slti        $at, $a0, 0x191
    ctx->pc = 0x1fd53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1fd540: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD540u;
    {
        const bool branch_taken_0x1fd540 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD540u;
        // 0x1fd544: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd540) {
            ctx->pc = 0x1FD54Cu;
            return;
        }
    }
    ctx->pc = 0x1FD548u;
    // 0x1fd548: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1fd548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd54cu;
}
