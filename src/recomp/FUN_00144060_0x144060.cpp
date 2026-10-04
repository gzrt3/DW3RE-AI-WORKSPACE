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

// Function: FUN_00144060
// Address: 0x144060 - 0x144138
void FUN_00144060_0x144060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144060_0x144060");
#endif

    switch (ctx->pc) {
        case 0x144114u: goto label_144114;
        case 0x144130u: goto label_144130;
        default: break;
    }

    ctx->pc = 0x144060u;

    // 0x144060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14406c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144070: 0x84860222  lh          $a2, 0x222($a0)
    ctx->pc = 0x144070u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 546)));
    // 0x144074: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x144078: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x144078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14407c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x14407Cu;
    {
        const bool branch_taken_0x14407c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14407Cu;
        // 0x144080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14407c) {
            ctx->pc = 0x144134u;
            goto label_144134;
        }
    }
    ctx->pc = 0x144084u;
    // 0x144084: 0x8606028a  lh          $a2, 0x28A($s0)
    ctx->pc = 0x144084u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 650)));
    // 0x144088: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x14408c: 0x86070288  lh          $a3, 0x288($s0)
    ctx->pc = 0x14408cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x144090: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x144090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x144094: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x144098: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x144098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14409c: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1440a0: 0xc4001a  div         $zero, $a2, $a0
    ctx->pc = 0x1440a0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1440a4: 0x0  nop
    ctx->pc = 0x1440a4u;
    // NOP
    // 0x1440a8: 0x0  nop
    ctx->pc = 0x1440a8u;
    // NOP
    // 0x1440ac: 0x2810  mfhi        $a1
    ctx->pc = 0x1440acu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1440b0: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x1440b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1440b4: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x1440b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1440b8: 0xa6050288  sh          $a1, 0x288($s0)
    ctx->pc = 0x1440b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 5));
    // 0x1440bc: 0x86050222  lh          $a1, 0x222($s0)
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1440c0: 0x1810  mfhi        $v1
    ctx->pc = 0x1440c0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1440c4: 0x86060252  lh          $a2, 0x252($s0)
    ctx->pc = 0x1440c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1440c8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1440c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1440cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1440ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1440d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1440d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1440d4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1440d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1440d8: 0xc1180a  movz        $v1, $a2, $at
    ctx->pc = 0x1440d8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x1440dc: 0xa6030222  sh          $v1, 0x222($s0)
    ctx->pc = 0x1440dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x1440e0: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1440e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1440e4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1440e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1440e8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1440E8u;
    {
        const bool branch_taken_0x1440e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1440e8) {
            ctx->pc = 0x144134u;
            goto label_144134;
        }
    }
    ctx->pc = 0x1440F0u;
    // 0x1440f0: 0x92030232  lbu         $v1, 0x232($s0)
    ctx->pc = 0x1440f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x1440f4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1440F4u;
    {
        const bool branch_taken_0x1440f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1440f4) {
            ctx->pc = 0x144134u;
            goto label_144134;
        }
    }
    ctx->pc = 0x1440FCu;
    // 0x1440fc: 0x86040222  lh          $a0, 0x222($s0)
    ctx->pc = 0x1440fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x144100: 0x86030252  lh          $v1, 0x252($s0)
    ctx->pc = 0x144100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x144104: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x144104u;
    {
        const bool branch_taken_0x144104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x144104) {
            ctx->pc = 0x144134u;
            goto label_144134;
        }
    }
    ctx->pc = 0x14410Cu;
    // 0x14410c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14410Cu;
    SET_GPR_U32(ctx, 31, 0x144114u);
    ctx->pc = 0x144110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14410Cu;
    // 0x144110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14410Cu, 0x144114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144114u;
label_144114:
    // 0x144114: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144118: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x144118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14411c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x14411cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x144120: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x144124: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x144124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x144128: 0xc05ae1c  jal         func_16B870
    ctx->pc = 0x144128u;
    SET_GPR_U32(ctx, 31, 0x144130u);
    ctx->pc = 0x14412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144128u;
    // 0x14412c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x144128u, 0x144130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144130u;
label_144130:
    // 0x144130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144134:
    // 0x144134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x144138u;
}
