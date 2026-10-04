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

// Function: entry_00134eec
// Address: 0x134eec - 0x134f04
void entry_00134eec_0x134eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134eec_0x134eec");
#endif

    ctx->pc = 0x134eecu;

    // 0x134eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x134eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ef0: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x134ef4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x134ef8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134efc: 0x24e79f20  addiu       $a3, $a3, -0x60E0
    ctx->pc = 0x134efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942496));
    // 0x134f00: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x134f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x134f04u;
}
