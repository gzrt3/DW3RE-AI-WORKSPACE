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

// Function: entry_001678d0
// Address: 0x1678d0 - 0x1678f4
void entry_001678d0_0x1678d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001678d0_0x1678d0");
#endif

    switch (ctx->pc) {
        case 0x1678ecu: goto label_1678ec;
        default: break;
    }

    ctx->pc = 0x1678d0u;

    // 0x1678d0: 0x3c02bc0d  lui         $v0, 0xBC0D
    ctx->pc = 0x1678d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48141 << 16));
    // 0x1678d4: 0x34428c2f  ori         $v0, $v0, 0x8C2F
    ctx->pc = 0x1678d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35887);
    // 0x1678d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1678d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1678dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1678dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1678e0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1678e4: 0xc059b50  jal         func_166D40
    ctx->pc = 0x1678E4u;
    SET_GPR_U32(ctx, 31, 0x1678ECu);
    ctx->pc = 0x1678E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678E4u;
    // 0x1678e8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166D40u, 0x1678E4u, 0x1678ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1678ECu;
label_1678ec:
    // 0x1678ec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1678ECu;
    {
        const bool branch_taken_0x1678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678ECu;
        // 0x1678f0: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678ec) {
            ctx->pc = 0x167984u;
            return;
        }
    }
    ctx->pc = 0x1678F4u;
}
