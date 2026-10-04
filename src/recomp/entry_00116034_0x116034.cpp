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

// Function: entry_00116034
// Address: 0x116034 - 0x116064
void entry_00116034_0x116034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116034_0x116034");
#endif

    switch (ctx->pc) {
        case 0x11605cu: goto label_11605c;
        default: break;
    }

    ctx->pc = 0x116034u;

    // 0x116034: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x116034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x116038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116038u;
    {
        const bool branch_taken_0x116038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116038u;
        // 0x11603c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116038) {
            ctx->pc = 0x116064u;
            return;
        }
    }
    ctx->pc = 0x116040u;
    // 0x116040: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116040u;
    {
        const bool branch_taken_0x116040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116040u;
        // 0x116044: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116040) {
            ctx->pc = 0x116068u;
            return;
        }
    }
    ctx->pc = 0x116048u;
    // 0x116048: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x11604c: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x116050: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x116054: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x116054u;
    SET_GPR_U32(ctx, 31, 0x11605Cu);
    ctx->pc = 0x116058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116054u;
    // 0x116058: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x116054u, 0x11605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11605Cu;
label_11605c:
    // 0x11605c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11605Cu;
    {
        const bool branch_taken_0x11605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11605Cu;
        // 0x116060: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11605c) {
            ctx->pc = 0x11607Cu;
            return;
        }
    }
    ctx->pc = 0x116064u;
}
