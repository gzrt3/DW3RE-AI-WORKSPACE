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

// Function: entry_001a0a48
// Address: 0x1a0a48 - 0x1a0b00
void entry_001a0a48_0x1a0a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a48_0x1a0a48");
#endif

    ctx->pc = 0x1a0a48u;

    // 0x1a0a48: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1a0a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a0a4c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1a0a50: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1a0a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0a58: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0A58u;
    {
        const bool branch_taken_0x1a0a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a58) {
            ctx->pc = 0x1A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A80u;
            goto label_1a0a80;
        }
    }
    ctx->pc = 0x1A0A60u;
    // 0x1a0a60: 0xde6200f0  ld          $v0, 0xF0($s3)
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x1a0a64: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A64u;
    {
        const bool branch_taken_0x1a0a64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a0a64) {
            ctx->pc = 0x1A0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A64u;
            // 0x1a0a68: 0x8e850040  lw          $a1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A80u;
            goto label_1a0a80;
        }
    }
    ctx->pc = 0x1A0A6Cu;
    // 0x1a0a6c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1a0a70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0a74: 0xae6000f8  sw          $zero, 0xF8($s3)
    ctx->pc = 0x1a0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
    // 0x1a0a78: 0xfe6200f0  sd          $v0, 0xF0($s3)
    ctx->pc = 0x1a0a78u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 2));
    // 0x1a0a7c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x1a0a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_1a0a80:
    // 0x1a0a80: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x1a0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x1a0a84: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1a0a88: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1a0a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1a0a8c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x1a0a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x1a0a90: 0x8e860030  lw          $a2, 0x30($s4)
    ctx->pc = 0x1a0a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1a0a94: 0x8e87002c  lw          $a3, 0x2C($s4)
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1a0a98: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1a0a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1a0a9c: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1a0aa0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1a0aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1a0aa4: 0xde840020  ld          $a0, 0x20($s4)
    ctx->pc = 0x1a0aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1a0aa8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1a0aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1a0aac: 0x630f8  dsll        $a2, $a2, 3
    ctx->pc = 0x1a0aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 3);
    // 0x1a0ab0: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x1a0ab4: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x1a0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x1a0ab8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1a0abc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1a0ac0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a0ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a0ac4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a0ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a0ac8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1a0ac8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a0acc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ad0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1a0ad0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a0ad4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0ad8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0adc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a0adcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0ae0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1a0ae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0ae4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0ae8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1a0ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0aec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a0aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0af0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a0af0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a0af4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0AF4u;
        // 0x1a0af8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0AFCu;
    // 0x1a0afc: 0x0  nop
    ctx->pc = 0x1a0afcu;
    // NOP
    ctx->pc = 0x1a0b00u;
}
