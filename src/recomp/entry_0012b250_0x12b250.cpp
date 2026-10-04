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

// Function: entry_0012b250
// Address: 0x12b250 - 0x12b268
void entry_0012b250_0x12b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b250_0x12b250");
#endif

    ctx->pc = 0x12b250u;

    // 0x12b250: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b254: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B254u;
    {
        const bool branch_taken_0x12b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B254u;
        // 0x12b258: 0x671023  subu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b254) {
            ctx->pc = 0x12B268u;
            return;
        }
    }
    ctx->pc = 0x12B25Cu;
    // 0x12b25c: 0x920202fa  lbu         $v0, 0x2FA($s0)
    ctx->pc = 0x12b25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12b260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12B260u;
    {
        const bool branch_taken_0x12b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B260u;
        // 0x12b264: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b260) {
            ctx->pc = 0x12B290u;
            return;
        }
    }
    ctx->pc = 0x12B268u;
}
