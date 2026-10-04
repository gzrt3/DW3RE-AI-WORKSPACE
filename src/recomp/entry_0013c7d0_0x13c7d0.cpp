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

// Function: entry_0013c7d0
// Address: 0x13c7d0 - 0x13c7f8
void entry_0013c7d0_0x13c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c7d0_0x13c7d0");
#endif

    ctx->pc = 0x13c7d0u;

    // 0x13c7d0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x13c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13c7d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c7d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C7D8u;
    {
        const bool branch_taken_0x13c7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7D8u;
        // 0x13c7dc: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7d8) {
            ctx->pc = 0x13C7F8u;
            return;
        }
    }
    ctx->pc = 0x13C7E0u;
    // 0x13c7e0: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x13c7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c7e4: 0x920302e4  lbu         $v1, 0x2E4($s0)
    ctx->pc = 0x13c7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x13c7e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13c7ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13c7f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13C7F0u;
    {
        const bool branch_taken_0x13c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F0u;
        // 0x13c7f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f0) {
            ctx->pc = 0x13C810u;
            return;
        }
    }
    ctx->pc = 0x13C7F8u;
}
