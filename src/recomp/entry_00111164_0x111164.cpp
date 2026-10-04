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

// Function: entry_00111164
// Address: 0x111164 - 0x111188
void entry_00111164_0x111164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111164_0x111164");
#endif

    ctx->pc = 0x111164u;

    // 0x111164: 0x0  nop
    ctx->pc = 0x111164u;
    // NOP
    // 0x111168: 0x95b8000c  lhu         $t8, 0xC($t5)
    ctx->pc = 0x111168u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x11116c: 0x187900  sll         $t7, $t8, 4
    ctx->pc = 0x11116cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x111170: 0x1f87823  subu        $t7, $t7, $t8
    ctx->pc = 0x111170u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x111174: 0xaf7821  addu        $t7, $a1, $t7
    ctx->pc = 0x111174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x111178: 0x91ef0002  lbu         $t7, 0x2($t7)
    ctx->pc = 0x111178u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 2)));
    // 0x11117c: 0x160f0002  bne         $s0, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x11117Cu;
    {
        const bool branch_taken_0x11117c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x11117c) {
            ctx->pc = 0x111188u;
            return;
        }
    }
    ctx->pc = 0x111184u;
    // 0x111184: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x111184u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x111188u;
}
