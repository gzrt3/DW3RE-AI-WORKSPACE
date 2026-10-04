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

// Function: entry_0014067c
// Address: 0x14067c - 0x1406a8
void entry_0014067c_0x14067c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014067c_0x14067c");
#endif

    ctx->pc = 0x14067cu;

    // 0x14067c: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x14067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x140680: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x140680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x140684: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140684u;
    {
        const bool branch_taken_0x140684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140684) {
            ctx->pc = 0x1406A8u;
            return;
        }
    }
    ctx->pc = 0x14068Cu;
    // 0x14068c: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x14068cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x140690: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x140690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x140694: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x140694u;
    {
        const bool branch_taken_0x140694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x140694) {
            ctx->pc = 0x1406A8u;
            return;
        }
    }
    ctx->pc = 0x14069Cu;
    // 0x14069c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406a0: 0xc050fa4  jal         func_143E90
    ctx->pc = 0x1406A0u;
    SET_GPR_U32(ctx, 31, 0x1406A8u);
    ctx->pc = 0x1406A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1406A0u;
    // 0x1406a4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E90u, 0x1406A0u, 0x1406A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1406A8u;
}
