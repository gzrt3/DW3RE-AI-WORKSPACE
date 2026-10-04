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

// Function: FUN_001b6e08
// Address: 0x1b6e08 - 0x1b6ee8
void FUN_001b6e08_0x1b6e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6e08_0x1b6e08");
#endif

    switch (ctx->pc) {
        case 0x1b6e64u: goto label_1b6e64;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e8cu: goto label_1b6e8c;
        case 0x1b6ea0u: goto label_1b6ea0;
        case 0x1b6ebcu: goto label_1b6ebc;
        case 0x1b6eccu: goto label_1b6ecc;
        case 0x1b6ed8u: goto label_1b6ed8;
        default: break;
    }

    ctx->pc = 0x1b6e08u;

    // 0x1b6e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6e10: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
    // 0x1b6e14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e1c: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x1b6e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1b6e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6e24: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x1b6e28: 0x31aba  dsrl        $v1, $v1, 10
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 10);
    // 0x1b6e2c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1b6e2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6e30: 0x322207ff  andi        $v0, $s1, 0x7FF
    ctx->pc = 0x1b6e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
    // 0x1b6e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6e3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6E3Cu;
    {
        const bool branch_taken_0x1b6e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E3Cu;
        // 0x1b6e40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e3c) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E44u;
    // 0x1b6e44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6E44u;
    {
        const bool branch_taken_0x1b6e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e44) {
            ctx->pc = 0x1B6E50u;
            goto label_1b6e50;
        }
    }
    ctx->pc = 0x1B6E4Cu;
    // 0x1b6e4c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1b6e4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1b6e50:
    // 0x1b6e50: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x1b6e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x1b6e54: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x1b6e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x1b6e58: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x1b6e58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1b6e5c: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E64u);
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6E5Cu, 0x1B6E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E64u;
label_1b6e64:
    // 0x1b6e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e6c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6E6Cu, 0x1B6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e78: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x1b6e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6e7c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x1b6e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x1b6e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e84: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1B6E84u;
    SET_GPR_U32(ctx, 31, 0x1B6E8Cu);
    ctx->pc = 0x1B6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E84u;
    // 0x1b6e88: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1B6E84u, 0x1B6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E8Cu;
label_1b6e8c:
    // 0x1b6e8c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1b6e8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1b6e90: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1b6e90u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1b6e94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b6e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e98: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x1B6E98u;
    SET_GPR_U32(ctx, 31, 0x1B6EA0u);
    ctx->pc = 0x1B6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E98u;
    // 0x1b6e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x1B6E98u, 0x1B6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EA0u;
label_1b6ea0:
    // 0x1b6ea0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1b6ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1b6ea4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1b6ea8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6EA8u;
    {
        const bool branch_taken_0x1b6ea8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1b6ea8) {
            ctx->pc = 0x1B6EBCu;
            goto label_1b6ebc;
        }
    }
    ctx->pc = 0x1B6EB0u;
    // 0x1b6eb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eb4: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6EB4u;
    SET_GPR_U32(ctx, 31, 0x1B6EBCu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6EB4u, 0x1B6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6EBCu;
label_1b6ebc:
    // 0x1b6ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ec4: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6EC4u;
    SET_GPR_U32(ctx, 31, 0x1B6ECCu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6EC4u, 0x1B6ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ECCu;
label_1b6ecc:
    // 0x1b6ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed0: 0xc06df6c  jal         func_1B7DB0
    ctx->pc = 0x1B6ED0u;
    SET_GPR_U32(ctx, 31, 0x1B6ED8u);
    ctx->pc = 0x1B7DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7DB0u, 0x1B6ED0u, 0x1B6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6ED8u;
label_1b6ed8:
    // 0x1b6ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6ee4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x1b6ee8u;
}
