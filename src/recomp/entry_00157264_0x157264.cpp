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

// Function: entry_00157264
// Address: 0x157264 - 0x157290
void entry_00157264_0x157264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157264_0x157264");
#endif

    ctx->pc = 0x157264u;

    // 0x157264: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x157264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x157268: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x157268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15726c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x15726Cu;
    {
        const bool branch_taken_0x15726c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x157270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15726Cu;
        // 0x157270: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15726c) {
            ctx->pc = 0x157374u;
            return;
        }
    }
    ctx->pc = 0x157274u;
    // 0x157274: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x157274u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x157278: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x157278u;
    {
        const bool branch_taken_0x157278 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x15727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157278u;
        // 0x15727c: 0x246afff8  addiu       $t2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157278) {
            ctx->pc = 0x15732Cu;
            return;
        }
    }
    ctx->pc = 0x157280u;
    // 0x157280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x157280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157284: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157288: 0xed2021  addu        $a0, $a3, $t5
    ctx->pc = 0x157288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x15728c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x15728cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    ctx->pc = 0x157290u;
}
