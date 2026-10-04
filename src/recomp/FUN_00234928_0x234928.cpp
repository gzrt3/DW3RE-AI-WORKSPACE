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

// Function: FUN_00234928
// Address: 0x234928 - 0x234990
void FUN_00234928_0x234928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234928_0x234928");
#endif

    switch (ctx->pc) {
        case 0x234948u: goto label_234948;
        case 0x234958u: goto label_234958;
        case 0x234974u: goto label_234974;
        case 0x234980u: goto label_234980;
        default: break;
    }

    ctx->pc = 0x234928u;

    // 0x234928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23492c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234930: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234934: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23493c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23493cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234940: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234940u;
    SET_GPR_U32(ctx, 31, 0x234948u);
    ctx->pc = 0x234944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234940u;
    // 0x234944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234940u, 0x234948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234948u;
label_234948:
    // 0x234948: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x234948u;
    {
        const bool branch_taken_0x234948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234948u;
        // 0x23494c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234948) {
            ctx->pc = 0x234984u;
            goto label_234984;
        }
    }
    ctx->pc = 0x234950u;
    // 0x234950: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234950u;
    SET_GPR_U32(ctx, 31, 0x234958u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234950u, 0x234958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234958u;
label_234958:
    // 0x234958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23495c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23495cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234960: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x234960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x234964: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x234964u;
    {
        const bool branch_taken_0x234964 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234964) {
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x23496Cu;
    // 0x23496c: 0xc08d192  jal         func_234648
    ctx->pc = 0x23496Cu;
    SET_GPR_U32(ctx, 31, 0x234974u);
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x23496Cu, 0x234974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234974u;
label_234974:
    // 0x234974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234978:
    // 0x234978: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234978u;
    SET_GPR_U32(ctx, 31, 0x234980u);
    ctx->pc = 0x23497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234978u;
    // 0x23497c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234978u, 0x234980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234980u;
label_234980:
    // 0x234980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234984:
    // 0x234984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23498c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x234990u;
}
