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

// Function: entry_0010e928
// Address: 0x10e928 - 0x10e954
void entry_0010e928_0x10e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e928_0x10e928");
#endif

    switch (ctx->pc) {
        case 0x10e948u: goto label_10e948;
        default: break;
    }

    ctx->pc = 0x10e928u;

    // 0x10e928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10e92c: 0x28a4004a  slti        $a0, $a1, 0x4A
    ctx->pc = 0x10e92cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x10e930: 0x1480ffc7  bnez        $a0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x10E930u;
    {
        const bool branch_taken_0x10e930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E930u;
        // 0x10e934: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e930) {
            ctx->pc = 0x10E850u;
            return;
        }
    }
    ctx->pc = 0x10E938u;
    // 0x10e938: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10e93c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10e940: 0xc070080  jal         func_1C0200
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E940u;
    // 0x10e944: 0x34454800  ori         $a1, $v0, 0x4800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18432);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0xaf8284d0  sw          $v0, -0x7B30($gp)
    ctx->pc = 0x10e948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935760), GPR_U32(ctx, 2));
    // 0x10e94c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10e94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10e954u;
}
