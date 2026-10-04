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

// Function: entry_0029b61c
// Address: 0x29b61c - 0x29b6ac
void entry_0029b61c_0x29b61c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b61c_0x29b61c");
#endif

    switch (ctx->pc) {
        case 0x29b698u: goto label_29b698;
        default: break;
    }

    ctx->pc = 0x29b61cu;

label_29b61c:
    // 0x29b61c: 0x0  nop
    ctx->pc = 0x29b61cu;
    // NOP
label_29b620:
    // 0x29b620: 0x34bb9  .word       0x00034BB9                   # INVALID     $zero, $v1, 0x4BB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b620u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29B620 raw=0x00034BB9"); /* MITIGATED MMI/COP0 */
label_29b624:
    // 0x29b624: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b624u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B624 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B634 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B664 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B674 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B680 raw=0x00034BC5"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
label_29b6a8:
    // 0x29b6a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    ctx->pc = 0x29b6acu;
}
