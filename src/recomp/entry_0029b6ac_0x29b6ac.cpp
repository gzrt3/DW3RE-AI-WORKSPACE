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

// Function: entry_0029b6ac
// Address: 0x29b6ac - 0x29b80c
void entry_0029b6ac_0x29b6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b6ac_0x29b6ac");
#endif

    ctx->pc = 0x29b6acu;

    // 0x29b6ac: 0x0  nop
    ctx->pc = 0x29b6acu;
    // NOP
    // 0x29b6b0: 0x34bce  .word       0x00034BCE                   # INVALID     $zero, $v1, 0x4BCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29B6B0 raw=0x00034BCE"); /* MITIGATED MMI/COP0 */
    // 0x29b6b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b6b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b6bc: 0x0  nop
    ctx->pc = 0x29b6bcu;
    // NOP
    // 0x29b6c0: 0x34bcf  .word       0x00034BCF                   # sync # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x29b6c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b6c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b6cc: 0x0  nop
    ctx->pc = 0x29b6ccu;
    // NOP
    // 0x29b6d0: 0x34bd3  .word       0x00034BD3                   # mtlo        $zero # 00034BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d0u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x29b6d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b6d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b6dc: 0x0  nop
    ctx->pc = 0x29b6dcu;
    // NOP
    // 0x29b6e0: 0x34bd7  .word       0x00034BD7                   # dsrav       $t1, $v1, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
    // 0x29b6e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b6e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b6ec: 0x0  nop
    ctx->pc = 0x29b6ecu;
    // NOP
    // 0x29b6f0: 0x34bd8  .word       0x00034BD8                   # mult        $t1, $zero, $v1 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b6f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x29b6f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b6f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B6F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b6f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b6fc: 0x0  nop
    ctx->pc = 0x29b6fcu;
    // NOP
    // 0x29b700: 0x34bd9  .word       0x00034BD9                   # multu       $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b700u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x29b704: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b704u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b708: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b70c: 0x0  nop
    ctx->pc = 0x29b70cu;
    // NOP
    // 0x29b710: 0x34bdd  .word       0x00034BDD                   # dmultu      $zero, $v1 # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b710u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29B710 raw=0x00034BDD"); /* MITIGATED MMI/COP0 */
    // 0x29b714: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b718: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b71c: 0x0  nop
    ctx->pc = 0x29b71cu;
    // NOP
    // 0x29b720: 0x34be1  .word       0x00034BE1                   # addu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x29b724: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b724u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B724 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b728: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b728u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b72c: 0x0  nop
    ctx->pc = 0x29b72cu;
    // NOP
    // 0x29b730: 0x34be2  .word       0x00034BE2                   # neg         $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b730u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x29b734: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b734u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B734 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b738: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b73c: 0x0  nop
    ctx->pc = 0x29b73cu;
    // NOP
    // 0x29b740: 0x34be3  .word       0x00034BE3                   # negu        $t1, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x29b744: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b748: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b748u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b74c: 0x0  nop
    ctx->pc = 0x29b74cu;
    // NOP
    // 0x29b750: 0x34be7  .word       0x00034BE7                   # nor         $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x29b754: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b758: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b758u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
    // 0x29b760: 0x34beb  .word       0x00034BEB                   # sltu        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b760u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29b764: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b764u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B764 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b768: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b768u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b76c: 0x0  nop
    ctx->pc = 0x29b76cu;
    // NOP
    // 0x29b770: 0x34bec  .word       0x00034BEC                   # dadd        $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b770u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
    // 0x29b774: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b774u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B774 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b778: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b77c: 0x0  nop
    ctx->pc = 0x29b77cu;
    // NOP
    // 0x29b780: 0x34bed  .word       0x00034BED                   # daddu       $t1, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
    // 0x29b784: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b788: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b788u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b78c: 0x0  nop
    ctx->pc = 0x29b78cu;
    // NOP
    // 0x29b790: 0x34bf1  tgeu        $zero, $v1, 303
    ctx->pc = 0x29b790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b794: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b798: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b798u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b79c: 0x0  nop
    ctx->pc = 0x29b79cu;
    // NOP
    // 0x29b7a0: 0x34bf5  .word       0x00034BF5                   # INVALID     $zero, $v1, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29B7A0 raw=0x00034BF5"); /* MITIGATED MMI/COP0 */
    // 0x29b7a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7a4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b7a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b7ac: 0x0  nop
    ctx->pc = 0x29b7acu;
    // NOP
    // 0x29b7b0: 0x34bf6  tne         $zero, $v1, 303
    ctx->pc = 0x29b7b0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
    // 0x29b7b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7b4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b7b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b7bc: 0x0  nop
    ctx->pc = 0x29b7bcu;
    // NOP
    // 0x29b7c0: 0x34bf7  .word       0x00034BF7                   # INVALID     $zero, $v1, 0x4BF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B7C0 raw=0x00034BF7"); /* MITIGATED MMI/COP0 */
    // 0x29b7c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b7c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b7cc: 0x0  nop
    ctx->pc = 0x29b7ccu;
    // NOP
    // 0x29b7d0: 0x34bfb  dsra        $t1, $v1, 15
    ctx->pc = 0x29b7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 15);
    // 0x29b7d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b7d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x29b7dc: 0x0  nop
    ctx->pc = 0x29b7dcu;
    // NOP
    // 0x29b7e0: 0x34bff  dsra32      $t1, $v1, 15
    ctx->pc = 0x29b7e0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (32 + 15));
    // 0x29b7e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7e4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b7e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b7ec: 0x0  nop
    ctx->pc = 0x29b7ecu;
    // NOP
    // 0x29b7f0: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x29b7f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b7f4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B7F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
    // 0x29b7f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x29b7fc: 0x0  nop
    ctx->pc = 0x29b7fcu;
    // NOP
    // 0x29b800: 0x34c01  .word       0x00034C01                   # INVALID     $zero, $v1, 0x4C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b800u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B800 raw=0x00034C01"); /* MITIGATED MMI/COP0 */
    // 0x29b804: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x29b808: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b808u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    ctx->pc = 0x29b80cu;
}
