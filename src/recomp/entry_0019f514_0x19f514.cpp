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

// Function: entry_0019f514
// Address: 0x19f514 - 0x19f550
void entry_0019f514_0x19f514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f514_0x19f514");
#endif

    ctx->pc = 0x19f514u;

    // 0x19f514: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x19f514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x19f518: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x19f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x19f51c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f51cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f520: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x19f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19f524: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19f528: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19f52c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x19f530: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x19f534: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f538: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f53c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f540: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f548: 0x3e00008  jr          $ra
    ctx->pc = 0x19F548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F548u;
        // 0x19f54c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F550u;
}
