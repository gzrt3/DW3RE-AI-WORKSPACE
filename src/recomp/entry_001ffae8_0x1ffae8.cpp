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

// Function: entry_001ffae8
// Address: 0x1ffae8 - 0x1ffc04
void entry_001ffae8_0x1ffae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffae8_0x1ffae8");
#endif

    switch (ctx->pc) {
        case 0x1ffaf0u: goto label_1ffaf0;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb68u: goto label_1ffb68;
        default: break;
    }

    ctx->pc = 0x1ffae8u;

    // 0x1ffae8: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x1FFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAE8u;
    // 0x1ffaec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FFAE8u, 0x1FFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1ffaf4: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1ffaf8: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1ffaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
    // 0x1ffafc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffb00: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ffb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ffb04: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1ffb04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1ffb08: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1ffb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    // 0x1ffb0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ffb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ffb10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ffb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffb14: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1ffb14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffb18: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1FFB18u;
    SET_GPR_U32(ctx, 31, 0x1FFB20u);
    ctx->pc = 0x1FFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB18u;
    // 0x1ffb1c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FFB18u, 0x1FFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB20u;
label_1ffb20:
    // 0x1ffb20: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1ffb24: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1ffb24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x1ffb28: 0x24424ae0  addiu       $v0, $v0, 0x4AE0
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19168));
    // 0x1ffb2c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ffb30: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1ffb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1ffb34: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1ffb34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ffb38: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1FFB38u;
    SET_GPR_U32(ctx, 31, 0x1FFB40u);
    ctx->pc = 0x1FFB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB38u;
    // 0x1ffb3c: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1FFB38u, 0x1FFB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB40u;
label_1ffb40:
    // 0x1ffb40: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x1ffb40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ffb44: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1ffb48: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
    // 0x1ffb4c: 0x26860098  addiu       $a2, $s4, 0x98
    ctx->pc = 0x1ffb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x1ffb50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ffb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ffb54: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1ffb54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1ffb58: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffb5c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1ffb5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ffb60: 0xc0708ac  jal         func_1C22B0
    ctx->pc = 0x1FFB60u;
    SET_GPR_U32(ctx, 31, 0x1FFB68u);
    ctx->pc = 0x1FFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB60u;
    // 0x1ffb64: 0x27ab0120  addiu       $t3, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x1FFB60u, 0x1FFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB68u;
label_1ffb68:
    // 0x1ffb68: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ffb6c: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1ffb6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x1ffb70: 0x26b500a0  addiu       $s5, $s5, 0xA0
    ctx->pc = 0x1ffb70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x1ffb74: 0x26100ea0  addiu       $s0, $s0, 0xEA0
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3744));
    // 0x1ffb78: 0x263101e0  addiu       $s1, $s1, 0x1E0
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1ffb7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ffb80: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1ffb84: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ffb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ffb88: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1ffb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ffb8c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
    ctx->pc = 0x1FFB8Cu;
    {
        const bool branch_taken_0x1ffb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB8Cu;
        // 0x1ffb90: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb8c) {
            ctx->pc = 0x1FF980u;
            return;
        }
    }
    ctx->pc = 0x1FFB94u;
    // 0x1ffb94: 0x2682fff8  addiu       $v0, $s4, -0x8
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x1ffb98: 0x27c5fff0  addiu       $a1, $fp, -0x10
    ctx->pc = 0x1ffb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967280));
    // 0x1ffb9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1ffb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ffba0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ffba4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1ffba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x1ffba8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1ffba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1ffbac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ffbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ffbb0: 0xa6636de0  sh          $v1, 0x6DE0($s3)
    ctx->pc = 0x1ffbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ffbb4: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1ffbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x1ffbb8: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1ffbbc: 0xa6646de2  sh          $a0, 0x6DE2($s3)
    ctx->pc = 0x1ffbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28130), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ffbc0: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1ffbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1ffbc4: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1ffbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x1ffbc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ffbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ffbcc: 0xae646de4  sw          $a0, 0x6DE4($s3)
    ctx->pc = 0x1ffbccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28132), GPR_U32(ctx, 4));
    // 0x1ffbd0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1ffbd4: 0xa6636df0  sh          $v1, 0x6DF0($s3)
    ctx->pc = 0x1ffbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ffbd8: 0xa6626df2  sh          $v0, 0x6DF2($s3)
    ctx->pc = 0x1ffbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 28146), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ffbdc: 0xae646df4  sw          $a0, 0x6DF4($s3)
    ctx->pc = 0x1ffbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28148), GPR_U32(ctx, 4));
    // 0x1ffbe0: 0x8f829088  lw          $v0, -0x6F78($gp)
    ctx->pc = 0x1ffbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938760)));
    // 0x1ffbe4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFBE4u;
    {
        const bool branch_taken_0x1ffbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbe4) {
            ctx->pc = 0x1FFC50u;
            return;
        }
    }
    ctx->pc = 0x1FFBECu;
    // 0x1ffbec: 0x8f82908c  lw          $v0, -0x6F74($gp)
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938764)));
    // 0x1ffbf0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFBF0u;
    {
        const bool branch_taken_0x1ffbf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF0u;
        // 0x1ffbf4: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf0) {
            ctx->pc = 0x1FFC04u;
            return;
        }
    }
    ctx->pc = 0x1FFBF8u;
    // 0x1ffbf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFBF8u;
    {
        const bool branch_taken_0x1ffbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBF8u;
        // 0x1ffbfc: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbf8) {
            ctx->pc = 0x1FFC08u;
            return;
        }
    }
    ctx->pc = 0x1FFC00u;
    // 0x1ffc00: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    ctx->pc = 0x1ffc04u;
}
