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

// Function: FUN_001c1c00
// Address: 0x1c1c00 - 0x1c1c74
void FUN_001c1c00_0x1c1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c1c00_0x1c1c00");
#endif

    switch (ctx->pc) {
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c58u: goto label_1c1c58;
        default: break;
    }

    ctx->pc = 0x1c1c00u;

    // 0x1c1c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1c04: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1c1c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1c1c08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1c0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1c14: 0xc0550d0  jal         func_154340
    ctx->pc = 0x1C1C14u;
    SET_GPR_U32(ctx, 31, 0x1C1C1Cu);
    ctx->pc = 0x1C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C14u;
    // 0x1c1c18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154340u, 0x1C1C14u, 0x1C1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C1Cu;
label_1c1c1c:
    // 0x1c1c1c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1c1c20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c1c24: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1C24u;
    {
        const bool branch_taken_0x1c1c24 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C24u;
        // 0x1c1c28: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c24) {
            ctx->pc = 0x1C1C34u;
            goto label_1c1c34;
        }
    }
    ctx->pc = 0x1C1C2Cu;
    // 0x1c1c2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1c30:
    // 0x1c1c30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c1c34:
    // 0x1c1c34: 0xaf828928  sw          $v0, -0x76D8($gp)
    ctx->pc = 0x1c1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 2));
    // 0x1c1c38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c1c3c: 0x8f888928  lw          $t0, -0x76D8($gp)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936872)));
    // 0x1c1c40: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c1c44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1c1c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1c1c48: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1c1c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c4c: 0x24090172  addiu       $t1, $zero, 0x172
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x1c1c50: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1C1C50u;
    SET_GPR_U32(ctx, 31, 0x1C1C58u);
    ctx->pc = 0x1C1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C50u;
    // 0x1c1c54: 0x340affe1  ori         $t2, $zero, 0xFFE1 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65505);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1C50u, 0x1C1C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C58u;
label_1c1c58:
    // 0x1c1c58: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c1c5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c60: 0x2484d840  addiu       $a0, $a0, -0x27C0
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    // 0x1c1c64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1c68: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c1c6c: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1C74u);
    ctx->pc = 0x1C1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C6Cu;
    // 0x1c1c70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1C6Cu, 0x1C1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C74u;
}
