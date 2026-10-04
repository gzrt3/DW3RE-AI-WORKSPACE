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

// Function: FUN_00199740
// Address: 0x199740 - 0x1998b4
void FUN_00199740_0x199740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199740_0x199740");
#endif

    switch (ctx->pc) {
        case 0x199778u: goto label_199778;
        case 0x199810u: goto label_199810;
        case 0x199880u: goto label_199880;
        default: break;
    }

    ctx->pc = 0x199740u;

    // 0x199740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19974c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x199750: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x19975c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199760: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199760u;
    {
        const bool branch_taken_0x199760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199760u;
        // 0x199764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199760) {
            ctx->pc = 0x199794u;
            goto label_199794;
        }
    }
    ctx->pc = 0x199768u;
    // 0x199768: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19976c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199770: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x199774: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199778:
    // 0x199778: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19977c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x19977Cu;
    {
        const bool branch_taken_0x19977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19977Cu;
        // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19977c) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x199784u;
    // 0x199784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199788: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19978c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19978Cu;
    {
        const bool branch_taken_0x19978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19978c) {
            ctx->pc = 0x199778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199778;
        }
    }
    ctx->pc = 0x199794u;
label_199794:
    // 0x199794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19979c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
    // 0x1997a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1997a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1997a4u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 5));
    // 0x1997a8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1997ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997D0u;
            goto label_1997d0;
        }
    }
    ctx->pc = 0x1997B4u;
    // 0x1997b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1997b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1997bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1997c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x1997c4: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1997c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1997C8u;
    {
        const bool branch_taken_0x1997c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997c8) {
            ctx->pc = 0x1997E0u;
            goto label_1997e0;
        }
    }
    ctx->pc = 0x1997D0u;
label_1997d0:
    // 0x1997d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1997d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1997d8: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x1997dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1997e0:
    // 0x1997e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1997e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1997e8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1997ec: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x1997f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1997f0u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
    // 0x1997f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1997f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1997fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1997FCu;
    {
        const bool branch_taken_0x1997fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997fc) {
            ctx->pc = 0x19982Cu;
            goto label_19982c;
        }
    }
    ctx->pc = 0x199804u;
    // 0x199804: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199808: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x19980c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199810:
    // 0x199810: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199814: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x199814u;
    {
        const bool branch_taken_0x199814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199814u;
        // 0x199818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199814) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x19981Cu;
    // 0x19981c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199820: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199824: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199824) {
            ctx->pc = 0x199810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199810;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x19982cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x199830: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199834: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x199834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x199838: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x19983c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x199840: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x199844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x199848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x199848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19984c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199850: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x199850u;
    {
        const bool branch_taken_0x199850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199850) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x199858u;
    // 0x199858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19985c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199864: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x199868: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x19986c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199898u;
            goto label_199898;
        }
    }
    ctx->pc = 0x199874u;
label_199874:
    // 0x199874: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199878: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199878u, 0x199880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x199880u;
    {
        const bool branch_taken_0x199880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199880) {
            ctx->pc = 0x1998B0u;
            goto label_1998b0;
        }
    }
    ctx->pc = 0x199888u;
label_199888:
    // 0x199888: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19988c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199890: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x199894: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_199898:
    // 0x199898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x19989c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1998a0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1998a4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1998a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x1998a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1998acu;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_1998b0:
    // 0x1998b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1998b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1998b4u;
}
