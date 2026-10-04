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

// Function: entry_001a25c4
// Address: 0x1a25c4 - 0x1a2650
void entry_001a25c4_0x1a25c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a25c4_0x1a25c4");
#endif

    switch (ctx->pc) {
        case 0x1a25e8u: goto label_1a25e8;
        case 0x1a2620u: goto label_1a2620;
        case 0x1a2648u: goto label_1a2648;
        default: break;
    }

    ctx->pc = 0x1a25c4u;

    // 0x1a25c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a25c8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x1a25c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1a25cc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1a25d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a25d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a25d4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a25d8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A25D8u;
            // 0x1a25dc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25ECu;
            goto label_1a25ec;
        }
    }
    ctx->pc = 0x1A25E0u;
    // 0x1a25e0: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A25E0u;
    SET_GPR_U32(ctx, 31, 0x1A25E8u);
    ctx->pc = 0x1A25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25E0u;
    // 0x1a25e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A25E0u, 0x1A25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25E8u;
label_1a25e8:
    // 0x1a25e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a25e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a25ec:
    // 0x1a25ec: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x1a25ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x1a25f0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a25f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1a25f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a25f8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a25f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a25fc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a2600: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x1a2604: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x1a2604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x1a2608: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a260c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A260Cu;
    {
        const bool branch_taken_0x1a260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A260Cu;
        // 0x1a2610: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a260c) {
            ctx->pc = 0x1A2638u;
            goto label_1a2638;
        }
    }
    ctx->pc = 0x1A2614u;
    // 0x1a2614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2618: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2618u;
    SET_GPR_U32(ctx, 31, 0x1A2620u);
    ctx->pc = 0x1A261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2618u;
    // 0x1a261c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2618u, 0x1A2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2620u;
label_1a2620:
    // 0x1a2620: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a2620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2624: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a2628: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a262c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x1a2630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2634: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a2634u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1a2638:
    // 0x1a2638: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A2638u;
    {
        const bool branch_taken_0x1a2638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2638u;
        // 0x1a263c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2638) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A2640u;
    // 0x1a2640: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A2640u;
    SET_GPR_U32(ctx, 31, 0x1A2648u);
    ctx->pc = 0x1A2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2640u;
    // 0x1a2644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A2640u, 0x1A2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2648u;
label_1a2648:
    // 0x1a2648: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A2648u;
    {
        const bool branch_taken_0x1a2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2648u;
        // 0x1a264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2648) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A2650u;
}
