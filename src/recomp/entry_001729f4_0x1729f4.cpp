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

// Function: entry_001729f4
// Address: 0x1729f4 - 0x172a2c
void entry_001729f4_0x1729f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001729f4_0x1729f4");
#endif

    ctx->pc = 0x1729f4u;

    // 0x1729f4: 0x3c05bf26  lui         $a1, 0xBF26
    ctx->pc = 0x1729f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48934 << 16));
    // 0x1729f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1729f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1729fc: 0x94860d72  lhu         $a2, 0xD72($a0)
    ctx->pc = 0x1729fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
    // 0x172a00: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x172a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x172a04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172a08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a0c: 0x34a36666  ori         $v1, $a1, 0x6666
    ctx->pc = 0x172a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x172a10: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x172a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x172a14: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x172a18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x172a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a20: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x172a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x172a24: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x172A24u;
    {
        const bool branch_taken_0x172a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A24u;
        // 0x172a28: 0xa4830d72  sh          $v1, 0xD72($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3442), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a24) {
            ctx->pc = 0x172B34u;
            return;
        }
    }
    ctx->pc = 0x172A2Cu;
}
