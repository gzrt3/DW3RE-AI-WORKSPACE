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

// Function: entry_001a1f8c
// Address: 0x1a1f8c - 0x1a1fcc
void entry_001a1f8c_0x1a1f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1f8c_0x1a1f8c");
#endif

    ctx->pc = 0x1a1f8cu;

    // 0x1a1f8c: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1a1f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a1f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1F90u;
    {
        const bool branch_taken_0x1a1f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F90u;
        // 0x1a1f94: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f90) {
            ctx->pc = 0x1A1FCCu;
            return;
        }
    }
    ctx->pc = 0x1A1F98u;
    // 0x1a1f98: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a1f9c: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x1a1f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a1fa0: 0x24425978  addiu       $v0, $v0, 0x5978
    ctx->pc = 0x1a1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22904));
    // 0x1a1fa4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x1a1fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a1fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a1fac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1fb0: 0xae450048  sw          $a1, 0x48($s2)
    ctx->pc = 0x1a1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 5));
    // 0x1a1fb4: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a1fb8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1a1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1a1fbc: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x1a1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
    // 0x1a1fc0: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1a1fc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1fc4: 0xac750010  sw          $s5, 0x10($v1)
    ctx->pc = 0x1a1fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 21));
    // 0x1a1fc8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1a1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    ctx->pc = 0x1a1fccu;
}
