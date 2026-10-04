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

// Function: entry_001fd54c
// Address: 0x1fd54c - 0x1fd5ac
void entry_001fd54c_0x1fd54c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd54c_0x1fd54c");
#endif

    ctx->pc = 0x1fd54cu;

    // 0x1fd54c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1fd54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1fd550: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1fd550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd554: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x1fd558: 0x3485851f  ori         $a1, $a0, 0x851F
    ctx->pc = 0x1fd558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x1fd55c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1fd55cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1fd560: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1fd564: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd564u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fd568: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd56c: 0x0  nop
    ctx->pc = 0x1fd56cu;
    // NOP
    // 0x1fd570: 0x0  nop
    ctx->pc = 0x1fd570u;
    // NOP
    // 0x1fd574: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd574u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1fd578: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd578u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1fd57c: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x1fd57cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
    // 0x1fd580: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fd584: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1fd584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1fd588: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fd58c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fd590: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fd590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fd594: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1fd594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x1fd598: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fd59c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1fd59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1fd5a0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD5A0u;
    {
        const bool branch_taken_0x1fd5a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A0u;
        // 0x1fd5a4: 0x26840008  addiu       $a0, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a0) {
            ctx->pc = 0x1FD5ACu;
            return;
        }
    }
    ctx->pc = 0x1FD5A8u;
    // 0x1fd5a8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->pc = 0x1fd5acu;
}
