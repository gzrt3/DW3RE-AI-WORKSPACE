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

// Function: entry_0019ace0
// Address: 0x19ace0 - 0x19ad20
void entry_0019ace0_0x19ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ace0_0x19ace0");
#endif

    ctx->pc = 0x19ace0u;

    // 0x19ace0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ace4: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19ace8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19acec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19acecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x19acf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19acf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19acf8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19acfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19ad04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ad04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x19ad0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19ad10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ad10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ad14: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD1Cu;
    // 0x19ad1c: 0x0  nop
    ctx->pc = 0x19ad1cu;
    // NOP
    ctx->pc = 0x19ad20u;
}
