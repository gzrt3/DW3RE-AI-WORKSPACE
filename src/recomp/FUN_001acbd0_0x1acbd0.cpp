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

// Function: FUN_001acbd0
// Address: 0x1acbd0 - 0x1acc28
void FUN_001acbd0_0x1acbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001acbd0_0x1acbd0");
#endif

    switch (ctx->pc) {
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc18u: goto label_1acc18;
        default: break;
    }

    ctx->pc = 0x1acbd0u;

    // 0x1acbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1acbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1acbd4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1acbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1acbd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1acbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acbdc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1acbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1acbe0: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1acbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
    // 0x1acbe4: 0x2610d100  addiu       $s0, $s0, -0x2F00
    ctx->pc = 0x1acbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955264));
    // 0x1acbe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acbe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbec: 0xac515f50  sw          $s1, 0x5F50($v0)
    ctx->pc = 0x1acbecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x285F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x285F50u, _value); } while (0);
    // 0x1acbf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1acbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1acbf8: 0xc069134  jal         func_1A44D0
    ctx->pc = 0x1ACBF8u;
    SET_GPR_U32(ctx, 31, 0x1ACC00u);
    ctx->pc = 0x1ACBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBF8u;
    // 0x1acbfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44D0u, 0x1ACBF8u, 0x1ACC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC00u;
label_1acc00:
    // 0x1acc00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc04: 0xc069134  jal         func_1A44D0
    ctx->pc = 0x1ACC04u;
    SET_GPR_U32(ctx, 31, 0x1ACC0Cu);
    ctx->pc = 0x1ACC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC04u;
    // 0x1acc08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44D0u, 0x1ACC04u, 0x1ACC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC0Cu;
label_1acc0c:
    // 0x1acc0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc10: 0xc069134  jal         func_1A44D0
    ctx->pc = 0x1ACC10u;
    SET_GPR_U32(ctx, 31, 0x1ACC18u);
    ctx->pc = 0x1ACC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACC10u;
    // 0x1acc14: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A44D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A44D0u, 0x1ACC10u, 0x1ACC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACC18u;
label_1acc18:
    // 0x1acc18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1acc18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acc1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1acc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1acc20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1acc20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1acc28u;
}
