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

// Function: entry_001492bc
// Address: 0x1492bc - 0x149340
void entry_001492bc_0x1492bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492bc_0x1492bc");
#endif

    switch (ctx->pc) {
        case 0x14932cu: goto label_14932c;
        default: break;
    }

    ctx->pc = 0x1492bcu;

    // 0x1492bc: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1492bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1492c0: 0x92270026  lbu         $a3, 0x26($s1)
    ctx->pc = 0x1492c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x1492c4: 0x14470027  bne         $v0, $a3, . + 4 + (0x27 << 2)
    ctx->pc = 0x1492C4u;
    {
        const bool branch_taken_0x1492c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1492c4) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x1492CCu;
    // 0x1492cc: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x1492ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x1492d0: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x1492d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x1492d4: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1492D4u;
    {
        const bool branch_taken_0x1492d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1492d4) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x1492DCu;
    // 0x1492dc: 0x92260020  lbu         $a2, 0x20($s1)
    ctx->pc = 0x1492dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1492e0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1492e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1492e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1492e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1492e8: 0x2442f210  addiu       $v0, $v0, -0xDF0
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963728));
    // 0x1492ec: 0x2463f212  addiu       $v1, $v1, -0xDEE
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963730));
    // 0x1492f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1492f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492f4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x1492f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1492f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1492f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1492fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1492fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x149300: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149304: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x149304u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x149308: 0xa3a2003c  sb          $v0, 0x3C($sp)
    ctx->pc = 0x149308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x14930c: 0x92260020  lbu         $a2, 0x20($s1)
    ctx->pc = 0x14930cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x149310: 0x82220027  lb          $v0, 0x27($s1)
    ctx->pc = 0x149310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x149314: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x149318: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14931c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149320: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149324: 0xc0528fc  jal         func_14A3F0
    ctx->pc = 0x149324u;
    SET_GPR_U32(ctx, 31, 0x14932Cu);
    ctx->pc = 0x149328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149324u;
    // 0x149328: 0xa3a2003d  sb          $v0, 0x3D($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3F0u, 0x149324u, 0x14932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14932Cu;
label_14932c:
    // 0x14932c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14932Cu;
    {
        const bool branch_taken_0x14932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14932c) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x149334u;
    // 0x149334: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x149334u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x149338: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x149338u;
    {
        const bool branch_taken_0x149338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149338u;
        // 0x14933c: 0xa2200036  sb          $zero, 0x36($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149338) {
            ctx->pc = 0x149364u;
            return;
        }
    }
    ctx->pc = 0x149340u;
}
