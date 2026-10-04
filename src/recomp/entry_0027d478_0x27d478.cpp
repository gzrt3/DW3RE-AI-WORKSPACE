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

// Function: entry_0027d478
// Address: 0x27d478 - 0x27d524
void entry_0027d478_0x27d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d478_0x27d478");
#endif

    ctx->pc = 0x27d478u;

    // 0x27d478: 0x0  nop
    ctx->pc = 0x27d478u;
    // NOP
    // 0x27d47c: 0x0  nop
    ctx->pc = 0x27d47cu;
    // NOP
    // 0x27d480: 0x147d3  .word       0x000147D3                   # mtlo        $zero # 000147C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d480u;
    ctx->lo = GPR_U64(ctx, 0);
    // 0x27d484: 0xd280  sll         $k0, $zero, 10
    ctx->pc = 0x27d484u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
    // 0x27d488: 0x0  nop
    ctx->pc = 0x27d488u;
    // NOP
    // 0x27d48c: 0x0  nop
    ctx->pc = 0x27d48cu;
    // NOP
    // 0x27d490: 0x147ee  .word       0x000147EE                   # dsub        $t0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
    // 0x27d494: 0xa410  .word       0x0000A410                   # mfhi        $s4 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d494u;
    SET_GPR_U64(ctx, 20, ctx->hi);
    // 0x27d498: 0x0  nop
    ctx->pc = 0x27d498u;
    // NOP
    // 0x27d49c: 0x0  nop
    ctx->pc = 0x27d49cu;
    // NOP
    // 0x27d4a0: 0x14803  sra         $t1, $at, 0
    ctx->pc = 0x27d4a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 0));
    // 0x27d4a4: 0xcea0  .word       0x0000CEA0                   # add         $t9, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
    // 0x27d4a8: 0x0  nop
    ctx->pc = 0x27d4a8u;
    // NOP
    // 0x27d4ac: 0x0  nop
    ctx->pc = 0x27d4acu;
    // NOP
    // 0x27d4b0: 0x1481d  .word       0x0001481D                   # dmultu      $zero, $at # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27D4B0 raw=0x0001481D"); /* MITIGATED MMI/COP0 */
    // 0x27d4b4: 0xa670  tge         $zero, $zero, 665
    ctx->pc = 0x27d4b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x27d4b8: 0x0  nop
    ctx->pc = 0x27d4b8u;
    // NOP
    // 0x27d4bc: 0x0  nop
    ctx->pc = 0x27d4bcu;
    // NOP
    // 0x27d4c0: 0x14832  tlt         $zero, $at, 288
    ctx->pc = 0x27d4c0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x27d4c4: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4c4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x27d4c8: 0x0  nop
    ctx->pc = 0x27d4c8u;
    // NOP
    // 0x27d4cc: 0x0  nop
    ctx->pc = 0x27d4ccu;
    // NOP
    // 0x27d4d0: 0x14845  .word       0x00014845                   # INVALID     $zero, $at, 0x4845 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4d0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27D4D0 raw=0x00014845"); /* MITIGATED MMI/COP0 */
    // 0x27d4d4: 0x7ec0  sll         $t7, $zero, 27
    ctx->pc = 0x27d4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
    // 0x27d4d8: 0x0  nop
    ctx->pc = 0x27d4d8u;
    // NOP
    // 0x27d4dc: 0x0  nop
    ctx->pc = 0x27d4dcu;
    // NOP
    // 0x27d4e0: 0x14855  .word       0x00014855                   # INVALID     $zero, $at, 0x4855 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27D4E0 raw=0x00014855"); /* MITIGATED MMI/COP0 */
    // 0x27d4e4: 0x5750  .word       0x00005750                   # mfhi        $t2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x27d4e8: 0x0  nop
    ctx->pc = 0x27d4e8u;
    // NOP
    // 0x27d4ec: 0x0  nop
    ctx->pc = 0x27d4ecu;
    // NOP
    // 0x27d4f0: 0x14860  .word       0x00014860                   # add         $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x27d4f4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x27d4f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
    // 0x27d4f8: 0x0  nop
    ctx->pc = 0x27d4f8u;
    // NOP
    // 0x27d4fc: 0x0  nop
    ctx->pc = 0x27d4fcu;
    // NOP
    // 0x27d500: 0x1486d  .word       0x0001486D                   # daddu       $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
    // 0x27d504: 0x93d0  .word       0x000093D0                   # mfhi        $s2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d504u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x27d508: 0x0  nop
    ctx->pc = 0x27d508u;
    // NOP
    // 0x27d50c: 0x0  nop
    ctx->pc = 0x27d50cu;
    // NOP
    // 0x27d510: 0x14880  sll         $t1, $at, 2
    ctx->pc = 0x27d510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
    // 0x27d514: 0xf3b0  tge         $zero, $zero, 974
    ctx->pc = 0x27d514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x27d518: 0x0  nop
    ctx->pc = 0x27d518u;
    // NOP
    // 0x27d51c: 0x0  nop
    ctx->pc = 0x27d51cu;
    // NOP
    // 0x27d520: 0x1489f  .word       0x0001489F                   # ddivu       $t1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27d520u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27D520 raw=0x0001489F"); /* MITIGATED MMI/COP0 */
    ctx->pc = 0x27d524u;
}
