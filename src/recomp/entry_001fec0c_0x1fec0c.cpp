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

// Function: entry_001fec0c
// Address: 0x1fec0c - 0x1fec2c
void entry_001fec0c_0x1fec0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec0c_0x1fec0c");
#endif

    ctx->pc = 0x1fec0cu;

    // 0x1fec0c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x1fec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1fec10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fec14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1fec14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fec18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEC18u;
    {
        const bool branch_taken_0x1fec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC18u;
        // 0x1fec1c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec18) {
            ctx->pc = 0x1FEC2Cu;
            return;
        }
    }
    ctx->pc = 0x1FEC20u;
    // 0x1fec20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fec24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FEC24u;
    {
        const bool branch_taken_0x1fec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC24u;
        // 0x1fec28: 0xaf839090  sw          $v1, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec24) {
            ctx->pc = 0x1FEC50u;
            return;
        }
    }
    ctx->pc = 0x1FEC2Cu;
}
