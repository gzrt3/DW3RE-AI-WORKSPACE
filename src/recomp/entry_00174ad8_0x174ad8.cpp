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

// Function: entry_00174ad8
// Address: 0x174ad8 - 0x174b00
void entry_00174ad8_0x174ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ad8_0x174ad8");
#endif

    ctx->pc = 0x174ad8u;

    // 0x174ad8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x174AD8u;
    {
        const bool branch_taken_0x174ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174ad8) {
            ctx->pc = 0x174B34u;
            return;
        }
    }
    ctx->pc = 0x174AE0u;
    // 0x174ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x174ae4: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x174ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x174ae8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x174ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x174aec: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174AECu;
    {
        const bool branch_taken_0x174aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174aec) {
            ctx->pc = 0x174B00u;
            return;
        }
    }
    ctx->pc = 0x174AF4u;
    // 0x174af4: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x174af8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174AF8u;
    {
        const bool branch_taken_0x174af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x174af8) {
            ctx->pc = 0x174B1Cu;
            return;
        }
    }
    ctx->pc = 0x174B00u;
}
