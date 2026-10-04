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

// Function: FUN_001abb40
// Address: 0x1abb40 - 0x1abbb4
void FUN_001abb40_0x1abb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abb40_0x1abb40");
#endif

    switch (ctx->pc) {
        case 0x1abb9cu: goto label_1abb9c;
        default: break;
    }

    ctx->pc = 0x1abb40u;

    // 0x1abb40: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1abb44: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abb48: 0x8c625c10  lw          $v0, 0x5C10($v1)
    ctx->pc = 0x1abb48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285C10u));
    // 0x1abb4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1abb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abb54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABB54u;
    {
        const bool branch_taken_0x1abb54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1ABB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB54u;
        // 0x1abb58: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb54) {
            ctx->pc = 0x1ABB64u;
            goto label_1abb64;
        }
    }
    ctx->pc = 0x1ABB5Cu;
    // 0x1abb5c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1ABB5Cu;
    {
        const bool branch_taken_0x1abb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB5Cu;
        // 0x1abb60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb5c) {
            ctx->pc = 0x1ABBACu;
            goto label_1abbac;
        }
    }
    ctx->pc = 0x1ABB64u;
label_1abb64:
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
            goto label_1abbac;
        }
    }
    ctx->pc = 0x1ABBA4u;
    // 0x1abba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1abba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1abba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1abba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1abbac:
    // 0x1abbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abbb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1abbb4u;
}
