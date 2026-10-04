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

// Function: FUN_00227ae0
// Address: 0x227ae0 - 0x227bd4
void FUN_00227ae0_0x227ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227ae0_0x227ae0");
#endif

    switch (ctx->pc) {
        case 0x227b88u: goto label_227b88;
        default: break;
    }

    ctx->pc = 0x227ae0u;

    // 0x227ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227ae4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x227ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227aec: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x227aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x227af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227af4: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x227af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227afc: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x227afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x227b00: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x227b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x227b04: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x227b08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x227b0c: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x227b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x227b10: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x227b10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x227b14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x227b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x227b18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B18u;
    {
        const bool branch_taken_0x227b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B18u;
        // 0x227b1c: 0x24843620  addiu       $a0, $a0, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b18) {
            ctx->pc = 0x227B2Cu;
            goto label_227b2c;
        }
    }
    ctx->pc = 0x227B20u;
    // 0x227b20: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x227b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x227b24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227B24u;
    {
        const bool branch_taken_0x227b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b24) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B2Cu;
label_227b2c:
    // 0x227b2c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x227b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227b30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227b34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227B34u;
    {
        const bool branch_taken_0x227b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b34) {
            ctx->pc = 0x227B40u;
            goto label_227b40;
        }
    }
    ctx->pc = 0x227B3Cu;
    // 0x227b3c: 0xaf8692e8  sw          $a2, -0x6D18($gp)
    ctx->pc = 0x227b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939368), GPR_U32(ctx, 6));
label_227b40:
    // 0x227b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x227b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227b44: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x227b48: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x227b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x227b4c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x227b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x227b50: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x227b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x227b54: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x227b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x227b58: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x227b5c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x227b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x227b60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x227b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227b68: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x227b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x227b6c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x227b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x227b70: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x227b74: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x227b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x227b78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x227b7c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x227b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x227b80: 0xc05da58  jal         func_176960
    ctx->pc = 0x227B80u;
    SET_GPR_U32(ctx, 31, 0x227B88u);
    ctx->pc = 0x227B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B80u;
    // 0x227b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176960u, 0x227B80u, 0x227B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B88u;
label_227b88:
    // 0x227b88: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x227b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x227b8c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x227b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227b90: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x227B90u;
    {
        const bool branch_taken_0x227b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B90u;
        // 0x227b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b90) {
            ctx->pc = 0x227BC4u;
            goto label_227bc4;
        }
    }
    ctx->pc = 0x227B98u;
    // 0x227b98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227b9c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227B9Cu;
    {
        const bool branch_taken_0x227b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B9Cu;
        // 0x227ba0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227b9c) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BA4u;
    // 0x227ba4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227BA4u;
    {
        const bool branch_taken_0x227ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227ba4) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BACu;
    // 0x227bac: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x227bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x227bb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227BB0u;
    {
        const bool branch_taken_0x227bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BB0u;
        // 0x227bb4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bb0) {
            ctx->pc = 0x227BC0u;
            goto label_227bc0;
        }
    }
    ctx->pc = 0x227BB8u;
    // 0x227bb8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227BB8u;
    {
        const bool branch_taken_0x227bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227bb8) {
            ctx->pc = 0x227BCCu;
            goto label_227bcc;
        }
    }
    ctx->pc = 0x227BC0u;
label_227bc0:
    // 0x227bc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_227bc4:
    // 0x227bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227BC4u;
    {
        const bool branch_taken_0x227bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BC4u;
        // 0x227bc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bc4) {
            ctx->pc = 0x227BD4u;
            return;
        }
    }
    ctx->pc = 0x227BCCu;
label_227bcc:
    // 0x227bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x227bd4u;
}
