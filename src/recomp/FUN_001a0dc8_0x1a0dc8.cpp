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

// Function: FUN_001a0dc8
// Address: 0x1a0dc8 - 0x1a0eb4
void FUN_001a0dc8_0x1a0dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0dc8_0x1a0dc8");
#endif

    switch (ctx->pc) {
        case 0x1a0e28u: goto label_1a0e28;
        default: break;
    }

    ctx->pc = 0x1a0dc8u;

    // 0x1a0dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0dcc: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a0dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a0dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0dd4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0dd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0ddc: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a0ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1a0de0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a0de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0de8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a0de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0dec: 0x264408c0  addiu       $a0, $s2, 0x8C0
    ctx->pc = 0x1a0decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2240));
    // 0x1a0df0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a0df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a0df4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0df4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0df8: 0x8e180810  lw          $t8, 0x810($s0)
    ctx->pc = 0x1a0df8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1a0dfc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a0dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a0e00: 0x3051818  mult        $v1, $t8, $a1
    ctx->pc = 0x1a0e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0e04: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1a0e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a0e08: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a0e0c: 0x8cac06bc  lw          $t4, 0x6BC($a1)
    ctx->pc = 0x1a0e0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1724)));
    // 0x1a0e10: 0x19800025  blez        $t4, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A0E10u;
    {
        const bool branch_taken_0x1a0e10 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1A0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E10u;
        // 0x1a0e14: 0x835825  or          $t3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e10) {
            ctx->pc = 0x1A0EA8u;
            goto label_1a0ea8;
        }
    }
    ctx->pc = 0x1A0E18u;
    // 0x1a0e18: 0x260f0598  addiu       $t7, $s0, 0x598
    ctx->pc = 0x1a0e18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1432));
    // 0x1a0e1c: 0x260e05a8  addiu       $t6, $s0, 0x5A8
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x1a0e20: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x1a0e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1a0e24: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1a0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1a0e28:
    // 0x1a0e28: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1a0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1a0e2c: 0x14d1026  xor         $v0, $t2, $t5
    ctx->pc = 0x1a0e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x1a0e30: 0x3031818  mult        $v1, $t8, $v1
    ctx->pc = 0x1a0e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0e34: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x1a0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a0e38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0e3c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x1a0e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1a0e40: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x1a0e40u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1a0e44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a0e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1a0e48: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x1a0e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x1a0e4c: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x1a0e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x1a0e50: 0x35290030  ori         $t1, $t1, 0x30
    ctx->pc = 0x1a0e50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)48);
    // 0x1a0e54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a0e58: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1a0e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a0e5c: 0x1c41021  addu        $v0, $t6, $a0
    ctx->pc = 0x1a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1a0e60: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a0e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a0e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0e68: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x1a0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1a0e6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0e70: 0x14c382a  slt         $a3, $t2, $t4
    ctx->pc = 0x1a0e70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1a0e74: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a0e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1a0e78: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1a0e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1a0e7c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a0e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a0e80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1a0e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a0e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a0e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a0e88: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1a0e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1a0e8c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1a0e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1a0e90: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x1a0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x1a0e94: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x1a0e94u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
    // 0x1a0e98: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A0E98u;
    {
        const bool branch_taken_0x1a0e98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0E98u;
        // 0x1a0e9c: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0e98) {
            ctx->pc = 0x1A0E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0e28;
        }
    }
    ctx->pc = 0x1A0EA0u;
    // 0x1a0ea0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0EA0u;
    {
        const bool branch_taken_0x1a0ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ea0) {
            ctx->pc = 0x1A0EACu;
            goto label_1a0eac;
        }
    }
    ctx->pc = 0x1A0EA8u;
label_1a0ea8:
    // 0x1a0ea8: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x1a0ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
label_1a0eac:
    // 0x1a0eac: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A0EACu;
    SET_GPR_U32(ctx, 31, 0x1A0EB4u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A0EACu, 0x1A0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EB4u;
}
