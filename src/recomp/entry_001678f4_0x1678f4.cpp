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

// Function: entry_001678f4
// Address: 0x1678f4 - 0x16791c
void entry_001678f4_0x1678f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001678f4_0x1678f4");
#endif

    switch (ctx->pc) {
        case 0x167914u: goto label_167914;
        default: break;
    }

    ctx->pc = 0x1678f4u;

    // 0x1678f4: 0x0  nop
    ctx->pc = 0x1678f4u;
    // NOP
    // 0x1678f8: 0x3c023c0d  lui         $v0, 0x3C0D
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15373 << 16));
    // 0x1678fc: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
    // 0x167900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167904: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167908: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x167908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16790c: 0xc059b50  jal         func_166D40
    ctx->pc = 0x16790Cu;
    SET_GPR_U32(ctx, 31, 0x167914u);
    ctx->pc = 0x167910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16790Cu;
    // 0x167910: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x16790Cu, 0x167914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167914u;
label_167914:
    // 0x167914: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x167914u;
    {
        const bool branch_taken_0x167914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167914u;
        // 0x167918: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167914) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x16791Cu;
}
