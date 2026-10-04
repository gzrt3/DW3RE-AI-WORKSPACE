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

// Function: entry_0014041c
// Address: 0x14041c - 0x14053c
void entry_0014041c_0x14041c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014041c_0x14041c");
#endif

    switch (ctx->pc) {
        case 0x140520u: goto label_140520;
        default: break;
    }

    ctx->pc = 0x14041cu;

    // 0x14041c: 0x10820047  beq         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x14041Cu;
    {
        const bool branch_taken_0x14041c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x14041c) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140424u;
    // 0x140424: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x140424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140428: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x140428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x14042c: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x14042Cu;
    {
        const bool branch_taken_0x14042c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14042c) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140434u;
    // 0x140434: 0x86040222  lh          $a0, 0x222($s0)
    ctx->pc = 0x140434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x140438: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x140438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x14043c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x14043cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x140440: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x140440u;
    {
        const bool branch_taken_0x140440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140440) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140448u;
    // 0x140448: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x140448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14044c: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x14044Cu;
    {
        const bool branch_taken_0x14044c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14044c) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x140454u;
    // 0x140454: 0x8607028a  lh          $a3, 0x28A($s0)
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 650)));
    // 0x140458: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x140458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x14045c: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x14045cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x140460: 0x86030288  lh          $v1, 0x288($s0)
    ctx->pc = 0x140460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x140464: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x140464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140468: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x140468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14046c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x140470: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x140474: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x140474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x140478: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x140478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14047c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140480: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x140480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x140484: 0x0  nop
    ctx->pc = 0x140484u;
    // NOP
    // 0x140488: 0x0  nop
    ctx->pc = 0x140488u;
    // NOP
    // 0x14048c: 0x1810  mfhi        $v1
    ctx->pc = 0x14048cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x140490: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x140490u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x140494: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x140494u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x140498: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x140498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14049c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1404a0: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x1404a0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1404a4: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x1404a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1404a8: 0x0  nop
    ctx->pc = 0x1404a8u;
    // NOP
    // 0x1404ac: 0x1010  mfhi        $v0
    ctx->pc = 0x1404acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1404b0: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x1404b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1404b4: 0xa6020288  sh          $v0, 0x288($s0)
    ctx->pc = 0x1404b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 648), (uint16_t)GPR_U32(ctx, 2));
    // 0x1404b8: 0x86040252  lh          $a0, 0x252($s0)
    ctx->pc = 0x1404b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1404bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1404bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1404c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1404c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1404c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1404c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1404c8: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1404c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1404cc: 0x81100a  movz        $v0, $a0, $at
    ctx->pc = 0x1404ccu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1404d0: 0xa6020222  sh          $v0, 0x222($s0)
    ctx->pc = 0x1404d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x1404d4: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1404d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1404d8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1404d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1404dc: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1404DCu;
    {
        const bool branch_taken_0x1404dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1404dc) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x1404E4u;
    // 0x1404e4: 0x86030222  lh          $v1, 0x222($s0)
    ctx->pc = 0x1404e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x1404e8: 0x86020252  lh          $v0, 0x252($s0)
    ctx->pc = 0x1404e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x1404ec: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1404ECu;
    {
        const bool branch_taken_0x1404ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1404ec) {
            ctx->pc = 0x14053Cu;
            return;
        }
    }
    ctx->pc = 0x1404F4u;
    // 0x1404f4: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x1404f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
    // 0x1404f8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1404f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1404fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1404fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x140500: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x140500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x140504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140504u;
    {
        const bool branch_taken_0x140504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140504u;
        // 0x140508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140504) {
            ctx->pc = 0x140518u;
            goto label_140518;
        }
    }
    ctx->pc = 0x14050Cu;
    // 0x14050c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14050Cu;
    {
        const bool branch_taken_0x14050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14050Cu;
        // 0x140510: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14050c) {
            ctx->pc = 0x14052Cu;
            goto label_14052c;
        }
    }
    ctx->pc = 0x140514u;
    // 0x140514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_140518:
    // 0x140518: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x140518u;
    SET_GPR_U32(ctx, 31, 0x140520u);
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x140518u, 0x140520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140520u;
label_140520:
    // 0x140520: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x140520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140524: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x140524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x140528: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x140528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_14052c:
    // 0x14052c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x14052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x140530: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x140530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x140534: 0xc05ae1c  jal         func_16B870
    ctx->pc = 0x140534u;
    SET_GPR_U32(ctx, 31, 0x14053Cu);
    ctx->pc = 0x140538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140534u;
    // 0x140538: 0x26070150  addiu       $a3, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x140534u, 0x14053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14053Cu;
}
