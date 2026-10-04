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

// Function: entry_00239afc
// Address: 0x239afc - 0x239bbc
void entry_00239afc_0x239afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239afc_0x239afc");
#endif

    switch (ctx->pc) {
        case 0x239b24u: goto label_239b24;
        default: break;
    }

    ctx->pc = 0x239afcu;

    // 0x239afc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x239b00: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x239b04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x239b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x239b08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239b0c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x239b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x239b10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239b14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x239b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x239b18: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x239b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x239b1c: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x239B1Cu;
    SET_GPR_U32(ctx, 31, 0x239B24u);
    ctx->pc = 0x239B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B1Cu;
    // 0x239b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x239B1Cu, 0x239B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B24u;
label_239b24:
    // 0x239b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239b2c: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x239B2Cu;
    {
        const bool branch_taken_0x239b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x239B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B2Cu;
        // 0x239b30: 0x912023  subu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b2c) {
            ctx->pc = 0x239BF0u;
            return;
        }
    }
    ctx->pc = 0x239B34u;
    // 0x239b34: 0x27c50c58  addiu       $a1, $fp, 0xC58
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3160));
    // 0x239b38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239b3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x239b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x239b40: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x239b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x239b44: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x239b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x239b48: 0x24c30828  addiu       $v1, $a2, 0x828
    ctx->pc = 0x239b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2088));
    // 0x239b4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x239b50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x239b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x239b54: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x239b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x290830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290830u, _value); } while (0);
    // 0x239b58: 0x12830018  beq         $s4, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x239B58u;
    {
        const bool branch_taken_0x239b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x239B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B58u;
        // 0x239b5c: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b58) {
            ctx->pc = 0x239BBCu;
            return;
        }
    }
    ctx->pc = 0x239B60u;
    // 0x239b60: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x239b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x239b64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x239B64u;
    {
        const bool branch_taken_0x239b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b64) {
            ctx->pc = 0x239B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B64u;
            // 0x239b68: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239B80u;
            goto label_239b80;
        }
    }
    ctx->pc = 0x239B6Cu;
    // 0x239b6c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x239b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239b74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x239B74u;
    {
        const bool branch_taken_0x239b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B74u;
        // 0x239b78: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b74) {
            ctx->pc = 0x239BF0u;
            return;
        }
    }
    ctx->pc = 0x239B7Cu;
    // 0x239b7c: 0x0  nop
    ctx->pc = 0x239b7cu;
    // NOP
label_239b80:
    // 0x239b80: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x239b84: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x239b88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239b8c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x239b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239b94: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x239b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x239b98: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x239b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x239b9c: 0x2e640010  sltiu       $a0, $s3, 0x10
    ctx->pc = 0x239b9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x239ba0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x239ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x239ba4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x239ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x239ba8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239BA8u;
    {
        const bool branch_taken_0x239ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BA8u;
        // 0x239bac: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ba8) {
            ctx->pc = 0x239BBCu;
            return;
        }
    }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239bb4: 0xc08e2c0  jal         func_238B00
    ctx->pc = 0x239BB4u;
    SET_GPR_U32(ctx, 31, 0x239BBCu);
    ctx->pc = 0x239BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BB4u;
    // 0x239bb8: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B00u, 0x239BB4u, 0x239BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BBCu;
}
