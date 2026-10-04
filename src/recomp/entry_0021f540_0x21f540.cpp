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

// Function: entry_0021f540
// Address: 0x21f540 - 0x21f570
void entry_0021f540_0x21f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f540_0x21f540");
#endif

    ctx->pc = 0x21f540u;

    // 0x21f540: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21f544: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x21f548: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x21f54c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f550: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x21f554: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f554u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f558: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F558u;
    {
        const bool branch_taken_0x21f558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f558) {
            ctx->pc = 0x21F570u;
            return;
        }
    }
    ctx->pc = 0x21F560u;
    // 0x21f560: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21f564: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x21f564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21f568: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21F568u;
    {
        const bool branch_taken_0x21f568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F568u;
        // 0x21f56c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f568) {
            ctx->pc = 0x21F528u;
            return;
        }
    }
    ctx->pc = 0x21F570u;
}
