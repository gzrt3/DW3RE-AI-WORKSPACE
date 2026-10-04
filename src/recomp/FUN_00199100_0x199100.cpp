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

// Function: FUN_00199100
// Address: 0x199100 - 0x19940c
void FUN_00199100_0x199100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199100_0x199100");
#endif

    switch (ctx->pc) {
        case 0x199138u: goto label_199138;
        case 0x199178u: goto label_199178;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991f8u: goto label_1991f8;
        case 0x199238u: goto label_199238;
        case 0x19929cu: goto label_19929c;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992fcu: goto label_1992fc;
        case 0x199314u: goto label_199314;
        case 0x19932cu: goto label_19932c;
        case 0x199344u: goto label_199344;
        case 0x19935cu: goto label_19935c;
        case 0x199374u: goto label_199374;
        case 0x19938cu: goto label_19938c;
        default: break;
    }

    ctx->pc = 0x199100u;

    // 0x199100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199108: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x199108u;
    {
        const bool branch_taken_0x199108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199108u;
        // 0x19910c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199108) {
            ctx->pc = 0x199394u;
            goto label_199394;
        }
    }
    ctx->pc = 0x199110u;
    // 0x199110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199114: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x19911c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x19911cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199120: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x199120u;
    {
        const bool branch_taken_0x199120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199120u;
        // 0x199124: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199120) {
            ctx->pc = 0x199154u;
            goto label_199154;
        }
    }
    ctx->pc = 0x199128u;
    // 0x199128: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19912c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199130: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199134: 0x0  nop
    ctx->pc = 0x199134u;
    // NOP
label_199138:
    // 0x199138: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19913c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19913c) {
            ctx->pc = 0x19925Cu;
            goto label_19925c;
        }
    }
    ctx->pc = 0x199144u;
    // 0x199144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199148: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19914c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19914c) {
            ctx->pc = 0x199138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199138;
        }
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199158: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x199158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x19915c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x199160: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199164: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199164u;
    {
        const bool branch_taken_0x199164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199164u;
        // 0x199168: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199164) {
            ctx->pc = 0x199194u;
            goto label_199194;
        }
    }
    ctx->pc = 0x19916Cu;
    // 0x19916c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199170: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x199174: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199178:
    // 0x199178: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19917c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19917Cu;
        // 0x199180: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19917c) {
            ctx->pc = 0x199268u;
            goto label_199268;
        }
    }
    ctx->pc = 0x199184u;
    // 0x199184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199188: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19918c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19918Cu;
    {
        const bool branch_taken_0x19918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19918Cu;
        // 0x199190: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19918c) {
            ctx->pc = 0x199178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199178;
        }
    }
    ctx->pc = 0x199194u;
label_199194:
    // 0x199194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199198: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x19919c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x19919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x1991a0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1991a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x1991a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1991a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1991ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1991ACu;
    {
        const bool branch_taken_0x1991ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ACu;
        // 0x1991b0: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ac) {
            ctx->pc = 0x1991E4u;
            goto label_1991e4;
        }
    }
    ctx->pc = 0x1991B4u;
    // 0x1991b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1991b8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x1991bc: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1991bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x1991c0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1991c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1991c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1991c8:
    // 0x1991c8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1991cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1991CCu;
    {
        const bool branch_taken_0x1991cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991CCu;
        // 0x1991d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991cc) {
            ctx->pc = 0x199274u;
            goto label_199274;
        }
    }
    ctx->pc = 0x1991D4u;
    // 0x1991d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1991d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1991d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1991dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1991DCu;
    {
        const bool branch_taken_0x1991dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991DCu;
        // 0x1991e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991dc) {
            ctx->pc = 0x1991C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991c8;
        }
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1991e4u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x1991e8: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1991e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1991ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1991ECu;
    {
        const bool branch_taken_0x1991ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ECu;
        // 0x1991f0: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ec) {
            ctx->pc = 0x199214u;
            goto label_199214;
        }
    }
    ctx->pc = 0x1991F4u;
    // 0x1991f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1991f8:
    // 0x1991f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1991f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1991fc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1991FCu;
    {
        const bool branch_taken_0x1991fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991fc) {
            ctx->pc = 0x199280u;
            goto label_199280;
        }
    }
    ctx->pc = 0x199204u;
    // 0x199204: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x199204u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x199208: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x199208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x19920c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19920Cu;
    {
        const bool branch_taken_0x19920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19920Cu;
        // 0x199210: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19920c) {
            ctx->pc = 0x1991F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991f8;
        }
    }
    ctx->pc = 0x199214u;
label_199214:
    // 0x199214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199218: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x199218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
    // 0x19921c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x199220: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x199224: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199224u;
    {
        const bool branch_taken_0x199224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199224u;
        // 0x199228: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199224) {
            ctx->pc = 0x199254u;
            goto label_199254;
        }
    }
    ctx->pc = 0x19922Cu;
    // 0x19922c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199230: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x199230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x199234: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199238:
    // 0x199238: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19923c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19923Cu;
    {
        const bool branch_taken_0x19923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19923Cu;
        // 0x199240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19923c) {
            ctx->pc = 0x19928Cu;
            goto label_19928c;
        }
    }
    ctx->pc = 0x199244u;
    // 0x199244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199248: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x199248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x19924c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19924Cu;
    {
        const bool branch_taken_0x19924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19924Cu;
        // 0x199250: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19924c) {
            ctx->pc = 0x199238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199238;
        }
    }
    ctx->pc = 0x199254u;
label_199254:
    // 0x199254: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x199254u;
    {
        const bool branch_taken_0x199254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199254u;
        // 0x199258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199254) {
            ctx->pc = 0x199408u;
            goto label_199408;
        }
    }
    ctx->pc = 0x19925Cu;
label_19925c:
    // 0x19925c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199260: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x199260u;
    {
        const bool branch_taken_0x199260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199260u;
        // 0x199264: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199260) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199268u;
label_199268:
    // 0x199268: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19926c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19926Cu;
    {
        const bool branch_taken_0x19926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19926Cu;
        // 0x199270: 0x24849bb0  addiu       $a0, $a0, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19926c) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199278: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199278u;
    {
        const bool branch_taken_0x199278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199278u;
        // 0x19927c: 0x24849be0  addiu       $a0, $a0, -0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199278) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199280u;
label_199280:
    // 0x199280: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199284u;
    {
        const bool branch_taken_0x199284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x24849c10  addiu       $a0, $a0, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199284) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199290: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
label_199294:
    // 0x199294: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 31, 0x19929Cu);
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199294u, 0x19929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992a4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1992a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1992a8: 0x24849b00  addiu       $a0, $a0, -0x6500
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941440));
    // 0x1992ac: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992ACu;
    SET_GPR_U32(ctx, 31, 0x1992B4u);
    ctx->pc = 0x1992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992ACu;
    // 0x1992b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992ACu, 0x1992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992B4u;
label_1992b4:
    // 0x1992b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992b8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992bc: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x1992bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x1992c0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x1992c4: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992C4u;
    SET_GPR_U32(ctx, 31, 0x1992CCu);
    ctx->pc = 0x1992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992C4u;
    // 0x1992c8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992C4u, 0x1992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992CCu;
label_1992cc:
    // 0x1992cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992d4: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x1992d8: 0x24849b20  addiu       $a0, $a0, -0x64E0
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941472));
    // 0x1992dc: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992DCu;
    SET_GPR_U32(ctx, 31, 0x1992E4u);
    ctx->pc = 0x1992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992DCu;
    // 0x1992e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992DCu, 0x1992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992E4u;
label_1992e4:
    // 0x1992e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992e8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992ec: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x1992ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x1992f0: 0x24849b30  addiu       $a0, $a0, -0x64D0
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941488));
    // 0x1992f4: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x1992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992F4u;
    // 0x1992f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199300: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199304: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x199308: 0x24849b40  addiu       $a0, $a0, -0x64C0
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
    // 0x19930c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19930Cu;
    SET_GPR_U32(ctx, 31, 0x199314u);
    ctx->pc = 0x199310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19930Cu;
    // 0x199310: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19930Cu, 0x199314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199314u;
label_199314:
    // 0x199314: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199318: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19931c: 0x3463a030  ori         $v1, $v1, 0xA030
    ctx->pc = 0x19931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41008);
    // 0x199320: 0x24849b50  addiu       $a0, $a0, -0x64B0
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941520));
    // 0x199324: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199324u;
    SET_GPR_U32(ctx, 31, 0x19932Cu);
    ctx->pc = 0x199328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199324u;
    // 0x199328: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199324u, 0x19932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19932Cu;
label_19932c:
    // 0x19932c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199330: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199334: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x199338: 0x24849b60  addiu       $a0, $a0, -0x64A0
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941536));
    // 0x19933c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19933Cu;
    SET_GPR_U32(ctx, 31, 0x199344u);
    ctx->pc = 0x199340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19933Cu;
    // 0x199340: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19933Cu, 0x199344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199348: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19934c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x19934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x199350: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x199354: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199354u;
    SET_GPR_U32(ctx, 31, 0x19935Cu);
    ctx->pc = 0x199358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199354u;
    // 0x199358: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199354u, 0x19935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19935Cu;
label_19935c:
    // 0x19935c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199360: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199364: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199368: 0x24849b80  addiu       $a0, $a0, -0x6480
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
    // 0x19936c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19936Cu;
    SET_GPR_U32(ctx, 31, 0x199374u);
    ctx->pc = 0x199370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19936Cu;
    // 0x199370: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19936Cu, 0x199374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199378: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19937c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x19937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x199380: 0x24849b98  addiu       $a0, $a0, -0x6468
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
    // 0x199384: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x199388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199384u;
    // 0x199388: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199384u, 0x19938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19938Cu;
    {
        const bool branch_taken_0x19938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19938c) {
            ctx->pc = 0x199408u;
            goto label_199408;
        }
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199398: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x19939c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1993a0: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x1993a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x1993a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x1993a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1993ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x1993b0: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
    // 0x1993b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1993b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1993b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10003C00u));
    // 0x1993bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1993bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1993c0: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1993c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1993c4: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1993c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1993c8: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
    // 0x1993cc: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1993ccu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1993d0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1993d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1993d8: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x1993d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1993dc: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1993dcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1993e0: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1993e0u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
    // 0x1993e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1993e8: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1993e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
    // 0x1993ec: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x1993ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x1993f0: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x1993f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1993f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1993f4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x10003020u));
    // 0x1993f8: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1993f8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1993fc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x1993fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x199400: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x199404: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x199404u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_199408:
    // 0x199408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19940cu;
}
