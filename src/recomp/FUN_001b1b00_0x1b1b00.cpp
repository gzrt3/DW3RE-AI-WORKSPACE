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

// Function: FUN_001b1b00
// Address: 0x1b1b00 - 0x1b1c74
void FUN_001b1b00_0x1b1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1b00_0x1b1b00");
#endif

    switch (ctx->pc) {
        case 0x1b1b60u: goto label_1b1b60;
        case 0x1b1bfcu: goto label_1b1bfc;
        case 0x1b1c2cu: goto label_1b1c2c;
        case 0x1b1c4cu: goto label_1b1c4c;
        default: break;
    }

    ctx->pc = 0x1b1b00u;

    // 0x1b1b00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b1b04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b1b08: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b1b0c: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1b1b0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
    // 0x1b1b10: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b1b14: 0x26c26200  addiu       $v0, $s6, 0x6200
    ctx->pc = 0x1b1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 25088));
    // 0x1b1b18: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b1b1c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b1b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b1b24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b1b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1b2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b1b2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b30: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b1b34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b1b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b38: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b1b3c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b1b40: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1b44: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B44u;
    {
        const bool branch_taken_0x1b1b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B44u;
        // 0x1b1b48: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b44) {
            ctx->pc = 0x1B1B54u;
            goto label_1b1b54;
        }
    }
    ctx->pc = 0x1B1B4Cu;
    // 0x1b1b4c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1B1B4Cu;
    {
        const bool branch_taken_0x1b1b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B4Cu;
        // 0x1b1b50: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b4c) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1B54u;
label_1b1b54:
    // 0x1b1b54: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
    // 0x1b1b58: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1B58u;
    SET_GPR_U32(ctx, 31, 0x1B1B60u);
    ctx->pc = 0x1B1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B58u;
    // 0x1b1b5c: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1B58u, 0x1B1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B60u;
    {
        const bool branch_taken_0x1b1b60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B60u;
        // 0x1b1b64: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b60) {
            ctx->pc = 0x1B1B70u;
            goto label_1b1b70;
        }
    }
    ctx->pc = 0x1B1B68u;
    // 0x1b1b68: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1B1B68u;
    {
        const bool branch_taken_0x1b1b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B68u;
        // 0x1b1b6c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b68) {
            ctx->pc = 0x1B1C50u;
            goto label_1b1c50;
        }
    }
    ctx->pc = 0x1B1B70u;
label_1b1b70:
    // 0x1b1b70: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b1b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b1b74: 0x26236280  addiu       $v1, $s1, 0x6280
    ctx->pc = 0x1b1b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1b78: 0x24826700  addiu       $v0, $a0, 0x6700
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    // 0x1b1b7c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1b1b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1b1b80: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1b1b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1b1b84: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1B84u;
    {
        const bool branch_taken_0x1b1b84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B84u;
        // 0x1b1b88: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b84) {
            ctx->pc = 0x1B1B98u;
            goto label_1b1b98;
        }
    }
    ctx->pc = 0x1B1B8Cu;
    // 0x1b1b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1B90u;
    {
        const bool branch_taken_0x1b1b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B90u;
        // 0x1b1b94: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b90) {
            ctx->pc = 0x1B1B9Cu;
            goto label_1b1b9c;
        }
    }
    ctx->pc = 0x1B1B98u;
label_1b1b98:
    // 0x1b1b98: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1b1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1b1b9c:
    // 0x1b1b9c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1B9Cu;
    {
        const bool branch_taken_0x1b1b9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B9Cu;
        // 0x1b1ba0: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b9c) {
            ctx->pc = 0x1B1BB0u;
            goto label_1b1bb0;
        }
    }
    ctx->pc = 0x1B1BA4u;
    // 0x1b1ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1BA8u;
    {
        const bool branch_taken_0x1b1ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BA8u;
        // 0x1b1bac: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1ba8) {
            ctx->pc = 0x1B1BB8u;
            goto label_1b1bb8;
        }
    }
    ctx->pc = 0x1B1BB0u;
label_1b1bb0:
    // 0x1b1bb0: 0x26226280  addiu       $v0, $s1, 0x6280
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1bb4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1b1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1b1bb8:
    // 0x1b1bb8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1BB8u;
    {
        const bool branch_taken_0x1b1bb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BB8u;
        // 0x1b1bbc: 0x26236280  addiu       $v1, $s1, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bb8) {
            ctx->pc = 0x1B1BCCu;
            goto label_1b1bcc;
        }
    }
    ctx->pc = 0x1B1BC0u;
    // 0x1b1bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1BC4u;
    {
        const bool branch_taken_0x1b1bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC4u;
        // 0x1b1bc8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bc4) {
            ctx->pc = 0x1B1BD4u;
            goto label_1b1bd4;
        }
    }
    ctx->pc = 0x1B1BCCu;
label_1b1bcc:
    // 0x1b1bcc: 0x26226280  addiu       $v0, $s1, 0x6280
    ctx->pc = 0x1b1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1bd0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1b1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1b1bd4:
    // 0x1b1bd4: 0x24906700  addiu       $s0, $a0, 0x6700
    ctx->pc = 0x1b1bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
    // 0x1b1bd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1bdc: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b1bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b1be0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b1be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1be8: 0xac536228  sw          $s3, 0x6228($v0)
    ctx->pc = 0x1b1be8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x376228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x376228u, _value); } while (0);
    // 0x1b1bec: 0xac74622c  sw          $s4, 0x622C($v1)
    ctx->pc = 0x1b1becu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x37622Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x37622Cu, _value); } while (0);
    // 0x1b1bf0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1b1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1b1bf4: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1BF4u;
    SET_GPR_U32(ctx, 31, 0x1B1BFCu);
    ctx->pc = 0x1B1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BF4u;
    // 0x1b1bf8: 0xacd56230  sw          $s5, 0x6230($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 25136), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1BF4u, 0x1B1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BFCu;
label_1b1bfc:
    // 0x1b1bfc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1c00: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1c00u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1c04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b1c08: 0x26c46200  addiu       $a0, $s6, 0x6200
    ctx->pc = 0x1b1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25088));
    // 0x1b1c0c: 0x26276280  addiu       $a3, $s1, 0x6280
    ctx->pc = 0x1b1c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 25216));
    // 0x1b1c10: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1c14: 0x256b1aa8  addiu       $t3, $t3, 0x1AA8
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6824));
    // 0x1b1c18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b1c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c20: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1c24: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1C24u;
    SET_GPR_U32(ctx, 31, 0x1B1C2Cu);
    ctx->pc = 0x1B1C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C24u;
    // 0x1b1c28: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1C24u, 0x1B1C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C2Cu;
label_1b1c2c:
    // 0x1b1c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c30: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1C30u;
    {
        const bool branch_taken_0x1b1c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C30u;
        // 0x1b1c34: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c30) {
            ctx->pc = 0x1B1C44u;
            goto label_1b1c44;
        }
    }
    ctx->pc = 0x1B1C38u;
    // 0x1b1c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1C3Cu;
    {
        const bool branch_taken_0x1b1c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C3Cu;
        // 0x1b1c40: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c3c) {
            ctx->pc = 0x1B1C4Cu;
            goto label_1b1c4c;
        }
    }
    ctx->pc = 0x1B1C44u;
label_1b1c44:
    // 0x1b1c44: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1C44u;
    SET_GPR_U32(ctx, 31, 0x1B1C4Cu);
    ctx->pc = 0x1B1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C44u;
    // 0x1b1c48: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1C44u, 0x1B1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C4Cu;
label_1b1c4c:
    // 0x1b1c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1c50:
    // 0x1b1c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1c54: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1c54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1c58: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1c58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1c5c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1c5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1c60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1c64: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c68: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1c6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1c70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1c74u;
}
