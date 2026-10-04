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

// Function: entry_001713e8
// Address: 0x1713e8 - 0x171410
void entry_001713e8_0x1713e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001713e8_0x1713e8");
#endif

    ctx->pc = 0x1713e8u;

    // 0x1713e8: 0x94871132  lhu         $a3, 0x1132($a0)
    ctx->pc = 0x1713e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1713ec: 0x3c063ecc  lui         $a2, 0x3ECC
    ctx->pc = 0x1713ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16076 << 16));
    // 0x1713f0: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1713f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1713f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1713f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713f8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1713f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1713fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171404: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x171408: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x171408u;
    {
        const bool branch_taken_0x171408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171408u;
        // 0x17140c: 0xa4861132  sh          $a2, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171408) {
            ctx->pc = 0x1714C4u;
            return;
        }
    }
    ctx->pc = 0x171410u;
}
