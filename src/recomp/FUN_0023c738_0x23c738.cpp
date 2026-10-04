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

// Function: FUN_0023c738
// Address: 0x23c738 - 0x23c76c
void FUN_0023c738_0x23c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023c738_0x23c738");
#endif

    switch (ctx->pc) {
        case 0x23c764u: goto label_23c764;
        default: break;
    }

    ctx->pc = 0x23c738u;

    // 0x23c738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c73c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x23c740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c74c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23c74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x23c750: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23c750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c754: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23c754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c75c: 0xc0693fe  jal         func_1A4FF8
    ctx->pc = 0x23C75Cu;
    SET_GPR_U32(ctx, 31, 0x23C764u);
    ctx->pc = 0x23C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C75Cu;
    // 0x23c760: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FF8u, 0x23C75Cu, 0x23C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C764u;
label_23c764:
    // 0x23c764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23c764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c768: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x23c76cu;
}
