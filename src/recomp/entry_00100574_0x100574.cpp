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

// Function: entry_00100574
// Address: 0x100574 - 0x1005b0
void entry_00100574_0x100574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100574_0x100574");
#endif

    ctx->pc = 0x100574u;

    // 0x100574: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x100574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x100578: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x100578u;
    {
        const bool branch_taken_0x100578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100578) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x100580u;
    // 0x100580: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x100580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100584: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100588: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x100588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x10058c: 0x24a5e750  addiu       $a1, $a1, -0x18B0
    ctx->pc = 0x10058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960976));
    // 0x100590: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100598: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10059c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1005a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1005a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1005a8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1005A8u;
    SET_GPR_U32(ctx, 31, 0x1005B0u);
    ctx->pc = 0x1005ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005A8u;
    // 0x1005ac: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1005A8u, 0x1005B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005B0u;
}
