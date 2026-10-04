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

// Function: entry_001bae00
// Address: 0x1bae00 - 0x1bae14
void entry_001bae00_0x1bae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae00_0x1bae00");
#endif

    switch (ctx->pc) {
        case 0x1bae10u: goto label_1bae10;
        default: break;
    }

    ctx->pc = 0x1bae00u;

    // 0x1bae00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1bae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bae04: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bae08: 0xc050ed0  jal         func_143B40
    ctx->pc = 0x1BAE08u;
    SET_GPR_U32(ctx, 31, 0x1BAE10u);
    ctx->pc = 0x1BAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE08u;
    // 0x1bae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x1BAE08u, 0x1BAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE10u;
label_1bae10:
    // 0x1bae10: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->pc = 0x1bae14u;
}
