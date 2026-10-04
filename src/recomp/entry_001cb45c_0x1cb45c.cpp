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

// Function: entry_001cb45c
// Address: 0x1cb45c - 0x1cb4b8
void entry_001cb45c_0x1cb45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb45c_0x1cb45c");
#endif

    ctx->pc = 0x1cb45cu;

    // 0x1cb45c: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1cb460: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1cb464: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1cb464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1cb468: 0x24c64944  addiu       $a2, $a2, 0x4944
    ctx->pc = 0x1cb468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18756));
    // 0x1cb46c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cb470: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cb470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1cb474: 0xc34021  addu        $t0, $a2, $v1
    ctx->pc = 0x1cb474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cb478: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1cb478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cb47c: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cb480: 0x28e12710  slti        $at, $a3, 0x2710
    ctx->pc = 0x1cb480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1cb484: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB484u;
    {
        const bool branch_taken_0x1cb484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB484u;
        // 0x1cb488: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb484) {
            ctx->pc = 0x1CB4B8u;
            return;
        }
    }
    ctx->pc = 0x1CB48Cu;
    // 0x1cb48c: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x1cb48cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cb490: 0x0  nop
    ctx->pc = 0x1cb490u;
    // NOP
    // 0x1cb494: 0x0  nop
    ctx->pc = 0x1cb494u;
    // NOP
    // 0x1cb498: 0x3010  mfhi        $a2
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1cb49c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB49Cu;
    {
        const bool branch_taken_0x1cb49c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB49Cu;
        // 0x1cb4a0: 0xad070000  sw          $a3, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb49c) {
            ctx->pc = 0x1CB4B8u;
            return;
        }
    }
    ctx->pc = 0x1CB4A4u;
    // 0x1cb4a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1cb4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1cb4a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb4ac: 0x24c64948  addiu       $a2, $a2, 0x4948
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18760));
    // 0x1cb4b0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1cb4b4: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1cb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x1cb4b8u;
}
