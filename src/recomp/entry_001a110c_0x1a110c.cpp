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

// Function: entry_001a110c
// Address: 0x1a110c - 0x1a1190
void entry_001a110c_0x1a110c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a110c_0x1a110c");
#endif

    switch (ctx->pc) {
        case 0x1a112cu: goto label_1a112c;
        case 0x1a1158u: goto label_1a1158;
        default: break;
    }

    ctx->pc = 0x1a110cu;

    // 0x1a110c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a1110: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1114: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1118: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a1118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a111c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A111Cu;
    {
        const bool branch_taken_0x1a111c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a111c) {
            ctx->pc = 0x1A1190u;
            return;
        }
    }
    ctx->pc = 0x1A1124u;
    // 0x1a1124: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A1124u;
    SET_GPR_U32(ctx, 31, 0x1A112Cu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A1124u, 0x1A112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A112Cu;
label_1a112c:
    // 0x1a112c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a112cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1130: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1134: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1a1134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1a1138: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1a1138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1a113c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a113cu;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 5));
    // 0x1a1140: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1a1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a1144: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a1144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a1148: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x1a1148u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4));
    // 0x1a114c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a114cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1a1150: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1150u;
    SET_GPR_U32(ctx, 31, 0x1A1158u);
    ctx->pc = 0x1A1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1150u;
    // 0x1a1154: 0xac23b000  sw          $v1, -0x5000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1150u, 0x1A1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1158u;
label_1a1158:
    // 0x1a1158: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a115c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a115cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a1160: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1a1160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1a1164: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x1a1164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x1a1168: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1a1168u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x1a116c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1a116cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1a1170: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x1a1170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x1a1174: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a1174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a1178: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a117c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a1180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a1184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a1188: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A1188u;
    {
        const bool branch_taken_0x1a1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1188u;
        // 0x1a118c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1188) {
            ctx->pc = 0x1A1200u;
            return;
        }
    }
    ctx->pc = 0x1A1190u;
}
