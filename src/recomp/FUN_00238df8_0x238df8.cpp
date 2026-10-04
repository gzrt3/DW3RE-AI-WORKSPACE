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

// Function: FUN_00238df8
// Address: 0x238df8 - 0x238f40
void FUN_00238df8_0x238df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238df8_0x238df8");
#endif

    switch (ctx->pc) {
        case 0x238e28u: goto label_238e28;
        case 0x238e74u: goto label_238e74;
        case 0x238ea0u: goto label_238ea0;
        case 0x238ec0u: goto label_238ec0;
        case 0x238f08u: goto label_238f08;
        default: break;
    }

    ctx->pc = 0x238df8u;

    // 0x238df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238e00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238e10: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x238e10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x238e14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x238e18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x238e1c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x238e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x238e20: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x238E20u;
    SET_GPR_U32(ctx, 31, 0x238E28u);
    ctx->pc = 0x238E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E20u;
    // 0x238e24: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x238E20u, 0x238E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E28u;
label_238e28:
    // 0x238e28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238e2c: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x238e30: 0x24540828  addiu       $s4, $v0, 0x828
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x238e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e38: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x290830u));
    // 0x238e3c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x238e40: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x238e44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238e48: 0x2903e  dsrl32      $s2, $v0, 0
    ctx->pc = 0x238e48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x238e4c: 0x250802f  dsubu       $s0, $s2, $s0
    ctx->pc = 0x238e4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
    // 0x238e50: 0x66100fef  daddiu      $s0, $s0, 0xFEF
    ctx->pc = 0x238e50u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4079);
    // 0x238e54: 0x10833a  dsrl        $s0, $s0, 12
    ctx->pc = 0x238e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 12);
    // 0x238e58: 0x6610ffff  daddiu      $s0, $s0, -0x1
    ctx->pc = 0x238e58u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
    // 0x238e5c: 0x108338  dsll        $s0, $s0, 12
    ctx->pc = 0x238e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 12);
    // 0x238e60: 0x2a021000  slti        $v0, $s0, 0x1000
    ctx->pc = 0x238e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x238e64: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x238E64u;
    {
        const bool branch_taken_0x238e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E64u;
        // 0x238e68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e64) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E6Cu;
    // 0x238e6c: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x238E6Cu;
    SET_GPR_U32(ctx, 31, 0x238E74u);
    ctx->pc = 0x238E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E6Cu;
    // 0x238e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x238E6Cu, 0x238E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238E74u;
label_238e74:
    // 0x238e74: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x238e78: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x238e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x238e7c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238e7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x238e80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x238e84: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x238E84u;
    {
        const bool branch_taken_0x238e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238E84u;
        // 0x238e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e84) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238E8Cu;
    // 0x238e8c: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x238e90: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x238e90u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x238e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e98: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x238E98u;
    SET_GPR_U32(ctx, 31, 0x238EA0u);
    ctx->pc = 0x238E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238E98u;
    // 0x238e9c: 0x132823  negu        $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x238E98u, 0x238EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EA0u;
label_238ea0:
    // 0x238ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ea4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x238ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x238ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238eb0: 0x14460017  bne         $v0, $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x238EB0u;
    {
        const bool branch_taken_0x238eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x238EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EB0u;
        // 0x238eb4: 0x24670c58  addiu       $a3, $v1, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238eb0) {
            ctx->pc = 0x238F10u;
            goto label_238f10;
        }
    }
    ctx->pc = 0x238EB8u;
    // 0x238eb8: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x238EB8u;
    SET_GPR_U32(ctx, 31, 0x238EC0u);
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x238EB8u, 0x238EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238EC0u;
label_238ec0:
    // 0x238ec0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x238ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x238ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ecc: 0xe69023  subu        $s2, $a3, $a2
    ctx->pc = 0x238eccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x238ed0: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x238ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x238ed4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x238ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x238ed8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x238ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238edc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x238edcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x238ee0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x238EE0u;
    {
        const bool branch_taken_0x238ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x238EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238EE0u;
        // 0x238ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ee0) {
            ctx->pc = 0x238F00u;
            goto label_238f00;
        }
    }
    ctx->pc = 0x238EE8u;
    // 0x238ee8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238eec: 0x8c430c40  lw          $v1, 0xC40($v0)
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x290C40u));
    // 0x238ef0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238ef4: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x238ef8: 0xac430c58  sw          $v1, 0xC58($v0)
    ctx->pc = 0x238ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3160), GPR_U32(ctx, 3));
    // 0x238efc: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x238efcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_238f00:
    // 0x238f00: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x238F00u;
    SET_GPR_U32(ctx, 31, 0x238F08u);
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x238F00u, 0x238F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F08u;
label_238f08:
    // 0x238f08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x238F08u;
    {
        const bool branch_taken_0x238f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f08) {
            ctx->pc = 0x238F44u;
            return;
        }
    }
    ctx->pc = 0x238F10u;
label_238f10:
    // 0x238f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238f14: 0x250182f  dsubu       $v1, $s2, $s0
    ctx->pc = 0x238f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) - GPR_U64(ctx, 16));
    // 0x238f18: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x238f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238f20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x238f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x238f24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x238f24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x238f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x238f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x238f30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x238f34: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x238f38: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x238F38u;
    SET_GPR_U32(ctx, 31, 0x238F40u);
    ctx->pc = 0x238F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238F38u;
    // 0x238f3c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x238F38u, 0x238F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F40u;
}
