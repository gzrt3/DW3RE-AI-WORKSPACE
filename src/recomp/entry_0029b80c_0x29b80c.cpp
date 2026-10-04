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

// Function: entry_0029b80c
// Address: 0x29b80c - 0x29b854
void entry_0029b80c_0x29b80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b80c_0x29b80c");
#endif

    switch (ctx->pc) {
        case 0x29b828u: goto label_29b828;
        default: break;
    }

    ctx->pc = 0x29b80cu;

label_29b80c:
    // 0x29b80c: 0x0  nop
    ctx->pc = 0x29b80cu;
    // NOP
label_29b810:
    // 0x29b810: 0x34c05  .word       0x00034C05                   # INVALID     $zero, $v1, 0x4C05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b810u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B810 raw=0x00034C05"); /* MITIGATED MMI/COP0 */
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
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B824 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B834 raw=0x00000001"); /* MITIGATED MMI/COP0 */
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
    ctx->pc = 0x29b854u;
}
