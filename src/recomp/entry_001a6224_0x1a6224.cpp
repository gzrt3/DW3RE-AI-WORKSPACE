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

// Function: entry_001a6224
// Address: 0x1a6224 - 0x1a6278
void entry_001a6224_0x1a6224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6224_0x1a6224");
#endif

    switch (ctx->pc) {
        case 0x1a6234u: goto label_1a6234;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6250u: goto label_1a6250;
        default: break;
    }

    ctx->pc = 0x1a6224u;

    // 0x1a6224: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1a6228: 0xdc25a588  ld          $a1, -0x5A78($at)
    ctx->pc = 0x1a6228u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CA588u));
    // 0x1a622c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x1A622Cu;
    SET_GPR_U32(ctx, 31, 0x1A6234u);
    ctx->pc = 0x1A6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A622Cu;
    // 0x1a6230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x1A622Cu, 0x1A6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6234u;
label_1a6234:
    // 0x1a6234: 0xc06dbbc  jal         func_1B6EF0
    ctx->pc = 0x1A6234u;
    SET_GPR_U32(ctx, 31, 0x1A623Cu);
    ctx->pc = 0x1A6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6234u;
    // 0x1a6238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EF0u, 0x1A6234u, 0x1A623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A623Cu;
label_1a623c:
    // 0x1a623c: 0xc069828  jal         func_1A60A0
    ctx->pc = 0x1A623Cu;
    SET_GPR_U32(ctx, 31, 0x1A6244u);
    ctx->pc = 0x1A6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A623Cu;
    // 0x1a6240: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60A0u, 0x1A623Cu, 0x1A6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6244u;
label_1a6244:
    // 0x1a6244: 0x2644a560  addiu       $a0, $s2, -0x5AA0
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294944096));
    // 0x1a6248: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A6248u;
    SET_GPR_U32(ctx, 31, 0x1A6250u);
    ctx->pc = 0x1A624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6248u;
    // 0x1a624c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A6248u, 0x1A6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6278u;
            return;
        }
    }
    ctx->pc = 0x1A6258u;
    // 0x1a6258: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a625c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6260: 0x2484a568  addiu       $a0, $a0, -0x5A98
    ctx->pc = 0x1a6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944104));
    // 0x1a6264: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6268: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a626c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6270: 0x8069a22  j           func_1A6888
    ctx->pc = 0x1A6270u;
    ctx->pc = 0x1A6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6270u;
    // 0x1a6274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    FUN_001a6888_0x1a6888(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6278u;
}
