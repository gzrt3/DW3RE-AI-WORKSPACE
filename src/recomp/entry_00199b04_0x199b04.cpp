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

// Function: entry_00199b04
// Address: 0x199b04 - 0x199b68
void entry_00199b04_0x199b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b04_0x199b04");
#endif

    switch (ctx->pc) {
        case 0x199b0cu: goto label_199b0c;
        case 0x199b18u: goto label_199b18;
        default: break;
    }

    ctx->pc = 0x199b04u;

    // 0x199b04: 0xc0692d0  jal         func_1A4B40
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x1A4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B40u, 0x199B04u, 0x199B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B0Cu;
label_199b0c:
    // 0x199b0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x199b10: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B10u;
    // 0x199b14: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x199B10u, 0x199B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199b20: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199b24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b28: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x199b2c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x199b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x199b30: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x199b30u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199b34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x199b38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x199b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199b3c: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x199b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x199b40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x199b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x199b44: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199B68u;
            return;
        }
    }
    ctx->pc = 0x199B4Cu;
    // 0x199b4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199b54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199b58: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x199b5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199b60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B60u;
        // 0x199b64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199B78u;
            return;
        }
    }
    ctx->pc = 0x199B68u;
}
