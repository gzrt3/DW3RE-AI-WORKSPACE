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

// Function: entry_001b1f48
// Address: 0x1b1f48 - 0x1b1fd4
void entry_001b1f48_0x1b1f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f48_0x1b1f48");
#endif

    switch (ctx->pc) {
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fd0u: goto label_1b1fd0;
        default: break;
    }

    ctx->pc = 0x1b1f48u;

    // 0x1b1f48: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b1f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f4c: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b1f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b1f50: 0x261067c0  addiu       $s0, $s0, 0x67C0
    ctx->pc = 0x1b1f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26560));
    // 0x1b1f54: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b1f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
    // 0x1b1f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f5c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b1f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1b1f60: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b1f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b1f64: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x1b1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x1b1f68: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x1B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F68u;
    // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B1F68u, 0x1B1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f74: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1f78: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1B1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F78u;
    // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1F78u, 0x1B1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1f84: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1f88: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x1b1f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1f94: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1f98: 0x256b1e38  addiu       $t3, $t3, 0x1E38
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7736));
    // 0x1b1f9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1fa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1fa4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b1fa8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1FA8u;
    SET_GPR_U32(ctx, 31, 0x1B1FB0u);
    ctx->pc = 0x1B1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FA8u;
    // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1FA8u, 0x1B1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FB0u;
label_1b1fb0:
    // 0x1b1fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1fb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1FB4u;
    {
        const bool branch_taken_0x1b1fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fb4) {
            ctx->pc = 0x1B1FC8u;
            goto label_1b1fc8;
        }
    }
    ctx->pc = 0x1B1FBCu;
    // 0x1b1fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b1fc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1FC0u;
    {
        const bool branch_taken_0x1b1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc0) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1FC8u, 0x1B1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1fd4u;
}
