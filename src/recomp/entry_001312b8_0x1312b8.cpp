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

// Function: entry_001312b8
// Address: 0x1312b8 - 0x1312e8
void entry_001312b8_0x1312b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001312b8_0x1312b8");
#endif

    switch (ctx->pc) {
        case 0x1312dcu: goto label_1312dc;
        default: break;
    }

    ctx->pc = 0x1312b8u;

    // 0x1312b8: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x1312b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1312bc: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x1312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x1312c0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1312c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1312c4: 0x2463a409  addiu       $v1, $v1, -0x5BF7
    ctx->pc = 0x1312c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943753));
    // 0x1312c8: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1312c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1312cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1312ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1312d0: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1312d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1312d4: 0xc05b6bc  jal         func_16DAF0
    ctx->pc = 0x1312D4u;
    SET_GPR_U32(ctx, 31, 0x1312DCu);
    ctx->pc = 0x1312D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1312D4u;
    // 0x1312d8: 0x9024a402  lbu         $a0, -0x5BFE($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943746)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DAF0u, 0x1312D4u, 0x1312DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1312DCu;
label_1312dc:
    // 0x1312dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1312dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1312e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1312E0u;
    {
        const bool branch_taken_0x1312e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1312E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1312E0u;
        // 0x1312e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1312e0) {
            ctx->pc = 0x1312F0u;
            return;
        }
    }
    ctx->pc = 0x1312E8u;
}
