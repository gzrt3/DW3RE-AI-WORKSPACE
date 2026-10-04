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

// Function: entry_00222308
// Address: 0x222308 - 0x222370
void entry_00222308_0x222308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222308_0x222308");
#endif

    ctx->pc = 0x222308u;

    // 0x222308: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22230c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x22230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x222310: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x222310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x222314: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x222314u;
    {
        const bool branch_taken_0x222314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222314u;
        // 0x222318: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222314) {
            ctx->pc = 0x2224ECu;
            return;
        }
    }
    ctx->pc = 0x22231Cu;
    // 0x22231c: 0x10620073  beq         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x22231Cu;
    {
        const bool branch_taken_0x22231c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22231c) {
            ctx->pc = 0x2224ECu;
            return;
        }
    }
    ctx->pc = 0x222324u;
    // 0x222324: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x222324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x222328: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x222328u;
    {
        const bool branch_taken_0x222328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222328u;
        // 0x22232c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222328) {
            ctx->pc = 0x2224CCu;
            return;
        }
    }
    ctx->pc = 0x222330u;
    // 0x222330: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2224ACu;
            return;
        }
    }
    ctx->pc = 0x222338u;
    // 0x222338: 0x10650053  beq         $v1, $a1, . + 4 + (0x53 << 2)
    ctx->pc = 0x222338u;
    {
        const bool branch_taken_0x222338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222338) {
            ctx->pc = 0x222488u;
            return;
        }
    }
    ctx->pc = 0x222340u;
    // 0x222340: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x222340u;
    {
        const bool branch_taken_0x222340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222340) {
            ctx->pc = 0x22244Cu;
            return;
        }
    }
    ctx->pc = 0x222348u;
    // 0x222348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22234c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22234Cu;
    {
        const bool branch_taken_0x22234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22234c) {
            ctx->pc = 0x2223C4u;
            return;
        }
    }
    ctx->pc = 0x222354u;
    // 0x222354: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222354) {
            ctx->pc = 0x222390u;
            return;
        }
    }
    ctx->pc = 0x22235Cu;
    // 0x22235c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222360u;
    {
        const bool branch_taken_0x222360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222360) {
            ctx->pc = 0x222370u;
            return;
        }
    }
    ctx->pc = 0x222368u;
    // 0x222368: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222368) {
            ctx->pc = 0x222514u;
            return;
        }
    }
    ctx->pc = 0x222370u;
}
