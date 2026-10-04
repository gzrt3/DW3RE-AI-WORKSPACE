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

// Function: entry_0021ab78
// Address: 0x21ab78 - 0x21abc4
void entry_0021ab78_0x21ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ab78_0x21ab78");
#endif

    ctx->pc = 0x21ab78u;

    // 0x21ab78: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
    // 0x21ab7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ab80: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21AB80u;
    {
        const bool branch_taken_0x21ab80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ab80) {
            ctx->pc = 0x21ABC4u;
            return;
        }
    }
    ctx->pc = 0x21AB88u;
    // 0x21ab88: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21ab8c: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
    // 0x21ab90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ab94: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
    // 0x21ab98: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
    // 0x21ab9c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21aba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21aba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21aba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21abac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x21abb0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21abb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21ABB4u;
    {
        const bool branch_taken_0x21abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abb4) {
            ctx->pc = 0x21ABC4u;
            return;
        }
    }
    ctx->pc = 0x21ABBCu;
    // 0x21abbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21abc0: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
    ctx->pc = 0x21abc4u;
}
