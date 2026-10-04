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

// Function: FUN_00238b00
// Address: 0x238b00 - 0x238dec
void FUN_00238b00_0x238b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238b00_0x238b00");
#endif

    switch (ctx->pc) {
        case 0x238b24u: goto label_238b24;
        case 0x238bb0u: goto label_238bb0;
        case 0x238d90u: goto label_238d90;
        default: break;
    }

    ctx->pc = 0x238b00u;

    // 0x238b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238b08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238b14: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x238B14u;
    {
        const bool branch_taken_0x238b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x238B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B14u;
        // 0x238b18: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b14) {
            ctx->pc = 0x238DE0u;
            goto label_238de0;
        }
    }
    ctx->pc = 0x238B1Cu;
    // 0x238b1c: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x238B1Cu;
    SET_GPR_U32(ctx, 31, 0x238B24u);
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x238B1Cu, 0x238B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B24u;
label_238b24:
    // 0x238b24: 0x2609fff8  addiu       $t1, $s0, -0x8
    ctx->pc = 0x238b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x238b28: 0x8d260004  lw          $a2, 0x4($t1)
    ctx->pc = 0x238b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x238b2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x238b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x238b30: 0x3c0c0029  lui         $t4, 0x29
    ctx->pc = 0x238b30u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)41 << 16));
    // 0x238b34: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x238b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x238b38: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x238b38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x238b3c: 0x258a0828  addiu       $t2, $t4, 0x828
    ctx->pc = 0x238b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
    // 0x238b40: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x238b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x238b44: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x238b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x238b48: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x238b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x238b4c: 0x14a3001e  bne         $a1, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x238B4Cu;
    {
        const bool branch_taken_0x238b4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x238B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B4Cu;
        // 0x238b50: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b4c) {
            ctx->pc = 0x238BC8u;
            goto label_238bc8;
        }
    }
    ctx->pc = 0x238B54u;
    // 0x238b54: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x238b58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x238B58u;
    {
        const bool branch_taken_0x238b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B58u;
        // 0x238b5c: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b58) {
            ctx->pc = 0x238B7Cu;
            goto label_238b7c;
        }
    }
    ctx->pc = 0x238B60u;
    // 0x238b60: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x238b64: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x238b68: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x238b6c: 0x8d27000c  lw          $a3, 0xC($t1)
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x238b70: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x238b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x238b74: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238b74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x238b78: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238b7c:
    // 0x238b7c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x238b80: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x238b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x238b84: 0xdc640c30  ld          $a0, 0xC30($v1)
    ctx->pc = 0x238b84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3120)));
    // 0x238b88: 0x35030001  ori         $v1, $t0, 0x1
    ctx->pc = 0x238b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x238b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x238b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x238b90: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x238b90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x238b94: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x238b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x238b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238B98u;
    {
        const bool branch_taken_0x238b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238B98u;
        // 0x238b9c: 0xad230004  sw          $v1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238b98) {
            ctx->pc = 0x238BB0u;
            goto label_238bb0;
        }
    }
    ctx->pc = 0x238BA0u;
    // 0x238ba0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ba8: 0xc08e37e  jal         func_238DF8
    ctx->pc = 0x238BA8u;
    SET_GPR_U32(ctx, 31, 0x238BB0u);
    ctx->pc = 0x238BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BA8u;
    // 0x238bac: 0x8c450c38  lw          $a1, 0xC38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238DF8u, 0x238BA8u, 0x238BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BB0u;
label_238bb0:
    // 0x238bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238bc0: 0x808e9fc  j           func_23A7F0
    ctx->pc = 0x238BC0u;
    ctx->pc = 0x238BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238BC0u;
    // 0x238bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    FUN_0023a7f0_0x23a7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x238BC8u;
label_238bc8:
    // 0x238bc8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x238bcc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x238bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x238bd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x238BD0u;
    {
        const bool branch_taken_0x238bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bd0) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BD8u;
    // 0x238bd8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x238bdc: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x238be0: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x238be4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x238be8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x238bec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238BF4u;
    // 0x238bf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C0Cu;
            goto label_238c0c;
        }
    }
    ctx->pc = 0x238BFCu;
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
label_238c00:
    // 0x238c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c04: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x238c08: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c0c:
    // 0x238c0c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x238c10: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x238c14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x238c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x238c18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x35020001  ori         $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238C20u;
    // 0x238c20: 0x1560000d  bnez        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x238C20u;
    {
        const bool branch_taken_0x238c20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C20u;
        // 0x238c24: 0x1044021  addu        $t0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c20) {
            ctx->pc = 0x238C58u;
            goto label_238c58;
        }
    }
    ctx->pc = 0x238C28u;
    // 0x238c28: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238c2c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x238c30: 0x24420838  addiu       $v0, $v0, 0x838
    ctx->pc = 0x238c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2104));
    // 0x238c34: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x238c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x238c38: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238C38u;
    {
        const bool branch_taken_0x238c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238c38) {
            ctx->pc = 0x238C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C38u;
            // 0x238c3c: 0x8ca7000c  lw          $a3, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C60u;
            goto label_238c60;
        }
    }
    ctx->pc = 0x238C40u;
    // 0x238c40: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x238c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
    // 0x238c44: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c48: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x238c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x238c4c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x238c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x238c50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238C50u;
    {
        const bool branch_taken_0x238c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C50u;
        // 0x238c54: 0xad23000c  sw          $v1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c50) {
            ctx->pc = 0x238C6Cu;
            goto label_238c6c;
        }
    }
    ctx->pc = 0x238C58u;
label_238c58:
    // 0x238c58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x238c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x238c5c: 0x8ca7000c  lw          $a3, 0xC($a1)
    ctx->pc = 0x238c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_238c60:
    // 0x238c60: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c64: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x238c68: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
label_238c6c:
    // 0x238c6c: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x238c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_238c70:
    // 0x238c70: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x238c74: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x238c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x238c78: 0x15600053  bnez        $t3, . + 4 + (0x53 << 2)
    ctx->pc = 0x238C78u;
    {
        const bool branch_taken_0x238c78 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c78) {
            ctx->pc = 0x238DC8u;
            goto label_238dc8;
        }
    }
    ctx->pc = 0x238C80u;
    // 0x238c80: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x238c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x238c84: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x238C84u;
    {
        const bool branch_taken_0x238c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c84) {
            ctx->pc = 0x238C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C84u;
            // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CD0u;
            goto label_238cd0;
        }
    }
    ctx->pc = 0x238C8Cu;
    // 0x238c8c: 0x828c2  srl         $a1, $t0, 3
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x238c90: 0x25840828  addiu       $a0, $t4, 0x828
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
    // 0x238c94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x238c98: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x238c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ca0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238ca4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x238ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x238ca8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x238cac: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x238cb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238cb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238cb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238cbc: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x238cc0: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x238cc4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238DC0u;
            goto label_238dc0;
        }
    }
    ctx->pc = 0x238CCCu;
    // 0x238ccc: 0x0  nop
    ctx->pc = 0x238cccu;
    // NOP
label_238cd0:
    // 0x238cd0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x238CD0u;
    {
        const bool branch_taken_0x238cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CD8u;
    // 0x238cd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x238cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CDCu;
    {
        const bool branch_taken_0x238cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cdc) {
            ctx->pc = 0x238CF0u;
            goto label_238cf0;
        }
    }
    ctx->pc = 0x238CE4u;
    // 0x238ce4: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x238ce8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x238CE8u;
    {
        const bool branch_taken_0x238ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce8) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF8u;
    // 0x238cf8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x238cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x238cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CFCu;
    {
        const bool branch_taken_0x238cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cfc) {
            ctx->pc = 0x238D10u;
            goto label_238d10;
        }
    }
    ctx->pc = 0x238D04u;
    // 0x238d04: 0x81302  srl         $v0, $t0, 12
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x238d08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x238D08u;
    {
        const bool branch_taken_0x238d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d08) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D10u;
label_238d10:
    // 0x238d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238D10u;
    {
        const bool branch_taken_0x238d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d10) {
            ctx->pc = 0x238D28u;
            goto label_238d28;
        }
    }
    ctx->pc = 0x238D18u;
    // 0x238d18: 0x813c2  srl         $v0, $t0, 15
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x238d1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238D1Cu;
    {
        const bool branch_taken_0x238d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d1c) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D24u;
    // 0x238d24: 0x0  nop
    ctx->pc = 0x238d24u;
    // NOP
label_238d28:
    // 0x238d28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x238D28u;
    {
        const bool branch_taken_0x238d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d28) {
            ctx->pc = 0x238D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D28u;
            // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D30u;
    // 0x238d30: 0x81482  srl         $v0, $t0, 18
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
    // 0x238d34: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_238d38:
    // 0x238d38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238d3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x238d40: 0x24420830  addiu       $v0, $v0, 0x830
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
    // 0x238d44: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x238d48: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x238d4c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x238d50: 0x54c7000d  bnel        $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x238D50u;
    {
        const bool branch_taken_0x238d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x238d50) {
            ctx->pc = 0x238D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D50u;
            // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D88u;
            goto label_238d88;
        }
    }
    ctx->pc = 0x238D58u;
    // 0x238d58: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x238d5c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x238d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x238d60: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x238d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x238d64: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x238d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d6c: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x238d70: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x238d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x238d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238d80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238D88u;
    {
        const bool branch_taken_0x238d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d88) {
            ctx->pc = 0x238D9Cu;
            goto label_238d9c;
        }
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x50c70009  beql        $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x238D90u;
    {
        const bool branch_taken_0x238d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x238d90) {
            ctx->pc = 0x238D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D90u;
            // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D98u;
    // 0x238d98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_238d9c:
    // 0x238d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x238da0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238da4: 0x0  nop
    ctx->pc = 0x238da4u;
    // NOP
    // 0x238da8: 0x0  nop
    ctx->pc = 0x238da8u;
    // NOP
    // 0x238dac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238DACu;
    {
        const bool branch_taken_0x238dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238dac) {
            ctx->pc = 0x238DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238d90;
        }
    }
    ctx->pc = 0x238DB4u;
    // 0x238db4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x238db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_238db8:
    // 0x238db8: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238db8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x238dbc: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238dc0:
    // 0x238dc0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x238dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x238dc4: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x238dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
label_238dc8:
    // 0x238dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x238dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238dd8: 0x808e9fc  j           func_23A7F0
    ctx->pc = 0x238DD8u;
    ctx->pc = 0x238DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238DD8u;
    // 0x238ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    FUN_0023a7f0_0x23a7f0(rdram, ctx, runtime); return;
    ctx->pc = 0x238DE0u;
label_238de0:
    // 0x238de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x238decu;
}
