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

// Function: FUN_001bf250
// Address: 0x1bf250 - 0x1bf3a0
void FUN_001bf250_0x1bf250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bf250_0x1bf250");
#endif

    switch (ctx->pc) {
        case 0x1bf318u: goto label_1bf318;
        case 0x1bf348u: goto label_1bf348;
        case 0x1bf360u: goto label_1bf360;
        case 0x1bf388u: goto label_1bf388;
        default: break;
    }

    ctx->pc = 0x1bf250u;

    // 0x1bf250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf25c: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1bf25cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1bf260: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF260u;
    {
        const bool branch_taken_0x1bf260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF260u;
        // 0x1bf264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf260) {
            ctx->pc = 0x1BF274u;
            goto label_1bf274;
        }
    }
    ctx->pc = 0x1BF268u;
    // 0x1bf268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf26c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1BF26Cu;
    {
        const bool branch_taken_0x1bf26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF26Cu;
        // 0x1bf270: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf26c) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF274u;
label_1bf274:
    // 0x1bf274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf278: 0x10660048  beq         $v1, $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BF278u;
    {
        const bool branch_taken_0x1bf278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF278u;
        // 0x1bf27c: 0x2ca10007  sltiu       $at, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf278) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF280u;
    // 0x1bf280: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x1BF280u;
    {
        const bool branch_taken_0x1bf280 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF280u;
        // 0x1bf284: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf280) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF288u;
    // 0x1bf288: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1bf28c: 0x2484b790  addiu       $a0, $a0, -0x4870
    ctx->pc = 0x1bf28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948752));
    // 0x1bf290: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf294: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf298: 0x600008  jr          $v1
    ctx->pc = 0x1BF298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF2A0u: goto label_1bf2a0;
            case 0x1BF2A8u: goto label_1bf2a8;
            case 0x1BF2B0u: goto label_1bf2b0;
            case 0x1BF2BCu: goto label_1bf2bc;
            case 0x1BF2C8u: goto label_1bf2c8;
            case 0x1BF2E8u: goto label_1bf2e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF298u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF2A0u;
label_1bf2a0:
    // 0x1bf2a0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1BF2A0u;
    {
        const bool branch_taken_0x1bf2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A0u;
        // 0x1bf2a4: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a0) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2A8u;
label_1bf2a8:
    // 0x1bf2a8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BF2A8u;
    {
        const bool branch_taken_0x1bf2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A8u;
        // 0x1bf2ac: 0xa2060231  sb          $a2, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a8) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2B0u;
label_1bf2b0:
    // 0x1bf2b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf2b4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1BF2B4u;
    {
        const bool branch_taken_0x1bf2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2B4u;
        // 0x1bf2b8: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2b4) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2BCu;
label_1bf2bc:
    // 0x1bf2bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bf2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf2c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1BF2C0u;
    {
        const bool branch_taken_0x1bf2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C0u;
        // 0x1bf2c4: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2c0) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF2C8u;
label_1bf2c8:
    // 0x1bf2c8: 0x92030246  lbu         $v1, 0x246($s0)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 582)));
    // 0x1bf2cc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x1bf2ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1bf2d0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF2D0u;
    {
        const bool branch_taken_0x1bf2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D0u;
        // 0x1bf2d4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2d0) {
            ctx->pc = 0x1BF2E4u;
            goto label_1bf2e4;
        }
    }
    ctx->pc = 0x1BF2D8u;
    // 0x1bf2d8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bf2dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF2DCu;
    {
        const bool branch_taken_0x1bf2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2DCu;
        // 0x1bf2e0: 0xa2030246  sb          $v1, 0x246($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2dc) {
            ctx->pc = 0x1BF2E8u;
            goto label_1bf2e8;
        }
    }
    ctx->pc = 0x1BF2E4u;
label_1bf2e4:
    // 0x1bf2e4: 0xa2030246  sb          $v1, 0x246($s0)
    ctx->pc = 0x1bf2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 3));
label_1bf2e8:
    // 0x1bf2e8: 0x92030233  lbu         $v1, 0x233($s0)
    ctx->pc = 0x1bf2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
    // 0x1bf2ec: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1BF2ECu;
    {
        const bool branch_taken_0x1bf2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2ECu;
        // 0x1bf2f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2ec) {
            ctx->pc = 0x1BF398u;
            goto label_1bf398;
        }
    }
    ctx->pc = 0x1BF2F4u;
    // 0x1bf2f4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bf2f8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF2F8u;
    {
        const bool branch_taken_0x1bf2f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf2f8) {
            ctx->pc = 0x1BF328u;
            goto label_1bf328;
        }
    }
    ctx->pc = 0x1BF300u;
    // 0x1bf300: 0xa2020246  sb          $v0, 0x246($s0)
    ctx->pc = 0x1bf300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf30c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf310: 0xc054388  jal         func_150E20
    ctx->pc = 0x1BF310u;
    SET_GPR_U32(ctx, 31, 0x1BF318u);
    ctx->pc = 0x1BF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF310u;
    // 0x1bf314: 0xa2020231  sb          $v0, 0x231($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1BF310u, 0x1BF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BF318u;
    {
        const bool branch_taken_0x1bf318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf318) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF320u;
    // 0x1bf320: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BF320u;
    {
        const bool branch_taken_0x1bf320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF320u;
        // 0x1bf324: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf320) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF328u;
label_1bf328:
    // 0x1bf328: 0x92030218  lbu         $v1, 0x218($s0)
    ctx->pc = 0x1bf328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1bf32c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bf330: 0x92020219  lbu         $v0, 0x219($s0)
    ctx->pc = 0x1bf330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 537)));
    // 0x1bf334: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bf338: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bf338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bf33c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bf340: 0xc04494c  jal         func_112530
    ctx->pc = 0x1BF340u;
    SET_GPR_U32(ctx, 31, 0x1BF348u);
    ctx->pc = 0x1BF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF340u;
    // 0x1bf344: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BF340u, 0x1BF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF348u;
label_1bf348:
    // 0x1bf348: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BF348u;
    {
        const bool branch_taken_0x1bf348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF348u;
        // 0x1bf34c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf348) {
            ctx->pc = 0x1BF36Cu;
            goto label_1bf36c;
        }
    }
    ctx->pc = 0x1BF350u;
    // 0x1bf350: 0x9204021a  lbu         $a0, 0x21A($s0)
    ctx->pc = 0x1bf350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 538)));
    // 0x1bf354: 0x9205021b  lbu         $a1, 0x21B($s0)
    ctx->pc = 0x1bf354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 539)));
    // 0x1bf358: 0xc0449b8  jal         func_1126E0
    ctx->pc = 0x1BF358u;
    SET_GPR_U32(ctx, 31, 0x1BF360u);
    ctx->pc = 0x1BF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF358u;
    // 0x1bf35c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1BF358u, 0x1BF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF360u;
label_1bf360:
    // 0x1bf360: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF360u;
    {
        const bool branch_taken_0x1bf360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf360) {
            ctx->pc = 0x1BF374u;
            goto label_1bf374;
        }
    }
    ctx->pc = 0x1BF368u;
    // 0x1bf368: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf36c:
    // 0x1bf36c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BF36Cu;
    {
        const bool branch_taken_0x1bf36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF36Cu;
        // 0x1bf370: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf36c) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF374u;
label_1bf374:
    // 0x1bf374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bf378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf37c: 0xa2020231  sb          $v0, 0x231($s0)
    ctx->pc = 0x1bf37cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bf380: 0xc054388  jal         func_150E20
    ctx->pc = 0x1BF380u;
    SET_GPR_U32(ctx, 31, 0x1BF388u);
    ctx->pc = 0x1BF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF380u;
    // 0x1bf384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E20u, 0x1BF380u, 0x1BF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF388u;
label_1bf388:
    // 0x1bf388: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF388u;
    {
        const bool branch_taken_0x1bf388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF388u;
        // 0x1bf38c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf388) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF390u;
    // 0x1bf390: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF390u;
    {
        const bool branch_taken_0x1bf390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF390u;
        // 0x1bf394: 0xa2030231  sb          $v1, 0x231($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf390) {
            ctx->pc = 0x1BF39Cu;
            goto label_1bf39c;
        }
    }
    ctx->pc = 0x1BF398u;
label_1bf398:
    // 0x1bf398: 0xa2030231  sb          $v1, 0x231($s0)
    ctx->pc = 0x1bf398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 561), (uint8_t)GPR_U32(ctx, 3));
label_1bf39c:
    // 0x1bf39c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1bf3a0u;
}
