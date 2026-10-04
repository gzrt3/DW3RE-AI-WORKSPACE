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

// Function: entry_00220bfc
// Address: 0x220bfc - 0x220c18
void entry_00220bfc_0x220bfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220bfc_0x220bfc");
#endif

    ctx->pc = 0x220bfcu;

    // 0x220bfc: 0x0  nop
    ctx->pc = 0x220bfcu;
    // NOP
    // 0x220c00: 0x9523000a  lhu         $v1, 0xA($t1)
    ctx->pc = 0x220c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x220c04: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220C04u;
    {
        const bool branch_taken_0x220c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x28810029  slti        $at, $a0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c04) {
            ctx->pc = 0x220C2Cu;
            return;
        }
    }
    ctx->pc = 0x220C0Cu;
    // 0x220c0c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220C0Cu;
    {
        const bool branch_taken_0x220c0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x220C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C0Cu;
        // 0x220c10: 0xa525000a  sh          $a1, 0xA($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c0c) {
            ctx->pc = 0x220C18u;
            return;
        }
    }
    ctx->pc = 0x220C14u;
    // 0x220c14: 0xa1280018  sb          $t0, 0x18($t1)
    ctx->pc = 0x220c14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 24), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x220c18u;
}
