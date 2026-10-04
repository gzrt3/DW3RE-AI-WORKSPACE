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

// Function: entry_001e92bc
// Address: 0x1e92bc - 0x1e9308
void entry_001e92bc_0x1e92bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e92bc_0x1e92bc");
#endif

    switch (ctx->pc) {
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e9300u: goto label_1e9300;
        default: break;
    }

    ctx->pc = 0x1e92bcu;

    // 0x1e92bc: 0x0  nop
    ctx->pc = 0x1e92bcu;
    // NOP
    // 0x1e92c0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e92c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e92c8: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1E92C8u;
    SET_GPR_U32(ctx, 31, 0x1E92D0u);
    ctx->pc = 0x1E92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92C8u;
    // 0x1e92cc: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1E92C8u, 0x1E92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e92d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1e92d4: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e92d8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1e92dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92e0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1e92e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1e92e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e92e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92e8: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e92e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1e92ec: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x1e92ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e92f0: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e92f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1e92f4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e92f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E92F8u;
    // 0x1e92fc: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1E92F8u, 0x1E9300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1E9300u;
    {
        const bool branch_taken_0x1e9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9300) {
            ctx->pc = 0x1E93A4u;
            return;
        }
    }
    ctx->pc = 0x1E9308u;
}
