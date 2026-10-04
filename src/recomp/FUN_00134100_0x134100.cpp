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

// Function: FUN_00134100
// Address: 0x134100 - 0x134244
void FUN_00134100_0x134100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00134100_0x134100");
#endif

    switch (ctx->pc) {
        case 0x134110u: goto label_134110;
        case 0x134118u: goto label_134118;
        case 0x134144u: goto label_134144;
        case 0x134150u: goto label_134150;
        case 0x1341a8u: goto label_1341a8;
        case 0x1341b8u: goto label_1341b8;
        case 0x1341ccu: goto label_1341cc;
        case 0x1341d8u: goto label_1341d8;
        case 0x1341e0u: goto label_1341e0;
        case 0x1341e8u: goto label_1341e8;
        case 0x134210u: goto label_134210;
        case 0x134224u: goto label_134224;
        case 0x134240u: goto label_134240;
        default: break;
    }

    ctx->pc = 0x134100u;

    // 0x134100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134108: 0xc04d0fc  jal         func_1343F0
    ctx->pc = 0x134108u;
    SET_GPR_U32(ctx, 31, 0x134110u);
    ctx->pc = 0x13410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134108u;
    // 0x13410c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1343F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343F0u, 0x134108u, 0x134110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134110u;
label_134110:
    // 0x134110: 0xc04d140  jal         func_134500
    ctx->pc = 0x134110u;
    SET_GPR_U32(ctx, 31, 0x134118u);
    ctx->pc = 0x134500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134500u, 0x134110u, 0x134118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134118u;
label_134118:
    // 0x134118: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13411c: 0x8c22a3e0  lw          $v0, -0x5C20($at)
    ctx->pc = 0x13411cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134120: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x134120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x134124: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x134124u;
    {
        const bool branch_taken_0x134124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134124) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x13412Cu;
    // 0x13412c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13412cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134130: 0x9022a030  lbu         $v0, -0x5FD0($at)
    ctx->pc = 0x134130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x30A030u));
    // 0x134134: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x134134u;
    {
        const bool branch_taken_0x134134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134134) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x13413Cu;
    // 0x13413c: 0xc05b648  jal         func_16D920
    ctx->pc = 0x13413Cu;
    SET_GPR_U32(ctx, 31, 0x134144u);
    ctx->pc = 0x16D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D920u, 0x13413Cu, 0x134144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134144u;
label_134144:
    // 0x134144: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134148: 0xc05b648  jal         func_16D920
    ctx->pc = 0x134148u;
    SET_GPR_U32(ctx, 31, 0x134150u);
    ctx->pc = 0x13414Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134148u;
    // 0x13414c: 0xa022a032  sb          $v0, -0x5FCE($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942770), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D920u, 0x134148u, 0x134150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134150u;
label_134150:
    // 0x134150: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134154: 0xa022a032  sb          $v0, -0x5FCE($at)
    ctx->pc = 0x134154u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A032u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A032u, _value); } while (0);
    // 0x134158: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x13415c: 0x9023a032  lbu         $v1, -0x5FCE($at)
    ctx->pc = 0x13415cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A032u));
    // 0x134160: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x134160u;
    {
        const bool branch_taken_0x134160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134160) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x134168u;
    // 0x134168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13416c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13416Cu;
    {
        const bool branch_taken_0x13416c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13416c) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x134174u;
    // 0x134174: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134178: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x134178u;
    {
        const bool branch_taken_0x134178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134178u;
        // 0x13417c: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134178) {
            ctx->pc = 0x1341B0u;
            goto label_1341b0;
        }
    }
    ctx->pc = 0x134180u;
    // 0x134180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134184: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x134184u;
    {
        const bool branch_taken_0x134184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134184) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x13418Cu;
    // 0x13418c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134190: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134190u;
    {
        const bool branch_taken_0x134190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134190) {
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134198u;
    // 0x134198: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134198u;
    {
        const bool branch_taken_0x134198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134198) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x1341A0u;
label_1341a0:
    // 0x1341a0: 0xc05b640  jal         func_16D900
    ctx->pc = 0x1341A0u;
    SET_GPR_U32(ctx, 31, 0x1341A8u);
    ctx->pc = 0x16D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D900u, 0x1341A0u, 0x1341A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341A8u;
label_1341a8:
    // 0x1341a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1341A8u;
    {
        const bool branch_taken_0x1341a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341a8) {
            ctx->pc = 0x1341C0u;
            goto label_1341c0;
        }
    }
    ctx->pc = 0x1341B0u;
label_1341b0:
    // 0x1341b0: 0xc05b848  jal         func_16E120
    ctx->pc = 0x1341B0u;
    SET_GPR_U32(ctx, 31, 0x1341B8u);
    ctx->pc = 0x1341B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341B0u;
    // 0x1341b4: 0x8c24a034  lw          $a0, -0x5FCC($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942772)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E120u, 0x1341B0u, 0x1341B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341B8u;
label_1341b8:
    // 0x1341b8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1341b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1341bc: 0xa022a032  sb          $v0, -0x5FCE($at)
    ctx->pc = 0x1341bcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x30A032u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A032u, _value); } while (0);
label_1341c0:
    // 0x1341c0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1341c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1341c4: 0xc04c38c  jal         func_130E30
    ctx->pc = 0x1341C4u;
    SET_GPR_U32(ctx, 31, 0x1341CCu);
    ctx->pc = 0x1341C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341C4u;
    // 0x1341c8: 0x2484a038  addiu       $a0, $a0, -0x5FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E30u, 0x1341C4u, 0x1341CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341CCu;
label_1341cc:
    // 0x1341cc: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x1341ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x1341d0: 0xc04d094  jal         func_134250
    ctx->pc = 0x1341D0u;
    SET_GPR_U32(ctx, 31, 0x1341D8u);
    ctx->pc = 0x1341D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341D0u;
    // 0x1341d4: 0x2484a044  addiu       $a0, $a0, -0x5FBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134250u, 0x1341D0u, 0x1341D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341D8u;
label_1341d8:
    // 0x1341d8: 0xc08bb48  jal         func_22ED20
    ctx->pc = 0x1341D8u;
    SET_GPR_U32(ctx, 31, 0x1341E0u);
    ctx->pc = 0x22ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED20u, 0x1341D8u, 0x1341E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341E0u;
label_1341e0:
    // 0x1341e0: 0xc08b944  jal         func_22E510
    ctx->pc = 0x1341E0u;
    SET_GPR_U32(ctx, 31, 0x1341E8u);
    ctx->pc = 0x22E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E510u, 0x1341E0u, 0x1341E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341E8u;
label_1341e8:
    // 0x1341e8: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x1341ec: 0x2610a3c4  addiu       $s0, $s0, -0x5C3C
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943684));
    // 0x1341f0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1341f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3C4u));
    // 0x1341f4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1341F4u;
    {
        const bool branch_taken_0x1341f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341f4) {
            ctx->pc = 0x134224u;
            goto label_134224;
        }
    }
    ctx->pc = 0x1341FCu;
    // 0x1341fc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1341fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x134200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134208: 0xc07f180  jal         func_1FC600
    ctx->pc = 0x134208u;
    SET_GPR_U32(ctx, 31, 0x134210u);
    ctx->pc = 0x13420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134208u;
    // 0x13420c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC600u, 0x134208u, 0x134210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134210u;
label_134210:
    // 0x134210: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x134210u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13421c: 0xc07f188  jal         func_1FC620
    ctx->pc = 0x13421Cu;
    SET_GPR_U32(ctx, 31, 0x134224u);
    ctx->pc = 0x134220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13421Cu;
    // 0x134220: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC620u, 0x13421Cu, 0x134224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134224u;
label_134224:
    // 0x134224: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134228: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134228u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13422c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x13422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x134230: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134230u;
    {
        const bool branch_taken_0x134230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134230) {
            ctx->pc = 0x134240u;
            goto label_134240;
        }
    }
    ctx->pc = 0x134238u;
    // 0x134238: 0xc04e334  jal         func_138CD0
    ctx->pc = 0x134238u;
    SET_GPR_U32(ctx, 31, 0x134240u);
    ctx->pc = 0x138CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CD0u, 0x134238u, 0x134240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134240u;
label_134240:
    // 0x134240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x134244u;
}
