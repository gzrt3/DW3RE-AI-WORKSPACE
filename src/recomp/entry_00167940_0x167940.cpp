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

// Function: entry_00167940
// Address: 0x167940 - 0x167964
void entry_00167940_0x167940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167940_0x167940");
#endif

    switch (ctx->pc) {
        case 0x16795cu: goto label_16795c;
        default: break;
    }

    ctx->pc = 0x167940u;

    // 0x167940: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x167944: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x167944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x167948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16794c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16794cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167950: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x167954: 0xc059b50  jal         func_166D40
    ctx->pc = 0x167954u;
    SET_GPR_U32(ctx, 31, 0x16795Cu);
    ctx->pc = 0x167958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167954u;
    // 0x167958: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x167954u, 0x16795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16795Cu;
label_16795c:
    // 0x16795c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16795Cu;
    {
        const bool branch_taken_0x16795c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16795c) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x167964u;
}
