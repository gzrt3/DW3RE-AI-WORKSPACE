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

// Function: entry_0017fe4c
// Address: 0x17fe4c - 0x17fe90
void entry_0017fe4c_0x17fe4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe4c_0x17fe4c");
#endif

    ctx->pc = 0x17fe4cu;

    // 0x17fe4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17fe50: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x17fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x17fe54: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fe58: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17fe5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17fe60: 0x246392c4  addiu       $v1, $v1, -0x6D3C
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939332));
    // 0x17fe64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fe68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17fe6c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe70: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x17fe74: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x17fe78: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17fe7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fe80: 0xaf83879c  sw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 3));
    // 0x17fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE8Cu;
    // 0x17fe8c: 0x0  nop
    ctx->pc = 0x17fe8cu;
    // NOP
    ctx->pc = 0x17fe90u;
}
