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

// Function: FUN_0023b3f8
// Address: 0x23b3f8 - 0x23b588
void FUN_0023b3f8_0x23b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b3f8_0x23b3f8");
#endif

    switch (ctx->pc) {
        case 0x23b438u: goto label_23b438;
        default: break;
    }

    ctx->pc = 0x23b3f8u;

    // 0x23b3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23b3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23b400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23b400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23b408: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23b40c: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x23b40cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x23b410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23b410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23b414: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23b418: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x23b41c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x23b420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b424: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x23b424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23b428: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x23b428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x23b42c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x23b42cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b430: 0xc08ead4  jal         func_23AB50
    ctx->pc = 0x23B430u;
    SET_GPR_U32(ctx, 31, 0x23B438u);
    ctx->pc = 0x23B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B430u;
    // 0x23b434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB50u, 0x23B430u, 0x23B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B438u;
label_23b438:
    // 0x23b438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23b438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b43c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23b440: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23b444: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x23b448: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x23B448u;
    {
        const bool branch_taken_0x23b448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B448u;
        // 0x23b44c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b448) {
            ctx->pc = 0x23B4B8u;
            goto label_23b4b8;
        }
    }
    ctx->pc = 0x23B450u;
    // 0x23b450: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23b454: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x23b454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x23b458: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b458u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23b45c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23b460: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b464: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x23b464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x23b468: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x23b468u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x23b46c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23b470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b478: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x23b478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x23b47c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B47Cu;
    {
        const bool branch_taken_0x23b47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B47Cu;
        // 0x23b480: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b47c) {
            ctx->pc = 0x23B488u;
            goto label_23b488;
        }
    }
    ctx->pc = 0x23B484u;
    // 0x23b484: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x23b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_23b488:
    // 0x23b488: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23b48c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x23b490: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23b494: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x23b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x23b498: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x23b49c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b4a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23b4a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b4a8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b4a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x23b4ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b4b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B0u;
        // 0x23b4b4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B568u;
            goto label_23b568;
        }
    }
    ctx->pc = 0x23B4B8u;
label_23b4b8:
    // 0x23b4b8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x23b4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x23b4bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B4BCu;
    {
        const bool branch_taken_0x23b4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4bc) {
            ctx->pc = 0x23B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B4BCu;
            // 0x23b4c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B4CCu;
            goto label_23b4cc;
        }
    }
    ctx->pc = 0x23B4C4u;
    // 0x23b4c4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x23b4c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x23b4c8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23b4cc:
    // 0x23b4cc: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x23b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x23b4d0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x23B4D0u;
    {
        const bool branch_taken_0x23b4d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4D0u;
        // 0x23b4d4: 0x61823  negu        $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4d0) {
            ctx->pc = 0x23B538u;
            goto label_23b538;
        }
    }
    ctx->pc = 0x23B4D8u;
    // 0x23b4d8: 0xd31004  sllv        $v0, $s3, $a2
    ctx->pc = 0x23b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x23b4dc: 0x671806  srlv        $v1, $a3, $v1
    ctx->pc = 0x23b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x23b4e0: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x23b4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x23b4e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b4e8: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x23b4e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x23b4ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x23b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x23b4f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x23b4f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x23b4f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x23b4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x23b4f8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b4f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x23b4fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b500: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x23b500u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x23b504: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B504u;
    {
        const bool branch_taken_0x23b504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B504u;
        // 0x23b508: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b504) {
            ctx->pc = 0x23B510u;
            goto label_23b510;
        }
    }
    ctx->pc = 0x23B50Cu;
    // 0x23b50c: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x23b50cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_23b510:
    // 0x23b510: 0x61023  negu        $v0, $a2
    ctx->pc = 0x23b510u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x23b514: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x23b514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x23b518: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x23b518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x23b51c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b520: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23b524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b528: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x23b52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b530: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23B530u;
    {
        const bool branch_taken_0x23b530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B530u;
        // 0x23b534: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b530) {
            ctx->pc = 0x23B568u;
            goto label_23b568;
        }
    }
    ctx->pc = 0x23B538u;
label_23b538:
    // 0x23b538: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x23b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x23b53c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23b540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b544: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x23b544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x23b548: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x23b548u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x23b54c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b550: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b554: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23b558: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x23b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x23b55c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x23b55cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x23b560: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b564: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_23b568:
    // 0x23b568: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x23b568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x23b56c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23b56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23b578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b57c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b580: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b584: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23b584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x23b588u;
}
