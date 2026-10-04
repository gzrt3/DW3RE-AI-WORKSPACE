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

// Function: entry_001dfc40
// Address: 0x1dfc40 - 0x1dfca8
void entry_001dfc40_0x1dfc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfc40_0x1dfc40");
#endif

    ctx->pc = 0x1dfc40u;

    // 0x1dfc40: 0xf6900  sll         $t5, $t7, 4
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1dfc44: 0x25b86c00  addiu       $t8, $t5, 0x6C00
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x1dfc48: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1dfc48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1dfc4c: 0x1168c0  sll         $t5, $s1, 3
    ctx->pc = 0x1dfc4cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1dfc50: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dfc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1dfc54: 0x25af7900  addiu       $t7, $t5, 0x7900
    ctx->pc = 0x1dfc54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x1dfc58: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1dfc5c: 0xe6900  sll         $t5, $t6, 4
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1dfc60: 0x25290003  addiu       $t1, $t1, 0x3
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1dfc64: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x1dfc64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x1dfc68: 0x1068c0  sll         $t5, $s0, 3
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1dfc6c: 0xaa8021  addu        $s0, $a1, $t2
    ctx->pc = 0x1dfc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1dfc70: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x1dfc70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x1dfc74: 0xa6180450  sh          $t8, 0x450($s0)
    ctx->pc = 0x1dfc74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1104), (uint16_t)GPR_U32(ctx, 24));
    // 0x1dfc78: 0xa60f0452  sh          $t7, 0x452($s0)
    ctx->pc = 0x1dfc78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1106), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dfc7c: 0xa60e0460  sh          $t6, 0x460($s0)
    ctx->pc = 0x1dfc7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1120), (uint16_t)GPR_U32(ctx, 14));
    // 0x1dfc80: 0xa60d0462  sh          $t5, 0x462($s0)
    ctx->pc = 0x1dfc80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1122), (uint16_t)GPR_U32(ctx, 13));
    // 0x1dfc84: 0xa20c0443  sb          $t4, 0x443($s0)
    ctx->pc = 0x1dfc84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1091), (uint8_t)GPR_U32(ctx, 12));
    // 0x1dfc88: 0x296c0006  slti        $t4, $t3, 0x6
    ctx->pc = 0x1dfc88u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dfc8c: 0x1580ffbf  bnez        $t4, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1DFC8Cu;
    {
        const bool branch_taken_0x1dfc8c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC8Cu;
        // 0x1dfc90: 0x254a00a0  addiu       $t2, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc8c) {
            ctx->pc = 0x1DFB8Cu;
            return;
        }
    }
    ctx->pc = 0x1DFC94u;
    // 0x1dfc94: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x1dfc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1dfc98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dfc98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfc9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfca0: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1DFCA0u;
    SET_GPR_U32(ctx, 31, 0x1DFCA8u);
    ctx->pc = 0x1DFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA0u;
    // 0x1dfca4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1DFCA0u, 0x1DFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCA8u;
}
