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

// Function: entry_00136acc
// Address: 0x136acc - 0x1371ac
void entry_00136acc_0x136acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136acc_0x136acc");
#endif

    switch (ctx->pc) {
        case 0x136af8u: goto label_136af8;
        case 0x136b08u: goto label_136b08;
        case 0x136b18u: goto label_136b18;
        case 0x136b90u: goto label_136b90;
        case 0x136c78u: goto label_136c78;
        case 0x136c88u: goto label_136c88;
        case 0x136c98u: goto label_136c98;
        case 0x136ca8u: goto label_136ca8;
        case 0x136cb8u: goto label_136cb8;
        case 0x136cc8u: goto label_136cc8;
        case 0x136cd8u: goto label_136cd8;
        case 0x136ce8u: goto label_136ce8;
        case 0x136cf8u: goto label_136cf8;
        case 0x136d08u: goto label_136d08;
        case 0x136d18u: goto label_136d18;
        case 0x136d28u: goto label_136d28;
        case 0x136d38u: goto label_136d38;
        case 0x136d48u: goto label_136d48;
        case 0x136d58u: goto label_136d58;
        case 0x136d68u: goto label_136d68;
        case 0x136d84u: goto label_136d84;
        case 0x136d98u: goto label_136d98;
        case 0x136da8u: goto label_136da8;
        case 0x136db8u: goto label_136db8;
        case 0x136dc8u: goto label_136dc8;
        case 0x136dd8u: goto label_136dd8;
        case 0x136de8u: goto label_136de8;
        case 0x136df8u: goto label_136df8;
        case 0x136e08u: goto label_136e08;
        case 0x136e18u: goto label_136e18;
        case 0x136e28u: goto label_136e28;
        case 0x136e38u: goto label_136e38;
        case 0x136e48u: goto label_136e48;
        case 0x136e58u: goto label_136e58;
        case 0x136e68u: goto label_136e68;
        case 0x136e78u: goto label_136e78;
        case 0x136e88u: goto label_136e88;
        case 0x136e98u: goto label_136e98;
        case 0x136ea8u: goto label_136ea8;
        case 0x136eb8u: goto label_136eb8;
        case 0x136ec8u: goto label_136ec8;
        case 0x136f6cu: goto label_136f6c;
        case 0x136f74u: goto label_136f74;
        case 0x136f80u: goto label_136f80;
        case 0x136f88u: goto label_136f88;
        case 0x136fa0u: goto label_136fa0;
        case 0x136fb0u: goto label_136fb0;
        case 0x136fc0u: goto label_136fc0;
        case 0x136fd0u: goto label_136fd0;
        case 0x136fe0u: goto label_136fe0;
        case 0x136ff0u: goto label_136ff0;
        case 0x137000u: goto label_137000;
        case 0x137010u: goto label_137010;
        case 0x137020u: goto label_137020;
        case 0x137030u: goto label_137030;
        case 0x137040u: goto label_137040;
        case 0x137050u: goto label_137050;
        case 0x137060u: goto label_137060;
        case 0x137070u: goto label_137070;
        case 0x137080u: goto label_137080;
        case 0x137090u: goto label_137090;
        case 0x1370a0u: goto label_1370a0;
        case 0x1370b0u: goto label_1370b0;
        case 0x1370c0u: goto label_1370c0;
        case 0x1370d0u: goto label_1370d0;
        case 0x1370e0u: goto label_1370e0;
        case 0x1370f0u: goto label_1370f0;
        case 0x137100u: goto label_137100;
        case 0x137110u: goto label_137110;
        case 0x137120u: goto label_137120;
        case 0x137130u: goto label_137130;
        case 0x137140u: goto label_137140;
        case 0x137150u: goto label_137150;
        case 0x137160u: goto label_137160;
        case 0x137170u: goto label_137170;
        case 0x137180u: goto label_137180;
        default: break;
    }

    ctx->pc = 0x136accu;

label_136acc:
    // 0x136acc: 0x102001b7  beqz        $at, . + 4 + (0x1B7 << 2)
label_136ad0:
    if (ctx->pc == 0x136AD0u) {
        ctx->pc = 0x136AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ACCu;
        // 0x136ad0: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AD4u;
        goto label_136ad4;
    }
    ctx->pc = 0x136ACCu;
    {
        const bool branch_taken_0x136acc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ACCu;
        // 0x136ad0: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136acc) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136AD4u;
label_136ad4:
    // 0x136ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_136ad8:
    // 0x136ad8: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x136ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
label_136adc:
    // 0x136adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136ae0:
    // 0x136ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x136ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_136ae4:
    // 0x136ae4: 0x400008  jr          $v0
label_136ae8:
    if (ctx->pc == 0x136AE8u) {
        ctx->pc = 0x136AECu;
        goto label_136aec;
    }
    ctx->pc = 0x136AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136AE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x136AECu;
label_136aec:
    // 0x136aec: 0x0  nop
    ctx->pc = 0x136aecu;
    // NOP
label_136af0:
    // 0x136af0: 0xc04cf78  jal         func_133DE0
label_136af4:
    if (ctx->pc == 0x136AF4u) {
        ctx->pc = 0x136AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AF0u;
        // 0x136af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AF8u;
        goto label_136af8;
    }
    ctx->pc = 0x136AF0u;
    SET_GPR_U32(ctx, 31, 0x136AF8u);
    ctx->pc = 0x136AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AF0u;
    // 0x136af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133DE0u, 0x136AF0u, 0x136AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AF8u;
label_136af8:
    // 0x136af8: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_136afc:
    if (ctx->pc == 0x136AFCu) {
        ctx->pc = 0x136B00u;
        goto label_136b00;
    }
    ctx->pc = 0x136AF8u;
    {
        const bool branch_taken_0x136af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136af8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136B00u;
label_136b00:
    // 0x136b00: 0xc04cef0  jal         func_133BC0
label_136b04:
    if (ctx->pc == 0x136B04u) {
        ctx->pc = 0x136B08u;
        goto label_136b08;
    }
    ctx->pc = 0x136B00u;
    SET_GPR_U32(ctx, 31, 0x136B08u);
    ctx->pc = 0x133BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133BC0u, 0x136B00u, 0x136B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0x100001a8  b           . + 4 + (0x1A8 << 2)
label_136b0c:
    if (ctx->pc == 0x136B0Cu) {
        ctx->pc = 0x136B10u;
        goto label_136b10;
    }
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0xc04ceb0  jal         func_133AC0
label_136b14:
    if (ctx->pc == 0x136B14u) {
        ctx->pc = 0x136B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B10u;
        // 0x136b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B18u;
        goto label_136b18;
    }
    ctx->pc = 0x136B10u;
    SET_GPR_U32(ctx, 31, 0x136B18u);
    ctx->pc = 0x136B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B10u;
    // 0x136b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133AC0u, 0x136B10u, 0x136B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B18u;
label_136b18:
    // 0x136b18: 0x100001a4  b           . + 4 + (0x1A4 << 2)
label_136b1c:
    if (ctx->pc == 0x136B1Cu) {
        ctx->pc = 0x136B20u;
        goto label_136b20;
    }
    ctx->pc = 0x136B18u;
    {
        const bool branch_taken_0x136b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b18) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b24:
    // 0x136b24: 0x9022a400  lbu         $v0, -0x5C00($at)
    ctx->pc = 0x136b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943744)));
label_136b28:
    // 0x136b28: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x136b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_136b2c:
    // 0x136b2c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_136b30:
    if (ctx->pc == 0x136B30u) {
        ctx->pc = 0x136B34u;
        goto label_136b34;
    }
    ctx->pc = 0x136B2Cu;
    {
        const bool branch_taken_0x136b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b2c) {
            ctx->pc = 0x136B58u;
            goto label_136b58;
        }
    }
    ctx->pc = 0x136B34u;
label_136b34:
    // 0x136b34: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136b38:
    // 0x136b38: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b3c:
    // 0x136b3c: 0x8c22a418  lw          $v0, -0x5BE8($at)
    ctx->pc = 0x136b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943768)));
label_136b40:
    // 0x136b40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136b44:
    // 0x136b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136b48:
    // 0x136b48: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b4c:
    // 0x136b4c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b50:
    // 0x136b50: 0x10000009  b           . + 4 + (0x9 << 2)
label_136b54:
    if (ctx->pc == 0x136B54u) {
        ctx->pc = 0x136B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B50u;
        // 0x136b54: 0xac22a3d0  sw          $v0, -0x5C30($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B58u;
        goto label_136b58;
    }
    ctx->pc = 0x136B50u;
    {
        const bool branch_taken_0x136b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B50u;
        // 0x136b54: 0xac22a3d0  sw          $v0, -0x5C30($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b50) {
            ctx->pc = 0x136B78u;
            goto label_136b78;
        }
    }
    ctx->pc = 0x136B58u;
label_136b58:
    // 0x136b58: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136b5c:
    // 0x136b5c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b60:
    // 0x136b60: 0x8c22a42c  lw          $v0, -0x5BD4($at)
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943788)));
label_136b64:
    // 0x136b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136b68:
    // 0x136b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136b6c:
    // 0x136b6c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b70:
    // 0x136b70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136b74:
    // 0x136b74: 0xac22a3d0  sw          $v0, -0x5C30($at)
    ctx->pc = 0x136b74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943696), GPR_U32(ctx, 2));
label_136b78:
    // 0x136b78: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b7c:
    // 0x136b7c: 0x1000018b  b           . + 4 + (0x18B << 2)
label_136b80:
    if (ctx->pc == 0x136B80u) {
        ctx->pc = 0x136B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B7Cu;
        // 0x136b80: 0xa420a3e6  sh          $zero, -0x5C1A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943718), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B84u;
        goto label_136b84;
    }
    ctx->pc = 0x136B7Cu;
    {
        const bool branch_taken_0x136b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B7Cu;
        // 0x136b80: 0xa420a3e6  sh          $zero, -0x5C1A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943718), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b7c) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136B84u;
label_136b84:
    // 0x136b84: 0x0  nop
    ctx->pc = 0x136b84u;
    // NOP
label_136b88:
    // 0x136b88: 0xc04deb8  jal         func_137AE0
label_136b8c:
    if (ctx->pc == 0x136B8Cu) {
        ctx->pc = 0x136B90u;
        goto label_136b90;
    }
    ctx->pc = 0x136B88u;
    SET_GPR_U32(ctx, 31, 0x136B90u);
    ctx->pc = 0x137AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137AE0u, 0x136B88u, 0x136B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B90u;
label_136b90:
    // 0x136b90: 0x10000186  b           . + 4 + (0x186 << 2)
label_136b94:
    if (ctx->pc == 0x136B94u) {
        ctx->pc = 0x136B98u;
        goto label_136b98;
    }
    ctx->pc = 0x136B90u;
    {
        const bool branch_taken_0x136b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b90) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136B98u;
label_136b98:
    // 0x136b98: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136b9c:
    // 0x136b9c: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
label_136ba0:
    // 0x136ba0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x136ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_136ba4:
    // 0x136ba4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136ba8:
    // 0x136ba8: 0x10000180  b           . + 4 + (0x180 << 2)
label_136bac:
    if (ctx->pc == 0x136BACu) {
        ctx->pc = 0x136BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BA8u;
        // 0x136bac: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BB0u;
        goto label_136bb0;
    }
    ctx->pc = 0x136BA8u;
    {
        const bool branch_taken_0x136ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BA8u;
        // 0x136bac: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ba8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136BB0u;
label_136bb0:
    // 0x136bb0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136bb4:
    // 0x136bb4: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
label_136bb8:
    // 0x136bb8: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x136bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_136bbc:
    // 0x136bbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_136bc0:
    // 0x136bc0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136bc4:
    // 0x136bc4: 0x10000179  b           . + 4 + (0x179 << 2)
label_136bc8:
    if (ctx->pc == 0x136BC8u) {
        ctx->pc = 0x136BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BC4u;
        // 0x136bc8: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BCCu;
        goto label_136bcc;
    }
    ctx->pc = 0x136BC4u;
    {
        const bool branch_taken_0x136bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BC4u;
        // 0x136bc8: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bc4) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136BCCu;
label_136bcc:
    // 0x136bcc: 0x0  nop
    ctx->pc = 0x136bccu;
    // NOP
label_136bd0:
    // 0x136bd0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136bd4:
    // 0x136bd4: 0x9422a3e6  lhu         $v0, -0x5C1A($at)
    ctx->pc = 0x136bd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943718)));
label_136bd8:
    // 0x136bd8: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x136bd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136bdc:
    // 0x136bdc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136be0:
    // 0x136be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136be4:
    // 0x136be4: 0x10000171  b           . + 4 + (0x171 << 2)
label_136be8:
    if (ctx->pc == 0x136BE8u) {
        ctx->pc = 0x136BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BE4u;
        // 0x136be8: 0xa422a3e6  sh          $v0, -0x5C1A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BECu;
        goto label_136bec;
    }
    ctx->pc = 0x136BE4u;
    {
        const bool branch_taken_0x136be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BE4u;
        // 0x136be8: 0xa422a3e6  sh          $v0, -0x5C1A($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294943718), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136be4) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136BECu;
label_136bec:
    // 0x136bec: 0x0  nop
    ctx->pc = 0x136becu;
    // NOP
label_136bf0:
    // 0x136bf0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136bf4:
    // 0x136bf4: 0x9022a400  lbu         $v0, -0x5C00($at)
    ctx->pc = 0x136bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943744)));
label_136bf8:
    // 0x136bf8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x136bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_136bfc:
    // 0x136bfc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_136c00:
    if (ctx->pc == 0x136C00u) {
        ctx->pc = 0x136C04u;
        goto label_136c04;
    }
    ctx->pc = 0x136BFCu;
    {
        const bool branch_taken_0x136bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136bfc) {
            ctx->pc = 0x136C38u;
            goto label_136c38;
        }
    }
    ctx->pc = 0x136C04u;
label_136c04:
    // 0x136c04: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x136c04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_136c08:
    // 0x136c08: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136c0c:
    // 0x136c0c: 0x8c24a41c  lw          $a0, -0x5BE4($at)
    ctx->pc = 0x136c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943772)));
label_136c10:
    // 0x136c10: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_136c14:
    // 0x136c14: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136c18:
    // 0x136c18: 0x24429f20  addiu       $v0, $v0, -0x60E0
    ctx->pc = 0x136c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942496));
label_136c1c:
    // 0x136c1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x136c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_136c20:
    // 0x136c20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_136c24:
    // 0x136c24: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x136c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_136c28:
    // 0x136c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136c2c:
    // 0x136c2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136c30:
    // 0x136c30: 0x1000015e  b           . + 4 + (0x15E << 2)
label_136c34:
    if (ctx->pc == 0x136C34u) {
        ctx->pc = 0x136C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C30u;
        // 0x136c34: 0xac4404b4  sw          $a0, 0x4B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C38u;
        goto label_136c38;
    }
    ctx->pc = 0x136C30u;
    {
        const bool branch_taken_0x136c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C30u;
        // 0x136c34: 0xac4404b4  sw          $a0, 0x4B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c30) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136C38u;
label_136c38:
    // 0x136c38: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_136c3c:
    // 0x136c3c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136c40:
    // 0x136c40: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136c44:
    // 0x136c44: 0x8c24a430  lw          $a0, -0x5BD0($at)
    ctx->pc = 0x136c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943792)));
label_136c48:
    // 0x136c48: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x136c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_136c4c:
    // 0x136c4c: 0x24429f20  addiu       $v0, $v0, -0x60E0
    ctx->pc = 0x136c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942496));
label_136c50:
    // 0x136c50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x136c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_136c54:
    // 0x136c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136c58:
    // 0x136c58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_136c5c:
    // 0x136c5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136c60:
    // 0x136c60: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_136c64:
    // 0x136c64: 0x10000151  b           . + 4 + (0x151 << 2)
label_136c68:
    if (ctx->pc == 0x136C68u) {
        ctx->pc = 0x136C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C64u;
        // 0x136c68: 0xac4404b4  sw          $a0, 0x4B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C6Cu;
        goto label_136c6c;
    }
    ctx->pc = 0x136C64u;
    {
        const bool branch_taken_0x136c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C64u;
        // 0x136c68: 0xac4404b4  sw          $a0, 0x4B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c64) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136C6Cu;
label_136c6c:
    // 0x136c6c: 0x0  nop
    ctx->pc = 0x136c6cu;
    // NOP
label_136c70:
    // 0x136c70: 0xc04c0a0  jal         func_130280
label_136c74:
    if (ctx->pc == 0x136C74u) {
        ctx->pc = 0x136C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C70u;
        // 0x136c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C78u;
        goto label_136c78;
    }
    ctx->pc = 0x136C70u;
    SET_GPR_U32(ctx, 31, 0x136C78u);
    ctx->pc = 0x136C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C70u;
    // 0x136c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130280u, 0x136C70u, 0x136C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C78u;
label_136c78:
    // 0x136c78: 0x1000014c  b           . + 4 + (0x14C << 2)
label_136c7c:
    if (ctx->pc == 0x136C7Cu) {
        ctx->pc = 0x136C80u;
        goto label_136c80;
    }
    ctx->pc = 0x136C78u;
    {
        const bool branch_taken_0x136c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c78) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136C80u;
label_136c80:
    // 0x136c80: 0xc04c6a0  jal         func_131A80
label_136c84:
    if (ctx->pc == 0x136C84u) {
        ctx->pc = 0x136C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C80u;
        // 0x136c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C88u;
        goto label_136c88;
    }
    ctx->pc = 0x136C80u;
    SET_GPR_U32(ctx, 31, 0x136C88u);
    ctx->pc = 0x136C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C80u;
    // 0x136c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A80u, 0x136C80u, 0x136C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C88u;
label_136c88:
    // 0x136c88: 0x10000148  b           . + 4 + (0x148 << 2)
label_136c8c:
    if (ctx->pc == 0x136C8Cu) {
        ctx->pc = 0x136C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C88u;
        // 0x136c8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C90u;
        goto label_136c90;
    }
    ctx->pc = 0x136C88u;
    {
        const bool branch_taken_0x136c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C88u;
        // 0x136c8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c88) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136C90u;
label_136c90:
    // 0x136c90: 0xc04c67c  jal         func_1319F0
label_136c94:
    if (ctx->pc == 0x136C94u) {
        ctx->pc = 0x136C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C90u;
        // 0x136c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C98u;
        goto label_136c98;
    }
    ctx->pc = 0x136C90u;
    SET_GPR_U32(ctx, 31, 0x136C98u);
    ctx->pc = 0x136C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C90u;
    // 0x136c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319F0u, 0x136C90u, 0x136C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C98u;
label_136c98:
    // 0x136c98: 0x10000144  b           . + 4 + (0x144 << 2)
label_136c9c:
    if (ctx->pc == 0x136C9Cu) {
        ctx->pc = 0x136C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C98u;
        // 0x136c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CA0u;
        goto label_136ca0;
    }
    ctx->pc = 0x136C98u;
    {
        const bool branch_taken_0x136c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C98u;
        // 0x136c9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c98) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CA0u;
label_136ca0:
    // 0x136ca0: 0xc04c668  jal         func_1319A0
label_136ca4:
    if (ctx->pc == 0x136CA4u) {
        ctx->pc = 0x136CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA0u;
        // 0x136ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CA8u;
        goto label_136ca8;
    }
    ctx->pc = 0x136CA0u;
    SET_GPR_U32(ctx, 31, 0x136CA8u);
    ctx->pc = 0x136CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA0u;
    // 0x136ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x136CA0u, 0x136CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA8u;
label_136ca8:
    // 0x136ca8: 0x10000140  b           . + 4 + (0x140 << 2)
label_136cac:
    if (ctx->pc == 0x136CACu) {
        ctx->pc = 0x136CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA8u;
        // 0x136cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CB0u;
        goto label_136cb0;
    }
    ctx->pc = 0x136CA8u;
    {
        const bool branch_taken_0x136ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA8u;
        // 0x136cac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ca8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CB0u;
label_136cb0:
    // 0x136cb0: 0xc04c658  jal         func_131960
label_136cb4:
    if (ctx->pc == 0x136CB4u) {
        ctx->pc = 0x136CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CB0u;
        // 0x136cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CB8u;
        goto label_136cb8;
    }
    ctx->pc = 0x136CB0u;
    SET_GPR_U32(ctx, 31, 0x136CB8u);
    ctx->pc = 0x136CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CB0u;
    // 0x136cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131960u, 0x136CB0u, 0x136CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CB8u;
label_136cb8:
    // 0x136cb8: 0x1000013c  b           . + 4 + (0x13C << 2)
label_136cbc:
    if (ctx->pc == 0x136CBCu) {
        ctx->pc = 0x136CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CB8u;
        // 0x136cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CC0u;
        goto label_136cc0;
    }
    ctx->pc = 0x136CB8u;
    {
        const bool branch_taken_0x136cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CB8u;
        // 0x136cbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cb8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CC0u;
label_136cc0:
    // 0x136cc0: 0xc04c644  jal         func_131910
label_136cc4:
    if (ctx->pc == 0x136CC4u) {
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CC8u;
        goto label_136cc8;
    }
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131910u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0x10000138  b           . + 4 + (0x138 << 2)
label_136ccc:
    if (ctx->pc == 0x136CCCu) {
        ctx->pc = 0x136CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC8u;
        // 0x136ccc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CD0u;
        goto label_136cd0;
    }
    ctx->pc = 0x136CC8u;
    {
        const bool branch_taken_0x136cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC8u;
        // 0x136ccc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cc8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CD0u;
label_136cd0:
    // 0x136cd0: 0xc04c614  jal         func_131850
label_136cd4:
    if (ctx->pc == 0x136CD4u) {
        ctx->pc = 0x136CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD0u;
        // 0x136cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CD8u;
        goto label_136cd8;
    }
    ctx->pc = 0x136CD0u;
    SET_GPR_U32(ctx, 31, 0x136CD8u);
    ctx->pc = 0x136CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CD0u;
    // 0x136cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131850u, 0x136CD0u, 0x136CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CD8u;
label_136cd8:
    // 0x136cd8: 0x10000134  b           . + 4 + (0x134 << 2)
label_136cdc:
    if (ctx->pc == 0x136CDCu) {
        ctx->pc = 0x136CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD8u;
        // 0x136cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CE0u;
        goto label_136ce0;
    }
    ctx->pc = 0x136CD8u;
    {
        const bool branch_taken_0x136cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CD8u;
        // 0x136cdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cd8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CE0u;
label_136ce0:
    // 0x136ce0: 0xc04c604  jal         func_131810
label_136ce4:
    if (ctx->pc == 0x136CE4u) {
        ctx->pc = 0x136CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE0u;
        // 0x136ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CE8u;
        goto label_136ce8;
    }
    ctx->pc = 0x136CE0u;
    SET_GPR_U32(ctx, 31, 0x136CE8u);
    ctx->pc = 0x136CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CE0u;
    // 0x136ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131810u, 0x136CE0u, 0x136CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CE8u;
label_136ce8:
    // 0x136ce8: 0x10000130  b           . + 4 + (0x130 << 2)
label_136cec:
    if (ctx->pc == 0x136CECu) {
        ctx->pc = 0x136CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE8u;
        // 0x136cec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CF0u;
        goto label_136cf0;
    }
    ctx->pc = 0x136CE8u;
    {
        const bool branch_taken_0x136ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CE8u;
        // 0x136cec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ce8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136CF0u;
label_136cf0:
    // 0x136cf0: 0xc04c5ec  jal         func_1317B0
label_136cf4:
    if (ctx->pc == 0x136CF4u) {
        ctx->pc = 0x136CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF0u;
        // 0x136cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CF8u;
        goto label_136cf8;
    }
    ctx->pc = 0x136CF0u;
    SET_GPR_U32(ctx, 31, 0x136CF8u);
    ctx->pc = 0x136CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CF0u;
    // 0x136cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1317B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1317B0u, 0x136CF0u, 0x136CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CF8u;
label_136cf8:
    // 0x136cf8: 0x1000012c  b           . + 4 + (0x12C << 2)
label_136cfc:
    if (ctx->pc == 0x136CFCu) {
        ctx->pc = 0x136CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF8u;
        // 0x136cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D00u;
        goto label_136d00;
    }
    ctx->pc = 0x136CF8u;
    {
        const bool branch_taken_0x136cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CF8u;
        // 0x136cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cf8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D00u;
label_136d00:
    // 0x136d00: 0xc04c5e0  jal         func_131780
label_136d04:
    if (ctx->pc == 0x136D04u) {
        ctx->pc = 0x136D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D00u;
        // 0x136d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D08u;
        goto label_136d08;
    }
    ctx->pc = 0x136D00u;
    SET_GPR_U32(ctx, 31, 0x136D08u);
    ctx->pc = 0x136D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D00u;
    // 0x136d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131780u, 0x136D00u, 0x136D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D08u;
label_136d08:
    // 0x136d08: 0x10000128  b           . + 4 + (0x128 << 2)
label_136d0c:
    if (ctx->pc == 0x136D0Cu) {
        ctx->pc = 0x136D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D08u;
        // 0x136d0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D10u;
        goto label_136d10;
    }
    ctx->pc = 0x136D08u;
    {
        const bool branch_taken_0x136d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D08u;
        // 0x136d0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d08) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D10u;
label_136d10:
    // 0x136d10: 0xc04c5dc  jal         func_131770
label_136d14:
    if (ctx->pc == 0x136D14u) {
        ctx->pc = 0x136D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D10u;
        // 0x136d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D18u;
        goto label_136d18;
    }
    ctx->pc = 0x136D10u;
    SET_GPR_U32(ctx, 31, 0x136D18u);
    ctx->pc = 0x136D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D10u;
    // 0x136d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131770u, 0x136D10u, 0x136D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D18u;
label_136d18:
    // 0x136d18: 0x10000124  b           . + 4 + (0x124 << 2)
label_136d1c:
    if (ctx->pc == 0x136D1Cu) {
        ctx->pc = 0x136D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D18u;
        // 0x136d1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D20u;
        goto label_136d20;
    }
    ctx->pc = 0x136D18u;
    {
        const bool branch_taken_0x136d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D18u;
        // 0x136d1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d18) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D20u;
label_136d20:
    // 0x136d20: 0xc04c5d8  jal         func_131760
label_136d24:
    if (ctx->pc == 0x136D24u) {
        ctx->pc = 0x136D28u;
        goto label_136d28;
    }
    ctx->pc = 0x136D20u;
    SET_GPR_U32(ctx, 31, 0x136D28u);
    ctx->pc = 0x131760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131760u, 0x136D20u, 0x136D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D28u;
label_136d28:
    // 0x136d28: 0x10000120  b           . + 4 + (0x120 << 2)
label_136d2c:
    if (ctx->pc == 0x136D2Cu) {
        ctx->pc = 0x136D30u;
        goto label_136d30;
    }
    ctx->pc = 0x136D28u;
    {
        const bool branch_taken_0x136d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d28) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D30u;
label_136d30:
    // 0x136d30: 0xc04c838  jal         func_1320E0
label_136d34:
    if (ctx->pc == 0x136D34u) {
        ctx->pc = 0x136D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D30u;
        // 0x136d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D38u;
        goto label_136d38;
    }
    ctx->pc = 0x136D30u;
    SET_GPR_U32(ctx, 31, 0x136D38u);
    ctx->pc = 0x136D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D30u;
    // 0x136d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1320E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1320E0u, 0x136D30u, 0x136D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D38u;
label_136d38:
    // 0x136d38: 0x1000011c  b           . + 4 + (0x11C << 2)
label_136d3c:
    if (ctx->pc == 0x136D3Cu) {
        ctx->pc = 0x136D40u;
        goto label_136d40;
    }
    ctx->pc = 0x136D38u;
    {
        const bool branch_taken_0x136d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d38) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D40u;
label_136d40:
    // 0x136d40: 0xc08ba78  jal         func_22E9E0
label_136d44:
    if (ctx->pc == 0x136D44u) {
        ctx->pc = 0x136D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D40u;
        // 0x136d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D48u;
        goto label_136d48;
    }
    ctx->pc = 0x136D40u;
    SET_GPR_U32(ctx, 31, 0x136D48u);
    ctx->pc = 0x136D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D40u;
    // 0x136d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E9E0u, 0x136D40u, 0x136D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D48u;
label_136d48:
    // 0x136d48: 0x10000118  b           . + 4 + (0x118 << 2)
label_136d4c:
    if (ctx->pc == 0x136D4Cu) {
        ctx->pc = 0x136D50u;
        goto label_136d50;
    }
    ctx->pc = 0x136D48u;
    {
        const bool branch_taken_0x136d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d48) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D50u;
label_136d50:
    // 0x136d50: 0xc08ba20  jal         func_22E880
label_136d54:
    if (ctx->pc == 0x136D54u) {
        ctx->pc = 0x136D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D50u;
        // 0x136d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D58u;
        goto label_136d58;
    }
    ctx->pc = 0x136D50u;
    SET_GPR_U32(ctx, 31, 0x136D58u);
    ctx->pc = 0x136D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D50u;
    // 0x136d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E880u, 0x136D50u, 0x136D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D58u;
label_136d58:
    // 0x136d58: 0x10000114  b           . + 4 + (0x114 << 2)
label_136d5c:
    if (ctx->pc == 0x136D5Cu) {
        ctx->pc = 0x136D60u;
        goto label_136d60;
    }
    ctx->pc = 0x136D58u;
    {
        const bool branch_taken_0x136d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d58) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D60u;
label_136d60:
    // 0x136d60: 0xc08b8b0  jal         func_22E2C0
label_136d64:
    if (ctx->pc == 0x136D64u) {
        ctx->pc = 0x136D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D60u;
        // 0x136d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D68u;
        goto label_136d68;
    }
    ctx->pc = 0x136D60u;
    SET_GPR_U32(ctx, 31, 0x136D68u);
    ctx->pc = 0x136D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D60u;
    // 0x136d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2C0u, 0x136D60u, 0x136D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D68u;
label_136d68:
    // 0x136d68: 0x10000110  b           . + 4 + (0x110 << 2)
label_136d6c:
    if (ctx->pc == 0x136D6Cu) {
        ctx->pc = 0x136D70u;
        goto label_136d70;
    }
    ctx->pc = 0x136D68u;
    {
        const bool branch_taken_0x136d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d68) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D70u;
label_136d70:
    // 0x136d70: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x136d70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_136d74:
    // 0x136d74: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x136d74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_136d78:
    // 0x136d78: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x136d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_136d7c:
    // 0x136d7c: 0xc08bb00  jal         func_22EC00
label_136d80:
    if (ctx->pc == 0x136D80u) {
        ctx->pc = 0x136D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D7Cu;
        // 0x136d80: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D84u;
        goto label_136d84;
    }
    ctx->pc = 0x136D7Cu;
    SET_GPR_U32(ctx, 31, 0x136D84u);
    ctx->pc = 0x136D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D7Cu;
    // 0x136d80: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EC00u, 0x136D7Cu, 0x136D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D84u;
label_136d84:
    // 0x136d84: 0x10000109  b           . + 4 + (0x109 << 2)
label_136d88:
    if (ctx->pc == 0x136D88u) {
        ctx->pc = 0x136D8Cu;
        goto label_136d8c;
    }
    ctx->pc = 0x136D84u;
    {
        const bool branch_taken_0x136d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d84) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136D8Cu;
label_136d8c:
    // 0x136d8c: 0x0  nop
    ctx->pc = 0x136d8cu;
    // NOP
label_136d90:
    // 0x136d90: 0xc04c08c  jal         func_130230
label_136d94:
    if (ctx->pc == 0x136D94u) {
        ctx->pc = 0x136D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D90u;
        // 0x136d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136D98u;
        goto label_136d98;
    }
    ctx->pc = 0x136D90u;
    SET_GPR_U32(ctx, 31, 0x136D98u);
    ctx->pc = 0x136D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D90u;
    // 0x136d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130230u, 0x136D90u, 0x136D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D98u;
label_136d98:
    // 0x136d98: 0x10000104  b           . + 4 + (0x104 << 2)
label_136d9c:
    if (ctx->pc == 0x136D9Cu) {
        ctx->pc = 0x136DA0u;
        goto label_136da0;
    }
    ctx->pc = 0x136D98u;
    {
        const bool branch_taken_0x136d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d98) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DA0u;
label_136da0:
    // 0x136da0: 0xc04bfa8  jal         func_12FEA0
label_136da4:
    if (ctx->pc == 0x136DA4u) {
        ctx->pc = 0x136DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DA0u;
        // 0x136da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DA8u;
        goto label_136da8;
    }
    ctx->pc = 0x136DA0u;
    SET_GPR_U32(ctx, 31, 0x136DA8u);
    ctx->pc = 0x136DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA0u;
    // 0x136da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEA0u, 0x136DA0u, 0x136DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA8u;
label_136da8:
    // 0x136da8: 0x10000100  b           . + 4 + (0x100 << 2)
label_136dac:
    if (ctx->pc == 0x136DACu) {
        ctx->pc = 0x136DB0u;
        goto label_136db0;
    }
    ctx->pc = 0x136DA8u;
    {
        const bool branch_taken_0x136da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136da8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DB0u;
label_136db0:
    // 0x136db0: 0xc04c33c  jal         func_130CF0
label_136db4:
    if (ctx->pc == 0x136DB4u) {
        ctx->pc = 0x136DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DB0u;
        // 0x136db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DB8u;
        goto label_136db8;
    }
    ctx->pc = 0x136DB0u;
    SET_GPR_U32(ctx, 31, 0x136DB8u);
    ctx->pc = 0x136DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DB0u;
    // 0x136db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130CF0u, 0x136DB0u, 0x136DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DB8u;
label_136db8:
    // 0x136db8: 0x100000fc  b           . + 4 + (0xFC << 2)
label_136dbc:
    if (ctx->pc == 0x136DBCu) {
        ctx->pc = 0x136DC0u;
        goto label_136dc0;
    }
    ctx->pc = 0x136DB8u;
    {
        const bool branch_taken_0x136db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136db8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DC0u;
label_136dc0:
    // 0x136dc0: 0xc04c2d4  jal         func_130B50
label_136dc4:
    if (ctx->pc == 0x136DC4u) {
        ctx->pc = 0x136DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DC0u;
        // 0x136dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DC8u;
        goto label_136dc8;
    }
    ctx->pc = 0x136DC0u;
    SET_GPR_U32(ctx, 31, 0x136DC8u);
    ctx->pc = 0x136DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DC0u;
    // 0x136dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130B50u, 0x136DC0u, 0x136DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DC8u;
label_136dc8:
    // 0x136dc8: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_136dcc:
    if (ctx->pc == 0x136DCCu) {
        ctx->pc = 0x136DD0u;
        goto label_136dd0;
    }
    ctx->pc = 0x136DC8u;
    {
        const bool branch_taken_0x136dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136dc8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DD0u;
label_136dd0:
    // 0x136dd0: 0xc04c280  jal         func_130A00
label_136dd4:
    if (ctx->pc == 0x136DD4u) {
        ctx->pc = 0x136DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DD0u;
        // 0x136dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DD8u;
        goto label_136dd8;
    }
    ctx->pc = 0x136DD0u;
    SET_GPR_U32(ctx, 31, 0x136DD8u);
    ctx->pc = 0x136DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DD0u;
    // 0x136dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130A00u, 0x136DD0u, 0x136DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DD8u;
label_136dd8:
    // 0x136dd8: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_136ddc:
    if (ctx->pc == 0x136DDCu) {
        ctx->pc = 0x136DE0u;
        goto label_136de0;
    }
    ctx->pc = 0x136DD8u;
    {
        const bool branch_taken_0x136dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136dd8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DE0u;
label_136de0:
    // 0x136de0: 0xc04c22c  jal         func_1308B0
label_136de4:
    if (ctx->pc == 0x136DE4u) {
        ctx->pc = 0x136DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DE0u;
        // 0x136de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DE8u;
        goto label_136de8;
    }
    ctx->pc = 0x136DE0u;
    SET_GPR_U32(ctx, 31, 0x136DE8u);
    ctx->pc = 0x136DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DE0u;
    // 0x136de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1308B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1308B0u, 0x136DE0u, 0x136DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DE8u;
label_136de8:
    // 0x136de8: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_136dec:
    if (ctx->pc == 0x136DECu) {
        ctx->pc = 0x136DF0u;
        goto label_136df0;
    }
    ctx->pc = 0x136DE8u;
    {
        const bool branch_taken_0x136de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136de8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136DF0u;
label_136df0:
    // 0x136df0: 0xc04c210  jal         func_130840
label_136df4:
    if (ctx->pc == 0x136DF4u) {
        ctx->pc = 0x136DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DF0u;
        // 0x136df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136DF8u;
        goto label_136df8;
    }
    ctx->pc = 0x136DF0u;
    SET_GPR_U32(ctx, 31, 0x136DF8u);
    ctx->pc = 0x136DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DF0u;
    // 0x136df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130840u, 0x136DF0u, 0x136DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DF8u;
label_136df8:
    // 0x136df8: 0x100000ec  b           . + 4 + (0xEC << 2)
label_136dfc:
    if (ctx->pc == 0x136DFCu) {
        ctx->pc = 0x136E00u;
        goto label_136e00;
    }
    ctx->pc = 0x136DF8u;
    {
        const bool branch_taken_0x136df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136df8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E00u;
label_136e00:
    // 0x136e00: 0xc04c1ec  jal         func_1307B0
label_136e04:
    if (ctx->pc == 0x136E04u) {
        ctx->pc = 0x136E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E00u;
        // 0x136e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E08u;
        goto label_136e08;
    }
    ctx->pc = 0x136E00u;
    SET_GPR_U32(ctx, 31, 0x136E08u);
    ctx->pc = 0x136E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E00u;
    // 0x136e04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1307B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1307B0u, 0x136E00u, 0x136E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E08u;
label_136e08:
    // 0x136e08: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_136e0c:
    if (ctx->pc == 0x136E0Cu) {
        ctx->pc = 0x136E10u;
        goto label_136e10;
    }
    ctx->pc = 0x136E08u;
    {
        const bool branch_taken_0x136e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e08) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E10u;
label_136e10:
    // 0x136e10: 0xc04c128  jal         func_1304A0
label_136e14:
    if (ctx->pc == 0x136E14u) {
        ctx->pc = 0x136E18u;
        goto label_136e18;
    }
    ctx->pc = 0x136E10u;
    SET_GPR_U32(ctx, 31, 0x136E18u);
    ctx->pc = 0x1304A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1304A0u, 0x136E10u, 0x136E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E18u;
label_136e18:
    // 0x136e18: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_136e1c:
    if (ctx->pc == 0x136E1Cu) {
        ctx->pc = 0x136E20u;
        goto label_136e20;
    }
    ctx->pc = 0x136E18u;
    {
        const bool branch_taken_0x136e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e18) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E20u;
label_136e20:
    // 0x136e20: 0xc04c118  jal         func_130460
label_136e24:
    if (ctx->pc == 0x136E24u) {
        ctx->pc = 0x136E28u;
        goto label_136e28;
    }
    ctx->pc = 0x136E20u;
    SET_GPR_U32(ctx, 31, 0x136E28u);
    ctx->pc = 0x130460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130460u, 0x136E20u, 0x136E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E28u;
label_136e28:
    // 0x136e28: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_136e2c:
    if (ctx->pc == 0x136E2Cu) {
        ctx->pc = 0x136E30u;
        goto label_136e30;
    }
    ctx->pc = 0x136E28u;
    {
        const bool branch_taken_0x136e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e28) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E30u;
label_136e30:
    // 0x136e30: 0xc04c0ac  jal         func_1302B0
label_136e34:
    if (ctx->pc == 0x136E34u) {
        ctx->pc = 0x136E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E30u;
        // 0x136e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E38u;
        goto label_136e38;
    }
    ctx->pc = 0x136E30u;
    SET_GPR_U32(ctx, 31, 0x136E38u);
    ctx->pc = 0x136E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E30u;
    // 0x136e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1302B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1302B0u, 0x136E30u, 0x136E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E38u;
label_136e38:
    // 0x136e38: 0x100000dc  b           . + 4 + (0xDC << 2)
label_136e3c:
    if (ctx->pc == 0x136E3Cu) {
        ctx->pc = 0x136E40u;
        goto label_136e40;
    }
    ctx->pc = 0x136E38u;
    {
        const bool branch_taken_0x136e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e38) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E40u;
label_136e40:
    // 0x136e40: 0xc0630b0  jal         func_18C2C0
label_136e44:
    if (ctx->pc == 0x136E44u) {
        ctx->pc = 0x136E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E40u;
        // 0x136e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E48u;
        goto label_136e48;
    }
    ctx->pc = 0x136E40u;
    SET_GPR_U32(ctx, 31, 0x136E48u);
    ctx->pc = 0x136E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E40u;
    // 0x136e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2C0u, 0x136E40u, 0x136E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E48u;
label_136e48:
    // 0x136e48: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_136e4c:
    if (ctx->pc == 0x136E4Cu) {
        ctx->pc = 0x136E50u;
        goto label_136e50;
    }
    ctx->pc = 0x136E48u;
    {
        const bool branch_taken_0x136e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e48) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E50u;
label_136e50:
    // 0x136e50: 0xc04b90c  jal         func_12E430
label_136e54:
    if (ctx->pc == 0x136E54u) {
        ctx->pc = 0x136E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E50u;
        // 0x136e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E58u;
        goto label_136e58;
    }
    ctx->pc = 0x136E50u;
    SET_GPR_U32(ctx, 31, 0x136E58u);
    ctx->pc = 0x136E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E50u;
    // 0x136e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E430u, 0x136E50u, 0x136E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E58u;
label_136e58:
    // 0x136e58: 0x100000d4  b           . + 4 + (0xD4 << 2)
label_136e5c:
    if (ctx->pc == 0x136E5Cu) {
        ctx->pc = 0x136E60u;
        goto label_136e60;
    }
    ctx->pc = 0x136E58u;
    {
        const bool branch_taken_0x136e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e58) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E60u;
label_136e60:
    // 0x136e60: 0xc04bab8  jal         func_12EAE0
label_136e64:
    if (ctx->pc == 0x136E64u) {
        ctx->pc = 0x136E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E60u;
        // 0x136e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E68u;
        goto label_136e68;
    }
    ctx->pc = 0x136E60u;
    SET_GPR_U32(ctx, 31, 0x136E68u);
    ctx->pc = 0x136E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E60u;
    // 0x136e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAE0u, 0x136E60u, 0x136E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E68u;
label_136e68:
    // 0x136e68: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_136e6c:
    if (ctx->pc == 0x136E6Cu) {
        ctx->pc = 0x136E70u;
        goto label_136e70;
    }
    ctx->pc = 0x136E68u;
    {
        const bool branch_taken_0x136e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e68) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E70u;
label_136e70:
    // 0x136e70: 0xc04b9a8  jal         func_12E6A0
label_136e74:
    if (ctx->pc == 0x136E74u) {
        ctx->pc = 0x136E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E70u;
        // 0x136e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E78u;
        goto label_136e78;
    }
    ctx->pc = 0x136E70u;
    SET_GPR_U32(ctx, 31, 0x136E78u);
    ctx->pc = 0x136E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E70u;
    // 0x136e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E6A0u, 0x136E70u, 0x136E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E78u;
label_136e78:
    // 0x136e78: 0x100000cc  b           . + 4 + (0xCC << 2)
label_136e7c:
    if (ctx->pc == 0x136E7Cu) {
        ctx->pc = 0x136E80u;
        goto label_136e80;
    }
    ctx->pc = 0x136E78u;
    {
        const bool branch_taken_0x136e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e78) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E80u;
label_136e80:
    // 0x136e80: 0xc04b5d4  jal         func_12D750
label_136e84:
    if (ctx->pc == 0x136E84u) {
        ctx->pc = 0x136E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E80u;
        // 0x136e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E88u;
        goto label_136e88;
    }
    ctx->pc = 0x136E80u;
    SET_GPR_U32(ctx, 31, 0x136E88u);
    ctx->pc = 0x136E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E80u;
    // 0x136e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D750u, 0x136E80u, 0x136E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E88u;
label_136e88:
    // 0x136e88: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_136e8c:
    if (ctx->pc == 0x136E8Cu) {
        ctx->pc = 0x136E90u;
        goto label_136e90;
    }
    ctx->pc = 0x136E88u;
    {
        const bool branch_taken_0x136e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e88) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136E90u;
label_136e90:
    // 0x136e90: 0xc0713fc  jal         func_1C4FF0
label_136e94:
    if (ctx->pc == 0x136E94u) {
        ctx->pc = 0x136E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E90u;
        // 0x136e94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136E98u;
        goto label_136e98;
    }
    ctx->pc = 0x136E90u;
    SET_GPR_U32(ctx, 31, 0x136E98u);
    ctx->pc = 0x136E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E90u;
    // 0x136e94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF0u, 0x136E90u, 0x136E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E98u;
label_136e98:
    // 0x136e98: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_136e9c:
    if (ctx->pc == 0x136E9Cu) {
        ctx->pc = 0x136EA0u;
        goto label_136ea0;
    }
    ctx->pc = 0x136E98u;
    {
        const bool branch_taken_0x136e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136e98) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136EA0u;
label_136ea0:
    // 0x136ea0: 0xc0713fc  jal         func_1C4FF0
label_136ea4:
    if (ctx->pc == 0x136EA4u) {
        ctx->pc = 0x136EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EA0u;
        // 0x136ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EA8u;
        goto label_136ea8;
    }
    ctx->pc = 0x136EA0u;
    SET_GPR_U32(ctx, 31, 0x136EA8u);
    ctx->pc = 0x136EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EA0u;
    // 0x136ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FF0u, 0x136EA0u, 0x136EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EA8u;
label_136ea8:
    // 0x136ea8: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_136eac:
    if (ctx->pc == 0x136EACu) {
        ctx->pc = 0x136EB0u;
        goto label_136eb0;
    }
    ctx->pc = 0x136EA8u;
    {
        const bool branch_taken_0x136ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ea8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136EB0u;
label_136eb0:
    // 0x136eb0: 0xc04c068  jal         func_1301A0
label_136eb4:
    if (ctx->pc == 0x136EB4u) {
        ctx->pc = 0x136EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EB0u;
        // 0x136eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EB8u;
        goto label_136eb8;
    }
    ctx->pc = 0x136EB0u;
    SET_GPR_U32(ctx, 31, 0x136EB8u);
    ctx->pc = 0x136EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EB0u;
    // 0x136eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1301A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1301A0u, 0x136EB0u, 0x136EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EB8u;
label_136eb8:
    // 0x136eb8: 0x100000bc  b           . + 4 + (0xBC << 2)
label_136ebc:
    if (ctx->pc == 0x136EBCu) {
        ctx->pc = 0x136EC0u;
        goto label_136ec0;
    }
    ctx->pc = 0x136EB8u;
    {
        const bool branch_taken_0x136eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136eb8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136EC0u;
label_136ec0:
    // 0x136ec0: 0xc04c050  jal         func_130140
label_136ec4:
    if (ctx->pc == 0x136EC4u) {
        ctx->pc = 0x136EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EC0u;
        // 0x136ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EC8u;
        goto label_136ec8;
    }
    ctx->pc = 0x136EC0u;
    SET_GPR_U32(ctx, 31, 0x136EC8u);
    ctx->pc = 0x136EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EC0u;
    // 0x136ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130140u, 0x136EC0u, 0x136EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EC8u;
label_136ec8:
    // 0x136ec8: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_136ecc:
    if (ctx->pc == 0x136ECCu) {
        ctx->pc = 0x136ED0u;
        goto label_136ed0;
    }
    ctx->pc = 0x136EC8u;
    {
        const bool branch_taken_0x136ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ec8) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136ED0u;
label_136ed0:
    // 0x136ed0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136ed4:
    // 0x136ed4: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
label_136ed8:
    // 0x136ed8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x136ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_136edc:
    // 0x136edc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136ee0:
    // 0x136ee0: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_136ee4:
    if (ctx->pc == 0x136EE4u) {
        ctx->pc = 0x136EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE0u;
        // 0x136ee4: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136EE8u;
        goto label_136ee8;
    }
    ctx->pc = 0x136EE0u;
    {
        const bool branch_taken_0x136ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136EE0u;
        // 0x136ee4: 0xac22a3e0  sw          $v0, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ee0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136EE8u;
label_136ee8:
    // 0x136ee8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136eec:
    // 0x136eec: 0x9022a400  lbu         $v0, -0x5C00($at)
    ctx->pc = 0x136eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943744)));
label_136ef0:
    // 0x136ef0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x136ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_136ef4:
    // 0x136ef4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_136ef8:
    if (ctx->pc == 0x136EF8u) {
        ctx->pc = 0x136EFCu;
        goto label_136efc;
    }
    ctx->pc = 0x136EF4u;
    {
        const bool branch_taken_0x136ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ef4) {
            ctx->pc = 0x136F20u;
            goto label_136f20;
        }
    }
    ctx->pc = 0x136EFCu;
label_136efc:
    // 0x136efc: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136f00:
    // 0x136f00: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f04:
    // 0x136f04: 0x8c22a414  lw          $v0, -0x5BEC($at)
    ctx->pc = 0x136f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943764)));
label_136f08:
    // 0x136f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136f0c:
    // 0x136f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136f10:
    // 0x136f10: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f14:
    // 0x136f14: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x136f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136f18:
    // 0x136f18: 0x10000009  b           . + 4 + (0x9 << 2)
label_136f1c:
    if (ctx->pc == 0x136F1Cu) {
        ctx->pc = 0x136F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F18u;
        // 0x136f1c: 0xac22a3cc  sw          $v0, -0x5C34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F20u;
        goto label_136f20;
    }
    ctx->pc = 0x136F18u;
    {
        const bool branch_taken_0x136f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F18u;
        // 0x136f1c: 0xac22a3cc  sw          $v0, -0x5C34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f18) {
            ctx->pc = 0x136F40u;
            goto label_136f40;
        }
    }
    ctx->pc = 0x136F20u;
label_136f20:
    // 0x136f20: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x136f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_136f24:
    // 0x136f24: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f28:
    // 0x136f28: 0x8c22a424  lw          $v0, -0x5BDC($at)
    ctx->pc = 0x136f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943780)));
label_136f2c:
    // 0x136f2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x136f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_136f30:
    // 0x136f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x136f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_136f34:
    // 0x136f34: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f38:
    // 0x136f38: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x136f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136f3c:
    // 0x136f3c: 0xac22a3cc  sw          $v0, -0x5C34($at)
    ctx->pc = 0x136f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 2));
label_136f40:
    // 0x136f40: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f44:
    // 0x136f44: 0xa420a3e4  sh          $zero, -0x5C1C($at)
    ctx->pc = 0x136f44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943716), (uint16_t)GPR_U32(ctx, 0));
label_136f48:
    // 0x136f48: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f4c:
    // 0x136f4c: 0xa420a3e8  sh          $zero, -0x5C18($at)
    ctx->pc = 0x136f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294943720), (uint16_t)GPR_U32(ctx, 0));
label_136f50:
    // 0x136f50: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f54:
    // 0x136f54: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x136f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
label_136f58:
    // 0x136f58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x136f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_136f5c:
    // 0x136f5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_136f60:
    if (ctx->pc == 0x136F60u) {
        ctx->pc = 0x136F64u;
        goto label_136f64;
    }
    ctx->pc = 0x136F5Cu;
    {
        const bool branch_taken_0x136f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136f5c) {
            ctx->pc = 0x136F88u;
            goto label_136f88;
        }
    }
    ctx->pc = 0x136F64u;
label_136f64:
    // 0x136f64: 0xc04d3d4  jal         func_134F50
label_136f68:
    if (ctx->pc == 0x136F68u) {
        ctx->pc = 0x136F6Cu;
        goto label_136f6c;
    }
    ctx->pc = 0x136F64u;
    SET_GPR_U32(ctx, 31, 0x136F6Cu);
    ctx->pc = 0x134F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F50u, 0x136F64u, 0x136F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F6Cu;
label_136f6c:
    // 0x136f6c: 0xc04d4a8  jal         func_1352A0
label_136f70:
    if (ctx->pc == 0x136F70u) {
        ctx->pc = 0x136F74u;
        goto label_136f74;
    }
    ctx->pc = 0x136F6Cu;
    SET_GPR_U32(ctx, 31, 0x136F74u);
    ctx->pc = 0x1352A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352A0u, 0x136F6Cu, 0x136F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F74u;
label_136f74:
    // 0x136f74: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f78:
    // 0x136f78: 0xc04c430  jal         func_1310C0
label_136f7c:
    if (ctx->pc == 0x136F7Cu) {
        ctx->pc = 0x136F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F78u;
        // 0x136f7c: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F80u;
        goto label_136f80;
    }
    ctx->pc = 0x136F78u;
    SET_GPR_U32(ctx, 31, 0x136F80u);
    ctx->pc = 0x136F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F78u;
    // 0x136f7c: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x136F78u, 0x136F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F80u;
label_136f80:
    // 0x136f80: 0xc04d1e0  jal         func_134780
label_136f84:
    if (ctx->pc == 0x136F84u) {
        ctx->pc = 0x136F88u;
        goto label_136f88;
    }
    ctx->pc = 0x136F80u;
    SET_GPR_U32(ctx, 31, 0x136F88u);
    ctx->pc = 0x134780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134780u, 0x136F80u, 0x136F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F88u;
label_136f88:
    // 0x136f88: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x136f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_136f8c:
    // 0x136f8c: 0x8c22a3cc  lw          $v0, -0x5C34($at)
    ctx->pc = 0x136f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
label_136f90:
    // 0x136f90: 0x10000086  b           . + 4 + (0x86 << 2)
label_136f94:
    if (ctx->pc == 0x136F94u) {
        ctx->pc = 0x136F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F90u;
        // 0x136f94: 0x2450ffe0  addiu       $s0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136F98u;
        goto label_136f98;
    }
    ctx->pc = 0x136F90u;
    {
        const bool branch_taken_0x136f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F90u;
        // 0x136f94: 0x2450ffe0  addiu       $s0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f90) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136F98u;
label_136f98:
    // 0x136f98: 0xc04c034  jal         func_1300D0
label_136f9c:
    if (ctx->pc == 0x136F9Cu) {
        ctx->pc = 0x136F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F98u;
        // 0x136f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FA0u;
        goto label_136fa0;
    }
    ctx->pc = 0x136F98u;
    SET_GPR_U32(ctx, 31, 0x136FA0u);
    ctx->pc = 0x136F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F98u;
    // 0x136f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1300D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300D0u, 0x136F98u, 0x136FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FA0u;
label_136fa0:
    // 0x136fa0: 0x10000082  b           . + 4 + (0x82 << 2)
label_136fa4:
    if (ctx->pc == 0x136FA4u) {
        ctx->pc = 0x136FA8u;
        goto label_136fa8;
    }
    ctx->pc = 0x136FA0u;
    {
        const bool branch_taken_0x136fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fa0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FA8u;
label_136fa8:
    // 0x136fa8: 0xc04c02c  jal         func_1300B0
label_136fac:
    if (ctx->pc == 0x136FACu) {
        ctx->pc = 0x136FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FA8u;
        // 0x136fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FB0u;
        goto label_136fb0;
    }
    ctx->pc = 0x136FA8u;
    SET_GPR_U32(ctx, 31, 0x136FB0u);
    ctx->pc = 0x136FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FA8u;
    // 0x136fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1300B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1300B0u, 0x136FA8u, 0x136FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FB0u;
label_136fb0:
    // 0x136fb0: 0x1000007e  b           . + 4 + (0x7E << 2)
label_136fb4:
    if (ctx->pc == 0x136FB4u) {
        ctx->pc = 0x136FB8u;
        goto label_136fb8;
    }
    ctx->pc = 0x136FB0u;
    {
        const bool branch_taken_0x136fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fb0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FB8u;
label_136fb8:
    // 0x136fb8: 0xc04cd98  jal         func_133660
label_136fbc:
    if (ctx->pc == 0x136FBCu) {
        ctx->pc = 0x136FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FB8u;
        // 0x136fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FC0u;
        goto label_136fc0;
    }
    ctx->pc = 0x136FB8u;
    SET_GPR_U32(ctx, 31, 0x136FC0u);
    ctx->pc = 0x136FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FB8u;
    // 0x136fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133660u, 0x136FB8u, 0x136FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x1000007a  b           . + 4 + (0x7A << 2)
label_136fc4:
    if (ctx->pc == 0x136FC4u) {
        ctx->pc = 0x136FC8u;
        goto label_136fc8;
    }
    ctx->pc = 0x136FC0u;
    {
        const bool branch_taken_0x136fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fc0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FC8u;
label_136fc8:
    // 0x136fc8: 0xc04cd64  jal         func_133590
label_136fcc:
    if (ctx->pc == 0x136FCCu) {
        ctx->pc = 0x136FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FC8u;
        // 0x136fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FD0u;
        goto label_136fd0;
    }
    ctx->pc = 0x136FC8u;
    SET_GPR_U32(ctx, 31, 0x136FD0u);
    ctx->pc = 0x136FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FC8u;
    // 0x136fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133590u, 0x136FC8u, 0x136FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FD0u;
label_136fd0:
    // 0x136fd0: 0x10000076  b           . + 4 + (0x76 << 2)
label_136fd4:
    if (ctx->pc == 0x136FD4u) {
        ctx->pc = 0x136FD8u;
        goto label_136fd8;
    }
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FD8u;
label_136fd8:
    // 0x136fd8: 0xc04ccf8  jal         func_1333E0
label_136fdc:
    if (ctx->pc == 0x136FDCu) {
        ctx->pc = 0x136FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FD8u;
        // 0x136fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FE0u;
        goto label_136fe0;
    }
    ctx->pc = 0x136FD8u;
    SET_GPR_U32(ctx, 31, 0x136FE0u);
    ctx->pc = 0x136FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FD8u;
    // 0x136fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1333E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333E0u, 0x136FD8u, 0x136FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FE0u;
label_136fe0:
    // 0x136fe0: 0x10000072  b           . + 4 + (0x72 << 2)
label_136fe4:
    if (ctx->pc == 0x136FE4u) {
        ctx->pc = 0x136FE8u;
        goto label_136fe8;
    }
    ctx->pc = 0x136FE0u;
    {
        const bool branch_taken_0x136fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fe0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FE8u;
label_136fe8:
    // 0x136fe8: 0xc04cc78  jal         func_1331E0
label_136fec:
    if (ctx->pc == 0x136FECu) {
        ctx->pc = 0x136FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FE8u;
        // 0x136fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136FF0u;
        goto label_136ff0;
    }
    ctx->pc = 0x136FE8u;
    SET_GPR_U32(ctx, 31, 0x136FF0u);
    ctx->pc = 0x136FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FE8u;
    // 0x136fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331E0u, 0x136FE8u, 0x136FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FF0u;
label_136ff0:
    // 0x136ff0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_136ff4:
    if (ctx->pc == 0x136FF4u) {
        ctx->pc = 0x136FF8u;
        goto label_136ff8;
    }
    ctx->pc = 0x136FF0u;
    {
        const bool branch_taken_0x136ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ff0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x136FF8u;
label_136ff8:
    // 0x136ff8: 0xc04cbe8  jal         func_132FA0
label_136ffc:
    if (ctx->pc == 0x136FFCu) {
        ctx->pc = 0x136FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FF8u;
        // 0x136ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137000u;
        goto label_137000;
    }
    ctx->pc = 0x136FF8u;
    SET_GPR_U32(ctx, 31, 0x137000u);
    ctx->pc = 0x136FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FF8u;
    // 0x136ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132FA0u, 0x136FF8u, 0x137000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137000u;
label_137000:
    // 0x137000: 0x1000006a  b           . + 4 + (0x6A << 2)
label_137004:
    if (ctx->pc == 0x137004u) {
        ctx->pc = 0x137008u;
        goto label_137008;
    }
    ctx->pc = 0x137000u;
    {
        const bool branch_taken_0x137000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137000) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137008u;
label_137008:
    // 0x137008: 0xc04cbd8  jal         func_132F60
label_13700c:
    if (ctx->pc == 0x13700Cu) {
        ctx->pc = 0x13700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137008u;
        // 0x13700c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137010u;
        goto label_137010;
    }
    ctx->pc = 0x137008u;
    SET_GPR_U32(ctx, 31, 0x137010u);
    ctx->pc = 0x13700Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137008u;
    // 0x13700c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132F60u, 0x137008u, 0x137010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137010u;
label_137010:
    // 0x137010: 0x10000066  b           . + 4 + (0x66 << 2)
label_137014:
    if (ctx->pc == 0x137014u) {
        ctx->pc = 0x137018u;
        goto label_137018;
    }
    ctx->pc = 0x137010u;
    {
        const bool branch_taken_0x137010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137010) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137018u;
label_137018:
    // 0x137018: 0xc04cb78  jal         func_132DE0
label_13701c:
    if (ctx->pc == 0x13701Cu) {
        ctx->pc = 0x13701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137018u;
        // 0x13701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137020u;
        goto label_137020;
    }
    ctx->pc = 0x137018u;
    SET_GPR_U32(ctx, 31, 0x137020u);
    ctx->pc = 0x13701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137018u;
    // 0x13701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DE0u, 0x137018u, 0x137020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137020u;
label_137020:
    // 0x137020: 0x10000062  b           . + 4 + (0x62 << 2)
label_137024:
    if (ctx->pc == 0x137024u) {
        ctx->pc = 0x137028u;
        goto label_137028;
    }
    ctx->pc = 0x137020u;
    {
        const bool branch_taken_0x137020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137020) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137028u;
label_137028:
    // 0x137028: 0xc04caf0  jal         func_132BC0
label_13702c:
    if (ctx->pc == 0x13702Cu) {
        ctx->pc = 0x13702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137028u;
        // 0x13702c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137030u;
        goto label_137030;
    }
    ctx->pc = 0x137028u;
    SET_GPR_U32(ctx, 31, 0x137030u);
    ctx->pc = 0x13702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137028u;
    // 0x13702c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BC0u, 0x137028u, 0x137030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137030u;
label_137030:
    // 0x137030: 0x1000005e  b           . + 4 + (0x5E << 2)
label_137034:
    if (ctx->pc == 0x137034u) {
        ctx->pc = 0x137038u;
        goto label_137038;
    }
    ctx->pc = 0x137030u;
    {
        const bool branch_taken_0x137030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137030) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137038u;
label_137038:
    // 0x137038: 0xc04caa4  jal         func_132A90
label_13703c:
    if (ctx->pc == 0x13703Cu) {
        ctx->pc = 0x13703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137038u;
        // 0x13703c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137040u;
        goto label_137040;
    }
    ctx->pc = 0x137038u;
    SET_GPR_U32(ctx, 31, 0x137040u);
    ctx->pc = 0x13703Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137038u;
    // 0x13703c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A90u, 0x137038u, 0x137040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137040u;
label_137040:
    // 0x137040: 0x1000005a  b           . + 4 + (0x5A << 2)
label_137044:
    if (ctx->pc == 0x137044u) {
        ctx->pc = 0x137048u;
        goto label_137048;
    }
    ctx->pc = 0x137040u;
    {
        const bool branch_taken_0x137040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137040) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137048u;
label_137048:
    // 0x137048: 0xc04ca28  jal         func_1328A0
label_13704c:
    if (ctx->pc == 0x13704Cu) {
        ctx->pc = 0x13704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137048u;
        // 0x13704c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137050u;
        goto label_137050;
    }
    ctx->pc = 0x137048u;
    SET_GPR_U32(ctx, 31, 0x137050u);
    ctx->pc = 0x13704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137048u;
    // 0x13704c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328A0u, 0x137048u, 0x137050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137050u;
label_137050:
    // 0x137050: 0x10000056  b           . + 4 + (0x56 << 2)
label_137054:
    if (ctx->pc == 0x137054u) {
        ctx->pc = 0x137058u;
        goto label_137058;
    }
    ctx->pc = 0x137050u;
    {
        const bool branch_taken_0x137050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137050) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137058u;
label_137058:
    // 0x137058: 0xc04c9bc  jal         func_1326F0
label_13705c:
    if (ctx->pc == 0x13705Cu) {
        ctx->pc = 0x13705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137058u;
        // 0x13705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137060u;
        goto label_137060;
    }
    ctx->pc = 0x137058u;
    SET_GPR_U32(ctx, 31, 0x137060u);
    ctx->pc = 0x13705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137058u;
    // 0x13705c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1326F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326F0u, 0x137058u, 0x137060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137060u;
label_137060:
    // 0x137060: 0x10000052  b           . + 4 + (0x52 << 2)
label_137064:
    if (ctx->pc == 0x137064u) {
        ctx->pc = 0x137068u;
        goto label_137068;
    }
    ctx->pc = 0x137060u;
    {
        const bool branch_taken_0x137060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137060) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137068u;
label_137068:
    // 0x137068: 0xc04c9a8  jal         func_1326A0
label_13706c:
    if (ctx->pc == 0x13706Cu) {
        ctx->pc = 0x13706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137068u;
        // 0x13706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137070u;
        goto label_137070;
    }
    ctx->pc = 0x137068u;
    SET_GPR_U32(ctx, 31, 0x137070u);
    ctx->pc = 0x13706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137068u;
    // 0x13706c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1326A0u, 0x137068u, 0x137070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137070u;
label_137070:
    // 0x137070: 0x1000004e  b           . + 4 + (0x4E << 2)
label_137074:
    if (ctx->pc == 0x137074u) {
        ctx->pc = 0x137078u;
        goto label_137078;
    }
    ctx->pc = 0x137070u;
    {
        const bool branch_taken_0x137070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137070) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137078u;
label_137078:
    // 0x137078: 0xc04cc40  jal         func_133100
label_13707c:
    if (ctx->pc == 0x13707Cu) {
        ctx->pc = 0x13707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137078u;
        // 0x13707c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137080u;
        goto label_137080;
    }
    ctx->pc = 0x137078u;
    SET_GPR_U32(ctx, 31, 0x137080u);
    ctx->pc = 0x13707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137078u;
    // 0x13707c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133100u, 0x137078u, 0x137080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137080u;
label_137080:
    // 0x137080: 0x1000004a  b           . + 4 + (0x4A << 2)
label_137084:
    if (ctx->pc == 0x137084u) {
        ctx->pc = 0x137088u;
        goto label_137088;
    }
    ctx->pc = 0x137080u;
    {
        const bool branch_taken_0x137080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137080) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137088u;
label_137088:
    // 0x137088: 0xc04c934  jal         func_1324D0
label_13708c:
    if (ctx->pc == 0x13708Cu) {
        ctx->pc = 0x13708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137088u;
        // 0x13708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137090u;
        goto label_137090;
    }
    ctx->pc = 0x137088u;
    SET_GPR_U32(ctx, 31, 0x137090u);
    ctx->pc = 0x13708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137088u;
    // 0x13708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1324D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1324D0u, 0x137088u, 0x137090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137090u;
label_137090:
    // 0x137090: 0x10000046  b           . + 4 + (0x46 << 2)
label_137094:
    if (ctx->pc == 0x137094u) {
        ctx->pc = 0x137098u;
        goto label_137098;
    }
    ctx->pc = 0x137090u;
    {
        const bool branch_taken_0x137090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137090) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137098u;
label_137098:
    // 0x137098: 0xc04c8ec  jal         func_1323B0
label_13709c:
    if (ctx->pc == 0x13709Cu) {
        ctx->pc = 0x13709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137098u;
        // 0x13709c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370A0u;
        goto label_1370a0;
    }
    ctx->pc = 0x137098u;
    SET_GPR_U32(ctx, 31, 0x1370A0u);
    ctx->pc = 0x13709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137098u;
    // 0x13709c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1323B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1323B0u, 0x137098u, 0x1370A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370A0u;
label_1370a0:
    // 0x1370a0: 0x10000042  b           . + 4 + (0x42 << 2)
label_1370a4:
    if (ctx->pc == 0x1370A4u) {
        ctx->pc = 0x1370A8u;
        goto label_1370a8;
    }
    ctx->pc = 0x1370A0u;
    {
        const bool branch_taken_0x1370a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370a0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370A8u;
label_1370a8:
    // 0x1370a8: 0xc04c7d0  jal         func_131F40
label_1370ac:
    if (ctx->pc == 0x1370ACu) {
        ctx->pc = 0x1370ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370A8u;
        // 0x1370ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370B0u;
        goto label_1370b0;
    }
    ctx->pc = 0x1370A8u;
    SET_GPR_U32(ctx, 31, 0x1370B0u);
    ctx->pc = 0x1370ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370A8u;
    // 0x1370ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F40u, 0x1370A8u, 0x1370B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370B0u;
label_1370b0:
    // 0x1370b0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1370b4:
    if (ctx->pc == 0x1370B4u) {
        ctx->pc = 0x1370B8u;
        goto label_1370b8;
    }
    ctx->pc = 0x1370B0u;
    {
        const bool branch_taken_0x1370b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370b0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370B8u;
label_1370b8:
    // 0x1370b8: 0xc04c510  jal         func_131440
label_1370bc:
    if (ctx->pc == 0x1370BCu) {
        ctx->pc = 0x1370BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B8u;
        // 0x1370bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370C0u;
        goto label_1370c0;
    }
    ctx->pc = 0x1370B8u;
    SET_GPR_U32(ctx, 31, 0x1370C0u);
    ctx->pc = 0x1370BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370B8u;
    // 0x1370bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131440u, 0x1370B8u, 0x1370C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370C0u;
label_1370c0:
    // 0x1370c0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1370c4:
    if (ctx->pc == 0x1370C4u) {
        ctx->pc = 0x1370C8u;
        goto label_1370c8;
    }
    ctx->pc = 0x1370C0u;
    {
        const bool branch_taken_0x1370c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370c0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370C8u;
label_1370c8:
    // 0x1370c8: 0xc04a558  jal         func_129560
label_1370cc:
    if (ctx->pc == 0x1370CCu) {
        ctx->pc = 0x1370CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370C8u;
        // 0x1370cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370D0u;
        goto label_1370d0;
    }
    ctx->pc = 0x1370C8u;
    SET_GPR_U32(ctx, 31, 0x1370D0u);
    ctx->pc = 0x1370CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370C8u;
    // 0x1370cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129560u, 0x1370C8u, 0x1370D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370D0u;
label_1370d0:
    // 0x1370d0: 0x10000036  b           . + 4 + (0x36 << 2)
label_1370d4:
    if (ctx->pc == 0x1370D4u) {
        ctx->pc = 0x1370D8u;
        goto label_1370d8;
    }
    ctx->pc = 0x1370D0u;
    {
        const bool branch_taken_0x1370d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370d0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370D8u;
label_1370d8:
    // 0x1370d8: 0xc04c8cc  jal         func_132330
label_1370dc:
    if (ctx->pc == 0x1370DCu) {
        ctx->pc = 0x1370DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370D8u;
        // 0x1370dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370E0u;
        goto label_1370e0;
    }
    ctx->pc = 0x1370D8u;
    SET_GPR_U32(ctx, 31, 0x1370E0u);
    ctx->pc = 0x1370DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370D8u;
    // 0x1370dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132330u, 0x1370D8u, 0x1370E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370E0u;
label_1370e0:
    // 0x1370e0: 0x10000032  b           . + 4 + (0x32 << 2)
label_1370e4:
    if (ctx->pc == 0x1370E4u) {
        ctx->pc = 0x1370E8u;
        goto label_1370e8;
    }
    ctx->pc = 0x1370E0u;
    {
        const bool branch_taken_0x1370e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370e0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370E8u;
label_1370e8:
    // 0x1370e8: 0xc08ab74  jal         func_22ADD0
label_1370ec:
    if (ctx->pc == 0x1370ECu) {
        ctx->pc = 0x1370ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370E8u;
        // 0x1370ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1370F0u;
        goto label_1370f0;
    }
    ctx->pc = 0x1370E8u;
    SET_GPR_U32(ctx, 31, 0x1370F0u);
    ctx->pc = 0x1370ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370E8u;
    // 0x1370ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ADD0u, 0x1370E8u, 0x1370F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370F0u;
label_1370f0:
    // 0x1370f0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1370f4:
    if (ctx->pc == 0x1370F4u) {
        ctx->pc = 0x1370F8u;
        goto label_1370f8;
    }
    ctx->pc = 0x1370F0u;
    {
        const bool branch_taken_0x1370f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1370f0) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x1370F8u;
label_1370f8:
    // 0x1370f8: 0xc04c770  jal         func_131DC0
label_1370fc:
    if (ctx->pc == 0x1370FCu) {
        ctx->pc = 0x1370FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370F8u;
        // 0x1370fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137100u;
        goto label_137100;
    }
    ctx->pc = 0x1370F8u;
    SET_GPR_U32(ctx, 31, 0x137100u);
    ctx->pc = 0x1370FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370F8u;
    // 0x1370fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DC0u, 0x1370F8u, 0x137100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137100u;
label_137100:
    // 0x137100: 0x1000002a  b           . + 4 + (0x2A << 2)
label_137104:
    if (ctx->pc == 0x137104u) {
        ctx->pc = 0x137108u;
        goto label_137108;
    }
    ctx->pc = 0x137100u;
    {
        const bool branch_taken_0x137100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137100) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137108u;
label_137108:
    // 0x137108: 0xc04c750  jal         func_131D40
label_13710c:
    if (ctx->pc == 0x13710Cu) {
        ctx->pc = 0x13710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137108u;
        // 0x13710c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137110u;
        goto label_137110;
    }
    ctx->pc = 0x137108u;
    SET_GPR_U32(ctx, 31, 0x137110u);
    ctx->pc = 0x13710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137108u;
    // 0x13710c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D40u, 0x137108u, 0x137110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137110u;
label_137110:
    // 0x137110: 0x10000026  b           . + 4 + (0x26 << 2)
label_137114:
    if (ctx->pc == 0x137114u) {
        ctx->pc = 0x137118u;
        goto label_137118;
    }
    ctx->pc = 0x137110u;
    {
        const bool branch_taken_0x137110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137110) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137118u;
label_137118:
    // 0x137118: 0xc04c734  jal         func_131CD0
label_13711c:
    if (ctx->pc == 0x13711Cu) {
        ctx->pc = 0x13711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137118u;
        // 0x13711c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137120u;
        goto label_137120;
    }
    ctx->pc = 0x137118u;
    SET_GPR_U32(ctx, 31, 0x137120u);
    ctx->pc = 0x13711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137118u;
    // 0x13711c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CD0u, 0x137118u, 0x137120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137120u;
label_137120:
    // 0x137120: 0x10000022  b           . + 4 + (0x22 << 2)
label_137124:
    if (ctx->pc == 0x137124u) {
        ctx->pc = 0x137128u;
        goto label_137128;
    }
    ctx->pc = 0x137120u;
    {
        const bool branch_taken_0x137120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137120) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137128u;
label_137128:
    // 0x137128: 0xc04c714  jal         func_131C50
label_13712c:
    if (ctx->pc == 0x13712Cu) {
        ctx->pc = 0x13712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137128u;
        // 0x13712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137130u;
        goto label_137130;
    }
    ctx->pc = 0x137128u;
    SET_GPR_U32(ctx, 31, 0x137130u);
    ctx->pc = 0x13712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137128u;
    // 0x13712c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C50u, 0x137128u, 0x137130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137130u;
label_137130:
    // 0x137130: 0x1000001e  b           . + 4 + (0x1E << 2)
label_137134:
    if (ctx->pc == 0x137134u) {
        ctx->pc = 0x137138u;
        goto label_137138;
    }
    ctx->pc = 0x137130u;
    {
        const bool branch_taken_0x137130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137130) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137138u;
label_137138:
    // 0x137138: 0xc04c6cc  jal         func_131B30
label_13713c:
    if (ctx->pc == 0x13713Cu) {
        ctx->pc = 0x13713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137138u;
        // 0x13713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137140u;
        goto label_137140;
    }
    ctx->pc = 0x137138u;
    SET_GPR_U32(ctx, 31, 0x137140u);
    ctx->pc = 0x13713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137138u;
    // 0x13713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B30u, 0x137138u, 0x137140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137140u;
label_137140:
    // 0x137140: 0x1000001a  b           . + 4 + (0x1A << 2)
label_137144:
    if (ctx->pc == 0x137144u) {
        ctx->pc = 0x137148u;
        goto label_137148;
    }
    ctx->pc = 0x137140u;
    {
        const bool branch_taken_0x137140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137140) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137148u;
label_137148:
    // 0x137148: 0xc04c6b8  jal         func_131AE0
label_13714c:
    if (ctx->pc == 0x13714Cu) {
        ctx->pc = 0x13714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137148u;
        // 0x13714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137150u;
        goto label_137150;
    }
    ctx->pc = 0x137148u;
    SET_GPR_U32(ctx, 31, 0x137150u);
    ctx->pc = 0x13714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137148u;
    // 0x13714c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131AE0u, 0x137148u, 0x137150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137150u;
label_137150:
    // 0x137150: 0x10000016  b           . + 4 + (0x16 << 2)
label_137154:
    if (ctx->pc == 0x137154u) {
        ctx->pc = 0x137158u;
        goto label_137158;
    }
    ctx->pc = 0x137150u;
    {
        const bool branch_taken_0x137150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137150) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137158u;
label_137158:
    // 0x137158: 0xc04c104  jal         func_130410
label_13715c:
    if (ctx->pc == 0x13715Cu) {
        ctx->pc = 0x13715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137158u;
        // 0x13715c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137160u;
        goto label_137160;
    }
    ctx->pc = 0x137158u;
    SET_GPR_U32(ctx, 31, 0x137160u);
    ctx->pc = 0x13715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137158u;
    // 0x13715c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130410u, 0x137158u, 0x137160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137160u;
label_137160:
    // 0x137160: 0x10000012  b           . + 4 + (0x12 << 2)
label_137164:
    if (ctx->pc == 0x137164u) {
        ctx->pc = 0x137168u;
        goto label_137168;
    }
    ctx->pc = 0x137160u;
    {
        const bool branch_taken_0x137160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137160) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137168u;
label_137168:
    // 0x137168: 0xc04c0e8  jal         func_1303A0
label_13716c:
    if (ctx->pc == 0x13716Cu) {
        ctx->pc = 0x13716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137168u;
        // 0x13716c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137170u;
        goto label_137170;
    }
    ctx->pc = 0x137168u;
    SET_GPR_U32(ctx, 31, 0x137170u);
    ctx->pc = 0x13716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137168u;
    // 0x13716c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1303A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1303A0u, 0x137168u, 0x137170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137170u;
label_137170:
    // 0x137170: 0x1000000e  b           . + 4 + (0xE << 2)
label_137174:
    if (ctx->pc == 0x137174u) {
        ctx->pc = 0x137178u;
        goto label_137178;
    }
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137170) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137178u;
label_137178:
    // 0x137178: 0xc04c09c  jal         func_130270
label_13717c:
    if (ctx->pc == 0x13717Cu) {
        ctx->pc = 0x13717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137178u;
        // 0x13717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137180u;
        goto label_137180;
    }
    ctx->pc = 0x137178u;
    SET_GPR_U32(ctx, 31, 0x137180u);
    ctx->pc = 0x13717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137178u;
    // 0x13717c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130270u, 0x137178u, 0x137180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137180u;
label_137180:
    // 0x137180: 0x1000000a  b           . + 4 + (0xA << 2)
label_137184:
    if (ctx->pc == 0x137184u) {
        ctx->pc = 0x137188u;
        goto label_137188;
    }
    ctx->pc = 0x137180u;
    {
        const bool branch_taken_0x137180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137180) {
            ctx->pc = 0x1371ACu;
            return;
        }
    }
    ctx->pc = 0x137188u;
label_137188:
    // 0x137188: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x137188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13718c:
    // 0x13718c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_137190:
    // 0x137190: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x137190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137194:
    // 0x137194: 0xa022a3ea  sb          $v0, -0x5C16($at)
    ctx->pc = 0x137194u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943722), (uint8_t)GPR_U32(ctx, 2));
label_137198:
    // 0x137198: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_13719c:
    // 0x13719c: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943712)));
label_1371a0:
    // 0x1371a0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1371a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1371a4:
    // 0x1371a4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_1371a8:
    // 0x1371a8: 0xac22a3e0  sw          $v0, -0x5C20($at)
    ctx->pc = 0x1371a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 2));
    ctx->pc = 0x1371acu;
}
