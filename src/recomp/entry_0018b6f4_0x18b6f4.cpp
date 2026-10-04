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

// Function: entry_0018b6f4
// Address: 0x18b6f4 - 0x18b718
void entry_0018b6f4_0x18b6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b6f4_0x18b6f4");
#endif

    switch (ctx->pc) {
        case 0x18b710u: goto label_18b710;
        default: break;
    }

    ctx->pc = 0x18b6f4u;

    // 0x18b6f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18B6F4u;
    {
        const bool branch_taken_0x18b6f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b6f4) {
            ctx->pc = 0x18B718u;
            return;
        }
    }
    ctx->pc = 0x18B6FCu;
    // 0x18b6fc: 0x38820020  xori        $v0, $a0, 0x20
    ctx->pc = 0x18b6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)32);
    // 0x18b700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b704: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b708: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B708u;
    SET_GPR_U32(ctx, 31, 0x18B710u);
    ctx->pc = 0x18B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B708u;
    // 0x18b70c: 0xa2220240  sb          $v0, 0x240($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 576), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B708u, 0x18B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B710u;
label_18b710:
    // 0x18b710: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x18B710u;
    {
        const bool branch_taken_0x18b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b710) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B718u;
}
