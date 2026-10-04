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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part525(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29b628u: goto label_29b628;
        case 0x29b62cu: goto label_29b62c;
        case 0x29b630u: goto label_29b630;
        case 0x29b634u: goto label_29b634;
        case 0x29b638u: goto label_29b638;
        case 0x29b63cu: goto label_29b63c;
        case 0x29b640u: goto label_29b640;
        case 0x29b644u: goto label_29b644;
        case 0x29b648u: goto label_29b648;
        case 0x29b64cu: goto label_29b64c;
        case 0x29b650u: goto label_29b650;
        case 0x29b654u: goto label_29b654;
        case 0x29b658u: goto label_29b658;
        case 0x29b65cu: goto label_29b65c;
        case 0x29b660u: goto label_29b660;
        case 0x29b664u: goto label_29b664;
        case 0x29b668u: goto label_29b668;
        case 0x29b66cu: goto label_29b66c;
        case 0x29b670u: goto label_29b670;
        case 0x29b674u: goto label_29b674;
        case 0x29b678u: goto label_29b678;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b680u: goto label_29b680;
        case 0x29b684u: goto label_29b684;
        case 0x29b688u: goto label_29b688;
        case 0x29b68cu: goto label_29b68c;
        case 0x29b690u: goto label_29b690;
        case 0x29b694u: goto label_29b694;
        case 0x29b698u: goto label_29b698;
        case 0x29b69cu: goto label_29b69c;
        case 0x29b6a0u: goto label_29b6a0;
        case 0x29b6a4u: goto label_29b6a4;
        case 0x29b6a8u: goto label_29b6a8;
        case 0x29b6acu: goto label_29b6ac;
        case 0x29b6b0u: goto label_29b6b0;
        case 0x29b6b4u: goto label_29b6b4;
        case 0x29b6b8u: goto label_29b6b8;
        case 0x29b6bcu: goto label_29b6bc;
        case 0x29b6c0u: goto label_29b6c0;
        case 0x29b6c4u: goto label_29b6c4;
        case 0x29b6c8u: goto label_29b6c8;
        case 0x29b6ccu: goto label_29b6cc;
        case 0x29b6d0u: goto label_29b6d0;
        case 0x29b6d4u: goto label_29b6d4;
        case 0x29b6d8u: goto label_29b6d8;
        case 0x29b6dcu: goto label_29b6dc;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6e4u: goto label_29b6e4;
        case 0x29b6e8u: goto label_29b6e8;
        case 0x29b6ecu: goto label_29b6ec;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b6f4u: goto label_29b6f4;
        case 0x29b6f8u: goto label_29b6f8;
        case 0x29b6fcu: goto label_29b6fc;
        case 0x29b700u: goto label_29b700;
        case 0x29b704u: goto label_29b704;
        case 0x29b708u: goto label_29b708;
        case 0x29b70cu: goto label_29b70c;
        case 0x29b710u: goto label_29b710;
        case 0x29b714u: goto label_29b714;
        case 0x29b718u: goto label_29b718;
        case 0x29b71cu: goto label_29b71c;
        case 0x29b720u: goto label_29b720;
        case 0x29b724u: goto label_29b724;
        case 0x29b728u: goto label_29b728;
        case 0x29b72cu: goto label_29b72c;
        case 0x29b730u: goto label_29b730;
        case 0x29b734u: goto label_29b734;
        case 0x29b738u: goto label_29b738;
        case 0x29b73cu: goto label_29b73c;
        case 0x29b740u: goto label_29b740;
        case 0x29b744u: goto label_29b744;
        case 0x29b748u: goto label_29b748;
        case 0x29b74cu: goto label_29b74c;
        case 0x29b750u: goto label_29b750;
        case 0x29b754u: goto label_29b754;
        case 0x29b758u: goto label_29b758;
        case 0x29b75cu: goto label_29b75c;
        case 0x29b760u: goto label_29b760;
        case 0x29b764u: goto label_29b764;
        case 0x29b768u: goto label_29b768;
        case 0x29b76cu: goto label_29b76c;
        case 0x29b770u: goto label_29b770;
        case 0x29b774u: goto label_29b774;
        case 0x29b778u: goto label_29b778;
        case 0x29b77cu: goto label_29b77c;
        case 0x29b780u: goto label_29b780;
        case 0x29b784u: goto label_29b784;
        case 0x29b788u: goto label_29b788;
        case 0x29b78cu: goto label_29b78c;
        case 0x29b790u: goto label_29b790;
        case 0x29b794u: goto label_29b794;
        case 0x29b798u: goto label_29b798;
        case 0x29b79cu: goto label_29b79c;
        case 0x29b7a0u: goto label_29b7a0;
        case 0x29b7a4u: goto label_29b7a4;
        case 0x29b7a8u: goto label_29b7a8;
        case 0x29b7acu: goto label_29b7ac;
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7b4u: goto label_29b7b4;
        case 0x29b7b8u: goto label_29b7b8;
        case 0x29b7bcu: goto label_29b7bc;
        case 0x29b7c0u: goto label_29b7c0;
        case 0x29b7c4u: goto label_29b7c4;
        case 0x29b7c8u: goto label_29b7c8;
        case 0x29b7ccu: goto label_29b7cc;
        case 0x29b7d0u: goto label_29b7d0;
        case 0x29b7d4u: goto label_29b7d4;
        case 0x29b7d8u: goto label_29b7d8;
        case 0x29b7dcu: goto label_29b7dc;
        case 0x29b7e0u: goto label_29b7e0;
        case 0x29b7e4u: goto label_29b7e4;
        case 0x29b7e8u: goto label_29b7e8;
        case 0x29b7ecu: goto label_29b7ec;
        case 0x29b7f0u: goto label_29b7f0;
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b7f8u: goto label_29b7f8;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b800u: goto label_29b800;
        case 0x29b804u: goto label_29b804;
        case 0x29b808u: goto label_29b808;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b810u: goto label_29b810;
        case 0x29b814u: goto label_29b814;
        case 0x29b818u: goto label_29b818;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b820u: goto label_29b820;
        case 0x29b824u: goto label_29b824;
        case 0x29b828u: goto label_29b828;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b830u: goto label_29b830;
        case 0x29b834u: goto label_29b834;
        case 0x29b838u: goto label_29b838;
        case 0x29b83cu: goto label_29b83c;
        case 0x29b840u: goto label_29b840;
        case 0x29b844u: goto label_29b844;
        case 0x29b848u: goto label_29b848;
        case 0x29b84cu: goto label_29b84c;
        case 0x29b850u: goto label_29b850;
        case 0x29b854u: goto label_29b854;
        case 0x29b858u: goto label_29b858;
        case 0x29b85cu: goto label_29b85c;
        case 0x29b860u: goto label_29b860;
        case 0x29b864u: goto label_29b864;
        case 0x29b868u: goto label_29b868;
        case 0x29b86cu: goto label_29b86c;
        default: return;
    }

label_29b628:
    // 0x29b628: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b628u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b62c:
    // 0x29b62c: 0x0  nop
    ctx->pc = 0x29b62cu;
    // NOP
label_29b630:
    // 0x29b630: 0x34bba  dsrl        $t1, $v1, 14
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 14);
label_29b634:
    // 0x29b634: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b634u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B634 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b638:
    // 0x29b638: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b63c:
    // 0x29b63c: 0x0  nop
    ctx->pc = 0x29b63cu;
    // NOP
label_29b640:
    // 0x29b640: 0x34bbb  dsra        $t1, $v1, 14
    ctx->pc = 0x29b640u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 14);
label_29b644:
    // 0x29b644: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b644u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b648:
    // 0x29b648: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b648u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b64c:
    // 0x29b64c: 0x0  nop
    ctx->pc = 0x29b64cu;
    // NOP
label_29b650:
    // 0x29b650: 0x34bbf  dsra32      $t1, $v1, 14
    ctx->pc = 0x29b650u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 14));
label_29b654:
    // 0x29b654: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b658:
    // 0x29b658: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b658u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b65c:
    // 0x29b65c: 0x0  nop
    ctx->pc = 0x29b65cu;
    // NOP
label_29b660:
    // 0x29b660: 0x34bc3  sra         $t1, $v1, 15
    ctx->pc = 0x29b660u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 15));
label_29b664:
    // 0x29b664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b664u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b668:
    // 0x29b668: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b668u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b66c:
    // 0x29b66c: 0x0  nop
    ctx->pc = 0x29b66cu;
    // NOP
label_29b670:
    // 0x29b670: 0x34bc4  .word       0x00034BC4                   # sllv        $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b674:
    // 0x29b674: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b674u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B674 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b678:
    // 0x29b678: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b67c:
    // 0x29b67c: 0x0  nop
    ctx->pc = 0x29b67cu;
    // NOP
label_29b680:
    // 0x29b680: 0x34bc5  .word       0x00034BC5                   # INVALID     $zero, $v1, 0x4BC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B680 raw=0x00034BC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b684:
    // 0x29b684: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b688:
    // 0x29b688: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b688u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b68c:
    // 0x29b68c: 0x0  nop
    ctx->pc = 0x29b68cu;
    // NOP
label_29b690:
    // 0x29b690: 0x34bc9  .word       0x00034BC9                   # jalr        $t1, $zero # 000303C0 <InstrIdType: CPU_SPECIAL>
label_29b694:
    if (ctx->pc == 0x29B694u) {
        ctx->pc = 0x29B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B690u;
        // 0x29b694: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B698u;
        goto label_29b698;
    }
    ctx->pc = 0x29B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B698u);
        ctx->pc = 0x29B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B690u;
        // 0x29b694: 0x4  sllv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B690u, 0x29B698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B698u;
label_29b698:
    // 0x29b698: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b698u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b69c:
    // 0x29b69c: 0x0  nop
    ctx->pc = 0x29b69cu;
    // NOP
label_29b6a0:
    // 0x29b6a0: 0x34bcd  break       3, 303
    ctx->pc = 0x29b6a0u;
    runtime->handleBreak(rdram, ctx);
label_29b6a4:
    // 0x29b6a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6a8:
    // 0x29b6a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6ac:
    // 0x29b6ac: 0x0  nop
    ctx->pc = 0x29b6acu;
    // NOP
label_29b6b0:
    // 0x29b6b0: 0x34bce  .word       0x00034BCE                   # INVALID     $zero, $v1, 0x4BCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29B6B0 raw=0x00034BCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6b4:
    // 0x29b6b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6b8:
    // 0x29b6b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6bc:
    // 0x29b6bc: 0x0  nop
    ctx->pc = 0x29b6bcu;
    // NOP
label_29b6c0:
    // 0x29b6c0: 0x34bcf  .word       0x00034BCF                   # sync # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b6c4:
    // 0x29b6c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b6c8:
    // 0x29b6c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b6cc:
    // 0x29b6cc: 0x0  nop
    ctx->pc = 0x29b6ccu;
    // NOP
label_29b6d0:
    // 0x29b6d0: 0x34bd3  .word       0x00034BD3                   # mtlo        $zero # 00034BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b6d4:
    // 0x29b6d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b6d8:
    // 0x29b6d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b6dc:
    // 0x29b6dc: 0x0  nop
    ctx->pc = 0x29b6dcu;
    // NOP
label_29b6e0:
    // 0x29b6e0: 0x34bd7  .word       0x00034BD7                   # dsrav       $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b6e4:
    // 0x29b6e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6e8:
    // 0x29b6e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6ec:
    // 0x29b6ec: 0x0  nop
    ctx->pc = 0x29b6ecu;
    // NOP
label_29b6f0:
    // 0x29b6f0: 0x34bd8  .word       0x00034BD8                   # mult        $t1, $zero, $v1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b6f4:
    // 0x29b6f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b6f8:
    // 0x29b6f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b6fc:
    // 0x29b6fc: 0x0  nop
    ctx->pc = 0x29b6fcu;
    // NOP
label_29b700:
    // 0x29b700: 0x34bd9  .word       0x00034BD9                   # multu       $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b700u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b704:
    // 0x29b704: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b708:
    // 0x29b708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b70c:
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
label_29b710:
    // 0x29b710: 0x34bdd  .word       0x00034BDD                   # dmultu      $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B710 raw=0x00034BDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b714:
    // 0x29b714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b718:
    // 0x29b718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b71c:
    // 0x29b71c: 0x0  nop
    ctx->pc = 0x29b71cu;
    // NOP
label_29b720:
    // 0x29b720: 0x34be1  .word       0x00034BE1                   # addu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b724:
    // 0x29b724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b724u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b728:
    // 0x29b728: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b72c:
    // 0x29b72c: 0x0  nop
    ctx->pc = 0x29b72cu;
    // NOP
label_29b730:
    // 0x29b730: 0x34be2  .word       0x00034BE2                   # neg         $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b730u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_29b734:
    // 0x29b734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b734u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B734 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b738:
    // 0x29b738: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b73c:
    // 0x29b73c: 0x0  nop
    ctx->pc = 0x29b73cu;
    // NOP
label_29b740:
    // 0x29b740: 0x34be3  .word       0x00034BE3                   # negu        $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b744:
    // 0x29b744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b748:
    // 0x29b748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b74c:
    // 0x29b74c: 0x0  nop
    ctx->pc = 0x29b74cu;
    // NOP
label_29b750:
    // 0x29b750: 0x34be7  .word       0x00034BE7                   # nor         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29b754:
    // 0x29b754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b758:
    // 0x29b758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b75c:
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
label_29b760:
    // 0x29b760: 0x34beb  .word       0x00034BEB                   # sltu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b760u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b764:
    // 0x29b764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b768:
    // 0x29b768: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b76c:
    // 0x29b76c: 0x0  nop
    ctx->pc = 0x29b76cu;
    // NOP
label_29b770:
    // 0x29b770: 0x34bec  .word       0x00034BEC                   # dadd        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b770u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29b774:
    // 0x29b774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b774u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B774 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b778:
    // 0x29b778: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b77c:
    // 0x29b77c: 0x0  nop
    ctx->pc = 0x29b77cu;
    // NOP
label_29b780:
    // 0x29b780: 0x34bed  .word       0x00034BED                   # daddu       $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b784:
    // 0x29b784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b788:
    // 0x29b788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b78c:
    // 0x29b78c: 0x0  nop
    ctx->pc = 0x29b78cu;
    // NOP
label_29b790:
    // 0x29b790: 0x34bf1  tgeu        $zero, $v1, 303
    ctx->pc = 0x29b790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b794:
    // 0x29b794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b798:
    // 0x29b798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b79c:
    // 0x29b79c: 0x0  nop
    ctx->pc = 0x29b79cu;
    // NOP
label_29b7a0:
    // 0x29b7a0: 0x34bf5  .word       0x00034BF5                   # INVALID     $zero, $v1, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B7A0 raw=0x00034BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7a4:
    // 0x29b7a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7a8:
    // 0x29b7a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ac:
    // 0x29b7ac: 0x0  nop
    ctx->pc = 0x29b7acu;
    // NOP
label_29b7b0:
    // 0x29b7b0: 0x34bf6  tne         $zero, $v1, 303
    ctx->pc = 0x29b7b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b7b4:
    // 0x29b7b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7b8:
    // 0x29b7b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7bc:
    // 0x29b7bc: 0x0  nop
    ctx->pc = 0x29b7bcu;
    // NOP
label_29b7c0:
    // 0x29b7c0: 0x34bf7  .word       0x00034BF7                   # INVALID     $zero, $v1, 0x4BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B7C0 raw=0x00034BF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7c4:
    // 0x29b7c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7c8:
    // 0x29b7c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7cc:
    // 0x29b7cc: 0x0  nop
    ctx->pc = 0x29b7ccu;
    // NOP
label_29b7d0:
    // 0x29b7d0: 0x34bfb  dsra        $t1, $v1, 15
    ctx->pc = 0x29b7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 15);
label_29b7d4:
    // 0x29b7d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b7d8:
    // 0x29b7d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b7dc:
    // 0x29b7dc: 0x0  nop
    ctx->pc = 0x29b7dcu;
    // NOP
label_29b7e0:
    // 0x29b7e0: 0x34bff  dsra32      $t1, $v1, 15
    ctx->pc = 0x29b7e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 15));
label_29b7e4:
    // 0x29b7e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7e8:
    // 0x29b7e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7ec:
    // 0x29b7ec: 0x0  nop
    ctx->pc = 0x29b7ecu;
    // NOP
label_29b7f0:
    // 0x29b7f0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_29b7f4:
    // 0x29b7f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b7f8:
    // 0x29b7f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b7fc:
    // 0x29b7fc: 0x0  nop
    ctx->pc = 0x29b7fcu;
    // NOP
label_29b800:
    // 0x29b800: 0x34c01  .word       0x00034C01                   # INVALID     $zero, $v1, 0x4C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B800 raw=0x00034C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b804:
    // 0x29b804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b808:
    // 0x29b808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b80c:
    // 0x29b80c: 0x0  nop
    ctx->pc = 0x29b80cu;
    // NOP
label_29b810:
    // 0x29b810: 0x34c05  .word       0x00034C05                   # INVALID     $zero, $v1, 0x4C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b810u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B810 raw=0x00034C05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b814:
    // 0x29b814: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b814u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b818:
    // 0x29b818: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b818u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b81c:
    // 0x29b81c: 0x0  nop
    ctx->pc = 0x29b81cu;
    // NOP
label_29b820:
    // 0x29b820: 0x34c09  .word       0x00034C09                   # jalr        $t1, $zero # 00030400 <InstrIdType: CPU_SPECIAL>
label_29b824:
    if (ctx->pc == 0x29B824u) {
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29B828u;
        goto label_29b828;
    }
    ctx->pc = 0x29B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x29B828u);
        ctx->pc = 0x29B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B820u;
        // 0x29b824: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B820u, 0x29B828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B828u;
label_29b828:
    // 0x29b828: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b828u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b82c:
    // 0x29b82c: 0x0  nop
    ctx->pc = 0x29b82cu;
    // NOP
label_29b830:
    // 0x29b830: 0x34c0a  .word       0x00034C0A                   # movz        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b830u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b834:
    // 0x29b834: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b834u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b838:
    // 0x29b838: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b83c:
    // 0x29b83c: 0x0  nop
    ctx->pc = 0x29b83cu;
    // NOP
label_29b840:
    // 0x29b840: 0x34c0b  .word       0x00034C0B                   # movn        $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b840u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b844:
    // 0x29b844: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b844u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b848:
    // 0x29b848: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b848u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b84c:
    // 0x29b84c: 0x0  nop
    ctx->pc = 0x29b84cu;
    // NOP
label_29b850:
    // 0x29b850: 0x34c0f  .word       0x00034C0F                   # sync.p # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b854:
    // 0x29b854: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b854u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b858:
    // 0x29b858: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b858u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b85c:
    // 0x29b85c: 0x0  nop
    ctx->pc = 0x29b85cu;
    // NOP
label_29b860:
    // 0x29b860: 0x34c13  .word       0x00034C13                   # mtlo        $zero # 00034C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b860u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b864:
    // 0x29b864: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b864u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B864 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b868:
    // 0x29b868: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b86c:
    // 0x29b86c: 0x0  nop
    ctx->pc = 0x29b86cu;
    // NOP
    ctx->pc = 0x29b870u;
}
