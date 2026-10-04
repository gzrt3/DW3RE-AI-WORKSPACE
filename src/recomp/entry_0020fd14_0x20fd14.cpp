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

// Function: entry_0020fd14
// Address: 0x20fd14 - 0x20fd48
void entry_0020fd14_0x20fd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fd14_0x20fd14");
#endif

    ctx->pc = 0x20fd14u;

    // 0x20fd14: 0x0  nop
    ctx->pc = 0x20fd14u;
    // NOP
    // 0x20fd18: 0x9ce4000c  lwu         $a0, 0xC($a3)
    ctx->pc = 0x20fd18u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20fd1c: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x20fd1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd20: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x20fd20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd24: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x20fd24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd28: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x20fd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x20fd2c: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x20fd30: 0x9ce5000c  lwu         $a1, 0xC($a3)
    ctx->pc = 0x20fd30u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20fd34: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x20fd38: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x20fd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x20fd3c: 0x52bf8  dsll        $a1, $a1, 15
    ctx->pc = 0x20fd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 15);
    // 0x20fd40: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x20fd40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x20fd44: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x20fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    ctx->pc = 0x20fd48u;
}
