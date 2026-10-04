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

// Function: entry_0023b4b8
// Address: 0x23b4b8 - 0x23b568
void entry_0023b4b8_0x23b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b4b8_0x23b4b8");
#endif

    ctx->pc = 0x23b4b8u;

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
            return;
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
    ctx->pc = 0x23b568u;
}
