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

// Function: entry_0016c038
// Address: 0x16c038 - 0x16c07c
void entry_0016c038_0x16c038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c038_0x16c038");
#endif

    ctx->pc = 0x16c038u;

    // 0x16c038: 0x112600  sll         $a0, $s1, 24
    ctx->pc = 0x16c038u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
    // 0x16c03c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16c040: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x16c040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x16c044: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x16c044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x16c048: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16c048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16c04c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16c04cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x16c050: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x16c050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16c054: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c058: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x16c058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x16c05c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16c060: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16c064: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16c064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16c068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16c068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16c06c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16c070: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16c074: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c078: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16c078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    ctx->pc = 0x16c07cu;
}
