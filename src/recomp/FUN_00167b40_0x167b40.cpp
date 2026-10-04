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

// Function: FUN_00167b40
// Address: 0x167b40 - 0x167e34
void FUN_00167b40_0x167b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00167b40_0x167b40");
#endif

    switch (ctx->pc) {
        case 0x167b40u: goto label_167b40;
        case 0x167b44u: goto label_167b44;
        case 0x167b48u: goto label_167b48;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b50u: goto label_167b50;
        case 0x167b54u: goto label_167b54;
        case 0x167b58u: goto label_167b58;
        case 0x167b5cu: goto label_167b5c;
        case 0x167b60u: goto label_167b60;
        case 0x167b64u: goto label_167b64;
        case 0x167b68u: goto label_167b68;
        case 0x167b6cu: goto label_167b6c;
        case 0x167b70u: goto label_167b70;
        case 0x167b74u: goto label_167b74;
        case 0x167b78u: goto label_167b78;
        case 0x167b7cu: goto label_167b7c;
        case 0x167b80u: goto label_167b80;
        case 0x167b84u: goto label_167b84;
        case 0x167b88u: goto label_167b88;
        case 0x167b8cu: goto label_167b8c;
        case 0x167b90u: goto label_167b90;
        case 0x167b94u: goto label_167b94;
        case 0x167b98u: goto label_167b98;
        case 0x167b9cu: goto label_167b9c;
        case 0x167ba0u: goto label_167ba0;
        case 0x167ba4u: goto label_167ba4;
        case 0x167ba8u: goto label_167ba8;
        case 0x167bacu: goto label_167bac;
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        default: break;
    }

    ctx->pc = 0x167b40u;

label_167b40:
    // 0x167b40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x167b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_167b44:
    // 0x167b44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b48:
    // 0x167b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167b4c:
    // 0x167b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b50:
    // 0x167b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167b54:
    // 0x167b54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167b58:
    // 0x167b58: 0x8f9086e0  lw          $s0, -0x7920($gp)
    ctx->pc = 0x167b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936288)));
label_167b5c:
    // 0x167b5c: 0x0  nop
    ctx->pc = 0x167b5cu;
    // NOP
label_167b60:
    // 0x167b60: 0x278386a8  addiu       $v1, $gp, -0x7958
    ctx->pc = 0x167b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936232));
label_167b64:
    // 0x167b64: 0x0  nop
    ctx->pc = 0x167b64u;
    // NOP
label_167b68:
    // 0x167b68: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x167b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_167b6c:
    // 0x167b6c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_167b70:
    // 0x167b70: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_167b74:
    if (ctx->pc == 0x167B74u) {
        ctx->pc = 0x167B78u;
        goto label_167b78;
    }
    ctx->pc = 0x167B70u;
    {
        const bool branch_taken_0x167b70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x167b70) {
            ctx->pc = 0x167B80u;
            goto label_167b80;
        }
    }
    ctx->pc = 0x167B78u;
label_167b78:
    // 0x167b78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_167b7c:
    // 0x167b7c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x167b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_167b80:
    // 0x167b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_167b84:
    // 0x167b84: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x167b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_167b88:
    // 0x167b88: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_167b8c:
    if (ctx->pc == 0x167B8Cu) {
        ctx->pc = 0x167B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B88u;
        // 0x167b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B90u;
        goto label_167b90;
    }
    ctx->pc = 0x167B88u;
    {
        const bool branch_taken_0x167b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B88u;
        // 0x167b8c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b88) {
            ctx->pc = 0x167B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167b64;
        }
    }
    ctx->pc = 0x167B90u;
label_167b90:
    // 0x167b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167b94:
    // 0x167b94: 0xc06468c  jal         func_191A30
label_167b98:
    if (ctx->pc == 0x167B98u) {
        ctx->pc = 0x167B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B94u;
        // 0x167b98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B9Cu;
        goto label_167b9c;
    }
    ctx->pc = 0x167B94u;
    SET_GPR_U32(ctx, 31, 0x167B9Cu);
    ctx->pc = 0x167B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B94u;
    // 0x167b98: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x167B94u, 0x167B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B9Cu;
label_167b9c:
    // 0x167b9c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x167b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_167ba0:
    // 0x167ba0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x167ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_167ba4:
    // 0x167ba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_167ba8:
    if (ctx->pc == 0x167BA8u) {
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BACu;
        goto label_167bac;
    }
    ctx->pc = 0x167BA4u;
    {
        const bool branch_taken_0x167ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA4u;
        // 0x167ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ba4) {
            ctx->pc = 0x167BB4u;
            goto label_167bb4;
        }
    }
    ctx->pc = 0x167BACu;
label_167bac:
    // 0x167bac: 0xc06468c  jal         func_191A30
label_167bb0:
    if (ctx->pc == 0x167BB0u) {
        ctx->pc = 0x167BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BACu;
        // 0x167bb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BB4u;
        goto label_167bb4;
    }
    ctx->pc = 0x167BACu;
    SET_GPR_U32(ctx, 31, 0x167BB4u);
    ctx->pc = 0x167BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BACu;
    // 0x167bb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x167BACu, 0x167BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167BB4u;
label_167bb4:
    // 0x167bb4: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
label_167bb8:
    if (ctx->pc == 0x167BB8u) {
        ctx->pc = 0x167BBCu;
        goto label_167bbc;
    }
    ctx->pc = 0x167BB4u;
    {
        const bool branch_taken_0x167bb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167bb4) {
            ctx->pc = 0x167D94u;
            goto label_167d94;
        }
    }
    ctx->pc = 0x167BBCu;
label_167bbc:
    // 0x167bbc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167bc0:
    // 0x167bc0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167bc4:
    // 0x167bc4: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x167bc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_167bc8:
    // 0x167bc8: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_167bcc:
    if (ctx->pc == 0x167BCCu) {
        ctx->pc = 0x167BD0u;
        goto label_167bd0;
    }
    ctx->pc = 0x167BC8u;
    {
        const bool branch_taken_0x167bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167bc8) {
            ctx->pc = 0x167BE0u;
            goto label_167be0;
        }
    }
    ctx->pc = 0x167BD0u;
label_167bd0:
    // 0x167bd0: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167bd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167bd4:
    // 0x167bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167bd8:
    // 0x167bd8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_167bdc:
    if (ctx->pc == 0x167BDCu) {
        ctx->pc = 0x167BE0u;
        goto label_167be0;
    }
    ctx->pc = 0x167BD8u;
    {
        const bool branch_taken_0x167bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bd8) {
            ctx->pc = 0x167C1Cu;
            goto label_167c1c;
        }
    }
    ctx->pc = 0x167BE0u;
label_167be0:
    // 0x167be0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x167be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_167be4:
    // 0x167be4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_167be8:
    if (ctx->pc == 0x167BE8u) {
        ctx->pc = 0x167BECu;
        goto label_167bec;
    }
    ctx->pc = 0x167BE4u;
    {
        const bool branch_taken_0x167be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167be4) {
            ctx->pc = 0x167BFCu;
            goto label_167bfc;
        }
    }
    ctx->pc = 0x167BECu;
label_167bec:
    // 0x167bec: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167bf0:
    // 0x167bf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167bf4:
    // 0x167bf4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_167bf8:
    if (ctx->pc == 0x167BF8u) {
        ctx->pc = 0x167BFCu;
        goto label_167bfc;
    }
    ctx->pc = 0x167BF4u;
    {
        const bool branch_taken_0x167bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167bf4) {
            ctx->pc = 0x167C1Cu;
            goto label_167c1c;
        }
    }
    ctx->pc = 0x167BFCu;
label_167bfc:
    // 0x167bfc: 0x0  nop
    ctx->pc = 0x167bfcu;
    // NOP
label_167c00:
    // 0x167c00: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x167c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
label_167c04:
    // 0x167c04: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
label_167c08:
    if (ctx->pc == 0x167C08u) {
        ctx->pc = 0x167C0Cu;
        goto label_167c0c;
    }
    ctx->pc = 0x167C04u;
    {
        const bool branch_taken_0x167c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c04) {
            ctx->pc = 0x167CB8u;
            goto label_167cb8;
        }
    }
    ctx->pc = 0x167C0Cu;
label_167c0c:
    // 0x167c0c: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167c10:
    // 0x167c10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167c14:
    // 0x167c14: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_167c18:
    if (ctx->pc == 0x167C18u) {
        ctx->pc = 0x167C1Cu;
        goto label_167c1c;
    }
    ctx->pc = 0x167C14u;
    {
        const bool branch_taken_0x167c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167c14) {
            ctx->pc = 0x167CB8u;
            goto label_167cb8;
        }
    }
    ctx->pc = 0x167C1Cu;
label_167c1c:
    // 0x167c1c: 0x0  nop
    ctx->pc = 0x167c1cu;
    // NOP
label_167c20:
    // 0x167c20: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_167c24:
    // 0x167c24: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
label_167c28:
    if (ctx->pc == 0x167C28u) {
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C2Cu;
        goto label_167c2c;
    }
    ctx->pc = 0x167C24u;
    {
        const bool branch_taken_0x167c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C24u;
        // 0x167c28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c24) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C2Cu;
label_167c2c:
    // 0x167c2c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
label_167c30:
    if (ctx->pc == 0x167C30u) {
        ctx->pc = 0x167C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C2Cu;
        // 0x167c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C34u;
        goto label_167c34;
    }
    ctx->pc = 0x167C2Cu;
    {
        const bool branch_taken_0x167c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C2Cu;
        // 0x167c30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c2c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C34u;
label_167c34:
    // 0x167c34: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
label_167c38:
    if (ctx->pc == 0x167C38u) {
        ctx->pc = 0x167C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C34u;
        // 0x167c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C3Cu;
        goto label_167c3c;
    }
    ctx->pc = 0x167C34u;
    {
        const bool branch_taken_0x167c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x167C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C34u;
        // 0x167c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c34) {
            ctx->pc = 0x167C7Cu;
            goto label_167c7c;
        }
    }
    ctx->pc = 0x167C3Cu;
label_167c3c:
    // 0x167c3c: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_167c40:
    if (ctx->pc == 0x167C40u) {
        ctx->pc = 0x167C44u;
        goto label_167c44;
    }
    ctx->pc = 0x167C3Cu;
    {
        const bool branch_taken_0x167c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c3c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C44u;
label_167c44:
    // 0x167c44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167c48:
    // 0x167c48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_167c4c:
    if (ctx->pc == 0x167C4Cu) {
        ctx->pc = 0x167C50u;
        goto label_167c50;
    }
    ctx->pc = 0x167C48u;
    {
        const bool branch_taken_0x167c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167c48) {
            ctx->pc = 0x167C58u;
            goto label_167c58;
        }
    }
    ctx->pc = 0x167C50u;
label_167c50:
    // 0x167c50: 0x1000004d  b           . + 4 + (0x4D << 2)
label_167c54:
    if (ctx->pc == 0x167C54u) {
        ctx->pc = 0x167C58u;
        goto label_167c58;
    }
    ctx->pc = 0x167C50u;
    {
        const bool branch_taken_0x167c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c50) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C58u;
label_167c58:
    // 0x167c58: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167c5c:
    // 0x167c5c: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167c60:
    // 0x167c60: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x167c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_167c64:
    // 0x167c64: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167c68:
    // 0x167c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167c6c:
    // 0x167c6c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_167c70:
    if (ctx->pc == 0x167C70u) {
        ctx->pc = 0x167C74u;
        goto label_167c74;
    }
    ctx->pc = 0x167C6Cu;
    {
        const bool branch_taken_0x167c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167c6c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C74u;
label_167c74:
    // 0x167c74: 0x10000044  b           . + 4 + (0x44 << 2)
label_167c78:
    if (ctx->pc == 0x167C78u) {
        ctx->pc = 0x167C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C74u;
        // 0x167c78: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C7Cu;
        goto label_167c7c;
    }
    ctx->pc = 0x167C74u;
    {
        const bool branch_taken_0x167c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C74u;
        // 0x167c78: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c74) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x0  nop
    ctx->pc = 0x167c7cu;
    // NOP
label_167c80:
    // 0x167c80: 0x9205004d  lbu         $a1, 0x4D($s0)
    ctx->pc = 0x167c80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167c84:
    // 0x167c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167c88:
    // 0x167c88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167c8c:
    // 0x167c8c: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167c90:
    // 0x167c90: 0x5180b  movn        $v1, $zero, $a1
    ctx->pc = 0x167c90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_167c94:
    // 0x167c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167c98:
    // 0x167c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167c9c:
    // 0x167c9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167ca0:
    // 0x167ca0: 0x40f809  jalr        $v0
label_167ca4:
    if (ctx->pc == 0x167CA4u) {
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CA8u;
        goto label_167ca8;
    }
    ctx->pc = 0x167CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167CA8u);
        ctx->pc = 0x167CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CA0u;
        // 0x167ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167CA0u, 0x167CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167CA8u;
label_167ca8:
    // 0x167ca8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_167cac:
    if (ctx->pc == 0x167CACu) {
        ctx->pc = 0x167CB0u;
        goto label_167cb0;
    }
    ctx->pc = 0x167CA8u;
    {
        const bool branch_taken_0x167ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ca8) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CB0u;
label_167cb0:
    // 0x167cb0: 0x10000035  b           . + 4 + (0x35 << 2)
label_167cb4:
    if (ctx->pc == 0x167CB4u) {
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CB8u;
        goto label_167cb8;
    }
    ctx->pc = 0x167CB0u;
    {
        const bool branch_taken_0x167cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CB0u;
        // 0x167cb4: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cb0) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CB8u;
label_167cb8:
    // 0x167cb8: 0x9203004e  lbu         $v1, 0x4E($s0)
    ctx->pc = 0x167cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
label_167cbc:
    // 0x167cbc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167cc0:
    // 0x167cc0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_167cc4:
    if (ctx->pc == 0x167CC4u) {
        ctx->pc = 0x167CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC0u;
        // 0x167cc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CC8u;
        goto label_167cc8;
    }
    ctx->pc = 0x167CC0u;
    {
        const bool branch_taken_0x167cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CC0u;
        // 0x167cc4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cc0) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CC8u;
label_167cc8:
    // 0x167cc8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
label_167ccc:
    if (ctx->pc == 0x167CCCu) {
        ctx->pc = 0x167CD0u;
        goto label_167cd0;
    }
    ctx->pc = 0x167CC8u;
    {
        const bool branch_taken_0x167cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x167cc8) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CD0u;
label_167cd0:
    // 0x167cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167cd4:
    // 0x167cd4: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_167cd8:
    if (ctx->pc == 0x167CD8u) {
        ctx->pc = 0x167CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD4u;
        // 0x167cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167CDCu;
        goto label_167cdc;
    }
    ctx->pc = 0x167CD4u;
    {
        const bool branch_taken_0x167cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x167CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167CD4u;
        // 0x167cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167cd4) {
            ctx->pc = 0x167D54u;
            goto label_167d54;
        }
    }
    ctx->pc = 0x167CDCu;
label_167cdc:
    // 0x167cdc: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
label_167ce0:
    if (ctx->pc == 0x167CE0u) {
        ctx->pc = 0x167CE4u;
        goto label_167ce4;
    }
    ctx->pc = 0x167CDCu;
    {
        const bool branch_taken_0x167cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x167cdc) {
            ctx->pc = 0x167D1Cu;
            goto label_167d1c;
        }
    }
    ctx->pc = 0x167CE4u;
label_167ce4:
    // 0x167ce4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_167ce8:
    if (ctx->pc == 0x167CE8u) {
        ctx->pc = 0x167CECu;
        goto label_167cec;
    }
    ctx->pc = 0x167CE4u;
    {
        const bool branch_taken_0x167ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ce4) {
            ctx->pc = 0x167CF4u;
            goto label_167cf4;
        }
    }
    ctx->pc = 0x167CECu;
label_167cec:
    // 0x167cec: 0x10000026  b           . + 4 + (0x26 << 2)
label_167cf0:
    if (ctx->pc == 0x167CF0u) {
        ctx->pc = 0x167CF4u;
        goto label_167cf4;
    }
    ctx->pc = 0x167CECu;
    {
        const bool branch_taken_0x167cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cec) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167CF4u;
label_167cf4:
    // 0x167cf4: 0x0  nop
    ctx->pc = 0x167cf4u;
    // NOP
label_167cf8:
    // 0x167cf8: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x167cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
label_167cfc:
    // 0x167cfc: 0x8f8286b8  lw          $v0, -0x7948($gp)
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936248)));
label_167d00:
    // 0x167d00: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_167d04:
    // 0x167d04: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x167d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_167d08:
    // 0x167d08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167d0c:
    // 0x167d0c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_167d10:
    if (ctx->pc == 0x167D10u) {
        ctx->pc = 0x167D14u;
        goto label_167d14;
    }
    ctx->pc = 0x167D0Cu;
    {
        const bool branch_taken_0x167d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d0c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D14u;
label_167d14:
    // 0x167d14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_167d18:
    if (ctx->pc == 0x167D18u) {
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D1Cu;
        goto label_167d1c;
    }
    ctx->pc = 0x167D14u;
    {
        const bool branch_taken_0x167d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D14u;
        // 0x167d18: 0xa204004e  sb          $a0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d14) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D1Cu;
label_167d1c:
    // 0x167d1c: 0x0  nop
    ctx->pc = 0x167d1cu;
    // NOP
label_167d20:
    // 0x167d20: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d24:
    // 0x167d24: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d28:
    // 0x167d28: 0x24426260  addiu       $v0, $v0, 0x6260
    ctx->pc = 0x167d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25184));
label_167d2c:
    // 0x167d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d30:
    // 0x167d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d34:
    // 0x167d34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d38:
    // 0x167d38: 0x40f809  jalr        $v0
label_167d3c:
    if (ctx->pc == 0x167D3Cu) {
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D40u;
        goto label_167d40;
    }
    ctx->pc = 0x167D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D40u);
        ctx->pc = 0x167D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D38u;
        // 0x167d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D38u, 0x167D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D40u;
label_167d40:
    // 0x167d40: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_167d44:
    if (ctx->pc == 0x167D44u) {
        ctx->pc = 0x167D48u;
        goto label_167d48;
    }
    ctx->pc = 0x167D40u;
    {
        const bool branch_taken_0x167d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d40) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D48u;
label_167d48:
    // 0x167d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167d4c:
    // 0x167d4c: 0x1000000e  b           . + 4 + (0xE << 2)
label_167d50:
    if (ctx->pc == 0x167D50u) {
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D54u;
        goto label_167d54;
    }
    ctx->pc = 0x167D4Cu;
    {
        const bool branch_taken_0x167d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D4Cu;
        // 0x167d50: 0xa202004e  sb          $v0, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d4c) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D54u;
label_167d54:
    // 0x167d54: 0x0  nop
    ctx->pc = 0x167d54u;
    // NOP
label_167d58:
    // 0x167d58: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x167d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_167d5c:
    // 0x167d5c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x167d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_167d60:
    // 0x167d60: 0x24426250  addiu       $v0, $v0, 0x6250
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25168));
label_167d64:
    // 0x167d64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167d68:
    // 0x167d68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167d6c:
    // 0x167d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167d70:
    // 0x167d70: 0x40f809  jalr        $v0
label_167d74:
    if (ctx->pc == 0x167D74u) {
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D78u;
        goto label_167d78;
    }
    ctx->pc = 0x167D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167D78u);
        ctx->pc = 0x167D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D70u;
        // 0x167d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D70u, 0x167D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D78u;
label_167d78:
    // 0x167d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_167d7c:
    if (ctx->pc == 0x167D7Cu) {
        ctx->pc = 0x167D80u;
        goto label_167d80;
    }
    ctx->pc = 0x167D78u;
    {
        const bool branch_taken_0x167d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d78) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167D80u;
label_167d80:
    // 0x167d80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x167d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_167d84:
    // 0x167d84: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x167d84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
label_167d88:
    // 0x167d88: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x167d88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_167d8c:
    // 0x167d8c: 0x1600ff8b  bnez        $s0, . + 4 + (-0x75 << 2)
label_167d90:
    if (ctx->pc == 0x167D90u) {
        ctx->pc = 0x167D94u;
        goto label_167d94;
    }
    ctx->pc = 0x167D8Cu;
    {
        const bool branch_taken_0x167d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x167d8c) {
            ctx->pc = 0x167BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167bbc;
        }
    }
    ctx->pc = 0x167D94u;
label_167d94:
    // 0x167d94: 0x0  nop
    ctx->pc = 0x167d94u;
    // NOP
label_167d98:
    // 0x167d98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167d9c:
    // 0x167d9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x167d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167da0:
    // 0x167da0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x167da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_167da4:
    // 0x167da4: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_167da8:
    if (ctx->pc == 0x167DA8u) {
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DACu;
        goto label_167dac;
    }
    ctx->pc = 0x167DA4u;
    {
        const bool branch_taken_0x167da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x167DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DA4u;
        // 0x167da8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167da4) {
            ctx->pc = 0x167DE0u;
            goto label_167de0;
        }
    }
    ctx->pc = 0x167DACu;
label_167dac:
    // 0x167dac: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_167db0:
    if (ctx->pc == 0x167DB0u) {
        ctx->pc = 0x167DB4u;
        goto label_167db4;
    }
    ctx->pc = 0x167DACu;
    {
        const bool branch_taken_0x167dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x167dac) {
            ctx->pc = 0x167DBCu;
            goto label_167dbc;
        }
    }
    ctx->pc = 0x167DB4u;
label_167db4:
    // 0x167db4: 0x1000000e  b           . + 4 + (0xE << 2)
label_167db8:
    if (ctx->pc == 0x167DB8u) {
        ctx->pc = 0x167DBCu;
        goto label_167dbc;
    }
    ctx->pc = 0x167DB4u;
    {
        const bool branch_taken_0x167db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167db4) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DBCu;
label_167dbc:
    // 0x167dbc: 0x0  nop
    ctx->pc = 0x167dbcu;
    // NOP
label_167dc0:
    // 0x167dc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167dc4:
    // 0x167dc4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x167dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_167dc8:
    // 0x167dc8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_167dcc:
    if (ctx->pc == 0x167DCCu) {
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC8u;
        // 0x167dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DD0u;
        goto label_167dd0;
    }
    ctx->pc = 0x167DC8u;
    {
        const bool branch_taken_0x167dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DC8u;
        // 0x167dcc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc8) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DD0u;
label_167dd0:
    // 0x167dd0: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_167dd4:
    if (ctx->pc == 0x167DD4u) {
        ctx->pc = 0x167DD8u;
        goto label_167dd8;
    }
    ctx->pc = 0x167DD0u;
    {
        const bool branch_taken_0x167dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167dd0) {
            ctx->pc = 0x167E14u;
            goto label_167e14;
        }
    }
    ctx->pc = 0x167DD8u;
label_167dd8:
    // 0x167dd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_167ddc:
    if (ctx->pc == 0x167DDCu) {
        ctx->pc = 0x167DE0u;
        goto label_167de0;
    }
    ctx->pc = 0x167DD8u;
    {
        const bool branch_taken_0x167dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167dd8) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DE0u;
label_167de0:
    // 0x167de0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x167de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_167de4:
    // 0x167de4: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x167de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_167de8:
    // 0x167de8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_167dec:
    if (ctx->pc == 0x167DECu) {
        ctx->pc = 0x167DF0u;
        goto label_167df0;
    }
    ctx->pc = 0x167DE8u;
    {
        const bool branch_taken_0x167de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167de8) {
            ctx->pc = 0x167E14u;
            goto label_167e14;
        }
    }
    ctx->pc = 0x167DF0u;
label_167df0:
    // 0x167df0: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_167df4:
    // 0x167df4: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
label_167df8:
    // 0x167df8: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_167dfc:
    // 0x167dfc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x167dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_167e00:
    // 0x167e00: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
label_167e04:
    // 0x167e04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_167e08:
    // 0x167e08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x167e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_167e0c:
    // 0x167e0c: 0xc05951c  jal         func_165470
label_167e10:
    if (ctx->pc == 0x167E10u) {
        ctx->pc = 0x167E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E0Cu;
        // 0x167e10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E14u;
        goto label_167e14;
    }
    ctx->pc = 0x167E0Cu;
    SET_GPR_U32(ctx, 31, 0x167E14u);
    ctx->pc = 0x167E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E0Cu;
    // 0x167e10: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165470u, 0x167E0Cu, 0x167E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E14u;
label_167e14:
    // 0x167e14: 0x0  nop
    ctx->pc = 0x167e14u;
    // NOP
label_167e18:
    // 0x167e18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_167e1c:
    // 0x167e1c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x167e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_167e20:
    // 0x167e20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_167e24:
    if (ctx->pc == 0x167E24u) {
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E28u;
        goto label_167e28;
    }
    ctx->pc = 0x167E20u;
    {
        const bool branch_taken_0x167e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E20u;
        // 0x167e24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e20) {
            ctx->pc = 0x167DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167da0;
        }
    }
    ctx->pc = 0x167E28u;
label_167e28:
    // 0x167e28: 0xc059398  jal         func_164E60
label_167e2c:
    if (ctx->pc == 0x167E2Cu) {
        ctx->pc = 0x167E30u;
        goto label_167e30;
    }
    ctx->pc = 0x167E28u;
    SET_GPR_U32(ctx, 31, 0x167E30u);
    ctx->pc = 0x164E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164E60u, 0x167E28u, 0x167E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E30u;
label_167e30:
    // 0x167e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x167e34u;
}
