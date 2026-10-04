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

// Function: entry_00239ad8
// Address: 0x239ad8 - 0x239af8
void entry_00239ad8_0x239ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239ad8_0x239ad8");
#endif

    ctx->pc = 0x239ad8u;

    // 0x239ad8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x239adc: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x239adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x239ae0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE0u;
        // 0x239ae4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239AF8u;
            return;
        }
    }
    ctx->pc = 0x239AE8u;
    // 0x239ae8: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x239aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239AECu;
    {
        const bool branch_taken_0x239aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AECu;
        // 0x239af0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aec) {
            ctx->pc = 0x239AFCu;
            return;
        }
    }
    ctx->pc = 0x239AF4u;
    // 0x239af4: 0x0  nop
    ctx->pc = 0x239af4u;
    // NOP
    ctx->pc = 0x239af8u;
}
