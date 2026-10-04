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

// Function: FUN_00153db0
// Address: 0x153db0 - 0x153e14
void FUN_00153db0_0x153db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153db0_0x153db0");
#endif

    ctx->pc = 0x153db0u;

    // 0x153db0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153db4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x153db8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x153dbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x153dc0: 0x8f8285d4  lw          $v0, -0x7A2C($gp)
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936020)));
    // 0x153dc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x153DC4u;
    {
        const bool branch_taken_0x153dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DC4u;
        // 0x153dc8: 0x160882d  daddu       $s1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dc4) {
            ctx->pc = 0x153E0Cu;
            goto label_153e0c;
        }
    }
    ctx->pc = 0x153DCCu;
    // 0x153dcc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x153dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x153dd0: 0x24421d30  addiu       $v0, $v0, 0x1D30
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
    // 0x153dd4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x153dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x153dd8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x153dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153ddc: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x153ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x153de0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DE0u;
    {
        const bool branch_taken_0x153de0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DE0u;
        // 0x153de4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153de0) {
            ctx->pc = 0x153DF0u;
            goto label_153df0;
        }
    }
    ctx->pc = 0x153DE8u;
    // 0x153de8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x153de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x153dec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x153decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_153df0:
    // 0x153df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x153df4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x153df8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DF8u;
    {
        const bool branch_taken_0x153df8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF8u;
        // 0x153dfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df8) {
            ctx->pc = 0x153E08u;
            goto label_153e08;
        }
    }
    ctx->pc = 0x153E00u;
    // 0x153e00: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153e04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_153e08:
    // 0x153e08: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x153e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_153e0c:
    // 0x153e0c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x153e10: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x153e14u;
}
