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

// Function: FUN_00212bd0
// Address: 0x212bd0 - 0x212bf8
void FUN_00212bd0_0x212bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212bd0_0x212bd0");
#endif

    ctx->pc = 0x212bd0u;

    // 0x212bd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x212bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x212bd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x212bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x212bd8: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x212bdc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x212BDCu;
    {
        const bool branch_taken_0x212bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x212BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212BDCu;
        // 0x212be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212bdc) {
            ctx->pc = 0x212BF8u;
            return;
        }
    }
    ctx->pc = 0x212BE4u;
    // 0x212be4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x212be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x212be8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212bec: 0xdc2276f8  ld          $v0, 0x76F8($at)
    ctx->pc = 0x212becu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5876F8u));
    // 0x212bf0: 0x831814  dsllv       $v1, $v1, $a0
    ctx->pc = 0x212bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x212bf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x212bf8u;
}
