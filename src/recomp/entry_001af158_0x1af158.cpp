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

// Function: entry_001af158
// Address: 0x1af158 - 0x1af1a4
void entry_001af158_0x1af158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af158_0x1af158");
#endif

    switch (ctx->pc) {
        case 0x1af164u: goto label_1af164;
        case 0x1af18cu: goto label_1af18c;
        default: break;
    }

    ctx->pc = 0x1af158u;

    // 0x1af158: 0x8c4472a8  lw          $a0, 0x72A8($v0)
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    // 0x1af15c: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1AF15Cu;
    SET_GPR_U32(ctx, 31, 0x1AF164u);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1AF15Cu, 0x1AF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF164u;
label_1af164:
    // 0x1af164: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af168: 0x8c627294  lw          $v0, 0x7294($v1)
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x287294u));
    // 0x1af16c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF16Cu;
    {
        const bool branch_taken_0x1af16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af16c) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF174u;
    // 0x1af174: 0x8c435f40  lw          $v1, 0x5F40($v0)
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24384)));
    // 0x1af178: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF178u;
    {
        const bool branch_taken_0x1af178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF178u;
        // 0x1af17c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af178) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF180u;
    // 0x1af180: 0x8c4472a0  lw          $a0, 0x72A0($v0)
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
    // 0x1af184: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1AF184u;
    SET_GPR_U32(ctx, 31, 0x1AF18Cu);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1AF184u, 0x1AF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF18Cu;
label_1af18c:
    // 0x1af18c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF18Cu;
    {
        const bool branch_taken_0x1af18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af18c) {
            ctx->pc = 0x1AF19Cu;
            goto label_1af19c;
        }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af198: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
label_1af19c:
    // 0x1af19c: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1af19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1af1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1af1a4u;
}
