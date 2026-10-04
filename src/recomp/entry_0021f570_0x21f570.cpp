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

// Function: entry_0021f570
// Address: 0x21f570 - 0x21f59c
void entry_0021f570_0x21f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f570_0x21f570");
#endif

    ctx->pc = 0x21f570u;

    // 0x21f570: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21f574: 0x29230008  slti        $v1, $t1, 0x8
    ctx->pc = 0x21f574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21f578: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x21F578u;
    {
        const bool branch_taken_0x21f578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f578) {
            ctx->pc = 0x21F51Cu;
            return;
        }
    }
    ctx->pc = 0x21F580u;
    // 0x21f580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f584: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f584u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f588: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21f58c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x21f590: 0x90284910  lbu         $t0, 0x4910($at)
    ctx->pc = 0x21f590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x334910u));
    // 0x21f594: 0x24e7dab0  addiu       $a3, $a3, -0x2550
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957744));
    // 0x21f598: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x21f598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    ctx->pc = 0x21f59cu;
}
