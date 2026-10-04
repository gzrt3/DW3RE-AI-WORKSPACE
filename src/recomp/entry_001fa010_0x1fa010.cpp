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

// Function: entry_001fa010
// Address: 0x1fa010 - 0x1fa050
void entry_001fa010_0x1fa010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa010_0x1fa010");
#endif

    ctx->pc = 0x1fa010u;

    // 0x1fa010: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1fa010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1fa014: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1fa014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1fa018: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FA018u;
    {
        const bool branch_taken_0x1fa018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA018u;
        // 0x1fa01c: 0x2403000e  addiu       $v1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa018) {
            ctx->pc = 0x1FA070u;
            return;
        }
    }
    ctx->pc = 0x1FA020u;
    // 0x1fa020: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA020u;
    {
        const bool branch_taken_0x1fa020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa020) {
            ctx->pc = 0x1FA068u;
            return;
        }
    }
    ctx->pc = 0x1FA028u;
    // 0x1fa028: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa02c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FA02Cu;
    {
        const bool branch_taken_0x1fa02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FA030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA02Cu;
        // 0x1fa030: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa02c) {
            ctx->pc = 0x1FA060u;
            return;
        }
    }
    ctx->pc = 0x1FA034u;
    // 0x1fa034: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA034u;
    {
        const bool branch_taken_0x1fa034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa034) {
            ctx->pc = 0x1FA058u;
            return;
        }
    }
    ctx->pc = 0x1FA03Cu;
    // 0x1fa03c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fa03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fa040: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA040u;
    {
        const bool branch_taken_0x1fa040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa040) {
            ctx->pc = 0x1FA050u;
            return;
        }
    }
    ctx->pc = 0x1FA048u;
    // 0x1fa048: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FA048u;
    {
        const bool branch_taken_0x1fa048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA048u;
        // 0x1fa04c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa048) {
            ctx->pc = 0x1FA078u;
            return;
        }
    }
    ctx->pc = 0x1FA050u;
}
