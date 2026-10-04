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

// Function: entry_001a1b38
// Address: 0x1a1b38 - 0x1a1be8
void entry_001a1b38_0x1a1b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1b38_0x1a1b38");
#endif

    ctx->pc = 0x1a1b38u;

    // 0x1a1b38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a1b3c: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A1B3Cu;
    {
        const bool branch_taken_0x1a1b3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a1b3c) {
            ctx->pc = 0x1A1B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B3Cu;
            // 0x1a1b40: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1B44u;
    // 0x1a1b44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1B44u;
    {
        const bool branch_taken_0x1a1b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B44u;
        // 0x1a1b48: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b44) {
            ctx->pc = 0x1A1B8Cu;
            goto label_1a1b8c;
        }
    }
    ctx->pc = 0x1A1B4Cu;
    // 0x1a1b4c: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x1a1b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1a1b50: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a1b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a1b54: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1B54u;
    {
        const bool branch_taken_0x1a1b54 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1b54) {
            ctx->pc = 0x1A1B68u;
            goto label_1a1b68;
        }
    }
    ctx->pc = 0x1A1B5Cu;
    // 0x1a1b5c: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x1a1b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x1a1b60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1B60u;
    {
        const bool branch_taken_0x1a1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B60u;
        // 0x1a1b64: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b60) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B68u;
label_1a1b68:
    // 0x1a1b68: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1B68u;
    {
        const bool branch_taken_0x1a1b68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x1A1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B68u;
        // 0x1a1b6c: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b68) {
            ctx->pc = 0x1A1B7Cu;
            goto label_1a1b7c;
        }
    }
    ctx->pc = 0x1A1B70u;
    // 0x1a1b70: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x1a1b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1a1b74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1B74u;
    {
        const bool branch_taken_0x1a1b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b74) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b80:
    // 0x1a1b80: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1B80u;
    {
        const bool branch_taken_0x1a1b80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a1b80) {
            ctx->pc = 0x1A1B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B80u;
            // 0x1a1b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1B88u;
    // 0x1a1b88: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1a1b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_1a1b8c:
    // 0x1a1b8c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1a1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1a1b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a1b94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a1b98: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1b9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a1ba0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a1ba4:
    // 0x1a1ba4: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x1a1ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a1ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1BA8u;
    {
        const bool branch_taken_0x1a1ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BA8u;
        // 0x1a1bac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba8) {
            ctx->pc = 0x1A1BB8u;
            goto label_1a1bb8;
        }
    }
    ctx->pc = 0x1A1BB0u;
    // 0x1a1bb0: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1A1BB0u;
    {
        const bool branch_taken_0x1a1bb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bb0) {
            ctx->pc = 0x1A1BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1BB0u;
            // 0x1a1bb4: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A98u;
            return;
        }
    }
    ctx->pc = 0x1A1BB8u;
label_1a1bb8:
    // 0x1a1bb8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a1bbc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1bc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a1bc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1bc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a1bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1bcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a1bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1bd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1bd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a1bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BDCu;
        // 0x1a1be0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1BE4u;
    // 0x1a1be4: 0x0  nop
    ctx->pc = 0x1a1be4u;
    // NOP
    ctx->pc = 0x1a1be8u;
}
