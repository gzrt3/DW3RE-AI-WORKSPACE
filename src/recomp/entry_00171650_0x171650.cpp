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

// Function: entry_00171650
// Address: 0x171650 - 0x17166c
void entry_00171650_0x171650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171650_0x171650");
#endif

    ctx->pc = 0x171650u;

    // 0x171650: 0xd2842  srl         $a1, $t5, 1
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 1));
    // 0x171654: 0x31a30001  andi        $v1, $t5, 0x1
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x171658: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x171658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17165c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17165cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171660: 0x0  nop
    ctx->pc = 0x171660u;
    // NOP
    // 0x171664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x171664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171668: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x171668u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x17166cu;
}
