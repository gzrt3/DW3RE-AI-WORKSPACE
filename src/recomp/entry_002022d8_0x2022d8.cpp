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

// Function: entry_002022d8
// Address: 0x2022d8 - 0x20233c
void entry_002022d8_0x2022d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002022d8_0x2022d8");
#endif

    switch (ctx->pc) {
        case 0x2022e4u: goto label_2022e4;
        case 0x202324u: goto label_202324;
        default: break;
    }

    ctx->pc = 0x2022d8u;

    // 0x2022d8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2022dc: 0xc080fe4  jal         func_203F90
    ctx->pc = 0x2022DCu;
    SET_GPR_U32(ctx, 31, 0x2022E4u);
    ctx->pc = 0x2022E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022DCu;
    // 0x2022e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F90u, 0x2022DCu, 0x2022E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022E4u;
label_2022e4:
    // 0x2022e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2022e8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2022e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2022ec: 0x8c26f468  lw          $a2, -0xB98($at)
    ctx->pc = 0x2022ecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x57F468u));
    // 0x2022f0: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x2022f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2022f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2022f8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2022fc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x202300: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x202304: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x202304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202308: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20230c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20230cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x202310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202314: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x202314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x202318: 0x24620130  addiu       $v0, $v1, 0x130
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x20231c: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x20231Cu;
    SET_GPR_U32(ctx, 31, 0x202324u);
    ctx->pc = 0x202320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20231Cu;
    // 0x202320: 0x24440018  addiu       $a0, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x20231Cu, 0x202324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202324u;
label_202324:
    // 0x202324: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20232c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202330: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x202330u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x202334: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202334) {
            ctx->pc = 0x2023D8u;
            return;
        }
    }
    ctx->pc = 0x20233Cu;
}
