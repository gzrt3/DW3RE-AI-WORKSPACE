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

// Function: entry_00100534
// Address: 0x100534 - 0x100574
void entry_00100534_0x100534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100534_0x100534");
#endif

    switch (ctx->pc) {
        case 0x10056cu: goto label_10056c;
        default: break;
    }

    ctx->pc = 0x100534u;

    // 0x100534: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x100534u;
    {
        const bool branch_taken_0x100534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100534) {
            ctx->pc = 0x100574u;
            return;
        }
    }
    ctx->pc = 0x10053Cu;
    // 0x10053c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10053cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x100540: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x100540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x100544: 0x24423f18  addiu       $v0, $v0, 0x3F18
    ctx->pc = 0x100544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16152));
    // 0x100548: 0x24a52e60  addiu       $a1, $a1, 0x2E60
    ctx->pc = 0x100548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11872));
    // 0x10054c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10054cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100554: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10055c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10055cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100564: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100564u;
    SET_GPR_U32(ctx, 31, 0x10056Cu);
    ctx->pc = 0x100568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100564u;
    // 0x100568: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100564u, 0x10056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10056Cu;
label_10056c:
    // 0x10056c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10056Cu;
    {
        const bool branch_taken_0x10056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10056c) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x100574u;
}
