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

// Function: FUN_001a1840
// Address: 0x1a1840 - 0x1a1884
void FUN_001a1840_0x1a1840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1840_0x1a1840");
#endif

    switch (ctx->pc) {
        case 0x1a1860u: goto label_1a1860;
        case 0x1a1870u: goto label_1a1870;
        default: break;
    }

    ctx->pc = 0x1a1840u;

    // 0x1a1840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1844: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a1848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a184c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a184cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1850: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a1854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a1854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a1858: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A1858u;
    SET_GPR_U32(ctx, 31, 0x1A1860u);
    ctx->pc = 0x1A185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1858u;
    // 0x1a185c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A1858u, 0x1A1860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1860u;
label_1a1860:
    // 0x1a1860: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a1860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1868: 0xc0685ea  jal         func_1A17A8
    ctx->pc = 0x1A1868u;
    SET_GPR_U32(ctx, 31, 0x1A1870u);
    ctx->pc = 0x1A186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1868u;
    // 0x1a186c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A17A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A17A8u, 0x1A1868u, 0x1A1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1870u;
label_1a1870:
    // 0x1a1870: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a1870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a1874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a187c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a187cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a1884u;
}
