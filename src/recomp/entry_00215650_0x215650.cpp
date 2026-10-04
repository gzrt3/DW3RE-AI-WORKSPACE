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

// Function: entry_00215650
// Address: 0x215650 - 0x2156b0
void entry_00215650_0x215650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215650_0x215650");
#endif

    ctx->pc = 0x215650u;

    // 0x215650: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x215654: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215658: 0xac23791c  sw          $v1, 0x791C($at)
    ctx->pc = 0x215658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x21565c: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x215660: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215664: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
    // 0x215668: 0xac267920  sw          $a2, 0x7920($at)
    ctx->pc = 0x215668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587920u, _value); } while (0);
    // 0x21566c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215670: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215674: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215678: 0xac267928  sw          $a2, 0x7928($at)
    ctx->pc = 0x215678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587928u, _value); } while (0);
    // 0x21567c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215680: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x215680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x215684: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x215684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215688: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21568c: 0xac25792c  sw          $a1, 0x792C($at)
    ctx->pc = 0x21568cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215690: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215694: 0xac237910  sw          $v1, 0x7910($at)
    ctx->pc = 0x215694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x215698: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21569c: 0xac237914  sw          $v1, 0x7914($at)
    ctx->pc = 0x21569cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2156a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156a4: 0xac237918  sw          $v1, 0x7918($at)
    ctx->pc = 0x2156a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587918u, _value); } while (0);
    // 0x2156a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2156A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2156A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2156B0u;
}
