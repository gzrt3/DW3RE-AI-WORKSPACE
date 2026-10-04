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

// Function: entry_002076b8
// Address: 0x2076b8 - 0x2077f0
void entry_002076b8_0x2076b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002076b8_0x2076b8");
#endif

    switch (ctx->pc) {
        case 0x207758u: goto label_207758;
        default: break;
    }

    ctx->pc = 0x2076b8u;

    // 0x2076b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2076b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2076bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2076bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2076c0: 0x8f8690fc  lw          $a2, -0x6F04($gp)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2076c4: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x2076c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
    // 0x2076c8: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x2076cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2076ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2076d0: 0x34454dd3  ori         $a1, $v0, 0x4DD3
    ctx->pc = 0x2076d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x2076d4: 0x24635370  addiu       $v1, $v1, 0x5370
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21360));
    // 0x2076d8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2076dc: 0x3448e300  ori         $t0, $v0, 0xE300
    ctx->pc = 0x2076dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58112);
    // 0x2076e0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x2076e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x2076e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2076e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2076e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2076ec: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2076f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2076f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2076f8: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x2076f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2076fc: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2076fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207700: 0x0  nop
    ctx->pc = 0x207700u;
    // NOP
    // 0x207704: 0x1010  mfhi        $v0
    ctx->pc = 0x207704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207708: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20770c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x207710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x207710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x207714: 0x92050066  lbu         $a1, 0x66($s0)
    ctx->pc = 0x207714u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x207718: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x20771c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x207720: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x207720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207724: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207724u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x207728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x207728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20772c: 0xac23e2fc  sw          $v1, -0x1D04($at)
    ctx->pc = 0x20772cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959868), GPR_U32(ctx, 3));
    // 0x207730: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207734: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207738: 0x92030077  lbu         $v1, 0x77($s0)
    ctx->pc = 0x207738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x20773c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x207740: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x207740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x207744: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207748: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x20774c: 0x8c25e300  lw          $a1, -0x1D00($at)
    ctx->pc = 0x20774cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959872)));
    // 0x207750: 0xc056968  jal         func_15A5A0
    ctx->pc = 0x207750u;
    SET_GPR_U32(ctx, 31, 0x207758u);
    ctx->pc = 0x207754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207750u;
    // 0x207754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A5A0u, 0x207750u, 0x207758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207758u;
label_207758:
    // 0x207758: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x20775c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x20775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207760: 0x92040069  lbu         $a0, 0x69($s0)
    ctx->pc = 0x207760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
    // 0x207764: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207768: 0xac24e304  sw          $a0, -0x1CFC($at)
    ctx->pc = 0x207768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959876), GPR_U32(ctx, 4));
    // 0x20776c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207770: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207774: 0x92040071  lbu         $a0, 0x71($s0)
    ctx->pc = 0x207774u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x207778: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x207778u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x20777c: 0xac24e314  sw          $a0, -0x1CEC($at)
    ctx->pc = 0x20777cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959892), GPR_U32(ctx, 4));
    // 0x207780: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207784: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x207788: 0x92040073  lbu         $a0, 0x73($s0)
    ctx->pc = 0x207788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
    // 0x20778c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x207790: 0xac24e318  sw          $a0, -0x1CE8($at)
    ctx->pc = 0x207790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959896), GPR_U32(ctx, 4));
    // 0x207794: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207798: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x207798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x20779c: 0x92040074  lbu         $a0, 0x74($s0)
    ctx->pc = 0x20779cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2077a0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077a4: 0xac24e31c  sw          $a0, -0x1CE4($at)
    ctx->pc = 0x2077a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959900), GPR_U32(ctx, 4));
    // 0x2077a8: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2077ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2077b0: 0x92040075  lbu         $a0, 0x75($s0)
    ctx->pc = 0x2077b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 117)));
    // 0x2077b4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077b8: 0xac24e320  sw          $a0, -0x1CE0($at)
    ctx->pc = 0x2077b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959904), GPR_U32(ctx, 4));
    // 0x2077bc: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x2077bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2077c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x2077c4: 0x9204006b  lbu         $a0, 0x6B($s0)
    ctx->pc = 0x2077c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x2077c8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2077cc: 0xac24e308  sw          $a0, -0x1CF8($at)
    ctx->pc = 0x2077ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959880), GPR_U32(ctx, 4));
    // 0x2077d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2077d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2077d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2077d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2077d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2077d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2077dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2077DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2077E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077DCu;
        // 0x2077e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2077DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2077E4u;
    // 0x2077e4: 0x0  nop
    ctx->pc = 0x2077e4u;
    // NOP
    // 0x2077e8: 0x0  nop
    ctx->pc = 0x2077e8u;
    // NOP
    // 0x2077ec: 0x0  nop
    ctx->pc = 0x2077ecu;
    // NOP
    ctx->pc = 0x2077f0u;
}
