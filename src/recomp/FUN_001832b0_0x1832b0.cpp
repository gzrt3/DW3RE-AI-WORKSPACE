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

// Function: FUN_001832b0
// Address: 0x1832b0 - 0x1833b0
void FUN_001832b0_0x1832b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001832b0_0x1832b0");
#endif

    switch (ctx->pc) {
        case 0x183368u: goto label_183368;
        case 0x183384u: goto label_183384;
        case 0x1833acu: goto label_1833ac;
        default: break;
    }

    ctx->pc = 0x1832b0u;

    // 0x1832b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1832b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1832b4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1832b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1832b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1832bc: 0x90830036  lbu         $v1, 0x36($a0)
    ctx->pc = 0x1832bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1832c0: 0x1468001a  bne         $v1, $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1832C0u;
    {
        const bool branch_taken_0x1832c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1832c0) {
            ctx->pc = 0x18332Cu;
            goto label_18332c;
        }
    }
    ctx->pc = 0x1832C8u;
    // 0x1832c8: 0x90a70237  lbu         $a3, 0x237($a1)
    ctx->pc = 0x1832c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 567)));
    // 0x1832cc: 0x10e80020  beq         $a3, $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1832CCu;
    {
        const bool branch_taken_0x1832cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x1832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832CCu;
        // 0x1832d0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832cc) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x1832D4u;
    // 0x1832d4: 0x10e3001e  beq         $a3, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1832D4u;
    {
        const bool branch_taken_0x1832d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1832d4) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x1832DCu;
    // 0x1832dc: 0xa0a80237  sb          $t0, 0x237($a1)
    ctx->pc = 0x1832dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 567), (uint8_t)GPR_U32(ctx, 8));
    // 0x1832e0: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x1832e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1832e4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x1832e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
    // 0x1832e8: 0x90870038  lbu         $a3, 0x38($a0)
    ctx->pc = 0x1832e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1832ec: 0x250825a9  addiu       $t0, $t0, 0x25A9
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9641));
    // 0x1832f0: 0x386a0001  xori        $t2, $v1, 0x1
    ctx->pc = 0x1832f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1832f4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1832f8: 0xa4a00  sll         $t1, $t2, 8
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1832fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1832fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x183300: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x183304: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x183304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183308: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x18330c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x18330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x183310: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x183314: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x183318: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x18331c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x183320: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183324: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x183324u;
    {
        const bool branch_taken_0x183324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183324u;
        // 0x183328: 0xa0a30236  sb          $v1, 0x236($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183324) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x18332Cu;
label_18332c:
    // 0x18332c: 0xa0a30237  sb          $v1, 0x237($a1)
    ctx->pc = 0x18332cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 567), (uint8_t)GPR_U32(ctx, 3));
    // 0x183330: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x183334: 0xa0a30235  sb          $v1, 0x235($a1)
    ctx->pc = 0x183334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 565), (uint8_t)GPR_U32(ctx, 3));
    // 0x183338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18333c: 0xa0a3023c  sb          $v1, 0x23C($a1)
    ctx->pc = 0x18333cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 572), (uint8_t)GPR_U32(ctx, 3));
    // 0x183340: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
    // 0x183344: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x183344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x183348: 0xaca30260  sw          $v1, 0x260($a1)
    ctx->pc = 0x183348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 3));
    // 0x18334c: 0xaca00264  sw          $zero, 0x264($a1)
    ctx->pc = 0x18334cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 0));
label_183350:
    // 0x183350: 0x90a70237  lbu         $a3, 0x237($a1)
    ctx->pc = 0x183350u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 567)));
    // 0x183354: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x183358: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183358u;
    {
        const bool branch_taken_0x183358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x18335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183358u;
        // 0x18335c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183358) {
            ctx->pc = 0x183370u;
            goto label_183370;
        }
    }
    ctx->pc = 0x183360u;
    // 0x183360: 0xc061108  jal         func_184420
    ctx->pc = 0x183360u;
    SET_GPR_U32(ctx, 31, 0x183368u);
    ctx->pc = 0x184420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184420u, 0x183360u, 0x183368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183368u;
label_183368:
    // 0x183368: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x183368u;
    {
        const bool branch_taken_0x183368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183368u;
        // 0x18336c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183368) {
            ctx->pc = 0x1833B0u;
            return;
        }
    }
    ctx->pc = 0x183370u;
label_183370:
    // 0x183370: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x183370u;
    {
        const bool branch_taken_0x183370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x183370) {
            ctx->pc = 0x18338Cu;
            goto label_18338c;
        }
    }
    ctx->pc = 0x183378u;
    // 0x183378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18337c: 0xc061084  jal         func_184210
    ctx->pc = 0x18337Cu;
    SET_GPR_U32(ctx, 31, 0x183384u);
    ctx->pc = 0x183380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18337Cu;
    // 0x183380: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184210u, 0x18337Cu, 0x183384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183384u;
label_183384:
    // 0x183384: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x183384u;
    {
        const bool branch_taken_0x183384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183384) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x18338Cu;
label_18338c:
    // 0x18338c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183390: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183394: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x183394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x183398: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x183398u;
    {
        const bool branch_taken_0x183398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183398) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x1833A0u;
    // 0x1833a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1833a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833a4: 0xc06133c  jal         func_184CF0
    ctx->pc = 0x1833A4u;
    SET_GPR_U32(ctx, 31, 0x1833ACu);
    ctx->pc = 0x1833A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833A4u;
    // 0x1833a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184CF0u, 0x1833A4u, 0x1833ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833ACu;
label_1833ac:
    // 0x1833ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1833b0u;
}
