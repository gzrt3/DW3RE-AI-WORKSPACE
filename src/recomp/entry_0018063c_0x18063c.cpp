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

// Function: entry_0018063c
// Address: 0x18063c - 0x180680
void entry_0018063c_0x18063c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018063c_0x18063c");
#endif

    ctx->pc = 0x18063cu;

label_18063c:
    // 0x18063c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x180640: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
    // 0x180644: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x180644u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x180648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18064c: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x18064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x180650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x180654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x180658: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x180658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x18065c: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18065Cu;
    {
        const bool branch_taken_0x18065c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18065c) {
            ctx->pc = 0x18063Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18063c;
        }
    }
    ctx->pc = 0x180664u;
    // 0x180664: 0x8f8287e4  lw          $v0, -0x781C($gp)
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
    // 0x180668: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180668u;
    {
        const bool branch_taken_0x180668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180668) {
            ctx->pc = 0x180680u;
            return;
        }
    }
    ctx->pc = 0x180670u;
    // 0x180670: 0xf  sync
    ctx->pc = 0x180670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x180674: 0x42000038  ei
    ctx->pc = 0x180674u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x180678: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x180678u;
    {
        const bool branch_taken_0x180678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180678u;
        // 0x18067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180678) {
            ctx->pc = 0x180934u;
            return;
        }
    }
    ctx->pc = 0x180680u;
}
