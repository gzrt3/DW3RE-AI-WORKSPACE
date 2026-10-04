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

// Function: entry_00231028
// Address: 0x231028 - 0x231070
void entry_00231028_0x231028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231028_0x231028");
#endif

    switch (ctx->pc) {
        case 0x231030u: goto label_231030;
        case 0x231038u: goto label_231038;
        case 0x231040u: goto label_231040;
        case 0x231054u: goto label_231054;
        default: break;
    }

    ctx->pc = 0x231028u;

    // 0x231028: 0xc08db50  jal         func_236D40
    ctx->pc = 0x231028u;
    SET_GPR_U32(ctx, 31, 0x231030u);
    ctx->pc = 0x23102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231028u;
    // 0x23102c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D40u, 0x231028u, 0x231030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231030u;
label_231030:
    // 0x231030: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x231030u;
    SET_GPR_U32(ctx, 31, 0x231038u);
    ctx->pc = 0x231034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231030u;
    // 0x231034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x231030u, 0x231038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231038u;
label_231038:
    // 0x231038: 0xc08d0e8  jal         func_2343A0
    ctx->pc = 0x231038u;
    SET_GPR_U32(ctx, 31, 0x231040u);
    ctx->pc = 0x2343A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2343A0u, 0x231038u, 0x231040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231040u;
label_231040:
    // 0x231040: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231044: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231048: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x23104c: 0xc08c7d8  jal         func_231F60
    ctx->pc = 0x23104Cu;
    SET_GPR_U32(ctx, 31, 0x231054u);
    ctx->pc = 0x231050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23104Cu;
    // 0x231050: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F60u, 0x23104Cu, 0x231054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231054u;
label_231054:
    // 0x231054: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231058: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x23105c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231060: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x231060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x231064: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x231064u;
    {
        const bool branch_taken_0x231064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231064u;
        // 0x231068: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231064) {
            ctx->pc = 0x231070u;
            return;
        }
    }
    ctx->pc = 0x23106Cu;
    // 0x23106c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23106cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x231070u;
}
