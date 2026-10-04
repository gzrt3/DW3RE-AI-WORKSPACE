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

// Function: FUN_00172040
// Address: 0x172040 - 0x172050
void FUN_00172040_0x172040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172040_0x172040");
#endif

    ctx->pc = 0x172040u;

    // 0x172040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172044: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x172044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x172048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x172048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17204c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x17204cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    ctx->pc = 0x172050u;
}
