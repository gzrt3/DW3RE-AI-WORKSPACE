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

// Function: FUN_00237248
// Address: 0x237248 - 0x237278
void FUN_00237248_0x237248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237248_0x237248");
#endif

    switch (ctx->pc) {
        case 0x237270u: goto label_237270;
        default: break;
    }

    ctx->pc = 0x237248u;

    // 0x237248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23724c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23724cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x237250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23725c: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x23725cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x237260: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237268: 0xc0693c2  jal         func_1A4F08
    ctx->pc = 0x237268u;
    SET_GPR_U32(ctx, 31, 0x237270u);
    ctx->pc = 0x23726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237268u;
    // 0x23726c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F08u, 0x237268u, 0x237270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237270u;
label_237270:
    // 0x237270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237274: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x237278u;
}
