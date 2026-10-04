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

// Function: entry_001b2cb8
// Address: 0x1b2cb8 - 0x1b2ce8
void entry_001b2cb8_0x1b2cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2cb8_0x1b2cb8");
#endif

    ctx->pc = 0x1b2cb8u;

    // 0x1b2cb8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b2cbc: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
    // 0x1b2cc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2cc4: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x1b2cc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x1b2cc8: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1b2ccc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B2CCCu;
    {
        const bool branch_taken_0x1b2ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CCCu;
        // 0x1b2cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ccc) {
            ctx->pc = 0x1B2D0Cu;
            return;
        }
    }
    ctx->pc = 0x1B2CD4u;
    // 0x1b2cd4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2CD4u;
    {
        const bool branch_taken_0x1b2cd4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CD4u;
        // 0x1b2cd8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cd4) {
            ctx->pc = 0x1B2CE8u;
            return;
        }
    }
    ctx->pc = 0x1B2CDCu;
    // 0x1b2cdc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2ce0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2CE0u;
    {
        const bool branch_taken_0x1b2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CE0u;
        // 0x1b2ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ce0) {
            ctx->pc = 0x1B2D0Cu;
            return;
        }
    }
    ctx->pc = 0x1B2CE8u;
}
