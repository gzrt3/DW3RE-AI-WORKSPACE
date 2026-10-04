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

// Function: entry_00167a5c
// Address: 0x167a5c - 0x167a84
void entry_00167a5c_0x167a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167a5c_0x167a5c");
#endif

    switch (ctx->pc) {
        case 0x167a7cu: goto label_167a7c;
        default: break;
    }

    ctx->pc = 0x167a5cu;

    // 0x167a5c: 0x0  nop
    ctx->pc = 0x167a5cu;
    // NOP
    // 0x167a60: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x167a64: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167a70: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x167a74: 0xc059b50  jal         func_166D40
    ctx->pc = 0x167A74u;
    SET_GPR_U32(ctx, 31, 0x167A7Cu);
    ctx->pc = 0x167A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A74u;
    // 0x167a78: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x167A74u, 0x167A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A7Cu;
label_167a7c:
    // 0x167a7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167A7Cu;
    {
        const bool branch_taken_0x167a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a7c) {
            ctx->pc = 0x167AA4u;
            return;
        }
    }
    ctx->pc = 0x167A84u;
}
