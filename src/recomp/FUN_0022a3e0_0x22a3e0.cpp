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

// Function: FUN_0022a3e0
// Address: 0x22a3e0 - 0x22a4d4
void FUN_0022a3e0_0x22a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022a3e0_0x22a3e0");
#endif

    switch (ctx->pc) {
        case 0x22a450u: goto label_22a450;
        case 0x22a484u: goto label_22a484;
        case 0x22a48cu: goto label_22a48c;
        default: break;
    }

    ctx->pc = 0x22a3e0u;

    // 0x22a3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22a3e4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x22a3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a3ec: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x22a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x22a3f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a3f8: 0x902325a9  lbu         $v1, 0x25A9($at)
    ctx->pc = 0x22a3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x2F25A9u));
    // 0x22a3fc: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x22a3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x22a400: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
    ctx->pc = 0x22A400u;
    {
        const bool branch_taken_0x22a400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A400u;
        // 0x22a404: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a400) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A408u;
    // 0x22a408: 0x90850039  lbu         $a1, 0x39($a0)
    ctx->pc = 0x22a408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x22a40c: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x22a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x22a410: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22a414: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22a418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x22a41c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x22a41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22a420: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x22a420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x22a424: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A42Cu;
    // 0x22a42c: 0x9203002f  lbu         $v1, 0x2F($s0)
    ctx->pc = 0x22a42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x22a430: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x22a430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x22a434: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x22A434u;
    {
        const bool branch_taken_0x22a434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a434) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A43Cu;
    // 0x22a43c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a440: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x22A440u;
    {
        const bool branch_taken_0x22a440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a440) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A448u;
    // 0x22a448: 0xc07aec0  jal         func_1EBB00
    ctx->pc = 0x22A448u;
    SET_GPR_U32(ctx, 31, 0x22A450u);
    ctx->pc = 0x1EBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB00u, 0x22A448u, 0x22A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22A450u;
    {
        const bool branch_taken_0x22a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a450) {
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A458u;
    // 0x22a458: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x22a458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22a45c: 0x3c034743  lui         $v1, 0x4743
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18243 << 16));
    // 0x22a460: 0x34635a00  ori         $v1, $v1, 0x5A00
    ctx->pc = 0x22a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23040);
    // 0x22a464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a468: 0x0  nop
    ctx->pc = 0x22a468u;
    // NOP
    // 0x22a46c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a470: 0x0  nop
    ctx->pc = 0x22a470u;
    // NOP
    // 0x22a474: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x22A474u;
    {
        const bool branch_taken_0x22a474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a474) {
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A47Cu;
    // 0x22a47c: 0xc07aec8  jal         func_1EBB20
    ctx->pc = 0x22A47Cu;
    SET_GPR_U32(ctx, 31, 0x22A484u);
    ctx->pc = 0x1EBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB20u, 0x22A47Cu, 0x22A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0xc0872ec  jal         func_21CBB0
    ctx->pc = 0x22A484u;
    SET_GPR_U32(ctx, 31, 0x22A48Cu);
    ctx->pc = 0x22A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A484u;
    // 0x22a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CBB0u, 0x22A484u, 0x22A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A48Cu;
label_22a48c:
    // 0x22a48c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a490: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A280u));
    // 0x22a494: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A49Cu;
    // 0x22a49c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22a4a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4a4: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x22a4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x22a4a8: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x22a4a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A280u, _value); } while (0);
    // 0x22a4ac: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x22a4b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4b4: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x22a4b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A284u, _value); } while (0);
    // 0x22a4b8: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x22a4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x22a4bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4c0: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x22a4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A288u, _value); } while (0);
    // 0x22a4c4: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x22a4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x22a4c8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x22a4cc: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x22a4ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A28Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A28Cu, _value); } while (0);
label_22a4d0:
    // 0x22a4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x22a4d4u;
}
