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

// Function: entry_001abb64
// Address: 0x1abb64 - 0x1abbac
void entry_001abb64_0x1abb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abb64_0x1abb64");
#endif

    switch (ctx->pc) {
        case 0x1abb9cu: goto label_1abb9c;
        default: break;
    }

    ctx->pc = 0x1abb64u;

    // 0x1abb64: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1abb64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1abb68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1abb6c: 0xace54640  sw          $a1, 0x4640($a3)
    ctx->pc = 0x1abb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x374640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374640u, _value); } while (0);
    // 0x1abb70: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1abb74: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1abb78: 0x24e74640  addiu       $a3, $a3, 0x4640
    ctx->pc = 0x1abb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17984));
    // 0x1abb7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abb80: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1abb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1abb84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1abb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb88: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abb8c: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1abb90: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1abb94: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1ABB94u;
    SET_GPR_U32(ctx, 31, 0x1ABB9Cu);
    ctx->pc = 0x1ABB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB94u;
    // 0x1abb98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1ABB94u, 0x1ABB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB9Cu;
label_1abb9c:
    // 0x1abb9c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABB9Cu;
    {
        const bool branch_taken_0x1abb9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1abb9c) {
            ctx->pc = 0x1ABBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABB9Cu;
            // 0x1abba0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABBACu;
            return;
        }
    }
    ctx->pc = 0x1ABBA4u;
    // 0x1abba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1abba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x1abbacu;
}
