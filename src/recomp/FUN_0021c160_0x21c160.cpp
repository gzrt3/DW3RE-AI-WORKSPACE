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

// Function: FUN_0021c160
// Address: 0x21c160 - 0x21c314
void FUN_0021c160_0x21c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021c160_0x21c160");
#endif

    switch (ctx->pc) {
        case 0x21c1a0u: goto label_21c1a0;
        case 0x21c1b0u: goto label_21c1b0;
        case 0x21c218u: goto label_21c218;
        case 0x21c224u: goto label_21c224;
        case 0x21c22cu: goto label_21c22c;
        case 0x21c240u: goto label_21c240;
        case 0x21c250u: goto label_21c250;
        case 0x21c260u: goto label_21c260;
        case 0x21c278u: goto label_21c278;
        case 0x21c288u: goto label_21c288;
        case 0x21c2a4u: goto label_21c2a4;
        case 0x21c2b4u: goto label_21c2b4;
        case 0x21c2d8u: goto label_21c2d8;
        case 0x21c2ecu: goto label_21c2ec;
        default: break;
    }

    ctx->pc = 0x21c160u;

    // 0x21c160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c16c: 0x8f8392cc  lw          $v1, -0x6D34($gp)
    ctx->pc = 0x21c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939340)));
    // 0x21c170: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x21c170u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x21c174: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x21C174u;
    {
        const bool branch_taken_0x21c174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C174u;
        // 0x21c178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c174) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C17Cu;
    // 0x21c17c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x21c17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x21c180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c184: 0x24a5e130  addiu       $a1, $a1, -0x1ED0
    ctx->pc = 0x21c184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959408));
    // 0x21c188: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21c18c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c190: 0x600008  jr          $v1
    ctx->pc = 0x21C190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C198u: goto label_21c198;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C238u: goto label_21c238;
            case 0x21C270u: goto label_21c270;
            case 0x21C29Cu: goto label_21c29c;
            case 0x21C2BCu: goto label_21c2bc;
            case 0x21C2E4u: goto label_21c2e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21C198u;
label_21c198:
    // 0x21c198: 0xc08710c  jal         func_21C430
    ctx->pc = 0x21C198u;
    SET_GPR_U32(ctx, 31, 0x21C1A0u);
    ctx->pc = 0x21C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C430u, 0x21C198u, 0x21C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1A0u;
label_21c1a0:
    // 0x21c1a0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x21C1A0u;
    {
        const bool branch_taken_0x21c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A0u;
        // 0x21c1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1a0) {
            ctx->pc = 0x21C314u;
            return;
        }
    }
    ctx->pc = 0x21C1A8u;
label_21c1a8:
    // 0x21c1a8: 0xc08710c  jal         func_21C430
    ctx->pc = 0x21C1A8u;
    SET_GPR_U32(ctx, 31, 0x21C1B0u);
    ctx->pc = 0x21C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C430u, 0x21C1A8u, 0x21C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1B0u;
label_21c1b0:
    // 0x21c1b0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x21C1B0u;
    {
        const bool branch_taken_0x21c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c1b0) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C1B8u;
    // 0x21c1b8: 0x8f8892d0  lw          $t0, -0x6D30($gp)
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
    // 0x21c1bc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x21c1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x21c1c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x21c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x21c1c4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x21c1c8: 0x24c63b82  addiu       $a2, $a2, 0x3B82
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15234));
    // 0x21c1cc: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c1d0: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x21c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x21c1d4: 0x24633b84  addiu       $v1, $v1, 0x3B84
    ctx->pc = 0x21c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15236));
    // 0x21c1d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x21c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21c1dc: 0x24842470  addiu       $a0, $a0, 0x2470
    ctx->pc = 0x21c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    // 0x21c1e0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x21c1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x21c1e4: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21c1e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x21c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21c1ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x21c1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x21c1f0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21c1f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21c1f4: 0xa0262490  sb          $a2, 0x2490($at)
    ctx->pc = 0x21c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9360), (uint8_t)GPR_U32(ctx, 6));
    // 0x21c1f8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c1fc: 0xa0252491  sb          $a1, 0x2491($at)
    ctx->pc = 0x21c1fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x2F2491u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2491u, _value); } while (0);
    // 0x21c200: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21c200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c204: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c208: 0xa0232470  sb          $v1, 0x2470($at)
    ctx->pc = 0x21c208u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2F2470u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2470u, _value); } while (0);
    // 0x21c20c: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x21c20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x21c210: 0xc044ad0  jal         func_112B40
    ctx->pc = 0x21C210u;
    SET_GPR_U32(ctx, 31, 0x21C218u);
    ctx->pc = 0x21C214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C210u;
    // 0x21c214: 0xa0222471  sb          $v0, 0x2471($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 9329), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B40u, 0x21C210u, 0x21C218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C218u;
label_21c218:
    // 0x21c218: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x21c218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x21c21c: 0xc044dd4  jal         func_113750
    ctx->pc = 0x21C21Cu;
    SET_GPR_U32(ctx, 31, 0x21C224u);
    ctx->pc = 0x21C220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C21Cu;
    // 0x21c220: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113750u, 0x21C21Cu, 0x21C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C224u;
label_21c224:
    // 0x21c224: 0xc0656b0  jal         func_195AC0
    ctx->pc = 0x21C224u;
    SET_GPR_U32(ctx, 31, 0x21C22Cu);
    ctx->pc = 0x195AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AC0u, 0x21C224u, 0x21C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C22Cu;
label_21c22c:
    // 0x21c22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c230: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21C230u;
    {
        const bool branch_taken_0x21c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C230u;
        // 0x21c234: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c230) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C238u;
label_21c238:
    // 0x21c238: 0xc08710c  jal         func_21C430
    ctx->pc = 0x21C238u;
    SET_GPR_U32(ctx, 31, 0x21C240u);
    ctx->pc = 0x21C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C430u, 0x21C238u, 0x21C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C240u;
label_21c240:
    // 0x21c240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C240u;
    {
        const bool branch_taken_0x21c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c240) {
            ctx->pc = 0x21C258u;
            goto label_21c258;
        }
    }
    ctx->pc = 0x21C248u;
    // 0x21c248: 0xc041478  jal         func_1051E0
    ctx->pc = 0x21C248u;
    SET_GPR_U32(ctx, 31, 0x21C250u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x21C248u, 0x21C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C250u;
label_21c250:
    // 0x21c250: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21C250u;
    {
        const bool branch_taken_0x21c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c250) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C258u;
label_21c258:
    // 0x21c258: 0xc0414f8  jal         func_1053E0
    ctx->pc = 0x21C258u;
    SET_GPR_U32(ctx, 31, 0x21C260u);
    ctx->pc = 0x1053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053E0u, 0x21C258u, 0x21C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C260u;
label_21c260:
    // 0x21c260: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21C260u;
    {
        const bool branch_taken_0x21c260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C260u;
        // 0x21c264: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c260) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C268u;
    // 0x21c268: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x21C268u;
    {
        const bool branch_taken_0x21c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C268u;
        // 0x21c26c: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c268) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C270u;
label_21c270:
    // 0x21c270: 0xc0871f8  jal         func_21C7E0
    ctx->pc = 0x21C270u;
    SET_GPR_U32(ctx, 31, 0x21C278u);
    ctx->pc = 0x21C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7E0u, 0x21C270u, 0x21C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C278u;
label_21c278:
    // 0x21c278: 0x8f8292d0  lw          $v0, -0x6D30($gp)
    ctx->pc = 0x21c278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
    // 0x21c27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c280: 0xc08710c  jal         func_21C430
    ctx->pc = 0x21C280u;
    SET_GPR_U32(ctx, 31, 0x21C288u);
    ctx->pc = 0x21C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C280u;
    // 0x21c284: 0xaf8292c8  sw          $v0, -0x6D38($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C430u, 0x21C280u, 0x21C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C288u;
label_21c288:
    // 0x21c288: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21C288u;
    {
        const bool branch_taken_0x21c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C288u;
        // 0x21c28c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c288) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C290u;
    // 0x21c290: 0xaf8092c4  sw          $zero, -0x6D3C($gp)
    ctx->pc = 0x21c290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939332), GPR_U32(ctx, 0));
    // 0x21c294: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x21C294u;
    {
        const bool branch_taken_0x21c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C294u;
        // 0x21c298: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c294) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C29Cu;
label_21c29c:
    // 0x21c29c: 0xc08710c  jal         func_21C430
    ctx->pc = 0x21C29Cu;
    SET_GPR_U32(ctx, 31, 0x21C2A4u);
    ctx->pc = 0x21C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C430u, 0x21C29Cu, 0x21C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2A4u;
label_21c2a4:
    // 0x21c2a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21C2A4u;
    {
        const bool branch_taken_0x21c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c2a4) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2ACu;
    // 0x21c2ac: 0xc087138  jal         func_21C4E0
    ctx->pc = 0x21C2ACu;
    SET_GPR_U32(ctx, 31, 0x21C2B4u);
    ctx->pc = 0x21C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C4E0u, 0x21C2ACu, 0x21C2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2B4u;
label_21c2b4:
    // 0x21c2b4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21C2B4u;
    {
        const bool branch_taken_0x21c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2b4) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2BCu;
label_21c2bc:
    // 0x21c2bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x21c2c0: 0x90238ea2  lbu         $v1, -0x715E($at)
    ctx->pc = 0x21c2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x588EA2u));
    // 0x21c2c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C2C4u;
    {
        const bool branch_taken_0x21c2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2C4u;
        // 0x21c2c8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2c4) {
            ctx->pc = 0x21C2DCu;
            goto label_21c2dc;
        }
    }
    ctx->pc = 0x21C2CCu;
    // 0x21c2cc: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x21c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x21c2d0: 0xc0452cc  jal         func_114B30
    ctx->pc = 0x21C2D0u;
    SET_GPR_U32(ctx, 31, 0x21C2D8u);
    ctx->pc = 0x21C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2D0u;
    // 0x21c2d4: 0x24848d00  addiu       $a0, $a0, -0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B30u, 0x21C2D0u, 0x21C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2D8u;
label_21c2d8:
    // 0x21c2d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21c2dc:
    // 0x21c2dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21C2DCu;
    {
        const bool branch_taken_0x21c2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2DCu;
        // 0x21c2e0: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2dc) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C2E4u;
label_21c2e4:
    // 0x21c2e4: 0xc044a04  jal         func_112810
    ctx->pc = 0x21C2E4u;
    SET_GPR_U32(ctx, 31, 0x21C2ECu);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x21C2E4u, 0x21C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2ECu;
label_21c2ec:
    // 0x21c2ec: 0x8f8392d0  lw          $v1, -0x6D30($gp)
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939344)));
    // 0x21c2f0: 0x24040195  addiu       $a0, $zero, 0x195
    ctx->pc = 0x21c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
    // 0x21c2f4: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x21c2f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x21c2f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C2F8u;
    {
        const bool branch_taken_0x21c2f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2F8u;
        // 0x21c2fc: 0xaf8492c8  sw          $a0, -0x6D38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2f8) {
            ctx->pc = 0x21C30Cu;
            goto label_21c30c;
        }
    }
    ctx->pc = 0x21C300u;
    // 0x21c300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C304u;
    {
        const bool branch_taken_0x21c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C304u;
        // 0x21c308: 0xaf8392cc  sw          $v1, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c304) {
            ctx->pc = 0x21C310u;
            goto label_21c310;
        }
    }
    ctx->pc = 0x21C30Cu;
label_21c30c:
    // 0x21c30c: 0xaf8092cc  sw          $zero, -0x6D34($gp)
    ctx->pc = 0x21c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 0));
label_21c310:
    // 0x21c310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x21c314u;
}
