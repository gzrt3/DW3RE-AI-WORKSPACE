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

// Function: FUN_00117cc0
// Address: 0x117cc0 - 0x117cdc
void FUN_00117cc0_0x117cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117cc0_0x117cc0");
#endif

    ctx->pc = 0x117cc0u;

    // 0x117cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117cc4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x117cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x117cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117ccc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117cd0: 0xdf868b70  ld          $a2, -0x7490($gp)
    ctx->pc = 0x117cd0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x117cd4: 0xc05c53c  jal         func_1714F0
    ctx->pc = 0x117CD4u;
    SET_GPR_U32(ctx, 31, 0x117CDCu);
    ctx->pc = 0x117CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CD4u;
    // 0x117cd8: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1714F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1714F0u, 0x117CD4u, 0x117CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CDCu;
}
