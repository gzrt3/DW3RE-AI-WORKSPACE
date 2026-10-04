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

// Function: entry_001152d8
// Address: 0x1152d8 - 0x11532c
void entry_001152d8_0x1152d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001152d8_0x1152d8");
#endif

    ctx->pc = 0x1152d8u;

    // 0x1152d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1152dc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1152e0: 0xae061d68  sw          $a2, 0x1D68($s0)
    ctx->pc = 0x1152e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7528), GPR_U32(ctx, 6));
    // 0x1152e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1152e8: 0xae001d70  sw          $zero, 0x1D70($s0)
    ctx->pc = 0x1152e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 0));
    // 0x1152ec: 0xae051d6c  sw          $a1, 0x1D6C($s0)
    ctx->pc = 0x1152ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7532), GPR_U32(ctx, 5));
    // 0x1152f0: 0xae001d74  sw          $zero, 0x1D74($s0)
    ctx->pc = 0x1152f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 0));
    // 0x1152f4: 0x9044003a  lbu         $a0, 0x3A($v0)
    ctx->pc = 0x1152f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1152f8: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1152FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152F8u;
        // 0x1152fc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x115408u;
            return;
        }
    }
    ctx->pc = 0x115300u;
    // 0x115300: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x115300u;
    {
        const bool branch_taken_0x115300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115300) {
            ctx->pc = 0x11534Cu;
            return;
        }
    }
    ctx->pc = 0x115308u;
    // 0x115308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11530c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11530Cu;
    {
        const bool branch_taken_0x11530c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x115310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11530Cu;
        // 0x115310: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11530c) {
            ctx->pc = 0x115340u;
            return;
        }
    }
    ctx->pc = 0x115314u;
    // 0x115314: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115314u;
    {
        const bool branch_taken_0x115314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115314) {
            ctx->pc = 0x115334u;
            return;
        }
    }
    ctx->pc = 0x11531Cu;
    // 0x11531c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11531Cu;
    {
        const bool branch_taken_0x11531c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11531c) {
            ctx->pc = 0x11532Cu;
            return;
        }
    }
    ctx->pc = 0x115324u;
    // 0x115324: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x115324u;
    {
        const bool branch_taken_0x115324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115324) {
            ctx->pc = 0x115414u;
            return;
        }
    }
    ctx->pc = 0x11532Cu;
}
