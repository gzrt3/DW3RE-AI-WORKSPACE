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

// Function: entry_001007c0
// Address: 0x1007c0 - 0x1007e0
void entry_001007c0_0x1007c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007c0_0x1007c0");
#endif

    ctx->pc = 0x1007c0u;

    // 0x1007c0: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x1007c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1007c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1007C4u;
    {
        const bool branch_taken_0x1007c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007c4) {
            ctx->pc = 0x1007E0u;
            return;
        }
    }
    ctx->pc = 0x1007CCu;
    // 0x1007cc: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x1007ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1007d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1007d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1007d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1007d8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1007d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007dc: 0xff828420  sd          $v0, -0x7BE0($gp)
    ctx->pc = 0x1007dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935584), GPR_U64(ctx, 2));
    ctx->pc = 0x1007e0u;
}
