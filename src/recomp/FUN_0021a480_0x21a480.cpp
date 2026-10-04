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

// Function: FUN_0021a480
// Address: 0x21a480 - 0x21b454
void FUN_0021a480_0x21a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a480_0x21a480");
#endif

    switch (ctx->pc) {
        case 0x21a4a0u: goto label_21a4a0;
        case 0x21a4a8u: goto label_21a4a8;
        case 0x21a4b0u: goto label_21a4b0;
        case 0x21a5b8u: goto label_21a5b8;
        case 0x21a5c0u: goto label_21a5c0;
        case 0x21a660u: goto label_21a660;
        case 0x21a668u: goto label_21a668;
        case 0x21a708u: goto label_21a708;
        case 0x21a744u: goto label_21a744;
        case 0x21a74cu: goto label_21a74c;
        case 0x21a754u: goto label_21a754;
        case 0x21a75cu: goto label_21a75c;
        case 0x21a764u: goto label_21a764;
        case 0x21a780u: goto label_21a780;
        case 0x21a790u: goto label_21a790;
        case 0x21a798u: goto label_21a798;
        case 0x21a7a8u: goto label_21a7a8;
        case 0x21a8a8u: goto label_21a8a8;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a950u: goto label_21a950;
        case 0x21a958u: goto label_21a958;
        case 0x21a9f8u: goto label_21a9f8;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aa44u: goto label_21aa44;
        case 0x21aa4cu: goto label_21aa4c;
        case 0x21aa54u: goto label_21aa54;
        case 0x21aa84u: goto label_21aa84;
        case 0x21aaacu: goto label_21aaac;
        case 0x21aab4u: goto label_21aab4;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac20u: goto label_21ac20;
        case 0x21acc0u: goto label_21acc0;
        case 0x21acc8u: goto label_21acc8;
        case 0x21ad68u: goto label_21ad68;
        case 0x21ada4u: goto label_21ada4;
        case 0x21adacu: goto label_21adac;
        case 0x21adb4u: goto label_21adb4;
        case 0x21adbcu: goto label_21adbc;
        case 0x21adc4u: goto label_21adc4;
        case 0x21ae0cu: goto label_21ae0c;
        case 0x21ae54u: goto label_21ae54;
        case 0x21af88u: goto label_21af88;
        case 0x21af90u: goto label_21af90;
        case 0x21b030u: goto label_21b030;
        case 0x21b038u: goto label_21b038;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b114u: goto label_21b114;
        case 0x21b11cu: goto label_21b11c;
        case 0x21b124u: goto label_21b124;
        case 0x21b12cu: goto label_21b12c;
        case 0x21b134u: goto label_21b134;
        case 0x21b158u: goto label_21b158;
        case 0x21b168u: goto label_21b168;
        case 0x21b170u: goto label_21b170;
        case 0x21b178u: goto label_21b178;
        case 0x21b280u: goto label_21b280;
        case 0x21b288u: goto label_21b288;
        case 0x21b328u: goto label_21b328;
        case 0x21b330u: goto label_21b330;
        case 0x21b3d0u: goto label_21b3d0;
        case 0x21b40cu: goto label_21b40c;
        case 0x21b414u: goto label_21b414;
        case 0x21b41cu: goto label_21b41c;
        case 0x21b424u: goto label_21b424;
        case 0x21b42cu: goto label_21b42c;
        case 0x21b448u: goto label_21b448;
        default: break;
    }

    ctx->pc = 0x21a480u;

    // 0x21a480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a484: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21a488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a498: 0xc04e188  jal         func_138620
    ctx->pc = 0x21A498u;
    SET_GPR_U32(ctx, 31, 0x21A4A0u);
    ctx->pc = 0x21A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A498u;
    // 0x21a49c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x21A498u, 0x21A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4A0u;
label_21a4a0:
    // 0x21a4a0: 0xc04e198  jal         func_138660
    ctx->pc = 0x21A4A0u;
    SET_GPR_U32(ctx, 31, 0x21A4A8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21A4A0u, 0x21A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4A8u;
label_21a4a8:
    // 0x21a4a8: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x21A4A8u;
    {
        const bool branch_taken_0x21a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a4a8) {
            ctx->pc = 0x21A788u;
            goto label_21a788;
        }
    }
    ctx->pc = 0x21A4B0u;
label_21a4b0:
    // 0x21a4b0: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a4b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a4b8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21A4B8u;
    {
        const bool branch_taken_0x21a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a4b8) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4C0u;
    // 0x21a4c0: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a4c4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a4c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A4C8u;
    {
        const bool branch_taken_0x21a4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4c8) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4D0u;
    // 0x21a4d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a4d4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a4d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A4D8u;
    {
        const bool branch_taken_0x21a4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4d8) {
            ctx->pc = 0x21A4E8u;
            goto label_21a4e8;
        }
    }
    ctx->pc = 0x21A4E0u;
    // 0x21a4e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A4E0u;
    {
        const bool branch_taken_0x21a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E0u;
        // 0x21a4e4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e0) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4E8u;
label_21a4e8:
    // 0x21a4e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21a4ec: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21a4f0:
    // 0x21a4f0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21a4f4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A564u;
            goto label_21a564;
        }
    }
    ctx->pc = 0x21A4FCu;
    // 0x21a4fc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21a500: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a504: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A504u;
    {
        const bool branch_taken_0x21a504 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a504) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A50Cu;
    // 0x21a50c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A50Cu;
    {
        const bool branch_taken_0x21a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a50c) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A514u;
    // 0x21a514: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21a518:
    // 0x21a518: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21a51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a520: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A520u;
    {
        const bool branch_taken_0x21a520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a520) {
            ctx->pc = 0x21A564u;
            goto label_21a564;
        }
    }
    ctx->pc = 0x21A528u;
    // 0x21a528: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21a52c: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21a530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21a534: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21a538: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21a53c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a540: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21a540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21a544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a54c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21a550: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21a550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A554u;
    {
        const bool branch_taken_0x21a554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a554) {
            ctx->pc = 0x21A564u;
            goto label_21a564;
        }
    }
    ctx->pc = 0x21A55Cu;
    // 0x21a55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a560: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21a560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21a564:
    // 0x21a564: 0x0  nop
    ctx->pc = 0x21a564u;
    // NOP
    // 0x21a568: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a570: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A570u;
    {
        const bool branch_taken_0x21a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a570) {
            ctx->pc = 0x21A5B0u;
            goto label_21a5b0;
        }
    }
    ctx->pc = 0x21A578u;
    // 0x21a578: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a57c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a580: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21a580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a584: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A584u;
    {
        const bool branch_taken_0x21a584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a584) {
            ctx->pc = 0x21A594u;
            goto label_21a594;
        }
    }
    ctx->pc = 0x21A58Cu;
    // 0x21a58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A58Cu;
    {
        const bool branch_taken_0x21a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A58Cu;
        // 0x21a590: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a58c) {
            ctx->pc = 0x21A59Cu;
            goto label_21a59c;
        }
    }
    ctx->pc = 0x21A594u;
label_21a594:
    // 0x21a594: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21a598: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21a59c:
    // 0x21a59c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a5a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A5A0u;
    {
        const bool branch_taken_0x21a5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a5a0) {
            ctx->pc = 0x21A5B0u;
            goto label_21a5b0;
        }
    }
    ctx->pc = 0x21A5A8u;
    // 0x21a5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a5ac: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21a5b0:
    // 0x21a5b0: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21A5B0u;
    SET_GPR_U32(ctx, 31, 0x21A5B8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21A5B0u, 0x21A5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5B8u;
label_21a5b8:
    // 0x21a5b8: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21A5B8u;
    SET_GPR_U32(ctx, 31, 0x21A5C0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21A5B8u, 0x21A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A5C0u;
label_21a5c0:
    // 0x21a5c0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21a5c4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a5c8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21a5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21a5cc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a5d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a5d4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21a5d8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21a5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a5dc: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21a5e0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21a5e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a5e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a5f0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A5F0u;
    {
        const bool branch_taken_0x21a5f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A5F0u;
        // 0x21a5f4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a5f0) {
            ctx->pc = 0x21A604u;
            goto label_21a604;
        }
    }
    ctx->pc = 0x21A5F8u;
    // 0x21a5f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a5fc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A5FCu;
    {
        const bool branch_taken_0x21a5fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a5fc) {
            ctx->pc = 0x21A610u;
            goto label_21a610;
        }
    }
    ctx->pc = 0x21A604u;
label_21a604:
    // 0x21a604: 0x0  nop
    ctx->pc = 0x21a604u;
    // NOP
    // 0x21a608: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21A608u;
    {
        const bool branch_taken_0x21a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A608u;
        // 0x21a60c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a608) {
            ctx->pc = 0x21A644u;
            goto label_21a644;
        }
    }
    ctx->pc = 0x21A610u;
label_21a610:
    // 0x21a610: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a614: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A614u;
    {
        const bool branch_taken_0x21a614 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A614u;
        // 0x21a618: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a614) {
            ctx->pc = 0x21A644u;
            goto label_21a644;
        }
    }
    ctx->pc = 0x21A61Cu;
    // 0x21a61c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A61Cu;
    {
        const bool branch_taken_0x21a61c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a61c) {
            ctx->pc = 0x21A634u;
            goto label_21a634;
        }
    }
    ctx->pc = 0x21A624u;
    // 0x21a624: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21a628: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21a628u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21a62c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A62Cu;
    {
        const bool branch_taken_0x21a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A62Cu;
        // 0x21a630: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a62c) {
            ctx->pc = 0x21A644u;
            goto label_21a644;
        }
    }
    ctx->pc = 0x21A634u;
label_21a634:
    // 0x21a634: 0x0  nop
    ctx->pc = 0x21a634u;
    // NOP
    // 0x21a638: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21a63c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21a63cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21a640: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21a640u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21a644:
    // 0x21a644: 0x0  nop
    ctx->pc = 0x21a644u;
    // NOP
    // 0x21a648: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21a648u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a64c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21a64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21a650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a658: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A658u;
    SET_GPR_U32(ctx, 31, 0x21A660u);
    ctx->pc = 0x21A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A658u;
    // 0x21a65c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A658u, 0x21A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A660u;
label_21a660:
    // 0x21a660: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21A660u;
    SET_GPR_U32(ctx, 31, 0x21A668u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21A660u, 0x21A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A668u;
label_21a668:
    // 0x21a668: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a66c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21A66Cu;
    {
        const bool branch_taken_0x21a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a66c) {
            ctx->pc = 0x21A708u;
            goto label_21a708;
        }
    }
    ctx->pc = 0x21A674u;
    // 0x21a674: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a678: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21a67c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21a67cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a684: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21a688: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a68c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21a690: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21a690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21a698: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a69c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21a69cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21a6a0: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21a6a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a6a4: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21a6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21a6a8: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21a6a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21a6ac: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21a6b0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21a6b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21a6b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a6b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6bc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21a6c0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21a6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21a6c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a6c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6c8: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21a6cc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21a6d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a6d4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a6d8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21a6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a6dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a6e0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21a6e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a6e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a6e8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a6ec: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21a6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a6f0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21a6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a6f4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21a6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a6f8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21a6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21a6fc: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21a6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21a700: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A700u;
    SET_GPR_U32(ctx, 31, 0x21A708u);
    ctx->pc = 0x21A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A700u;
    // 0x21a704: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A700u, 0x21A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A708u;
label_21a708:
    // 0x21a708: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a70c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a710: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a714: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a718: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21a718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21a71c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21a720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a728: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a728u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21a72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a738: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21a738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21a73c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A73Cu;
    SET_GPR_U32(ctx, 31, 0x21A744u);
    ctx->pc = 0x21A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A73Cu;
    // 0x21a740: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A73Cu, 0x21A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A744u;
label_21a744:
    // 0x21a744: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21A744u;
    SET_GPR_U32(ctx, 31, 0x21A74Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21A744u, 0x21A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A74Cu;
label_21a74c:
    // 0x21a74c: 0xc04e120  jal         func_138480
    ctx->pc = 0x21A74Cu;
    SET_GPR_U32(ctx, 31, 0x21A754u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21A74Cu, 0x21A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A754u;
label_21a754:
    // 0x21a754: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21A754u;
    SET_GPR_U32(ctx, 31, 0x21A75Cu);
    ctx->pc = 0x21A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A754u;
    // 0x21a758: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21A754u, 0x21A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A75Cu;
label_21a75c:
    // 0x21a75c: 0xc060258  jal         func_180960
    ctx->pc = 0x21A75Cu;
    SET_GPR_U32(ctx, 31, 0x21A764u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21A75Cu, 0x21A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A764u;
label_21a764:
    // 0x21a764: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21a764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21a768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A768u;
    {
        const bool branch_taken_0x21a768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a768) {
            ctx->pc = 0x21A778u;
            goto label_21a778;
        }
    }
    ctx->pc = 0x21A770u;
    // 0x21a770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a774: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21a774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21a778:
    // 0x21a778: 0xc04e198  jal         func_138660
    ctx->pc = 0x21A778u;
    SET_GPR_U32(ctx, 31, 0x21A780u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21A778u, 0x21A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A780u;
label_21a780:
    // 0x21a780: 0x1040ff4b  beqz        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x21A780u;
    {
        const bool branch_taken_0x21a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a780) {
            ctx->pc = 0x21A4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a4b0;
        }
    }
    ctx->pc = 0x21A788u;
label_21a788:
    // 0x21a788: 0xc078050  jal         func_1E0140
    ctx->pc = 0x21A788u;
    SET_GPR_U32(ctx, 31, 0x21A790u);
    ctx->pc = 0x21A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A788u;
    // 0x21a78c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x21A788u, 0x21A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A790u;
label_21a790:
    // 0x21a790: 0xc078070  jal         func_1E01C0
    ctx->pc = 0x21A790u;
    SET_GPR_U32(ctx, 31, 0x21A798u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x21A790u, 0x21A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A798u;
label_21a798:
    // 0x21a798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a79c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    // 0x21a7a0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x21A7A0u;
    {
        const bool branch_taken_0x21a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7A0u;
        // 0x21a7a4: 0xaf829288  sw          $v0, -0x6D78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7a0) {
            ctx->pc = 0x21AA68u;
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21A7A8u;
label_21a7a8:
    // 0x21a7a8: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a7ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a7b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21A7B0u;
    {
        const bool branch_taken_0x21a7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a7b0) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7B8u;
    // 0x21a7b8: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21a7bc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a7c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A7C0u;
    {
        const bool branch_taken_0x21a7c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7c0) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7C8u;
    // 0x21a7c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a7cc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21a7d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A7D0u;
    {
        const bool branch_taken_0x21a7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7d0) {
            ctx->pc = 0x21A7E0u;
            goto label_21a7e0;
        }
    }
    ctx->pc = 0x21A7D8u;
    // 0x21a7d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A7D8u;
    {
        const bool branch_taken_0x21a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D8u;
        // 0x21a7dc: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7d8) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7E0u;
label_21a7e0:
    // 0x21a7e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21a7e4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21a7e8:
    // 0x21a7e8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21A7E8u;
    {
        const bool branch_taken_0x21a7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7e8) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A7F0u;
    // 0x21a7f0: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21a7f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a7f8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A7F8u;
    {
        const bool branch_taken_0x21a7f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7F8u;
        // 0x21a7fc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7f8) {
            ctx->pc = 0x21A80Cu;
            goto label_21a80c;
        }
    }
    ctx->pc = 0x21A800u;
    // 0x21a800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A800u;
    {
        const bool branch_taken_0x21a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a800) {
            ctx->pc = 0x21A80Cu;
            goto label_21a80c;
        }
    }
    ctx->pc = 0x21A808u;
    // 0x21a808: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21a80c:
    // 0x21a80c: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21a810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a814: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21A814u;
    {
        const bool branch_taken_0x21a814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a814) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A81Cu;
    // 0x21a81c: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21a820: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21a824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21a828: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21a82c: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21a830: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21a834: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21a838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a83c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21a840: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21a844: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21a844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21a848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A848u;
    {
        const bool branch_taken_0x21a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a848) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A850u;
    // 0x21a850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a854: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21a854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21a858:
    // 0x21a858: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a860: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A860u;
    {
        const bool branch_taken_0x21a860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a860) {
            ctx->pc = 0x21A8A0u;
            goto label_21a8a0;
        }
    }
    ctx->pc = 0x21A868u;
    // 0x21a868: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a86c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21a870: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21a870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a874: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A874u;
    {
        const bool branch_taken_0x21a874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a874) {
            ctx->pc = 0x21A884u;
            goto label_21a884;
        }
    }
    ctx->pc = 0x21A87Cu;
    // 0x21a87c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21A87Cu;
    {
        const bool branch_taken_0x21a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A87Cu;
        // 0x21a880: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a87c) {
            ctx->pc = 0x21A88Cu;
            goto label_21a88c;
        }
    }
    ctx->pc = 0x21A884u;
label_21a884:
    // 0x21a884: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21a888: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21a88c:
    // 0x21a88c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21a890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A890u;
    {
        const bool branch_taken_0x21a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a890) {
            ctx->pc = 0x21A8A0u;
            goto label_21a8a0;
        }
    }
    ctx->pc = 0x21A898u;
    // 0x21a898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a89c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21a8a0:
    // 0x21a8a0: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21A8A0u;
    SET_GPR_U32(ctx, 31, 0x21A8A8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21A8A0u, 0x21A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8A8u;
label_21a8a8:
    // 0x21a8a8: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21A8A8u, 0x21A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8B0u;
label_21a8b0:
    // 0x21a8b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21a8b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a8b8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21a8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21a8bc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a8c4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21a8c8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21a8cc: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21a8d0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21a8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a8d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21a8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a8e0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8E0u;
    {
        const bool branch_taken_0x21a8e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E0u;
        // 0x21a8e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8e0) {
            ctx->pc = 0x21A8F4u;
            goto label_21a8f4;
        }
    }
    ctx->pc = 0x21A8E8u;
    // 0x21a8e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a8ec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A8ECu;
    {
        const bool branch_taken_0x21a8ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a8ec) {
            ctx->pc = 0x21A900u;
            goto label_21a900;
        }
    }
    ctx->pc = 0x21A8F4u;
label_21a8f4:
    // 0x21a8f4: 0x0  nop
    ctx->pc = 0x21a8f4u;
    // NOP
    // 0x21a8f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21A8F8u;
    {
        const bool branch_taken_0x21a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F8u;
        // 0x21a8fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f8) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A900u;
label_21a900:
    // 0x21a900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a904: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21A904u;
    {
        const bool branch_taken_0x21a904 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A904u;
        // 0x21a908: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a904) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A90Cu;
    // 0x21a90c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A90Cu;
    {
        const bool branch_taken_0x21a90c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a90c) {
            ctx->pc = 0x21A924u;
            goto label_21a924;
        }
    }
    ctx->pc = 0x21A914u;
    // 0x21a914: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21a918: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21a918u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21a91c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A91Cu;
    {
        const bool branch_taken_0x21a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A91Cu;
        // 0x21a920: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a91c) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A924u;
label_21a924:
    // 0x21a924: 0x0  nop
    ctx->pc = 0x21a924u;
    // NOP
    // 0x21a928: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21a92c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21a92cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21a930: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21a930u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21a934:
    // 0x21a934: 0x0  nop
    ctx->pc = 0x21a934u;
    // NOP
    // 0x21a938: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21a938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a93c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21a940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a948: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A948u;
    SET_GPR_U32(ctx, 31, 0x21A950u);
    ctx->pc = 0x21A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A948u;
    // 0x21a94c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A948u, 0x21A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A950u;
label_21a950:
    // 0x21a950: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21A950u;
    SET_GPR_U32(ctx, 31, 0x21A958u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21A950u, 0x21A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A958u;
label_21a958:
    // 0x21a958: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21a95c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21A95Cu;
    {
        const bool branch_taken_0x21a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a95c) {
            ctx->pc = 0x21A9F8u;
            goto label_21a9f8;
        }
    }
    ctx->pc = 0x21A964u;
    // 0x21a964: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a968: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21a96c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21a970: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a974: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21a978: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21a97c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21a97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21a980: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21a980u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a984: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21a988: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21a98c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21a98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21a990: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21a994: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21a994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21a998: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21a998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21a99c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21a9a0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21a9a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21a9a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9ac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21a9b0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21a9b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a9b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9b8: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21a9bc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21a9c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a9c4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a9c8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21a9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a9d0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21a9d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21a9d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21a9d8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21a9dc: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21a9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21a9e0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21a9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a9e4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21a9e8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21a9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21a9ec: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21a9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21a9f0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21A9F0u;
    SET_GPR_U32(ctx, 31, 0x21A9F8u);
    ctx->pc = 0x21A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9F0u;
    // 0x21a9f4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21A9F0u, 0x21A9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A9F8u;
label_21a9f8:
    // 0x21a9f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21a9fc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21aa00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21aa04: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21aa08: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21aa0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21aa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21aa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21aa14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa18: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21aa1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21aa20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21aa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aa28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21aa2c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21AA2Cu;
    SET_GPR_U32(ctx, 31, 0x21AA34u);
    ctx->pc = 0x21AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA2Cu;
    // 0x21aa30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21AA2Cu, 0x21AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA34u;
label_21aa34:
    // 0x21aa34: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21AA34u;
    SET_GPR_U32(ctx, 31, 0x21AA3Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21AA34u, 0x21AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA3Cu;
label_21aa3c:
    // 0x21aa3c: 0xc04e120  jal         func_138480
    ctx->pc = 0x21AA3Cu;
    SET_GPR_U32(ctx, 31, 0x21AA44u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21AA3Cu, 0x21AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA44u;
label_21aa44:
    // 0x21aa44: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21AA44u;
    SET_GPR_U32(ctx, 31, 0x21AA4Cu);
    ctx->pc = 0x21AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA44u;
    // 0x21aa48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21AA44u, 0x21AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA4Cu;
label_21aa4c:
    // 0x21aa4c: 0xc060258  jal         func_180960
    ctx->pc = 0x21AA4Cu;
    SET_GPR_U32(ctx, 31, 0x21AA54u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21AA4Cu, 0x21AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA54u;
label_21aa54:
    // 0x21aa54: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21aa58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AA58u;
    {
        const bool branch_taken_0x21aa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa58) {
            ctx->pc = 0x21AA68u;
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21AA60u;
    // 0x21aa60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa64: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21aa68:
    // 0x21aa68: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21aa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa70: 0x1082ff4d  beq         $a0, $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x21AA70u;
    {
        const bool branch_taken_0x21aa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21aa70) {
            ctx->pc = 0x21A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a7a8;
        }
    }
    ctx->pc = 0x21AA78u;
    // 0x21aa78: 0xaf80927c  sw          $zero, -0x6D84($gp)
    ctx->pc = 0x21aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 0));
    // 0x21aa7c: 0xaf8092ac  sw          $zero, -0x6D54($gp)
    ctx->pc = 0x21aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 0));
    // 0x21aa80: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
label_21aa84:
    // 0x21aa84: 0x8f8292c0  lw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
    // 0x21aa88: 0x144001b0  bnez        $v0, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x21AA88u;
    {
        const bool branch_taken_0x21aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa88) {
            ctx->pc = 0x21B14Cu;
            goto label_21b14c;
        }
    }
    ctx->pc = 0x21AA90u;
    // 0x21aa90: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x21aa90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x21aa94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x21aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x21aa98: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x21AA98u;
    {
        const bool branch_taken_0x21aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa98) {
            ctx->pc = 0x21ADF0u;
            goto label_21adf0;
        }
    }
    ctx->pc = 0x21AAA0u;
    // 0x21aaa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21aaa4: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AAA4u;
    SET_GPR_U32(ctx, 31, 0x21AAACu);
    ctx->pc = 0x21AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAA4u;
    // 0x21aaa8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AAA4u, 0x21AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAACu;
label_21aaac:
    // 0x21aaac: 0xaf9092bc  sw          $s0, -0x6D44($gp)
    ctx->pc = 0x21aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 16));
    // 0x21aab0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aab4:
    // 0x21aab4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AAB4u;
    {
        const bool branch_taken_0x21aab4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAB4u;
        // 0x21aab8: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aab4) {
            ctx->pc = 0x21AAC8u;
            goto label_21aac8;
        }
    }
    ctx->pc = 0x21AABCu;
    // 0x21aabc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AABCu;
    {
        const bool branch_taken_0x21aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AABCu;
        // 0x21aac0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aabc) {
            ctx->pc = 0x21AACCu;
            goto label_21aacc;
        }
    }
    ctx->pc = 0x21AAC4u;
    // 0x21aac4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_21aac8:
    // 0x21aac8: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_21aacc:
    // 0x21aacc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AACCu;
    {
        const bool branch_taken_0x21aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AACCu;
        // 0x21aad0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aacc) {
            ctx->pc = 0x21AAF4u;
            goto label_21aaf4;
        }
    }
    ctx->pc = 0x21AAD4u;
    // 0x21aad4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21aad8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21AAD8u;
    {
        const bool branch_taken_0x21aad8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAD8u;
        // 0x21aadc: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aad8) {
            ctx->pc = 0x21AB0Cu;
            goto label_21ab0c;
        }
    }
    ctx->pc = 0x21AAE0u;
    // 0x21aae0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x21aae4: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21aae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    // 0x21aae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21AAE8u;
    {
        const bool branch_taken_0x21aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0xaf839278  sw          $v1, -0x6D88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aae8) {
            ctx->pc = 0x21AB10u;
            goto label_21ab10;
        }
    }
    ctx->pc = 0x21AAF0u;
    // 0x21aaf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21aaf4:
    // 0x21aaf4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aaf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21aafc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AAFCu;
    {
        const bool branch_taken_0x21aafc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAFCu;
        // 0x21ab00: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aafc) {
            ctx->pc = 0x21AB0Cu;
            goto label_21ab0c;
        }
    }
    ctx->pc = 0x21AB04u;
    // 0x21ab04: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x21ab08: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21ab08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_21ab0c:
    // 0x21ab0c: 0xaf839278  sw          $v1, -0x6D88($gp)
    ctx->pc = 0x21ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
label_21ab10:
    // 0x21ab10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ab14: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ab18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21AB18u;
    {
        const bool branch_taken_0x21ab18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ab18) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB20u;
    // 0x21ab20: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21ab24: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ab28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AB28u;
    {
        const bool branch_taken_0x21ab28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab28) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB30u;
    // 0x21ab30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21ab34: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ab38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AB38u;
    {
        const bool branch_taken_0x21ab38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab38) {
            ctx->pc = 0x21AB48u;
            goto label_21ab48;
        }
    }
    ctx->pc = 0x21AB40u;
    // 0x21ab40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AB40u;
    {
        const bool branch_taken_0x21ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB40u;
        // 0x21ab44: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab40) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB48u;
label_21ab48:
    // 0x21ab48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21ab4c: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21ab50:
    // 0x21ab50: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21ab54: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21AB54u;
    {
        const bool branch_taken_0x21ab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab54) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21AB5Cu;
    // 0x21ab5c: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21ab60: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ab64: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AB64u;
    {
        const bool branch_taken_0x21ab64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB64u;
        // 0x21ab68: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab64) {
            ctx->pc = 0x21AB78u;
            goto label_21ab78;
        }
    }
    ctx->pc = 0x21AB6Cu;
    // 0x21ab6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AB6Cu;
    {
        const bool branch_taken_0x21ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab6c) {
            ctx->pc = 0x21AB78u;
            goto label_21ab78;
        }
    }
    ctx->pc = 0x21AB74u;
    // 0x21ab74: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21ab78:
    // 0x21ab78: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21ab7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ab80: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AB80u;
    {
        const bool branch_taken_0x21ab80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ab80) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21AB88u;
    // 0x21ab88: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21ab8c: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ab90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ab94: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21ab98: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21ab9c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21aba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21aba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21abac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21abb0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21abb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ABB4u;
    {
        const bool branch_taken_0x21abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abb4) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21ABBCu;
    // 0x21abbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21abc0: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21abc4:
    // 0x21abc4: 0x0  nop
    ctx->pc = 0x21abc4u;
    // NOP
    // 0x21abc8: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21abcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21abd0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21ABD0u;
    {
        const bool branch_taken_0x21abd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21abd0) {
            ctx->pc = 0x21AC10u;
            goto label_21ac10;
        }
    }
    ctx->pc = 0x21ABD8u;
    // 0x21abd8: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21abdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21abe0: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21abe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21abe4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ABE4u;
    {
        const bool branch_taken_0x21abe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21abe4) {
            ctx->pc = 0x21ABF4u;
            goto label_21abf4;
        }
    }
    ctx->pc = 0x21ABECu;
    // 0x21abec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21ABECu;
    {
        const bool branch_taken_0x21abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABECu;
        // 0x21abf0: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abec) {
            ctx->pc = 0x21ABFCu;
            goto label_21abfc;
        }
    }
    ctx->pc = 0x21ABF4u;
label_21abf4:
    // 0x21abf4: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21abf8: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21abfc:
    // 0x21abfc: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21abfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21ac00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AC00u;
    {
        const bool branch_taken_0x21ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac00) {
            ctx->pc = 0x21AC10u;
            goto label_21ac10;
        }
    }
    ctx->pc = 0x21AC08u;
    // 0x21ac08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ac0c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21ac10:
    // 0x21ac10: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21AC10u;
    SET_GPR_U32(ctx, 31, 0x21AC18u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21AC10u, 0x21AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC18u;
label_21ac18:
    // 0x21ac18: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21AC18u;
    SET_GPR_U32(ctx, 31, 0x21AC20u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21AC18u, 0x21AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC20u;
label_21ac20:
    // 0x21ac20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21ac24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ac28: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21ac2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21ac30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ac34: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21ac38: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ac3c: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ac40: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ac48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21ac4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ac50: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC50u;
    {
        const bool branch_taken_0x21ac50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC50u;
        // 0x21ac54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac50) {
            ctx->pc = 0x21AC64u;
            goto label_21ac64;
        }
    }
    ctx->pc = 0x21AC58u;
    // 0x21ac58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ac5c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC5Cu;
    {
        const bool branch_taken_0x21ac5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ac5c) {
            ctx->pc = 0x21AC70u;
            goto label_21ac70;
        }
    }
    ctx->pc = 0x21AC64u;
label_21ac64:
    // 0x21ac64: 0x0  nop
    ctx->pc = 0x21ac64u;
    // NOP
    // 0x21ac68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21AC68u;
    {
        const bool branch_taken_0x21ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC68u;
        // 0x21ac6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac68) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC70u;
label_21ac70:
    // 0x21ac70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ac74: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AC74u;
    {
        const bool branch_taken_0x21ac74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC74u;
        // 0x21ac78: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac74) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC7Cu;
    // 0x21ac7c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC7Cu;
    {
        const bool branch_taken_0x21ac7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac7c) {
            ctx->pc = 0x21AC94u;
            goto label_21ac94;
        }
    }
    ctx->pc = 0x21AC84u;
    // 0x21ac84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21ac88: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21ac88u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21ac8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AC8Cu;
    {
        const bool branch_taken_0x21ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC8Cu;
        // 0x21ac90: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac8c) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC94u;
label_21ac94:
    // 0x21ac94: 0x0  nop
    ctx->pc = 0x21ac94u;
    // NOP
    // 0x21ac98: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21ac98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21ac9c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21ac9cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21aca0: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21aca4:
    // 0x21aca4: 0x0  nop
    ctx->pc = 0x21aca4u;
    // NOP
    // 0x21aca8: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21aca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21acac: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21acb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21acb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21acb8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21ACB8u;
    SET_GPR_U32(ctx, 31, 0x21ACC0u);
    ctx->pc = 0x21ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACB8u;
    // 0x21acbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21ACB8u, 0x21ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACC0u;
label_21acc0:
    // 0x21acc0: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21ACC0u, 0x21ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21accc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21ACCCu;
    {
        const bool branch_taken_0x21accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21accc) {
            ctx->pc = 0x21AD68u;
            goto label_21ad68;
        }
    }
    ctx->pc = 0x21ACD4u;
    // 0x21acd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21acd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21acd8: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21acdc: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ace0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21ace4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21ace8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21acec: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21acf0: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21acf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21acf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21acf8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21acfc: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21ad00: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21ad00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21ad04: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21ad08: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21ad0c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21ad10: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ad14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ad18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ad18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad1c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21ad20: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21ad24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad28: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21ad2c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21ad30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21ad34: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21ad38: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21ad38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ad3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad40: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21ad44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21ad48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21ad4c: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21ad50: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21ad50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21ad54: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21ad54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21ad58: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21ad58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21ad5c: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21ad5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21ad60: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21AD60u;
    SET_GPR_U32(ctx, 31, 0x21AD68u);
    ctx->pc = 0x21AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD60u;
    // 0x21ad64: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21AD60u, 0x21AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AD68u;
label_21ad68:
    // 0x21ad68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21ad6c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21ad70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21ad74: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21ad78: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21ad7c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21ad80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ad88: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21ad8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21ad90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21ad94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21ad98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ad9c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21AD9Cu;
    SET_GPR_U32(ctx, 31, 0x21ADA4u);
    ctx->pc = 0x21ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD9Cu;
    // 0x21ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21AD9Cu, 0x21ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADA4u;
label_21ada4:
    // 0x21ada4: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21ADA4u;
    SET_GPR_U32(ctx, 31, 0x21ADACu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21ADA4u, 0x21ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADACu;
label_21adac:
    // 0x21adac: 0xc04e120  jal         func_138480
    ctx->pc = 0x21ADACu;
    SET_GPR_U32(ctx, 31, 0x21ADB4u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21ADACu, 0x21ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADB4u;
label_21adb4:
    // 0x21adb4: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21ADB4u;
    SET_GPR_U32(ctx, 31, 0x21ADBCu);
    ctx->pc = 0x21ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADB4u;
    // 0x21adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21ADB4u, 0x21ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADBCu;
label_21adbc:
    // 0x21adbc: 0xc060258  jal         func_180960
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21ADBCu, 0x21ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21adc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ADC8u;
    {
        const bool branch_taken_0x21adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adc8) {
            ctx->pc = 0x21ADD8u;
            goto label_21add8;
        }
    }
    ctx->pc = 0x21ADD0u;
    // 0x21add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21add4: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21add4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21add8:
    // 0x21add8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21addc: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x21addcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
    // 0x21ade0: 0x1420ff34  bnez        $at, . + 4 + (-0xCC << 2)
    ctx->pc = 0x21ADE0u;
    {
        const bool branch_taken_0x21ade0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ade0) {
            ctx->pc = 0x21AAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21ADE8u;
    // 0x21ade8: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x21ADE8u;
    {
        const bool branch_taken_0x21ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ade8) {
            ctx->pc = 0x21B14Cu;
            goto label_21b14c;
        }
    }
    ctx->pc = 0x21ADF0u;
label_21adf0:
    // 0x21adf0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21adf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
    // 0x21adf4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21adf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21ADF8u;
    {
        const bool branch_taken_0x21adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adf8) {
            ctx->pc = 0x21AE34u;
            goto label_21ae34;
        }
    }
    ctx->pc = 0x21AE00u;
    // 0x21ae00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae04: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AE04u;
    SET_GPR_U32(ctx, 31, 0x21AE0Cu);
    ctx->pc = 0x21AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE04u;
    // 0x21ae08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE04u, 0x21AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE0Cu;
label_21ae0c:
    // 0x21ae0c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AE0Cu;
    {
        const bool branch_taken_0x21ae0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae0c) {
            ctx->pc = 0x21AE20u;
            goto label_21ae20;
        }
    }
    ctx->pc = 0x21AE14u;
    // 0x21ae14: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ae18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE18u;
    {
        const bool branch_taken_0x21ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE18u;
        // 0x21ae1c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae18) {
            ctx->pc = 0x21AE24u;
            goto label_21ae24;
        }
    }
    ctx->pc = 0x21AE20u;
label_21ae20:
    // 0x21ae20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21ae24:
    // 0x21ae24: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
    // 0x21ae28: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
    // 0x21ae2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21AE2Cu;
    {
        const bool branch_taken_0x21ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE2Cu;
        // 0x21ae30: 0xaf8092a8  sw          $zero, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae2c) {
            ctx->pc = 0x21AE7Cu;
            goto label_21ae7c;
        }
    }
    ctx->pc = 0x21AE34u;
label_21ae34:
    // 0x21ae34: 0x0  nop
    ctx->pc = 0x21ae34u;
    // NOP
    // 0x21ae38: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21ae38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
    // 0x21ae3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x21ae40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21AE40u;
    {
        const bool branch_taken_0x21ae40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae40) {
            ctx->pc = 0x21AE7Cu;
            goto label_21ae7c;
        }
    }
    ctx->pc = 0x21AE48u;
    // 0x21ae48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ae4c: 0xc05b420  jal         func_16D080
    ctx->pc = 0x21AE4Cu;
    SET_GPR_U32(ctx, 31, 0x21AE54u);
    ctx->pc = 0x21AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE4Cu;
    // 0x21ae50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE4Cu, 0x21AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE54u;
label_21ae54:
    // 0x21ae54: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ae58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21ae5c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AE5Cu;
    {
        const bool branch_taken_0x21ae5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ae5c) {
            ctx->pc = 0x21AE6Cu;
            goto label_21ae6c;
        }
    }
    ctx->pc = 0x21AE64u;
    // 0x21ae64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21AE64u;
    {
        const bool branch_taken_0x21ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE64u;
        // 0x21ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae64) {
            ctx->pc = 0x21AE70u;
            goto label_21ae70;
        }
    }
    ctx->pc = 0x21AE6Cu;
label_21ae6c:
    // 0x21ae6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ae6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ae70:
    // 0x21ae70: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
    // 0x21ae74: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
    // 0x21ae78: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
label_21ae7c:
    // 0x21ae7c: 0x0  nop
    ctx->pc = 0x21ae7cu;
    // NOP
    // 0x21ae80: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21ae84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21ae88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21AE88u;
    {
        const bool branch_taken_0x21ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ae88) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AE90u;
    // 0x21ae90: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21ae94: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ae94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ae98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21AE98u;
    {
        const bool branch_taken_0x21ae98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae98) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AEA0u;
    // 0x21aea0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21aea4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21aea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21aea8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AEA8u;
    {
        const bool branch_taken_0x21aea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aea8) {
            ctx->pc = 0x21AEB8u;
            goto label_21aeb8;
        }
    }
    ctx->pc = 0x21AEB0u;
    // 0x21aeb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AEB0u;
    {
        const bool branch_taken_0x21aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB0u;
        // 0x21aeb4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeb0) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AEB8u;
label_21aeb8:
    // 0x21aeb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21aebc: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21aec0:
    // 0x21aec0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21aec4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21AEC4u;
    {
        const bool branch_taken_0x21aec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aec4) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AECCu;
    // 0x21aecc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21aed0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21aed4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AED4u;
    {
        const bool branch_taken_0x21aed4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed4) {
            ctx->pc = 0x21AEE8u;
            goto label_21aee8;
        }
    }
    ctx->pc = 0x21AEDCu;
    // 0x21aedc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21AEDCu;
    {
        const bool branch_taken_0x21aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aedc) {
            ctx->pc = 0x21AEE8u;
            goto label_21aee8;
        }
    }
    ctx->pc = 0x21AEE4u;
    // 0x21aee4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21aee8:
    // 0x21aee8: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21aeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aef0: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AEF0u;
    {
        const bool branch_taken_0x21aef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21aef0) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AEF8u;
    // 0x21aef8: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21aefc: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21af00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21af04: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21af04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21af08: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21af0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21af10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21af14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21af18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21af18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21af1c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21af20: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21af20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21af24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF24u;
    {
        const bool branch_taken_0x21af24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af24) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AF2Cu;
    // 0x21af2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21af30: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21af30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21af34:
    // 0x21af34: 0x0  nop
    ctx->pc = 0x21af34u;
    // NOP
    // 0x21af38: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21af3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21af40: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21AF40u;
    {
        const bool branch_taken_0x21af40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21af40) {
            ctx->pc = 0x21AF80u;
            goto label_21af80;
        }
    }
    ctx->pc = 0x21AF48u;
    // 0x21af48: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21af4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21af50: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21af50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21af54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF54u;
    {
        const bool branch_taken_0x21af54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af54) {
            ctx->pc = 0x21AF64u;
            goto label_21af64;
        }
    }
    ctx->pc = 0x21AF5Cu;
    // 0x21af5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF5Cu;
    {
        const bool branch_taken_0x21af5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af5c) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AF64u;
label_21af64:
    // 0x21af64: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21af68: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21af68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21af6c:
    // 0x21af6c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21af70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21AF70u;
    {
        const bool branch_taken_0x21af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af70) {
            ctx->pc = 0x21AF80u;
            goto label_21af80;
        }
    }
    ctx->pc = 0x21AF78u;
    // 0x21af78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21af7c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21af80:
    // 0x21af80: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21AF80u;
    SET_GPR_U32(ctx, 31, 0x21AF88u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21AF80u, 0x21AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF88u;
label_21af88:
    // 0x21af88: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21AF88u;
    SET_GPR_U32(ctx, 31, 0x21AF90u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21AF88u, 0x21AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AF90u;
label_21af90:
    // 0x21af90: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21af90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21af94: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21af94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21af98: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21af98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21af9c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21afa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21afa4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21afa8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21afa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21afac: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21afacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21afb0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21afb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21afb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21afbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21afc0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AFC0u;
    {
        const bool branch_taken_0x21afc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFC0u;
        // 0x21afc4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afc0) {
            ctx->pc = 0x21AFD4u;
            goto label_21afd4;
        }
    }
    ctx->pc = 0x21AFC8u;
    // 0x21afc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21afcc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21AFCCu;
    {
        const bool branch_taken_0x21afcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21afcc) {
            ctx->pc = 0x21AFE0u;
            goto label_21afe0;
        }
    }
    ctx->pc = 0x21AFD4u;
label_21afd4:
    // 0x21afd4: 0x0  nop
    ctx->pc = 0x21afd4u;
    // NOP
    // 0x21afd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21AFD8u;
    {
        const bool branch_taken_0x21afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFD8u;
        // 0x21afdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afd8) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21AFE0u;
label_21afe0:
    // 0x21afe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21afe4: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21AFE4u;
    {
        const bool branch_taken_0x21afe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFE4u;
        // 0x21afe8: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21afe4) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21AFECu;
    // 0x21afec: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21AFECu;
    {
        const bool branch_taken_0x21afec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21afec) {
            ctx->pc = 0x21B004u;
            goto label_21b004;
        }
    }
    ctx->pc = 0x21AFF4u;
    // 0x21aff4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21aff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21aff8: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21aff8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21affc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21AFFCu;
    {
        const bool branch_taken_0x21affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AFFCu;
        // 0x21b000: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21affc) {
            ctx->pc = 0x21B014u;
            goto label_21b014;
        }
    }
    ctx->pc = 0x21B004u;
label_21b004:
    // 0x21b004: 0x0  nop
    ctx->pc = 0x21b004u;
    // NOP
    // 0x21b008: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21b00c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21b00cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21b010: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21b010u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21b014:
    // 0x21b014: 0x0  nop
    ctx->pc = 0x21b014u;
    // NOP
    // 0x21b018: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b018u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b01c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21b020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b028: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B028u;
    SET_GPR_U32(ctx, 31, 0x21B030u);
    ctx->pc = 0x21B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B028u;
    // 0x21b02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B028u, 0x21B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B030u;
label_21b030:
    // 0x21b030: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21B030u;
    SET_GPR_U32(ctx, 31, 0x21B038u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21B030u, 0x21B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B038u;
label_21b038:
    // 0x21b038: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b03c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21B03Cu;
    {
        const bool branch_taken_0x21b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b03c) {
            ctx->pc = 0x21B0D8u;
            goto label_21b0d8;
        }
    }
    ctx->pc = 0x21B044u;
    // 0x21b044: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b048: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21b04c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b04cu;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b050: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b054: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21b058: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b05c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21b060: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b064: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21b068: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b06c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21b070: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b074: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b074u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21b078: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21b07c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21b080: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b084: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b08c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21b090: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21b094: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b098: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21b09c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b0a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b0a4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b0a8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0b0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b0b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b0b8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b0bc: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b0c0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b0c4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b0c8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21b0cc: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21b0d0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B0D0u;
    SET_GPR_U32(ctx, 31, 0x21B0D8u);
    ctx->pc = 0x21B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0D0u;
    // 0x21b0d4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B0D0u, 0x21B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0D8u;
label_21b0d8:
    // 0x21b0d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b0dc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b0e4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b0e8: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21b0ec: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b0f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b0fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b100: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b108: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b10c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B10Cu;
    SET_GPR_U32(ctx, 31, 0x21B114u);
    ctx->pc = 0x21B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B10Cu;
    // 0x21b110: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B10Cu, 0x21B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B114u;
label_21b114:
    // 0x21b114: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21B114u;
    SET_GPR_U32(ctx, 31, 0x21B11Cu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21B114u, 0x21B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B11Cu;
label_21b11c:
    // 0x21b11c: 0xc04e120  jal         func_138480
    ctx->pc = 0x21B11Cu;
    SET_GPR_U32(ctx, 31, 0x21B124u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B11Cu, 0x21B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B124u;
label_21b124:
    // 0x21b124: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21B124u;
    SET_GPR_U32(ctx, 31, 0x21B12Cu);
    ctx->pc = 0x21B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B124u;
    // 0x21b128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B124u, 0x21B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B12Cu;
label_21b12c:
    // 0x21b12c: 0xc060258  jal         func_180960
    ctx->pc = 0x21B12Cu;
    SET_GPR_U32(ctx, 31, 0x21B134u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21B12Cu, 0x21B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B134u;
label_21b134:
    // 0x21b134: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21b138: 0x1040fe52  beqz        $v0, . + 4 + (-0x1AE << 2)
    ctx->pc = 0x21B138u;
    {
        const bool branch_taken_0x21b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b138) {
            ctx->pc = 0x21AA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa84;
        }
    }
    ctx->pc = 0x21B140u;
    // 0x21b140: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b144: 0x1000fe4f  b           . + 4 + (-0x1B1 << 2)
    ctx->pc = 0x21B144u;
    {
        const bool branch_taken_0x21b144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B144u;
        // 0x21b148: 0xaf8292c0  sw          $v0, -0x6D40($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b144) {
            ctx->pc = 0x21AA84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aa84;
        }
    }
    ctx->pc = 0x21B14Cu;
label_21b14c:
    // 0x21b14c: 0x0  nop
    ctx->pc = 0x21b14cu;
    // NOP
    // 0x21b150: 0xc078078  jal         func_1E01E0
    ctx->pc = 0x21B150u;
    SET_GPR_U32(ctx, 31, 0x21B158u);
    ctx->pc = 0x1E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01E0u, 0x21B150u, 0x21B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B158u;
label_21b158:
    // 0x21b158: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21b15c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21b15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b160: 0xc04e188  jal         func_138620
    ctx->pc = 0x21B160u;
    SET_GPR_U32(ctx, 31, 0x21B168u);
    ctx->pc = 0x21B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B160u;
    // 0x21b164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x21B160u, 0x21B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B168u;
label_21b168:
    // 0x21b168: 0xc04e198  jal         func_138660
    ctx->pc = 0x21B168u;
    SET_GPR_U32(ctx, 31, 0x21B170u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B168u, 0x21B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B170u;
label_21b170:
    // 0x21b170: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x21B170u;
    {
        const bool branch_taken_0x21b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b170) {
            ctx->pc = 0x21B450u;
            goto label_21b450;
        }
    }
    ctx->pc = 0x21B178u;
label_21b178:
    // 0x21b178: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21b178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21b17c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b180: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21B180u;
    {
        const bool branch_taken_0x21b180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21b180) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B188u;
    // 0x21b188: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
    // 0x21b18c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21b18cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21b190: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x21B190u;
    {
        const bool branch_taken_0x21b190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b190) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B198u;
    // 0x21b198: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21b19c: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21b19cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21b1a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B1A0u;
    {
        const bool branch_taken_0x21b1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1a0) {
            ctx->pc = 0x21B1B0u;
            goto label_21b1b0;
        }
    }
    ctx->pc = 0x21B1A8u;
    // 0x21b1a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B1A8u;
    {
        const bool branch_taken_0x21b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1A8u;
        // 0x21b1ac: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1a8) {
            ctx->pc = 0x21B1B8u;
            goto label_21b1b8;
        }
    }
    ctx->pc = 0x21B1B0u;
label_21b1b0:
    // 0x21b1b0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21b1b4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21b1b8:
    // 0x21b1b8: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
    // 0x21b1bc: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21B1BCu;
    {
        const bool branch_taken_0x21b1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1bc) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B1C4u;
    // 0x21b1c4: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
    // 0x21b1c8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21b1cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B1CCu;
    {
        const bool branch_taken_0x21b1cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1CCu;
        // 0x21b1d0: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1cc) {
            ctx->pc = 0x21B1E0u;
            goto label_21b1e0;
        }
    }
    ctx->pc = 0x21B1D4u;
    // 0x21b1d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21B1D4u;
    {
        const bool branch_taken_0x21b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b1d4) {
            ctx->pc = 0x21B1E0u;
            goto label_21b1e0;
        }
    }
    ctx->pc = 0x21B1DCu;
    // 0x21b1dc: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21b1e0:
    // 0x21b1e0: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21b1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b1e8: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21B1E8u;
    {
        const bool branch_taken_0x21b1e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b1e8) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B1F0u;
    // 0x21b1f0: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21b1f4: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b1f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21b1fc: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21b200: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21b200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21b204: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21b204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21b208: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21b20c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b210: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21b214: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21b218: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b21c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B21Cu;
    {
        const bool branch_taken_0x21b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b21c) {
            ctx->pc = 0x21B22Cu;
            goto label_21b22c;
        }
    }
    ctx->pc = 0x21B224u;
    // 0x21b224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b228: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21b228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21b22c:
    // 0x21b22c: 0x0  nop
    ctx->pc = 0x21b22cu;
    // NOP
    // 0x21b230: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21b230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b238: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21B238u;
    {
        const bool branch_taken_0x21b238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b238) {
            ctx->pc = 0x21B278u;
            goto label_21b278;
        }
    }
    ctx->pc = 0x21B240u;
    // 0x21b240: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b244: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21b248: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21b248u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21b24c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B24Cu;
    {
        const bool branch_taken_0x21b24c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b24c) {
            ctx->pc = 0x21B25Cu;
            goto label_21b25c;
        }
    }
    ctx->pc = 0x21B254u;
    // 0x21b254: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B254u;
    {
        const bool branch_taken_0x21b254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B254u;
        // 0x21b258: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b254) {
            ctx->pc = 0x21B264u;
            goto label_21b264;
        }
    }
    ctx->pc = 0x21B25Cu;
label_21b25c:
    // 0x21b25c: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21b260: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21b260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21b264:
    // 0x21b264: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21b264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x21b268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B268u;
    {
        const bool branch_taken_0x21b268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b268) {
            ctx->pc = 0x21B278u;
            goto label_21b278;
        }
    }
    ctx->pc = 0x21B270u;
    // 0x21b270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b274: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21b278:
    // 0x21b278: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x21B278u;
    SET_GPR_U32(ctx, 31, 0x21B280u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x21B278u, 0x21B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B280u;
label_21b280:
    // 0x21b280: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x21B280u;
    SET_GPR_U32(ctx, 31, 0x21B288u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21B280u, 0x21B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B288u;
label_21b288:
    // 0x21b288: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x21b28c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b290: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x21b294: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b298: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21b298u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b29c: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
    // 0x21b2a0: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21b2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
    // 0x21b2a4: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21b2a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b2ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b2b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b2b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b2b8: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2B8u;
    {
        const bool branch_taken_0x21b2b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2B8u;
        // 0x21b2bc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2b8) {
            ctx->pc = 0x21B2CCu;
            goto label_21b2cc;
        }
    }
    ctx->pc = 0x21B2C0u;
    // 0x21b2c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b2c4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B2C4u;
    {
        const bool branch_taken_0x21b2c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21b2c4) {
            ctx->pc = 0x21B2D8u;
            goto label_21b2d8;
        }
    }
    ctx->pc = 0x21B2CCu;
label_21b2cc:
    // 0x21b2cc: 0x0  nop
    ctx->pc = 0x21b2ccu;
    // NOP
    // 0x21b2d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x21B2D0u;
    {
        const bool branch_taken_0x21b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2D0u;
        // 0x21b2d4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2d0) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2D8u;
label_21b2d8:
    // 0x21b2d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b2dc: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21B2DCu;
    {
        const bool branch_taken_0x21b2dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2DCu;
        // 0x21b2e0: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2dc) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2E4u;
    // 0x21b2e4: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B2E4u;
    {
        const bool branch_taken_0x21b2e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b2e4) {
            ctx->pc = 0x21B2FCu;
            goto label_21b2fc;
        }
    }
    ctx->pc = 0x21B2ECu;
    // 0x21b2ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21b2f0: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21b2f0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CE8u));
    // 0x21b2f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B2F4u;
    {
        const bool branch_taken_0x21b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B2F4u;
        // 0x21b2f8: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b2f4) {
            ctx->pc = 0x21B30Cu;
            goto label_21b30c;
        }
    }
    ctx->pc = 0x21B2FCu;
label_21b2fc:
    // 0x21b2fc: 0x0  nop
    ctx->pc = 0x21b2fcu;
    // NOP
    // 0x21b300: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21b304: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21b304u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x588CF0u));
    // 0x21b308: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21b308u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21b30c:
    // 0x21b30c: 0x0  nop
    ctx->pc = 0x21b30cu;
    // NOP
    // 0x21b310: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21b310u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
    // 0x21b314: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21b314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x21b318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b31c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b31cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b320: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B320u;
    SET_GPR_U32(ctx, 31, 0x21B328u);
    ctx->pc = 0x21B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B320u;
    // 0x21b324: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B320u, 0x21B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B328u;
label_21b328:
    // 0x21b328: 0xc086ea0  jal         func_21BA80
    ctx->pc = 0x21B328u;
    SET_GPR_U32(ctx, 31, 0x21B330u);
    ctx->pc = 0x21BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BA80u, 0x21B328u, 0x21B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B330u;
label_21b330:
    // 0x21b330: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
    // 0x21b334: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x21B334u;
    {
        const bool branch_taken_0x21b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b334) {
            ctx->pc = 0x21B3D0u;
            goto label_21b3d0;
        }
    }
    ctx->pc = 0x21B33Cu;
    // 0x21b33c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b340: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x21b344: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21b344u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21b348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21b34c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x21b350: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b354: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21b354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x21b358: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b35c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21b360: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b364: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21b364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
    // 0x21b368: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21b368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21b36c: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x21b370: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21b370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x21b374: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x21b378: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b37c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21b380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b384: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x21b388: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21b388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21b38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b390: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
    // 0x21b394: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b398: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b39c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b3a0: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21b3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3a8: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
    // 0x21b3ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21b3b0: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x21b3b4: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21b3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x21b3b8: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21b3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b3bc: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21b3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
    // 0x21b3c0: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21b3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
    // 0x21b3c4: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21b3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
    // 0x21b3c8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B3C8u;
    SET_GPR_U32(ctx, 31, 0x21B3D0u);
    ctx->pc = 0x21B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3C8u;
    // 0x21b3cc: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B3C8u, 0x21B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3D0u;
label_21b3d0:
    // 0x21b3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x21b3d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x21b3d8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x21b3dc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x21b3e0: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
    // 0x21b3e4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21b3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21b3e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21b3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21b3ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3f0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21b3f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21b3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b3fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21b400: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21b400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21b404: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x21B404u;
    SET_GPR_U32(ctx, 31, 0x21B40Cu);
    ctx->pc = 0x21B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B404u;
    // 0x21b408: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x21B404u, 0x21B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B40Cu;
label_21b40c:
    // 0x21b40c: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x21B40Cu;
    SET_GPR_U32(ctx, 31, 0x21B414u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x21B40Cu, 0x21B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B414u;
label_21b414:
    // 0x21b414: 0xc04e120  jal         func_138480
    ctx->pc = 0x21B414u;
    SET_GPR_U32(ctx, 31, 0x21B41Cu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21B414u, 0x21B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B41Cu;
label_21b41c:
    // 0x21b41c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x21B41Cu;
    SET_GPR_U32(ctx, 31, 0x21B424u);
    ctx->pc = 0x21B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B41Cu;
    // 0x21b420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21B41Cu, 0x21B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B424u;
label_21b424:
    // 0x21b424: 0xc060258  jal         func_180960
    ctx->pc = 0x21B424u;
    SET_GPR_U32(ctx, 31, 0x21B42Cu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x21B424u, 0x21B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B42Cu;
label_21b42c:
    // 0x21b42c: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x21b430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B430u;
    {
        const bool branch_taken_0x21b430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b430) {
            ctx->pc = 0x21B440u;
            goto label_21b440;
        }
    }
    ctx->pc = 0x21B438u;
    // 0x21b438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b43c: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21b440:
    // 0x21b440: 0xc04e198  jal         func_138660
    ctx->pc = 0x21B440u;
    SET_GPR_U32(ctx, 31, 0x21B448u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B440u, 0x21B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B448u;
label_21b448:
    // 0x21b448: 0x1040ff4b  beqz        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x21B448u;
    {
        const bool branch_taken_0x21b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b448) {
            ctx->pc = 0x21B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b178;
        }
    }
    ctx->pc = 0x21B450u;
label_21b450:
    // 0x21b450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x21b454u;
}
