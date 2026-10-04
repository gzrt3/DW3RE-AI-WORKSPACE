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

// Function: entry_00167964
// Address: 0x167964 - 0x167984
void entry_00167964_0x167964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167964_0x167964");
#endif

    ctx->pc = 0x167964u;

    // 0x167964: 0x0  nop
    ctx->pc = 0x167964u;
    // NOP
    // 0x167968: 0x3c02bc0e  lui         $v0, 0xBC0E
    ctx->pc = 0x167968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48142 << 16));
    // 0x16796c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16796cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167978: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16797c: 0xc059b50  jal         func_166D40
    ctx->pc = 0x16797Cu;
    SET_GPR_U32(ctx, 31, 0x167984u);
    ctx->pc = 0x167980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16797Cu;
    // 0x167980: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x16797Cu, 0x167984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167984u;
}
