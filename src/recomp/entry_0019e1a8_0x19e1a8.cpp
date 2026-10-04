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

// Function: entry_0019e1a8
// Address: 0x19e1a8 - 0x19e264
void entry_0019e1a8_0x19e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e1a8_0x19e1a8");
#endif

    switch (ctx->pc) {
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e214u: goto label_19e214;
        case 0x19e258u: goto label_19e258;
        default: break;
    }

    ctx->pc = 0x19e1a8u;

    // 0x19e1a8: 0xae62083c  sw          $v0, 0x83C($s3)
    ctx->pc = 0x19e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2108), GPR_U32(ctx, 2));
    // 0x19e1ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19e1b0: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19e1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19e1b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19e1b8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x19e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x19e1bc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19E1BCu;
    {
        const bool branch_taken_0x19e1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1BCu;
        // 0x19e1c0: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e1bc) {
            ctx->pc = 0x19E264u;
            return;
        }
    }
    ctx->pc = 0x19E1C4u;
    // 0x19e1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19e1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1c8: 0x24a5a048  addiu       $a1, $a1, -0x5FB8
    ctx->pc = 0x19e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942792));
    // 0x19e1cc: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x19E1CCu;
    SET_GPR_U32(ctx, 31, 0x19E1D4u);
    ctx->pc = 0x19E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1CCu;
    // 0x19e1d0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x19E1CCu, 0x19E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D4u;
label_19e1d4:
    // 0x19e1d4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19e1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19e1d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e1dc: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e1e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e1e4: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E1E4u;
    SET_GPR_U32(ctx, 31, 0x19E1ECu);
    ctx->pc = 0x19E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E4u;
    // 0x19e1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E1E4u, 0x19E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1ECu;
label_19e1ec:
    // 0x19e1ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x19e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x19e1f0: 0x8e640858  lw          $a0, 0x858($s3)
    ctx->pc = 0x19e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2136)));
    // 0x19e1f4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x19e1f8: 0xac232010  sw          $v1, 0x2010($at)
    ctx->pc = 0x19e1f8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x19e1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19e200: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19e200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x19e204: 0xc068b12  jal         func_1A2C48
    ctx->pc = 0x19E204u;
    SET_GPR_U32(ctx, 31, 0x19E20Cu);
    ctx->pc = 0x19E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E204u;
    // 0x19e208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C48u, 0x19E204u, 0x19E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E20Cu;
label_19e20c:
    // 0x19e20c: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x19E20Cu;
    SET_GPR_U32(ctx, 31, 0x19E214u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x19E20Cu, 0x19E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E214u;
label_19e214:
    // 0x19e214: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x19e218: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x19e218u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x19e21c: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x19e21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x19e220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x19e220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x19e224: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x19e228: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x19e22c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19e230: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x19e230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x19e234: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x19e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x19e238: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x19e23c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19e23cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2));
    // 0x19e240: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x19e240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x19e244: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e244u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0));
    // 0x19e248: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x19e24c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19e24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19e250: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x19E250u;
    SET_GPR_U32(ctx, 31, 0x19E258u);
    ctx->pc = 0x19E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E250u;
    // 0x19e254: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x19E250u, 0x19E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E258u;
label_19e258:
    // 0x19e258: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19e25c: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x19e25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x19e260: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19e260u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 0));
    ctx->pc = 0x19e264u;
}
