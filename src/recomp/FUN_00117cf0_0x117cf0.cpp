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

// Function: FUN_00117cf0
// Address: 0x117cf0 - 0x117d0c
void FUN_00117cf0_0x117cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117cf0_0x117cf0");
#endif

    ctx->pc = 0x117cf0u;

    // 0x117cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117cf4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x117cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x117cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117cfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x117cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x117d00: 0xdf868b68  ld          $a2, -0x7498($gp)
    ctx->pc = 0x117d00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x117d04: 0xc05c53c  jal         func_1714F0
    ctx->pc = 0x117D04u;
    SET_GPR_U32(ctx, 31, 0x117D0Cu);
    ctx->pc = 0x117D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D04u;
    // 0x117d08: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1714F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1714F0u, 0x117D04u, 0x117D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D0Cu;
}
