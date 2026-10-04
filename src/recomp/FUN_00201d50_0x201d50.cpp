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

// Function: FUN_00201d50
// Address: 0x201d50 - 0x201ee0
void FUN_00201d50_0x201d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201d50_0x201d50");
#endif

    switch (ctx->pc) {
        case 0x201dbcu: goto label_201dbc;
        case 0x201dccu: goto label_201dcc;
        case 0x201de4u: goto label_201de4;
        case 0x201e24u: goto label_201e24;
        default: break;
    }

    ctx->pc = 0x201d50u;

    // 0x201d50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x201d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x201d54: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x201d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x201d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x201d60: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x201d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x201d64: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x201D64u;
    {
        const bool branch_taken_0x201d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D64u;
        // 0x201d68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d64) {
            ctx->pc = 0x201ED0u;
            goto label_201ed0;
        }
    }
    ctx->pc = 0x201D6Cu;
    // 0x201d6c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x201d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x201d70: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x201D70u;
    {
        const bool branch_taken_0x201d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d70) {
            ctx->pc = 0x201E80u;
            goto label_201e80;
        }
    }
    ctx->pc = 0x201D78u;
    // 0x201d78: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x201d7c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x201D7Cu;
    {
        const bool branch_taken_0x201d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D7Cu;
        // 0x201d80: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d7c) {
            ctx->pc = 0x201E3Cu;
            goto label_201e3c;
        }
    }
    ctx->pc = 0x201D84u;
    // 0x201d84: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x201d88: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x201D88u;
    {
        const bool branch_taken_0x201d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x201D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D88u;
        // 0x201d8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d88) {
            ctx->pc = 0x201DD8u;
            goto label_201dd8;
        }
    }
    ctx->pc = 0x201D90u;
    // 0x201d90: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x201D90u;
    {
        const bool branch_taken_0x201d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x201d90) {
            ctx->pc = 0x201DB0u;
            goto label_201db0;
        }
    }
    ctx->pc = 0x201D98u;
    // 0x201d98: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x201D98u;
    {
        const bool branch_taken_0x201d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201d98) {
            ctx->pc = 0x201DA8u;
            goto label_201da8;
        }
    }
    ctx->pc = 0x201DA0u;
    // 0x201da0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x201DA0u;
    {
        const bool branch_taken_0x201da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA0u;
        // 0x201da4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da0) {
            ctx->pc = 0x201EDCu;
            goto label_201edc;
        }
    }
    ctx->pc = 0x201DA8u;
label_201da8:
    // 0x201da8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x201DA8u;
    {
        const bool branch_taken_0x201da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201da8) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201DB0u;
label_201db0:
    // 0x201db0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x201db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201db4: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x201DB4u;
    SET_GPR_U32(ctx, 31, 0x201DBCu);
    ctx->pc = 0x201DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB4u;
    // 0x201db8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x201DB4u, 0x201DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DBCu;
label_201dbc:
    // 0x201dbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x201dc0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201dc4: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x201DC4u;
    SET_GPR_U32(ctx, 31, 0x201DCCu);
    ctx->pc = 0x201DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DC4u;
    // 0x201dc8: 0x2484f47c  addiu       $a0, $a0, -0xB84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201DC4u, 0x201DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DCCu;
label_201dcc:
    // 0x201dcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x201dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x201dd0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x201DD0u;
    {
        const bool branch_taken_0x201dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DD0u;
        // 0x201dd4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dd0) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201DD8u;
label_201dd8:
    // 0x201dd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201ddc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x201DDCu;
    SET_GPR_U32(ctx, 31, 0x201DE4u);
    ctx->pc = 0x201DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DDCu;
    // 0x201de0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x201DDCu, 0x201DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DE4u;
label_201de4:
    // 0x201de4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201de8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x201de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x201dec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x201df0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x201df4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201df8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201dfc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x201dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e00: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x201e00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201e04: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201e08: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x201e0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x201e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201e14: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x201e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x201e18: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x201e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x201e1c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x201E1Cu;
    SET_GPR_U32(ctx, 31, 0x201E24u);
    ctx->pc = 0x201E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E1Cu;
    // 0x201e20: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x201E1Cu, 0x201E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E24u;
label_201e24:
    // 0x201e24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e28: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201e30: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x201e34: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x201E34u;
    {
        const bool branch_taken_0x201e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E34u;
        // 0x201e38: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e34) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201E3Cu;
label_201e3c:
    // 0x201e3c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x201e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x201e40: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x201e44: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x201e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x201e48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201e50: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x201e54: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201e58: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x201e5c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x201e64: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x201e68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x201e6c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x201e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x201e70: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x201e70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x201e74: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201e74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x201e78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x201E78u;
    {
        const bool branch_taken_0x201e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E78u;
        // 0x201e7c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201e78) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201E80u;
label_201e80:
    // 0x201e80: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x201e84: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x201e88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x201e8c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x201e90: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x201e94: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x201e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201ea0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x201ea4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201ea8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x201eac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x201eb0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x201eb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x201eb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x201ebc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x201ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x201ec0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x201ec4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x201ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201EC8u;
    {
        const bool branch_taken_0x201ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ec8) {
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201ED0u;
label_201ed0:
    // 0x201ed0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x201ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201ed4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x201ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_201ed8:
    // 0x201ed8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x201ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_201edc:
    // 0x201edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x201ee0u;
}
