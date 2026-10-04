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

// Function: FUN_001a0970
// Address: 0x1a0970 - 0x1a0a58
void FUN_001a0970_0x1a0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0970_0x1a0970");
#endif

    switch (ctx->pc) {
        case 0x1a09f0u: goto label_1a09f0;
        case 0x1a0a00u: goto label_1a0a00;
        case 0x1a0a14u: goto label_1a0a14;
        case 0x1a0a38u: goto label_1a0a38;
        default: break;
    }

    ctx->pc = 0x1a0970u;

    // 0x1a0970: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a0974: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1a0974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1a0978: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1a0978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1a097c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1a097cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0980: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1a0984: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a0984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0988: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a0988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1a098c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a098cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0990: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a0990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a0994: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a0994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0998: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1a0998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1a099c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1a099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1a09a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a09a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a09a4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a09a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1a09a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a09ac: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1a09b0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1A09B0u;
    {
        const bool branch_taken_0x1a09b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09B0u;
        // 0x1a09b4: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09b0) {
            ctx->pc = 0x1A0A48u;
            goto label_1a0a48;
        }
    }
    ctx->pc = 0x1A09B8u;
    // 0x1a09b8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1a09b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a09bc: 0x4430024  bgezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A09BCu;
    {
        const bool branch_taken_0x1a09bc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a09bc) {
            ctx->pc = 0x1A09C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09BCu;
            // 0x1a09c0: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A09C4u;
    // 0x1a09c4: 0x8e770080  lw          $s7, 0x80($s3)
    ctx->pc = 0x1a09c4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1a09c8: 0x6e20021  bltzl       $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A09C8u;
    {
        const bool branch_taken_0x1a09c8 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1a09c8) {
            ctx->pc = 0x1A09CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A09C8u;
            // 0x1a09cc: 0xfea20000  sd          $v0, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A09D0u;
    // 0x1a09d0: 0xde700088  ld          $s0, 0x88($s3)
    ctx->pc = 0x1a09d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1a09d4: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1a09d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1a09d8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a09d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a09dc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1a09dcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1a09e0: 0x32120001  andi        $s2, $s0, 0x1
    ctx->pc = 0x1a09e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a09e4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1a09e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a09e8: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1A09E8u;
    SET_GPR_U32(ctx, 31, 0x1A09F0u);
    ctx->pc = 0x1A09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09E8u;
    // 0x1a09ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1A09E8u, 0x1A09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09F0u;
label_1a09f0:
    // 0x1a09f0: 0x8e760090  lw          $s6, 0x90($s3)
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1a09f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a09f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09f8: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1A09F8u;
    SET_GPR_U32(ctx, 31, 0x1A0A00u);
    ctx->pc = 0x1A09FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A09F8u;
    // 0x1a09fc: 0x32c50001  andi        $a1, $s6, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1A09F8u, 0x1A0A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A00u;
label_1a0a00:
    // 0x1a0a00: 0xde640078  ld          $a0, 0x78($s3)
    ctx->pc = 0x1a0a00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1a0a04: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a0a08: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1a0a08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1a0a0c: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A14u);
    ctx->pc = 0x1A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A0Cu;
    // 0x1a0a10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1A0A0Cu, 0x1A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A14u;
label_1a0a14:
    // 0x1a0a14: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1a0a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1a0a18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a0a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a0a1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a0a24: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1a0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1a0a28: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1a0a2c: 0xde650078  ld          $a1, 0x78($s3)
    ctx->pc = 0x1a0a2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1a0a30: 0xc06d536  jal         func_1B54D8
    ctx->pc = 0x1A0A30u;
    SET_GPR_U32(ctx, 31, 0x1A0A38u);
    ctx->pc = 0x1A0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A30u;
    // 0x1a0a34: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B54D8u, 0x1A0A30u, 0x1A0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A38u;
label_1a0a38:
    // 0x1a0a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0A38u;
    {
        const bool branch_taken_0x1a0a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A38u;
        // 0x1a0a3c: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a38) {
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A0A40u;
    // 0x1a0a40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0A40u;
    {
        const bool branch_taken_0x1a0a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0A40u;
        // 0x1a0a44: 0xae620090  sw          $v0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a40) {
            ctx->pc = 0x1A0A50u;
            goto label_1a0a50;
        }
    }
    ctx->pc = 0x1A0A48u;
label_1a0a48:
    // 0x1a0a48: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1a0a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a0a4c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1a0a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
label_1a0a50:
    // 0x1a0a50: 0x8e6300f8  lw          $v1, 0xF8($s3)
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x1a0a54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1a0a58u;
}
