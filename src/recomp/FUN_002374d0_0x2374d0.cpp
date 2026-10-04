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

// Function: FUN_002374d0
// Address: 0x2374d0 - 0x237550
void FUN_002374d0_0x2374d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002374d0_0x2374d0");
#endif

    switch (ctx->pc) {
        case 0x2374e0u: goto label_2374e0;
        case 0x237540u: goto label_237540;
        default: break;
    }

    ctx->pc = 0x2374d0u;

    // 0x2374d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2374d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2374d4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2374d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2374d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2374d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374dc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2374dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2374e0:
    // 0x2374e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2374e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374e4: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2374e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2374e8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2374e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374ec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2374ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2374f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2374f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2374f4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2374f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2374f8: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2374f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2374fc: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2374fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x237500: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x237500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x237504: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x237504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x237508: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x237508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x23750c: 0x8eeb0040  lw          $t3, 0x40($s7)
    ctx->pc = 0x23750cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x237510: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x237510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x237514: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x237514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x237518: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x237518u;
    {
        const bool branch_taken_0x237518 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x23751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237518u;
        // 0x23751c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237518) {
            ctx->pc = 0x237544u;
            goto label_237544;
        }
    }
    ctx->pc = 0x237520u;
    // 0x237520: 0x8ee60044  lw          $a2, 0x44($s7)
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x237524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237528: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x237528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23752c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x23752cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x237530: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x237534: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x237534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x237538: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x237538u;
    SET_GPR_U32(ctx, 31, 0x237540u);
    ctx->pc = 0x23753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237538u;
    // 0x23753c: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x237538u, 0x237540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237540u;
label_237540:
    // 0x237540: 0xaee00040  sw          $zero, 0x40($s7)
    ctx->pc = 0x237540u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_237544:
    // 0x237544: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x237544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x237548: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x237548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23754c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23754cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    ctx->pc = 0x237550u;
}
