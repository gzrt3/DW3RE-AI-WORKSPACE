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

// Function: entry_001ab908
// Address: 0x1ab908 - 0x1ab960
void entry_001ab908_0x1ab908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab908_0x1ab908");
#endif

    switch (ctx->pc) {
        case 0x1ab954u: goto label_1ab954;
        default: break;
    }

    ctx->pc = 0x1ab908u;

    // 0x1ab908: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ab90c: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB90Cu;
    {
        const bool branch_taken_0x1ab90c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab90c) {
            ctx->pc = 0x1AB910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB90Cu;
            // 0x1ab910: 0xace54680  sw          $a1, 0x4680($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB924u;
            goto label_1ab924;
        }
    }
    ctx->pc = 0x1AB914u;
    // 0x1ab914: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab918: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1ab91c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab91cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab920: 0xace54680  sw          $a1, 0x4680($a3)
    ctx->pc = 0x1ab920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18048), GPR_U32(ctx, 5));
label_1ab924:
    // 0x1ab924: 0x24e24680  addiu       $v0, $a3, 0x4680
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab928: 0x252445c0  addiu       $a0, $t1, 0x45C0
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 17856));
    // 0x1ab92c: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1ab92cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ab930: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ab930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab934: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1ab934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1ab938: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab93c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab944: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab948: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab94c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB94Cu;
    SET_GPR_U32(ctx, 31, 0x1AB954u);
    ctx->pc = 0x1AB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB94Cu;
    // 0x1ab950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB94Cu, 0x1AB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB954u;
label_1ab954:
    // 0x1ab954: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB954u;
    {
        const bool branch_taken_0x1ab954 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab954) {
            ctx->pc = 0x1AB960u;
            return;
        }
    }
    ctx->pc = 0x1AB95Cu;
    // 0x1ab95c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1ab960u;
}
