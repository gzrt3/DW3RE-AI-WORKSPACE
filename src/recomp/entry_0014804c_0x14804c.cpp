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

// Function: entry_0014804c
// Address: 0x14804c - 0x148080
void entry_0014804c_0x14804c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014804c_0x14804c");
#endif

    ctx->pc = 0x14804cu;

    // 0x14804c: 0x90e40094  lbu         $a0, 0x94($a3)
    ctx->pc = 0x14804cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x148050: 0x1485000b  bne         $a0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x148050u;
    {
        const bool branch_taken_0x148050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x148050) {
            ctx->pc = 0x148080u;
            return;
        }
    }
    ctx->pc = 0x148058u;
    // 0x148058: 0x90e40095  lbu         $a0, 0x95($a3)
    ctx->pc = 0x148058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 149)));
    // 0x14805c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14805Cu;
    {
        const bool branch_taken_0x14805c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14805c) {
            ctx->pc = 0x148080u;
            return;
        }
    }
    ctx->pc = 0x148064u;
    // 0x148064: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x148064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x148068: 0xa0d00005  sb          $s0, 0x5($a2)
    ctx->pc = 0x148068u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 16));
    // 0x14806c: 0xa0c00007  sb          $zero, 0x7($a2)
    ctx->pc = 0x14806cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x148070: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x148070u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x148074: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x148074u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x148078: 0xa4c0000a  sh          $zero, 0xA($a2)
    ctx->pc = 0x148078u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x14807c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x14807cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->pc = 0x148080u;
}
