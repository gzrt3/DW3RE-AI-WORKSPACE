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

// Function: FUN_001aabc8
// Address: 0x1aabc8 - 0x1aac18
void FUN_001aabc8_0x1aabc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aabc8_0x1aabc8");
#endif

    ctx->pc = 0x1aabc8u;

    // 0x1aabc8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1aabc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1aabcc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1aabccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1aabd0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1aabd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1aabd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aabd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabd8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1aabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1aabdc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1aabdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabe0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1aabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1aabe4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1aabe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabe8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1aabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1aabec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1aabecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabf0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1aabf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1aabf4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1aabf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabf8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aabf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aabfc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1aac00: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1aac00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1aac04: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1aac04u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
    // 0x1aac08: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1aac08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1aac0c: 0x27d23240  addiu       $s2, $fp, 0x3240
    ctx->pc = 0x1aac0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 12864));
    // 0x1aac10: 0xc06a14c  jal         func_1A8530
    ctx->pc = 0x1AAC10u;
    SET_GPR_U32(ctx, 31, 0x1AAC18u);
    ctx->pc = 0x1AAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC10u;
    // 0x1aac14: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8530u, 0x1AAC10u, 0x1AAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC18u;
}
