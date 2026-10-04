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

// Function: FUN_0021efa0
// Address: 0x21efa0 - 0x21efb0
void FUN_0021efa0_0x21efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021efa0_0x21efa0");
#endif

    ctx->pc = 0x21efa0u;

    // 0x21efa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x21efa4: 0x2083ffd2  addi        $v1, $a0, -0x2E
    ctx->pc = 0x21efa4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)4294967250, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x21efa8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21efac: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x21efacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    ctx->pc = 0x21efb0u;
}
