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

// Function: entry_001406a8
// Address: 0x1406a8 - 0x1406e8
void entry_001406a8_0x1406a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001406a8_0x1406a8");
#endif

    ctx->pc = 0x1406a8u;

    // 0x1406a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1406ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1406b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1406b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1406b4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1406B4u;
    {
        const bool branch_taken_0x1406b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1406b4) {
            ctx->pc = 0x14072Cu;
            return;
        }
    }
    ctx->pc = 0x1406BCu;
    // 0x1406bc: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1406c0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1406c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1406c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1406C4u;
    {
        const bool branch_taken_0x1406c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406c4) {
            ctx->pc = 0x14072Cu;
            return;
        }
    }
    ctx->pc = 0x1406CCu;
    // 0x1406cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1406d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1406D0u;
    {
        const bool branch_taken_0x1406d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1406d0) {
            ctx->pc = 0x1406E8u;
            return;
        }
    }
    ctx->pc = 0x1406D8u;
    // 0x1406d8: 0x8043021f  lb          $v1, 0x21F($v0)
    ctx->pc = 0x1406d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    // 0x1406dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1406dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1406e0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1406E0u;
    {
        const bool branch_taken_0x1406e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1406e0) {
            ctx->pc = 0x14072Cu;
            return;
        }
    }
    ctx->pc = 0x1406E8u;
}
