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

// Function: entry_00164acc
// Address: 0x164acc - 0x164b04
void entry_00164acc_0x164acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164acc_0x164acc");
#endif

    ctx->pc = 0x164accu;

    // 0x164acc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164accu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x164ad0: 0x14680013  bne         $v1, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x164AD0u;
    {
        const bool branch_taken_0x164ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164ad0) {
            ctx->pc = 0x164B20u;
            return;
        }
    }
    ctx->pc = 0x164AD8u;
    // 0x164ad8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x164adc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x164ADCu;
    {
        const bool branch_taken_0x164adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164adc) {
            ctx->pc = 0x164B20u;
            return;
        }
    }
    ctx->pc = 0x164AE4u;
    // 0x164ae4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
    // 0x164ae8: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x164AE8u;
    {
        const bool branch_taken_0x164ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164ae8) {
            ctx->pc = 0x164B04u;
            return;
        }
    }
    ctx->pc = 0x164AF0u;
    // 0x164af0: 0xa1460097  sb          $a2, 0x97($t2)
    ctx->pc = 0x164af0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 151), (uint8_t)GPR_U32(ctx, 6));
    // 0x164af4: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164af8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x164afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164AFCu;
    {
        const bool branch_taken_0x164afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AFCu;
        // 0x164b00: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164afc) {
            ctx->pc = 0x164B20u;
            return;
        }
    }
    ctx->pc = 0x164B04u;
}
