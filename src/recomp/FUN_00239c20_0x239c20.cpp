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

// Function: FUN_00239c20
// Address: 0x239c20 - 0x23a324
void FUN_00239c20_0x239c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239c20_0x239c20");
#endif

    switch (ctx->pc) {
        case 0x239c64u: goto label_239c64;
        case 0x239d50u: goto label_239d50;
        case 0x239f78u: goto label_239f78;
        case 0x23a010u: goto label_23a010;
        case 0x23a040u: goto label_23a040;
        case 0x23a050u: goto label_23a050;
        case 0x23a060u: goto label_23a060;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a138u: goto label_23a138;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a240u: goto label_23a240;
        default: break;
    }

    ctx->pc = 0x239c20u;

    // 0x239c20: 0x24a30013  addiu       $v1, $a1, 0x13
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x239c24: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239c28: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x239c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x239c2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239c34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x239c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239c3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239c40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x239c44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C44u;
        // 0x239c48: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239C4Cu;
    // 0x239c4c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x239c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x239C50u;
    {
        const bool branch_taken_0x239c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C50u;
        // 0x239c54: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c50) {
            ctx->pc = 0x239C5Cu;
            goto label_239c5c;
        }
    }
    ctx->pc = 0x239C58u;
label_239c58:
    // 0x239c58: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_239c5c:
    // 0x239c5c: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x239C5Cu;
    SET_GPR_U32(ctx, 31, 0x239C64u);
    ctx->pc = 0x239C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C5Cu;
    // 0x239c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x239C5Cu, 0x239C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C64u;
label_239c64:
    // 0x239c64: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x239c68: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x239C68u;
    {
        const bool branch_taken_0x239c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C68u;
        // 0x239c6c: 0x111a42  srl         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c68) {
            ctx->pc = 0x239CC8u;
            goto label_239cc8;
        }
    }
    ctx->pc = 0x239C70u;
    // 0x239c70: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
    // 0x239c74: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239c78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239c7c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x239c80: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x239c84: 0x1204000e  beq         $s0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x239C84u;
    {
        const bool branch_taken_0x239c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x239C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C84u;
        // 0x239c88: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c84) {
            ctx->pc = 0x239CC0u;
            goto label_239cc0;
        }
    }
    ctx->pc = 0x239C8Cu;
    // 0x239c8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239c90: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239c94: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x239c94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x239c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c9c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x239c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239ca0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x239ca4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x239ca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239cac: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x239cacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x239cb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x239cb4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x239cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x239cb8: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x239CB8u;
    {
        const bool branch_taken_0x239cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB8u;
        // 0x239cbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cb8) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239CC0u;
label_239cc0:
    // 0x239cc0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x239CC0u;
    {
        const bool branch_taken_0x239cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC0u;
        // 0x239cc4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc0) {
            ctx->pc = 0x239DA4u;
            goto label_239da4;
        }
    }
    ctx->pc = 0x239CC8u;
label_239cc8:
    // 0x239cc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x239CC8u;
    {
        const bool branch_taken_0x239cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CC8u;
        // 0x239ccc: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cc8) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CD0u;
    // 0x239cd0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x239cd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239CD4u;
    {
        const bool branch_taken_0x239cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CD4u;
        // 0x239cd8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cd4) {
            ctx->pc = 0x239CE8u;
            goto label_239ce8;
        }
    }
    ctx->pc = 0x239CDCu;
    // 0x239cdc: 0x111182  srl         $v0, $s1, 6
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x239ce0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x239CE0u;
    {
        const bool branch_taken_0x239ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE0u;
        // 0x239ce4: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce0) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CE8u;
label_239ce8:
    // 0x239ce8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239CE8u;
    {
        const bool branch_taken_0x239ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CE8u;
        // 0x239cec: 0x246a005b  addiu       $t2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ce8) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239CF0u;
    // 0x239cf0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x239cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239CF4u;
    {
        const bool branch_taken_0x239cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CF4u;
        // 0x239cf8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cf4) {
            ctx->pc = 0x239D08u;
            goto label_239d08;
        }
    }
    ctx->pc = 0x239CFCu;
    // 0x239cfc: 0x111302  srl         $v0, $s1, 12
    ctx->pc = 0x239cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
    // 0x239d00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D00u;
        // 0x239d04: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D08u;
label_239d08:
    // 0x239d08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239D08u;
    {
        const bool branch_taken_0x239d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D08u;
        // 0x239d0c: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d08) {
            ctx->pc = 0x239D20u;
            goto label_239d20;
        }
    }
    ctx->pc = 0x239D10u;
    // 0x239d10: 0x1113c2  srl         $v0, $s1, 15
    ctx->pc = 0x239d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
    // 0x239d14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239D14u;
    {
        const bool branch_taken_0x239d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D14u;
        // 0x239d18: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d14) {
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D1Cu;
    // 0x239d1c: 0x0  nop
    ctx->pc = 0x239d1cu;
    // NOP
label_239d20:
    // 0x239d20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x239D20u;
    {
        const bool branch_taken_0x239d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239d20) {
            ctx->pc = 0x239D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D20u;
            // 0x239d24: 0x240a007e  addiu       $t2, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239D30u;
            goto label_239d30;
        }
    }
    ctx->pc = 0x239D28u;
    // 0x239d28: 0x111482  srl         $v0, $s1, 18
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
    // 0x239d2c: 0x244a007c  addiu       $t2, $v0, 0x7C
    ctx->pc = 0x239d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_239d30:
    // 0x239d30: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
    // 0x239d34: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x239d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x239d38: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239d3c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x239d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239d40: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239d44: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x239d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239d48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239D48u;
    {
        const bool branch_taken_0x239d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D48u;
        // 0x239d4c: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d48) {
            ctx->pc = 0x239D5Cu;
            goto label_239d5c;
        }
    }
    ctx->pc = 0x239D50u;
label_239d50:
    // 0x239d50: 0x501013d  bgez        $t0, . + 4 + (0x13D << 2)
    ctx->pc = 0x239D50u;
    {
        const bool branch_taken_0x239d50 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D50u;
        // 0x239d54: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d50) {
            ctx->pc = 0x23A248u;
            goto label_23a248;
        }
    }
    ctx->pc = 0x239D58u;
    // 0x239d58: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x239d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239d5c:
    // 0x239d5c: 0x52050011  beql        $s0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x239D5Cu;
    {
        const bool branch_taken_0x239d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x239d5c) {
            ctx->pc = 0x239D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239D5Cu;
            // 0x239d60: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239DA4u;
            goto label_239da4;
        }
    }
    ctx->pc = 0x239D64u;
    // 0x239d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239d68: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x239d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239d6c: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x239d70: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x239d74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239d78: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x239d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239d7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x239d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x239d80: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x239d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x239d84: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239D84u;
        // 0x239d88: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239D90u;
            goto label_239d90;
        }
    }
    ctx->pc = 0x239D8Cu;
    // 0x239d8c: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x239d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_239d90:
    // 0x239d90: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239d90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239d94: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x239D94u;
    {
        const bool branch_taken_0x239d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d94) {
            ctx->pc = 0x239D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239d50;
        }
    }
    ctx->pc = 0x239D9Cu;
    // 0x239d9c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x239d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x239da0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_239da4:
    // 0x239da4: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239da8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x239da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239dac: 0x12020080  beq         $s0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x239DACu;
    {
        const bool branch_taken_0x239dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DACu;
        // 0x239db0: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dac) {
            ctx->pc = 0x239FB0u;
            goto label_239fb0;
        }
    }
    ctx->pc = 0x239DB4u;
    // 0x239db4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239db8: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x239db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239dbc: 0xd1202b  sltu        $a0, $a2, $s1
    ctx->pc = 0x239dbcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x239dc0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239DC0u;
    {
        const bool branch_taken_0x239dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC0u;
        // 0x239dc4: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dc0) {
            ctx->pc = 0x239DE0u;
            goto label_239de0;
        }
    }
    ctx->pc = 0x239DC8u;
    // 0x239dc8: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x239dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239dd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x239dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239DD4u;
    {
        const bool branch_taken_0x239dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD4u;
        // 0x239dd8: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dd4) {
            ctx->pc = 0x239DE8u;
            goto label_239de8;
        }
    }
    ctx->pc = 0x239DDCu;
    // 0x239ddc: 0x0  nop
    ctx->pc = 0x239ddcu;
    // NOP
label_239de0:
    // 0x239de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239de4: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x239de4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_239de8:
    // 0x239de8: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239dec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x239DECu;
    {
        const bool branch_taken_0x239dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239dec) {
            ctx->pc = 0x239DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239DECu;
            // 0x239df0: 0x25e40830  addiu       $a0, $t7, 0x830 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E40u;
            goto label_239e40;
        }
    }
    ctx->pc = 0x239DF4u;
    // 0x239df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239df8: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x239dfc: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x239dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x239e00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x239e00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x239e04: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x239e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x239e08: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239e0c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x239e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x239e10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239e14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x239e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x239e18: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x239e1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x239e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x239e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e24: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x239e24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x239e28: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x239e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x239e2c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x239e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x239e30: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x239e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x239e34: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x239e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x239e38: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x239E38u;
    {
        const bool branch_taken_0x239e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E38u;
        // 0x239e3c: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e38) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239E40u;
label_239e40:
    // 0x239e40: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x239e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x239e44: 0x5000008  bltz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x239E44u;
    {
        const bool branch_taken_0x239e44 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e44) {
            ctx->pc = 0x239E68u;
            goto label_239e68;
        }
    }
    ctx->pc = 0x239E4Cu;
    // 0x239e4c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x239e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239e58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x239e5c: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x239E5Cu;
    {
        const bool branch_taken_0x239e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E5Cu;
        // 0x239e60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e5c) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x239E64u;
    // 0x239e64: 0x0  nop
    ctx->pc = 0x239e64u;
    // NOP
label_239e68:
    // 0x239e68: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x239e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x239e6c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239E6Cu;
    {
        const bool branch_taken_0x239e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E6Cu;
        // 0x239e70: 0x61a42  srl         $v1, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e6c) {
            ctx->pc = 0x239EB8u;
            goto label_239eb8;
        }
    }
    ctx->pc = 0x239E74u;
    // 0x239e74: 0x628c2  srl         $a1, $a2, 3
    ctx->pc = 0x239e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x239e78: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x239e7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x239e80: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x239e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239e88: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239e8c: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x239e90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239e94: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x239e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239e9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x239ea0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239ea4: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x239ea8: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x239eac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x239EACu;
    {
        const bool branch_taken_0x239eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EACu;
        // 0x239eb0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eac) {
            ctx->pc = 0x239FA8u;
            goto label_239fa8;
        }
    }
    ctx->pc = 0x239EB4u;
    // 0x239eb4: 0x0  nop
    ctx->pc = 0x239eb4u;
    // NOP
label_239eb8:
    // 0x239eb8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x239EB8u;
    {
        const bool branch_taken_0x239eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EB8u;
        // 0x239ebc: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eb8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EC0u;
    // 0x239ec0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x239ec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239EC4u;
    {
        const bool branch_taken_0x239ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC4u;
        // 0x239ec8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ec4) {
            ctx->pc = 0x239ED8u;
            goto label_239ed8;
        }
    }
    ctx->pc = 0x239ECCu;
    // 0x239ecc: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x239ed0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x239ED0u;
    {
        const bool branch_taken_0x239ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED0u;
        // 0x239ed4: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239ED8u;
label_239ed8:
    // 0x239ed8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239ED8u;
    {
        const bool branch_taken_0x239ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EE0u;
    // 0x239ee0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x239ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239EE4u;
    {
        const bool branch_taken_0x239ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EE4u;
        // 0x239ee8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ee4) {
            ctx->pc = 0x239EF8u;
            goto label_239ef8;
        }
    }
    ctx->pc = 0x239EECu;
    // 0x239eec: 0x61302  srl         $v0, $a2, 12
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x239ef0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239EF0u;
    {
        const bool branch_taken_0x239ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF0u;
        // 0x239ef4: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EF8u;
label_239ef8:
    // 0x239ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239EF8u;
    {
        const bool branch_taken_0x239ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF8u;
        // 0x239efc: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef8) {
            ctx->pc = 0x239F10u;
            goto label_239f10;
        }
    }
    ctx->pc = 0x239F00u;
    // 0x239f00: 0x613c2  srl         $v0, $a2, 15
    ctx->pc = 0x239f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
    // 0x239f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F04u;
        // 0x239f08: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F0Cu;
    // 0x239f0c: 0x0  nop
    ctx->pc = 0x239f0cu;
    // NOP
label_239f10:
    // 0x239f10: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x239F10u;
    {
        const bool branch_taken_0x239f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f10) {
            ctx->pc = 0x239F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F10u;
            // 0x239f14: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F18u;
    // 0x239f18: 0x61482  srl         $v0, $a2, 18
    ctx->pc = 0x239f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
    // 0x239f1c: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_239f20:
    // 0x239f20: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239f24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x239f28: 0x2447fff8  addiu       $a3, $v0, -0x8
    ctx->pc = 0x239f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239f2c: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x239f30: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x239f34: 0x550b000e  bnel        $t0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x239F34u;
    {
        const bool branch_taken_0x239f34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x239f34) {
            ctx->pc = 0x239F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F34u;
            // 0x239f38: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F70u;
            goto label_239f70;
        }
    }
    ctx->pc = 0x239F3Cu;
    // 0x239f3c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x239f40: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x239f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x239f44: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x239f44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x239f48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x239f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f50: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x239f54: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x239f58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239f5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x239f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239f64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x239F64u;
    {
        const bool branch_taken_0x239f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F64u;
        // 0x239f68: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f64) {
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F6Cu;
    // 0x239f6c: 0x0  nop
    ctx->pc = 0x239f6cu;
    // NOP
label_239f70:
    // 0x239f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239F70u;
    {
        const bool branch_taken_0x239f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F70u;
        // 0x239f74: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f70) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x510b0009  beql        $t0, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x239F78u;
    {
        const bool branch_taken_0x239f78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x239f78) {
            ctx->pc = 0x239F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F78u;
            // 0x239f7c: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F80u;
    // 0x239f80: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x239f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_239f84:
    // 0x239f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239f88: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x239f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x239f8c: 0x0  nop
    ctx->pc = 0x239f8cu;
    // NOP
    // 0x239f90: 0x0  nop
    ctx->pc = 0x239f90u;
    // NOP
    // 0x239f94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x239F94u;
    {
        const bool branch_taken_0x239f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f94) {
            ctx->pc = 0x239F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F94u;
            // 0x239f98: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f78;
        }
    }
    ctx->pc = 0x239F9Cu;
    // 0x239f9c: 0x8d0b000c  lw          $t3, 0xC($t0)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_239fa0:
    // 0x239fa0: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x239fa4: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_239fa8:
    // 0x239fa8: 0xad700008  sw          $s0, 0x8($t3)
    ctx->pc = 0x239fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 16));
    // 0x239fac: 0xad10000c  sw          $s0, 0xC($t0)
    ctx->pc = 0x239facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 16));
label_239fb0:
    // 0x239fb0: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x239fb4: 0x25450003  addiu       $a1, $t2, 0x3
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x239fb8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x239fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239fbc: 0x3c140029  lui         $s4, 0x29
    ctx->pc = 0x239fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)41 << 16));
    // 0x239fc0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x239fc0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x239fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239fc8: 0x26830828  addiu       $v1, $s4, 0x828
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x239fcc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x239fccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x239fd0: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x239fd0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239fd4: 0x824814  dsllv       $t1, $v0, $a0
    ctx->pc = 0x239fd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x239fd8: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x239fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x239fdc: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x239FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239FDCu;
            // 0x239fe0: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x239FE4u;
    // 0x239fe4: 0x1261024  and         $v0, $t1, $a2
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x239fe8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239FE8u;
    {
        const bool branch_taken_0x239fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE8u;
        // 0x239fec: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe8) {
            ctx->pc = 0x23A030u;
            goto label_23a030;
        }
    }
    ctx->pc = 0x239FF0u;
    // 0x239ff0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239ff4: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x239ff4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x239ff8: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x239ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x239ffc: 0x1261824  and         $v1, $t1, $a2
    ctx->pc = 0x239ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 6));
    // 0x23a000: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23A000u;
    {
        const bool branch_taken_0x23a000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A000u;
        // 0x23a004: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a000) {
            ctx->pc = 0x23A02Cu;
            goto label_23a02c;
        }
    }
    ctx->pc = 0x23A008u;
    // 0x23a008: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23a008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a00c: 0x0  nop
    ctx->pc = 0x23a00cu;
    // NOP
label_23a010:
    // 0x23a010: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a010u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a014: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x23a018: 0x0  nop
    ctx->pc = 0x23a018u;
    // NOP
    // 0x23a01c: 0x0  nop
    ctx->pc = 0x23a01cu;
    // NOP
    // 0x23a020: 0x0  nop
    ctx->pc = 0x23a020u;
    // NOP
    // 0x23a024: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A024u;
    {
        const bool branch_taken_0x23a024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A024u;
        // 0x23a028: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a024) {
            ctx->pc = 0x23A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a010;
        }
    }
    ctx->pc = 0x23A02Cu;
label_23a02c:
    // 0x23a02c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23a030:
    // 0x23a030: 0x244d0828  addiu       $t5, $v0, 0x828
    ctx->pc = 0x23a030u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x23a034: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x23a034u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a038: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x23a038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a03c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_23a040:
    // 0x23a040: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x23a040u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a044: 0x4d2021  addu        $a0, $v0, $t5
    ctx->pc = 0x23a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x23a048: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a04c: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x23a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_23a050:
    // 0x23a050: 0x12050016  beq         $s0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x23A050u;
    {
        const bool branch_taken_0x23a050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a050) {
            ctx->pc = 0x23A0ACu;
            goto label_23a0ac;
        }
    }
    ctx->pc = 0x23A058u;
    // 0x23a058: 0x240cfffc  addiu       $t4, $zero, -0x4
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a05c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a060:
    // 0x23a060: 0x4c3024  and         $a2, $v0, $t4
    ctx->pc = 0x23a060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x23a064: 0x2261823  subu        $v1, $s1, $a2
    ctx->pc = 0x23a064u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x23a068: 0xd11023  subu        $v0, $a2, $s1
    ctx->pc = 0x23a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23a06c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a070: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x23a070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a074: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23a078: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a07c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A07Cu;
    {
        const bool branch_taken_0x23a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A07Cu;
        // 0x23a080: 0x3402f  dsubu       $t0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a07c) {
            ctx->pc = 0x23A088u;
            goto label_23a088;
        }
    }
    ctx->pc = 0x23A084u;
    // 0x23a084: 0x7403e  dsrl32      $t0, $a3, 0
    ctx->pc = 0x23a084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> (32 + 0));
label_23a088:
    // 0x23a088: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a08c: 0x50400078  beql        $v0, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23A090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A08Cu;
            // 0x23a090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A270u;
            goto label_23a270;
        }
    }
    ctx->pc = 0x23A094u;
    // 0x23a094: 0x503008c  bgezl       $t0, . + 4 + (0x8C << 2)
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23A098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A094u;
            // 0x23a098: 0x2061821  addu        $v1, $s0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A2C8u;
            goto label_23a2c8;
        }
    }
    ctx->pc = 0x23A09Cu;
    // 0x23a09c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x23a09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a0a0: 0x5605ffef  bnel        $s0, $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23A0A0u;
    {
        const bool branch_taken_0x23a0a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x23a0a0) {
            ctx->pc = 0x23A0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0A0u;
            // 0x23a0a4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a060;
        }
    }
    ctx->pc = 0x23A0A8u;
    // 0x23a0a8: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x23a0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_23a0ac:
    // 0x23a0ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A0ACu;
    {
        const bool branch_taken_0x23a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0ACu;
        // 0x23a0b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0ac) {
            ctx->pc = 0x23A0BCu;
            goto label_23a0bc;
        }
    }
    ctx->pc = 0x23A0B4u;
    // 0x23a0b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23a0b8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_23a0bc:
    // 0x23a0bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x23a0bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x23a0c0: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x23a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x23a0c4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
    ctx->pc = 0x23A0C4u;
    {
        const bool branch_taken_0x23a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a0c4) {
            ctx->pc = 0x23A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A0C4u;
            // 0x23a0c8: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a050;
        }
    }
    ctx->pc = 0x23A0CCu;
    // 0x23a0cc: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x23a0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x23a0d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a0d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a0d4: 0x25c50828  addiu       $a1, $t6, 0x828
    ctx->pc = 0x23a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 2088));
    // 0x23a0d8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23a0d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23a0dc: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x23a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
label_23a0e0:
    // 0x23a0e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A0E0u;
    {
        const bool branch_taken_0x23a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0E0u;
        // 0x23a0e4: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0e0) {
            ctx->pc = 0x23A0F8u;
            goto label_23a0f8;
        }
    }
    ctx->pc = 0x23A0E8u;
    // 0x23a0e8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23a0ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23a0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23a0f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23A0F0u;
    {
        const bool branch_taken_0x23a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A0F0u;
        // 0x23a0f4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0f0) {
            ctx->pc = 0x23A10Cu;
            goto label_23a10c;
        }
    }
    ctx->pc = 0x23A0F8u;
label_23a0f8:
    // 0x23a0f8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x23a0fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a100: 0x0  nop
    ctx->pc = 0x23a100u;
    // NOP
    // 0x23a104: 0x1044fff6  beq         $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a0e0;
        }
    }
    ctx->pc = 0x23A10Cu;
label_23a10c:
    // 0x23a10c: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x23a10cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x23a110: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a114: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x23a118: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A118u;
            // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x23A120u;
    // 0x23a120: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x23A120u;
    {
        const bool branch_taken_0x23a120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a120) {
            ctx->pc = 0x23A160u;
            goto label_23a160;
        }
    }
    ctx->pc = 0x23A128u;
    // 0x23a128: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A130u;
    // 0x23a130: 0x9e430004  lwu         $v1, 0x4($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x23a134: 0x0  nop
    ctx->pc = 0x23a134u;
    // NOP
label_23a138:
    // 0x23a138: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
    // 0x23a13c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x23a140: 0x0  nop
    ctx->pc = 0x23a140u;
    // NOP
    // 0x23a144: 0x0  nop
    ctx->pc = 0x23a144u;
    // NOP
    // 0x23a148: 0x0  nop
    ctx->pc = 0x23a148u;
    // NOP
    // 0x23a14c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23A14Cu;
    {
        const bool branch_taken_0x23a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a14c) {
            ctx->pc = 0x23A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a138;
        }
    }
    ctx->pc = 0x23A154u;
    // 0x23a154: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a040;
        }
    }
    ctx->pc = 0x23A15Cu;
    // 0x23a15c: 0x0  nop
    ctx->pc = 0x23a15cu;
    // NOP
label_23a160:
    // 0x23a160: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a164:
    // 0x23a164: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a168: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a16c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23a170: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23a174: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A198u;
            goto label_23a198;
        }
    }
    ctx->pc = 0x23A180u;
    // 0x23a180: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23a184: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a188: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23a18c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1A0u;
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A194u;
    // 0x23a194: 0x0  nop
    ctx->pc = 0x23a194u;
    // NOP
label_23a198:
    // 0x23a198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a19c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1a0:
    // 0x23a1a0: 0x26900828  addiu       $s0, $s4, 0x828
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x23a1a4: 0x2412fffc  addiu       $s2, $zero, -0x4
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a1a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a1b0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x23a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x23a1b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A1D0u;
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1C0u;
    // 0x23a1c0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23a1c4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x23A1C4u;
    {
        const bool branch_taken_0x23a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1c4) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A1CCu;
    // 0x23a1cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a1d0:
    // 0x23a1d0: 0xc08e672  jal         func_2399C8
    ctx->pc = 0x23A1D0u;
    SET_GPR_U32(ctx, 31, 0x23A1D8u);
    ctx->pc = 0x23A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1D0u;
    // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2399C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2399C8u, 0x23A1D0u, 0x23A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A1D8u;
label_23a1d8:
    // 0x23a1d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x23a1e0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x23a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x23a1e4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a1e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A1E8u;
    {
        const bool branch_taken_0x23a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1e8) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1F0u;
    // 0x23a1f0: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x23a1f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a1f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x23a1fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A204u;
    // 0x23a204: 0x0  nop
    ctx->pc = 0x23a204u;
    // NOP
label_23a208:
    // 0x23a208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a20c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a210:
    // 0x23a210: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
    // 0x23a214: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x23a218: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23a21c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x23a224: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23a228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A228u;
    {
        const bool branch_taken_0x23a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a228) {
            ctx->pc = 0x23A238u;
            goto label_23a238;
        }
    }
    ctx->pc = 0x23A230u;
    // 0x23a230: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x23A230u;
    {
        const bool branch_taken_0x23a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a230) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A238u;
label_23a238:
    // 0x23a238: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x23A238u;
    SET_GPR_U32(ctx, 31, 0x23A240u);
    ctx->pc = 0x23A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A238u;
    // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x23A238u, 0x23A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A240u;
label_23a240:
    // 0x23a240: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x23A240u;
    {
        const bool branch_taken_0x23a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a240) {
            ctx->pc = 0x23A328u;
            return;
        }
    }
    ctx->pc = 0x23A248u;
label_23a248:
    // 0x23a248: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a24c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a254: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a258: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23a25c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23a260: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a264: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23A264u;
    {
        const bool branch_taken_0x23a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a264) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A26Cu;
    // 0x23a26c: 0x0  nop
    ctx->pc = 0x23a26cu;
    // NOP
label_23a270:
    // 0x23a270: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a274: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23a278: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x23a278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x23a27c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x23a27cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x23a280: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x23a284: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a288: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x23a28c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x23a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x23a290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23a294: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a294u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x23a298: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x23a29c: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2a4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x23a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x23a2a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23a2ac: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x23a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x23a2b0: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x23a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x23a2b4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x23a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x23a2b8: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x23a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x23a2bc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x23a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x23a2c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23A2C0u;
    {
        const bool branch_taken_0x23a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2c0) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2C8u;
label_23a2c8:
    // 0x23a2c8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23a2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2d4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23a2d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x23a2dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23a2e0: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x23a2e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23A2E4u;
    {
        const bool branch_taken_0x23a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2e4) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2ECu;
    // 0x23a2ec: 0x0  nop
    ctx->pc = 0x23a2ecu;
    // NOP
label_23a2f0:
    // 0x23a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a2f4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x23a2f8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x23a2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23a300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x23a304: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x23a308: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23a30c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x23a310: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x23a310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x23a314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a31c:
    // 0x23a31c: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x23A31Cu;
    SET_GPR_U32(ctx, 31, 0x23A324u);
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x23A31Cu, 0x23A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A324u;
}
