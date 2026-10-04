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

// Function: entry_001fd33c
// Address: 0x1fd33c - 0x1fd39c
void entry_001fd33c_0x1fd33c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd33c_0x1fd33c");
#endif

    ctx->pc = 0x1fd33cu;

    // 0x1fd33c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fd340: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1fd340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd344: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1fd344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1fd348: 0x34a6851f  ori         $a2, $a1, 0x851F
    ctx->pc = 0x1fd348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1fd34c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1fd34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1fd350: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1fd354: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1fd354u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1fd358: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x1fd358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd35c: 0x0  nop
    ctx->pc = 0x1fd35cu;
    // NOP
    // 0x1fd360: 0x0  nop
    ctx->pc = 0x1fd360u;
    // NOP
    // 0x1fd364: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd364u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1fd368: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x1fd368u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1fd36c: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x1fd36cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x1fd370: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fd374: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1fd374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1fd378: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x1fd378u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fd37c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fd380: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1fd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fd384: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1fd384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1fd388: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1fd388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fd38c: 0x288100fb  slti        $at, $a0, 0xFB
    ctx->pc = 0x1fd38cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1fd390: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD390u;
    {
        const bool branch_taken_0x1fd390 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD390u;
        // 0x1fd394: 0x24650008  addiu       $a1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd390) {
            ctx->pc = 0x1FD39Cu;
            return;
        }
    }
    ctx->pc = 0x1FD398u;
    // 0x1fd398: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x1fd398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1fd39cu;
}
