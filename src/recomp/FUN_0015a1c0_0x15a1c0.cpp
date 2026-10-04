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

// Function: FUN_0015a1c0
// Address: 0x15a1c0 - 0x15a290
void FUN_0015a1c0_0x15a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015a1c0_0x15a1c0");
#endif

    switch (ctx->pc) {
        case 0x15a210u: goto label_15a210;
        default: break;
    }

    ctx->pc = 0x15a1c0u;

    // 0x15a1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a1c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15a1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a1d4: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x15a1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x15a1d8: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x15a1d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x15a1dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A1DCu;
    {
        const bool branch_taken_0x15a1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1DCu;
        // 0x15a1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1dc) {
            ctx->pc = 0x15A1ECu;
            goto label_15a1ec;
        }
    }
    ctx->pc = 0x15A1E4u;
    // 0x15a1e4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1E4u;
        // 0x15a1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A28Cu;
            goto label_15a28c;
        }
    }
    ctx->pc = 0x15A1ECu;
label_15a1ec:
    // 0x15a1ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1f0: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x15a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x15a1f4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x15a1f8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x15a1fc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x15a200: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15a204: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15a208: 0xc090e44  jal         func_243910
    ctx->pc = 0x15A208u;
    SET_GPR_U32(ctx, 31, 0x15A210u);
    ctx->pc = 0x15A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A208u;
    // 0x15a20c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243910u, 0x15A208u, 0x15A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A210u;
label_15a210:
    // 0x15a210: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15a214: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15a218: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x15a21c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x15a21cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15a220: 0x41880a  movz        $s1, $v0, $at
    ctx->pc = 0x15a220u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x15a224: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15a224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15a228: 0x1880a  movz        $s1, $zero, $at
    ctx->pc = 0x15a228u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x15a22c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A22Cu;
    {
        const bool branch_taken_0x15a22c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x15A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A22Cu;
        // 0x15a230: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a22c) {
            ctx->pc = 0x15A23Cu;
            goto label_15a23c;
        }
    }
    ctx->pc = 0x15A234u;
    // 0x15a234: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15a238: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15a238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15a23c:
    // 0x15a23c: 0x92050076  lbu         $a1, 0x76($s0)
    ctx->pc = 0x15a23cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
    // 0x15a240: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x15a244: 0x92030078  lbu         $v1, 0x78($s0)
    ctx->pc = 0x15a244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x15a248: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x15a248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
    // 0x15a24c: 0x92040077  lbu         $a0, 0x77($s0)
    ctx->pc = 0x15a24cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
    // 0x15a250: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x15a254: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x15a254u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15a258: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15a25c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15a260: 0x1012  mflo        $v0
    ctx->pc = 0x15a260u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15a264: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15a264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15a268: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x15a268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x15a26c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A26Cu;
    {
        const bool branch_taken_0x15a26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a26c) {
            ctx->pc = 0x15A27Cu;
            goto label_15a27c;
        }
    }
    ctx->pc = 0x15A274u;
    // 0x15a274: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15A274u;
    {
        const bool branch_taken_0x15a274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A274u;
        // 0x15a278: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a274) {
            ctx->pc = 0x15A288u;
            goto label_15a288;
        }
    }
    ctx->pc = 0x15A27Cu;
label_15a27c:
    // 0x15a27c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x15a280: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x15a284: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15a288:
    // 0x15a288: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x15a288u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_15a28c:
    // 0x15a28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x15a290u;
}
