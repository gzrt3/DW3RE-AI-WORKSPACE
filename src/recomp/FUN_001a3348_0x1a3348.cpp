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

// Function: FUN_001a3348
// Address: 0x1a3348 - 0x1a33a0
void FUN_001a3348_0x1a3348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3348_0x1a3348");
#endif

    switch (ctx->pc) {
        case 0x1a3364u: goto label_1a3364;
        default: break;
    }

    ctx->pc = 0x1a3348u;

    // 0x1a3348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a334c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a334cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3354: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a3354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a3358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a3358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a335c: 0xc06781e  jal         func_19E078
    ctx->pc = 0x1A335Cu;
    SET_GPR_U32(ctx, 31, 0x1A3364u);
    ctx->pc = 0x1A3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A335Cu;
    // 0x1a3360: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E078u, 0x1A335Cu, 0x1A3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3364u;
label_1a3364:
    // 0x1a3364: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x1a3364u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3368: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1a336c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3370: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1a3374: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x1a3374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x1a3378: 0x34631b00  ori         $v1, $v1, 0x1B00
    ctx->pc = 0x1a3378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6912);
    // 0x1a337c: 0x34843300  ori         $a0, $a0, 0x3300
    ctx->pc = 0x1a337cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13056);
    // 0x1a3380: 0xae110590  sw          $s1, 0x590($s0)
    ctx->pc = 0x1a3380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 17));
    // 0x1a3384: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x1a3384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
    // 0x1a3388: 0xae0306d0  sw          $v1, 0x6D0($s0)
    ctx->pc = 0x1a3388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 3));
    // 0x1a338c: 0xae0406d4  sw          $a0, 0x6D4($s0)
    ctx->pc = 0x1a338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 4));
    // 0x1a3390: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x1a3390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x1a3394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a3394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3398: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a3398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a339c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a339cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a33a0u;
}
