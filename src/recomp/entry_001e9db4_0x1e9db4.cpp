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

// Function: entry_001e9db4
// Address: 0x1e9db4 - 0x1e9e10
void entry_001e9db4_0x1e9db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9db4_0x1e9db4");
#endif

    switch (ctx->pc) {
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9e00u: goto label_1e9e00;
        default: break;
    }

    ctx->pc = 0x1e9db4u;

label_1e9db4:
    // 0x1e9db4: 0x0  nop
    ctx->pc = 0x1e9db4u;
    // NOP
    // 0x1e9db8: 0xa0c0005a  sb          $zero, 0x5A($a2)
    ctx->pc = 0x1e9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9dbc: 0xa0c0005b  sb          $zero, 0x5B($a2)
    ctx->pc = 0x1e9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9dc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e9dc4: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x1e9dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e9dc8: 0x28a20032  slti        $v0, $a1, 0x32
    ctx->pc = 0x1e9dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e9dcc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1E9DCCu;
    {
        const bool branch_taken_0x1e9dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DCCu;
        // 0x1e9dd0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9dcc) {
            ctx->pc = 0x1E9DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9db4;
        }
    }
    ctx->pc = 0x1E9DD4u;
    // 0x1e9dd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e9dd8: 0xad0012c0  sw          $zero, 0x12C0($t0)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4800), GPR_U32(ctx, 0));
    // 0x1e9ddc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1e9ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e9de0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E9DE0u;
    {
        const bool branch_taken_0x1e9de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DE0u;
        // 0x1e9de4: 0x24e712d0  addiu       $a3, $a3, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9de0) {
            ctx->pc = 0x1E9DA8u;
            return;
        }
    }
    ctx->pc = 0x1E9DE8u;
    // 0x1e9de8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1e9dec: 0x244231d0  addiu       $v0, $v0, 0x31D0
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12752));
    // 0x1e9df0: 0xc05ec60  jal         func_17B180
    ctx->pc = 0x1E9DF0u;
    SET_GPR_U32(ctx, 31, 0x1E9DF8u);
    ctx->pc = 0x1E9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DF0u;
    // 0x1e9df4: 0xaf82821c  sw          $v0, -0x7DE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B180u, 0x1E9DF0u, 0x1E9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DF8u;
label_1e9df8:
    // 0x1e9df8: 0xc08bbb0  jal         func_22EEC0
    ctx->pc = 0x1E9DF8u;
    SET_GPR_U32(ctx, 31, 0x1E9E00u);
    ctx->pc = 0x22EEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEC0u, 0x1E9DF8u, 0x1E9E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E00u;
label_1e9e00:
    // 0x1e9e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E04u;
        // 0x1e9e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E0Cu;
    // 0x1e9e0c: 0x0  nop
    ctx->pc = 0x1e9e0cu;
    // NOP
    ctx->pc = 0x1e9e10u;
}
