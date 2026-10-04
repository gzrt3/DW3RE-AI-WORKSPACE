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

// Function: entry_001701a4
// Address: 0x1701a4 - 0x170204
void entry_001701a4_0x1701a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001701a4_0x1701a4");
#endif

    ctx->pc = 0x1701a4u;

label_1701a4:
    // 0x1701a4: 0x894021  addu        $t0, $a0, $t1
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1701a8: 0x2093821  addu        $a3, $s0, $t1
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1701ac: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x1701acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1701b0: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1701b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1701b4: 0x29220004  slti        $v0, $t1, 0x4
    ctx->pc = 0x1701b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1701b8: 0xa0e30015  sb          $v1, 0x15($a3)
    ctx->pc = 0x1701b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701bc: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x1701bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x1701c0: 0xa0e30016  sb          $v1, 0x16($a3)
    ctx->pc = 0x1701c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701c4: 0x9103000a  lbu         $v1, 0xA($t0)
    ctx->pc = 0x1701c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1701c8: 0xa0e30017  sb          $v1, 0x17($a3)
    ctx->pc = 0x1701c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701cc: 0x9103000b  lbu         $v1, 0xB($t0)
    ctx->pc = 0x1701ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1701d0: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x1701d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701d4: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x1701d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1701d8: 0xa0e30019  sb          $v1, 0x19($a3)
    ctx->pc = 0x1701d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701dc: 0x9103000d  lbu         $v1, 0xD($t0)
    ctx->pc = 0x1701dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x1701e0: 0xa0e3001a  sb          $v1, 0x1A($a3)
    ctx->pc = 0x1701e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701e4: 0x9103000e  lbu         $v1, 0xE($t0)
    ctx->pc = 0x1701e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x1701e8: 0xa0e3001b  sb          $v1, 0x1B($a3)
    ctx->pc = 0x1701e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 27), (uint8_t)GPR_U32(ctx, 3));
    // 0x1701ec: 0x9103000f  lbu         $v1, 0xF($t0)
    ctx->pc = 0x1701ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 15)));
    // 0x1701f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1701F0u;
    {
        const bool branch_taken_0x1701f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1701F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1701F0u;
        // 0x1701f4: 0xa0e3001c  sb          $v1, 0x1C($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1701f0) {
            ctx->pc = 0x1701A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1701a4;
        }
    }
    ctx->pc = 0x1701F8u;
    // 0x1701f8: 0x2921000c  slti        $at, $t1, 0xC
    ctx->pc = 0x1701f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1701fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1701FCu;
    {
        const bool branch_taken_0x1701fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1701fc) {
            ctx->pc = 0x170224u;
            return;
        }
    }
    ctx->pc = 0x170204u;
}
