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

// Function: entry_002325f8
// Address: 0x2325f8 - 0x232678
void entry_002325f8_0x2325f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002325f8_0x2325f8");
#endif

    switch (ctx->pc) {
        case 0x23261cu: goto label_23261c;
        case 0x232658u: goto label_232658;
        default: break;
    }

    ctx->pc = 0x2325f8u;

    // 0x2325f8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2325fc: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x2325fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    // 0x232600: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x232600u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x232604: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x232608: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x232608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23260c: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x23260cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x232610: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232614: 0xc08c926  jal         func_232498
    ctx->pc = 0x232614u;
    SET_GPR_U32(ctx, 31, 0x23261Cu);
    ctx->pc = 0x232618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232614u;
    // 0x232618: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232498u, 0x232614u, 0x23261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23261Cu;
label_23261c:
    // 0x23261c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x232620: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x232624: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x232628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23262c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x232630: 0xd03024  and         $a2, $a2, $s0
    ctx->pc = 0x232630u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x232634: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x232634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x232638: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x23263c: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x23263cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x232640: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x232640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x232644: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x232644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x232648: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x232648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23264c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23264cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x232650: 0xc08c90c  jal         func_232430
    ctx->pc = 0x232650u;
    SET_GPR_U32(ctx, 31, 0x232658u);
    ctx->pc = 0x232654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232650u;
    // 0x232654: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232430u, 0x232650u, 0x232658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232658u;
label_232658:
    // 0x232658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23266c: 0x3e00008  jr          $ra
    ctx->pc = 0x23266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23266Cu;
        // 0x232670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232674u;
    // 0x232674: 0x0  nop
    ctx->pc = 0x232674u;
    // NOP
    ctx->pc = 0x232678u;
}
