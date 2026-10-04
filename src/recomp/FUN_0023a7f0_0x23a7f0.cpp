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

// Function: FUN_0023a7f0
// Address: 0x23a7f0 - 0x23a834
void FUN_0023a7f0_0x23a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023a7f0_0x23a7f0");
#endif

    ctx->pc = 0x23a7f0u;

    // 0x23a7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a7f4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x23a7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a7fc: 0x24630c84  addiu       $v1, $v1, 0xC84
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
    // 0x23a800: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x290C84u));
    // 0x23a804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23a808: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A808u;
    {
        const bool branch_taken_0x23a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A808u;
        // 0x23a80c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a808) {
            ctx->pc = 0x23A830u;
            goto label_23a830;
        }
    }
    ctx->pc = 0x23A810u;
    // 0x23a810: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x23a814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a818: 0x8c446288  lw          $a0, 0x6288($v0)
    ctx->pc = 0x23a818u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x286288u));
    // 0x23a81c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x23a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x23a820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a824: 0xaca30c80  sw          $v1, 0xC80($a1)
    ctx->pc = 0x23a824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x290C80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290C80u, _value); } while (0);
    // 0x23a828: 0x8069210  j           func_1A4840
    ctx->pc = 0x23A828u;
    ctx->pc = 0x23A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A828u;
    // 0x23a82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    FUN_001a4840_0x1a4840(rdram, ctx, runtime); return;
    ctx->pc = 0x23A830u;
label_23a830:
    // 0x23a830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x23a834u;
}
