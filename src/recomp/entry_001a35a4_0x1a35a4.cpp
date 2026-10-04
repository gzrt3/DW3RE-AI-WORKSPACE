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

// Function: entry_001a35a4
// Address: 0x1a35a4 - 0x1a3618
void entry_001a35a4_0x1a35a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a35a4_0x1a35a4");
#endif

    switch (ctx->pc) {
        case 0x1a35acu: goto label_1a35ac;
        case 0x1a35b4u: goto label_1a35b4;
        default: break;
    }

    ctx->pc = 0x1a35a4u;

    // 0x1a35a4: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1A35A4u;
    SET_GPR_U32(ctx, 31, 0x1A35ACu);
    ctx->pc = 0x1A35A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35A4u;
    // 0x1a35a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1A35A4u, 0x1A35ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35ACu;
label_1a35ac:
    // 0x1a35ac: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A35ACu;
    SET_GPR_U32(ctx, 31, 0x1A35B4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A35ACu, 0x1A35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35B4u;
label_1a35b4:
    // 0x1a35b4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a35b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a35b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a35b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a35bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a35bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a35c0: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x1a35c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x1a35c4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x1a35c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1a35c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a35cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a35ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a35d0: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1a35d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x1a35d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a35d4u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x1a35d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a35dc: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x1a35dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x1a35e0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1a35e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a35e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a35e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a35e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a35ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a35ecu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x1a35f0: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A35F0u;
    ctx->pc = 0x1A35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35F0u;
    // 0x1a35f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A35F8u;
    // 0x1a35f8: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1a35fc: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x1a35fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1a3600: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a3600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1a3604: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a3604u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1a3608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a360c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1a360cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1a3610: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3618u;
}
