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

// Function: FUN_00234238
// Address: 0x234238 - 0x234344
void FUN_00234238_0x234238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234238_0x234238");
#endif

    switch (ctx->pc) {
        case 0x234238u: goto label_234238;
        case 0x23423cu: goto label_23423c;
        case 0x234240u: goto label_234240;
        case 0x234244u: goto label_234244;
        case 0x234248u: goto label_234248;
        case 0x23424cu: goto label_23424c;
        case 0x234250u: goto label_234250;
        case 0x234254u: goto label_234254;
        case 0x234258u: goto label_234258;
        case 0x23425cu: goto label_23425c;
        case 0x234260u: goto label_234260;
        case 0x234264u: goto label_234264;
        case 0x234268u: goto label_234268;
        case 0x23426cu: goto label_23426c;
        case 0x234270u: goto label_234270;
        case 0x234274u: goto label_234274;
        case 0x234278u: goto label_234278;
        case 0x23427cu: goto label_23427c;
        case 0x234280u: goto label_234280;
        case 0x234284u: goto label_234284;
        case 0x234288u: goto label_234288;
        case 0x23428cu: goto label_23428c;
        case 0x234290u: goto label_234290;
        case 0x234294u: goto label_234294;
        case 0x234298u: goto label_234298;
        case 0x23429cu: goto label_23429c;
        case 0x2342a0u: goto label_2342a0;
        case 0x2342a4u: goto label_2342a4;
        case 0x2342a8u: goto label_2342a8;
        case 0x2342acu: goto label_2342ac;
        case 0x2342b0u: goto label_2342b0;
        case 0x2342b4u: goto label_2342b4;
        case 0x2342b8u: goto label_2342b8;
        case 0x2342bcu: goto label_2342bc;
        case 0x2342c0u: goto label_2342c0;
        case 0x2342c4u: goto label_2342c4;
        case 0x2342c8u: goto label_2342c8;
        case 0x2342ccu: goto label_2342cc;
        case 0x2342d0u: goto label_2342d0;
        case 0x2342d4u: goto label_2342d4;
        case 0x2342d8u: goto label_2342d8;
        case 0x2342dcu: goto label_2342dc;
        case 0x2342e0u: goto label_2342e0;
        case 0x2342e4u: goto label_2342e4;
        case 0x2342e8u: goto label_2342e8;
        case 0x2342ecu: goto label_2342ec;
        case 0x2342f0u: goto label_2342f0;
        case 0x2342f4u: goto label_2342f4;
        case 0x2342f8u: goto label_2342f8;
        case 0x2342fcu: goto label_2342fc;
        case 0x234300u: goto label_234300;
        case 0x234304u: goto label_234304;
        case 0x234308u: goto label_234308;
        case 0x23430cu: goto label_23430c;
        case 0x234310u: goto label_234310;
        case 0x234314u: goto label_234314;
        case 0x234318u: goto label_234318;
        case 0x23431cu: goto label_23431c;
        case 0x234320u: goto label_234320;
        case 0x234324u: goto label_234324;
        case 0x234328u: goto label_234328;
        case 0x23432cu: goto label_23432c;
        case 0x234330u: goto label_234330;
        case 0x234334u: goto label_234334;
        case 0x234338u: goto label_234338;
        case 0x23433cu: goto label_23433c;
        case 0x234340u: goto label_234340;
        default: break;
    }

    ctx->pc = 0x234238u;

label_234238:
    // 0x234238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23423c:
    // 0x23423c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_234240:
    // 0x234240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_234244:
    // 0x234244: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x234244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_234248:
    // 0x234248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23424c:
    // 0x23424c: 0x262604b0  addiu       $a2, $s1, 0x4B0
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
label_234250:
    // 0x234250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_234254:
    // 0x234254: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_234258:
    // 0x234258: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23425c:
    // 0x23425c: 0x8c421268  lw          $v0, 0x1268($v0)
    ctx->pc = 0x23425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4712)));
label_234260:
    // 0x234260: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_234264:
    if (ctx->pc == 0x234264u) {
        ctx->pc = 0x234264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234260u;
        // 0x234264: 0x90c5001f  lbu         $a1, 0x1F($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234268u;
        goto label_234268;
    }
    ctx->pc = 0x234260u;
    {
        const bool branch_taken_0x234260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234260u;
        // 0x234264: 0x90c5001f  lbu         $a1, 0x1F($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234260) {
            ctx->pc = 0x234330u;
            goto label_234330;
        }
    }
    ctx->pc = 0x234268u;
label_234268:
    // 0x234268: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23426c:
    // 0x23426c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_234270:
    // 0x234270: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_234274:
    // 0x234274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x234274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_234278:
    // 0x234278: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23427c:
    // 0x23427c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x23427cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_234280:
    // 0x234280: 0xac22126c  sw          $v0, 0x126C($at)
    ctx->pc = 0x234280u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 2));
label_234284:
    // 0x234284: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_234288:
    // 0x234288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23428c:
    // 0x23428c: 0x8c631270  lw          $v1, 0x1270($v1)
    ctx->pc = 0x23428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4720)));
label_234290:
    // 0x234290: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_234294:
    if (ctx->pc == 0x234294u) {
        ctx->pc = 0x234294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234290u;
        // 0x234294: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234298u;
        goto label_234298;
    }
    ctx->pc = 0x234290u;
    {
        const bool branch_taken_0x234290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234290) {
            ctx->pc = 0x234294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234290u;
            // 0x234294: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x234298u;
label_234298:
    // 0x234298: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_23429c:
    // 0x23429c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2342a0:
    // 0x2342a0: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x2342a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_2342a4:
    // 0x2342a4: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2342a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2342a8:
    // 0x2342a8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2342ac:
    if (ctx->pc == 0x2342ACu) {
        ctx->pc = 0x2342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342A8u;
        // 0x2342ac: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342B0u;
        goto label_2342b0;
    }
    ctx->pc = 0x2342A8u;
    {
        const bool branch_taken_0x2342a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2342ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342A8u;
        // 0x2342ac: 0x262304b0  addiu       $v1, $s1, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342a8) {
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x2342B0u;
label_2342b0:
    // 0x2342b0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2342b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_2342b4:
    // 0x2342b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2342b8:
    // 0x2342b8: 0x8c42126c  lw          $v0, 0x126C($v0)
    ctx->pc = 0x2342b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4716)));
label_2342bc:
    // 0x2342bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2342bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2342c0:
    // 0x2342c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2342c4:
    if (ctx->pc == 0x2342C4u) {
        ctx->pc = 0x2342C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342C0u;
        // 0x2342c4: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342C8u;
        goto label_2342c8;
    }
    ctx->pc = 0x2342C0u;
    {
        const bool branch_taken_0x2342c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342C0u;
        // 0x2342c4: 0x3c100029  lui         $s0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342c0) {
            ctx->pc = 0x2342E0u;
            goto label_2342e0;
        }
    }
    ctx->pc = 0x2342C8u;
label_2342c8:
    // 0x2342c8: 0x26030508  addiu       $v1, $s0, 0x508
    ctx->pc = 0x2342c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
label_2342cc:
    // 0x2342cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2342d0:
    // 0x2342d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2342d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2342d4:
    // 0x2342d4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2342d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2342d8:
    // 0x2342d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2342dc:
    if (ctx->pc == 0x2342DCu) {
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x8cc50038  lw          $a1, 0x38($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342E0u;
        goto label_2342e0;
    }
    ctx->pc = 0x2342D8u;
    {
        const bool branch_taken_0x2342d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342D8u;
        // 0x2342dc: 0x8cc50038  lw          $a1, 0x38($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342d8) {
            ctx->pc = 0x2342E4u;
            goto label_2342e4;
        }
    }
    ctx->pc = 0x2342E0u;
label_2342e0:
    // 0x2342e0: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x2342e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_2342e4:
    // 0x2342e4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2342e8:
    if (ctx->pc == 0x2342E8u) {
        ctx->pc = 0x2342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E4u;
        // 0x2342e8: 0x26020508  addiu       $v0, $s0, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2342ECu;
        goto label_2342ec;
    }
    ctx->pc = 0x2342E4u;
    {
        const bool branch_taken_0x2342e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2342E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342E4u;
        // 0x2342e8: 0x26020508  addiu       $v0, $s0, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2342e4) {
            ctx->pc = 0x234304u;
            goto label_234304;
        }
    }
    ctx->pc = 0x2342ECu;
label_2342ec:
    // 0x2342ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2342ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2342f0:
    // 0x2342f0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2342f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2342f4:
    // 0x2342f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2342f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2342f8:
    // 0x2342f8: 0xa0f809  jalr        $a1
label_2342fc:
    if (ctx->pc == 0x2342FCu) {
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234300u;
        goto label_234300;
    }
    ctx->pc = 0x2342F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x234300u);
        ctx->pc = 0x2342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2342F8u;
        // 0x2342fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2342F8u, 0x234300u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234300u;
label_234300:
    // 0x234300: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x234300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_234304:
    // 0x234304: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x234304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
label_234308:
    // 0x234308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x234308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23430c:
    // 0x23430c: 0x8c63126c  lw          $v1, 0x126C($v1)
    ctx->pc = 0x23430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4716)));
label_234310:
    // 0x234310: 0x26020508  addiu       $v0, $s0, 0x508
    ctx->pc = 0x234310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1288));
label_234314:
    // 0x234314: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x234314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_234318:
    // 0x234318: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_23431c:
    // 0x23431c: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x23431cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_234320:
    // 0x234320: 0xac20126c  sw          $zero, 0x126C($at)
    ctx->pc = 0x234320u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4716), GPR_U32(ctx, 0));
label_234324:
    // 0x234324: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x234324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_234328:
    // 0x234328: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x234328u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
label_23432c:
    // 0x23432c: 0xac201270  sw          $zero, 0x1270($at)
    ctx->pc = 0x23432cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4720), GPR_U32(ctx, 0));
label_234330:
    // 0x234330: 0x262304b0  addiu       $v1, $s1, 0x4B0
    ctx->pc = 0x234330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
label_234334:
    // 0x234334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_234338:
    // 0x234338: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x234338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_23433c:
    // 0x23433c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23433cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234340:
    // 0x234340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x234344u;
}
