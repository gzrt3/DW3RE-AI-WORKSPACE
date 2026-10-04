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

// Function: entry_001b3a70
// Address: 0x1b3a70 - 0x1b3ac0
void entry_001b3a70_0x1b3a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3a70_0x1b3a70");
#endif

    ctx->pc = 0x1b3a70u;

    // 0x1b3a70: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1b3a74: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x1b3a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x1b3a78: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b3a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1b3a7c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1B3A7Cu;
    {
        const bool branch_taken_0x1b3a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A7Cu;
        // 0x1b3a80: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a7c) {
            ctx->pc = 0x1B3B68u;
            return;
        }
    }
    ctx->pc = 0x1B3A84u;
    // 0x1b3a84: 0x1a40001c  blez        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B3A84u;
    {
        const bool branch_taken_0x1b3a84 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A84u;
        // 0x1b3a88: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a84) {
            ctx->pc = 0x1B3AF8u;
            return;
        }
    }
    ctx->pc = 0x1B3A8Cu;
    // 0x1b3a8c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b3a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3a90: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1b3a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1b3a94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a98: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b3a9c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1b3a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1b3aa0: 0x34420fd0  ori         $v0, $v0, 0xFD0
    ctx->pc = 0x1b3aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4048);
    // 0x1b3aa4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3AA4u;
    {
        const bool branch_taken_0x1b3aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AA4u;
        // 0x1b3aa8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3aa4) {
            ctx->pc = 0x1B3AC0u;
            return;
        }
    }
    ctx->pc = 0x1B3AACu;
    // 0x1b3aac: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1b3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1b3ab0: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1b3ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1b3ab4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3ab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3AB8u;
    {
        const bool branch_taken_0x1b3ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AB8u;
        // 0x1b3abc: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ab8) {
            ctx->pc = 0x1B3AE0u;
            return;
        }
    }
    ctx->pc = 0x1B3AC0u;
}
