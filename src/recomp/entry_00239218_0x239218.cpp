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

// Function: entry_00239218
// Address: 0x239218 - 0x23937c
void entry_00239218_0x239218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239218_0x239218");
#endif

    switch (ctx->pc) {
        case 0x23924cu: goto label_23924c;
        case 0x2392acu: goto label_2392ac;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392f4u: goto label_2392f4;
        case 0x239318u: goto label_239318;
        case 0x239344u: goto label_239344;
        default: break;
    }

    ctx->pc = 0x239218u;

label_239218:
    // 0x239218: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23921c:
    // 0x23921c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239220:
    // 0x239220: 0x0  nop
    ctx->pc = 0x239220u;
    // NOP
label_239224:
    // 0x239224: 0x0  nop
    ctx->pc = 0x239224u;
    // NOP
label_239228:
    // 0x239228: 0x0  nop
    ctx->pc = 0x239228u;
    // NOP
label_23922c:
    // 0x23922c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239230:
    if (ctx->pc == 0x239230u) {
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239234u;
        goto label_239234;
    }
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23922c) {
            ctx->pc = 0x239218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239218;
        }
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_239238:
    if (ctx->pc == 0x239238u) {
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23923Cu;
        goto label_23923c;
    }
    ctx->pc = 0x239234u;
    {
        const bool branch_taken_0x239234 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x239234) {
            ctx->pc = 0x239238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239234u;
            // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23926Cu;
            goto label_23926c;
        }
    }
    ctx->pc = 0x23923Cu;
label_23923c:
    // 0x23923c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239240:
    // 0x239240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239244:
    // 0x239244: 0xc08e8e0  jal         func_23A380
label_239248:
    if (ctx->pc == 0x239248u) {
        ctx->pc = 0x239248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239244u;
        // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23924Cu;
        goto label_23924c;
    }
    ctx->pc = 0x239244u;
    SET_GPR_U32(ctx, 31, 0x23924Cu);
    ctx->pc = 0x239248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239244u;
    // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A380u, 0x239244u, 0x23924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23924Cu;
label_23924c:
    // 0x23924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239250:
    if (ctx->pc == 0x239250u) {
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239254u;
        goto label_239254;
    }
    ctx->pc = 0x23924Cu;
    {
        const bool branch_taken_0x23924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23924c) {
            ctx->pc = 0x239260u;
            goto label_239260;
        }
    }
    ctx->pc = 0x239254u;
label_239254:
    // 0x239254: 0x10000003  b           . + 4 + (0x3 << 2)
label_239258:
    if (ctx->pc == 0x239258u) {
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23925Cu;
        goto label_23925c;
    }
    ctx->pc = 0x239254u;
    {
        const bool branch_taken_0x239254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239254) {
            ctx->pc = 0x239264u;
            goto label_239264;
        }
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0x0  nop
    ctx->pc = 0x23925cu;
    // NOP
label_239260:
    // 0x239260: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_239264:
    // 0x239264: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239268:
    // 0x239268: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23926c:
    // 0x23926c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x23926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_239270:
    // 0x239270: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239274:
    // 0x239274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239278:
    // 0x239278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23927c:
    // 0x23927c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x23927cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_239280:
    // 0x239280: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_239284:
    // 0x239284: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x239284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_239288:
    // 0x239288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_23928c:
    if (ctx->pc == 0x23928Cu) {
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239290u;
        goto label_239290;
    }
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_239294:
    // 0x239294: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239294u;
        // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239294) {
            ctx->pc = 0x239298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239294u;
            // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392D4u;
            goto label_2392d4;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2392a0:
    // 0x2392a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2392a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2392a4:
    // 0x2392a4: 0xc08e96a  jal         func_23A5A8
label_2392a8:
    if (ctx->pc == 0x2392A8u) {
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A4u;
        // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392ACu;
        goto label_2392ac;
    }
    ctx->pc = 0x2392A4u;
    SET_GPR_U32(ctx, 31, 0x2392ACu);
    ctx->pc = 0x2392A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392A4u;
    // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x2392A4u, 0x2392ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2392acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2392b0:
    // 0x2392b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2392b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2392b4:
    // 0x2392b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2392b8:
    // 0x2392b8: 0xc08e1d2  jal         func_238748
label_2392bc:
    if (ctx->pc == 0x2392BCu) {
        ctx->pc = 0x2392BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B8u;
        // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C0u;
        goto label_2392c0;
    }
    ctx->pc = 0x2392B8u;
    SET_GPR_U32(ctx, 31, 0x2392C0u);
    ctx->pc = 0x2392BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392B8u;
    // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x2392B8u, 0x2392C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392C0u;
label_2392c0:
    // 0x2392c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2392c4:
    if (ctx->pc == 0x2392C4u) {
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C8u;
        goto label_2392c8;
    }
    ctx->pc = 0x2392C0u;
    {
        const bool branch_taken_0x2392c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c0) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x2392C8u;
label_2392c8:
    // 0x2392c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2392cc:
    if (ctx->pc == 0x2392CCu) {
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392D0u;
        goto label_2392d0;
    }
    ctx->pc = 0x2392C8u;
    {
        const bool branch_taken_0x2392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c8) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2392d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2392d4:
    // 0x2392d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2392d8:
    // 0x2392d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2392dc:
    if (ctx->pc == 0x2392DCu) {
        ctx->pc = 0x2392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392D8u;
        // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392E0u;
        goto label_2392e0;
    }
    ctx->pc = 0x2392D8u;
    {
        const bool branch_taken_0x2392d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392d8) {
            ctx->pc = 0x2392DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392D8u;
            // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239308u;
            goto label_239308;
        }
    }
    ctx->pc = 0x2392E0u;
label_2392e0:
    // 0x2392e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2392e4:
    // 0x2392e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2392e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2392e8:
    // 0x2392e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2392ec:
    // 0x2392ec: 0x40f809  jalr        $v0
label_2392f0:
    if (ctx->pc == 0x2392F0u) {
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392F4u;
        goto label_2392f4;
    }
    ctx->pc = 0x2392ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2392F4u);
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392ECu, 0x2392F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2392F4u;
label_2392f4:
    // 0x2392f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2392f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2392f8:
    // 0x2392f8: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_2392fc:
    if (ctx->pc == 0x2392FCu) {
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239300u;
        goto label_239300;
    }
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x1000001b  b           . + 4 + (0x1B << 2)
label_239304:
    if (ctx->pc == 0x239304u) {
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239308u;
        goto label_239308;
    }
    ctx->pc = 0x239300u;
    {
        const bool branch_taken_0x239300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239300) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23930c:
    // 0x23930c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239310:
    // 0x239310: 0xc08e96a  jal         func_23A5A8
label_239314:
    if (ctx->pc == 0x239314u) {
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239318u;
        goto label_239318;
    }
    ctx->pc = 0x239310u;
    SET_GPR_U32(ctx, 31, 0x239318u);
    ctx->pc = 0x239314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239310u;
    // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5A8u, 0x239310u, 0x239318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23931c:
    // 0x23931c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239320:
    // 0x239320: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239324:
    // 0x239324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239328:
    // 0x239328: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x239328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_23932c:
    // 0x23932c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_239330:
    // 0x239330: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_239334:
    // 0x239334: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    {
        const bool branch_taken_0x239334 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x239334) {
            ctx->pc = 0x239338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239334u;
            // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239354u;
            goto label_239354;
        }
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0xc08e1d2  jal         func_238748
label_239340:
    if (ctx->pc == 0x239340u) {
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23933Cu;
        // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239344u;
        goto label_239344;
    }
    ctx->pc = 0x23933Cu;
    SET_GPR_U32(ctx, 31, 0x239344u);
    ctx->pc = 0x239340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23933Cu;
    // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238748u, 0x23933Cu, 0x239344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_239348:
    if (ctx->pc == 0x239348u) {
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23934Cu;
        goto label_23934c;
    }
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239344) {
            ctx->pc = 0x239348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239344u;
            // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23934cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239350:
    // 0x239350: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239354:
    // 0x239354: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_239358:
    // 0x239358: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_23935c:
    // 0x23935c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239360:
    // 0x239360: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_239364:
    if (ctx->pc == 0x239364u) {
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239368u;
        goto label_239368;
    }
    ctx->pc = 0x239360u;
    {
        const bool branch_taken_0x239360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239360) {
            ctx->pc = 0x239208u;
            return;
        }
    }
    ctx->pc = 0x239368u;
label_239368:
    // 0x239368: 0x10000004  b           . + 4 + (0x4 << 2)
label_23936c:
    if (ctx->pc == 0x23936Cu) {
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239370u;
        goto label_239370;
    }
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x23937Cu;
            return;
        }
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239374:
    // 0x239374: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_239378:
    // 0x239378: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x239378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23937cu;
}
