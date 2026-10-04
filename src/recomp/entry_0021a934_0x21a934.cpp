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

// Function: entry_0021a934
// Address: 0x21a934 - 0x21aa68
void entry_0021a934_0x21a934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a934_0x21a934");
#endif

    switch (ctx->pc) {
        case 0x21a950u: goto label_21a950;
        case 0x21a958u: goto label_21a958;
        case 0x21a9f8u: goto label_21a9f8;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aa44u: goto label_21aa44;
        case 0x21aa4cu: goto label_21aa4c;
        case 0x21aa54u: goto label_21aa54;
        default: break;
    }

    ctx->pc = 0x21a934u;

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
            return;
        }
    }
    ctx->pc = 0x21AA60u;
    // 0x21aa60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21aa64: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
    ctx->pc = 0x21aa68u;
}
