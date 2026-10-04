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

// Function: entry_00214ad4
// Address: 0x214ad4 - 0x214b38
void entry_00214ad4_0x214ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214ad4_0x214ad4");
#endif

    switch (ctx->pc) {
        case 0x214b18u: goto label_214b18;
        default: break;
    }

    ctx->pc = 0x214ad4u;

    // 0x214ad4: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x214ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x214ad8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x214ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x214adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214ae0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x214ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x214ae4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x214ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x214ae8: 0x244282b0  addiu       $v0, $v0, -0x7D50
    ctx->pc = 0x214ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935216));
    // 0x214aec: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x214aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x214af0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x214af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x214af4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x214af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x214af8: 0x322bffff  andi        $t3, $s1, 0xFFFF
    ctx->pc = 0x214af8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x214afc: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x214afcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x214b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x214b04: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x214b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x214b08: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x214b08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214b0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214b0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b10: 0xc05de30  jal         func_1778C0
    ctx->pc = 0x214B10u;
    SET_GPR_U32(ctx, 31, 0x214B18u);
    ctx->pc = 0x214B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214B10u;
    // 0x214b14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x214B10u, 0x214B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214B18u;
label_214b18:
    // 0x214b18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x214b18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x214b1c: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x214b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x214b20: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x214b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214b24: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x214b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x214b28: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x214B28u;
    {
        const bool branch_taken_0x214b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214B28u;
        // 0x214b2c: 0x267300a0  addiu       $s3, $s3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214b28) {
            ctx->pc = 0x214AD0u;
            return;
        }
    }
    ctx->pc = 0x214B30u;
    // 0x214b30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x214b30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x214b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214b38u;
}
