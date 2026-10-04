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

// Function: FUN_001a2c48
// Address: 0x1a2c48 - 0x1a2c90
void FUN_001a2c48_0x1a2c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2c48_0x1a2c48");
#endif

    switch (ctx->pc) {
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        default: break;
    }

    ctx->pc = 0x1a2c48u;

label_1a2c48:
    // 0x1a2c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2c4c:
    // 0x1a2c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c50:
    // 0x1a2c50: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_1a2c58;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C58u;
label_1a2c58:
    // 0x1a2c58: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2c5c:
    // 0x1a2c5c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1a2c60:
    if (ctx->pc == 0x1A2C60u) {
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C64u;
        goto label_1a2c64;
    }
    ctx->pc = 0x1A2C5Cu;
    {
        const bool branch_taken_0x1a2c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c5c) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C64u;
label_1a2c64:
    // 0x1a2c64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2c68:
    // 0x1a2c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a2c6c:
    // 0x1a2c6c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1a2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a2c70:
    // 0x1a2c70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a2c74:
    // 0x1a2c74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a2c78:
    if (ctx->pc == 0x1A2C78u) {
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C7Cu;
        goto label_1a2c7c;
    }
    ctx->pc = 0x1A2C74u;
    {
        const bool branch_taken_0x1a2c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c74) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x60f809  jalr        $v1
label_1a2c80:
    if (ctx->pc == 0x1A2C80u) {
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C84u;
        goto label_1a2c84;
    }
    ctx->pc = 0x1A2C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2C84u);
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C7Cu, 0x1A2C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C84u;
label_1a2c84:
    // 0x1a2c84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c88:
    // 0x1a2c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2c8c:
    // 0x1a2c8c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2c90u;
}
