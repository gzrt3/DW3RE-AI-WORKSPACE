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

// Function: entry_00157950
// Address: 0x157950 - 0x157990
void entry_00157950_0x157950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157950_0x157950");
#endif

    ctx->pc = 0x157950u;

    // 0x157950: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x157950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x157954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157958: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x15795c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x157960: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x157960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x157964: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x157964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x157968: 0x0  nop
    ctx->pc = 0x157968u;
    // NOP
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
    // 0x157970: 0x1010  mfhi        $v0
    ctx->pc = 0x157970u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x157974: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x157978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15797c: 0x3e00008  jr          $ra
    ctx->pc = 0x15797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15797Cu;
        // 0x157980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157984u;
    // 0x157984: 0x0  nop
    ctx->pc = 0x157984u;
    // NOP
    // 0x157988: 0x0  nop
    ctx->pc = 0x157988u;
    // NOP
    // 0x15798c: 0x0  nop
    ctx->pc = 0x15798cu;
    // NOP
    ctx->pc = 0x157990u;
}
