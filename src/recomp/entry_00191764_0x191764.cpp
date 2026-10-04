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

// Function: entry_00191764
// Address: 0x191764 - 0x191790
void entry_00191764_0x191764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191764_0x191764");
#endif

    ctx->pc = 0x191764u;

    // 0x191764: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x191764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x191768: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x191768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19176c: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x19176cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x191770: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x191770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x191774: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x191774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x191778: 0x24a59d40  addiu       $a1, $a1, -0x62C0
    ctx->pc = 0x191778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942016));
    // 0x19177c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19177cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191780: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x191780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x191784: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x191784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x191788: 0x24a20000  addiu       $v0, $a1, 0x0
    ctx->pc = 0x191788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x19178c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x191790u;
}
