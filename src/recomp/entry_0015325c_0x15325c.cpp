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

// Function: entry_0015325c
// Address: 0x15325c - 0x153290
void entry_0015325c_0x15325c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015325c_0x15325c");
#endif

    switch (ctx->pc) {
        case 0x153288u: goto label_153288;
        default: break;
    }

    ctx->pc = 0x15325cu;

    // 0x15325c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x153260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153264: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x153268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15326c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x153270: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153274: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153278: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15327c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153280: 0xc054dc8  jal         func_153720
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153280u;
    // 0x153284: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x153280u, 0x153288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x153288u;
    {
        const bool branch_taken_0x153288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153288u;
        // 0x15328c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153288) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x153290u;
}
