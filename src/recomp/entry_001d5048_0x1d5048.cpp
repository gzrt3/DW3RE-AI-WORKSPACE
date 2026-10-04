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

// Function: entry_001d5048
// Address: 0x1d5048 - 0x1d509c
void entry_001d5048_0x1d5048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5048_0x1d5048");
#endif

    switch (ctx->pc) {
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5094u: goto label_1d5094;
        default: break;
    }

    ctx->pc = 0x1d5048u;

    // 0x1d5048: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x1d5048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
    // 0x1d504c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1d504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1d5050: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5050u;
    {
        const bool branch_taken_0x1d5050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5050) {
            ctx->pc = 0x1D509Cu;
            return;
        }
    }
    ctx->pc = 0x1D5058u;
    // 0x1d5058: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d505c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5060: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5064: 0x920501a2  lbu         $a1, 0x1A2($s0)
    ctx->pc = 0x1d5064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x1d5068: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d506c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5070: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5070u;
    {
        const bool branch_taken_0x1d5070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5070u;
        // 0x1d5074: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5070) {
            ctx->pc = 0x1D50A4u;
            return;
        }
    }
    ctx->pc = 0x1D5078u;
    // 0x1d5078: 0xc045180  jal         func_114600
    ctx->pc = 0x1D5078u;
    SET_GPR_U32(ctx, 31, 0x1D5080u);
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x1D5078u, 0x1D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D50A4u;
            return;
        }
    }
    ctx->pc = 0x1D5088u;
    // 0x1d5088: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d508c: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D508Cu;
    // 0x1d5090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x1D508Cu, 0x1D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5094u;
    {
        const bool branch_taken_0x1d5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5094) {
            ctx->pc = 0x1D50A8u;
            return;
        }
    }
    ctx->pc = 0x1D509Cu;
}
