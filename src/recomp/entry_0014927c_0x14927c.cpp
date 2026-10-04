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

// Function: entry_0014927c
// Address: 0x14927c - 0x1492bc
void entry_0014927c_0x14927c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014927c_0x14927c");
#endif

    ctx->pc = 0x14927cu;

    // 0x14927c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149280: 0xa623002c  sh          $v1, 0x2C($s1)
    ctx->pc = 0x149280u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x149284: 0xa2220036  sb          $v0, 0x36($s1)
    ctx->pc = 0x149284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x149288: 0x92220037  lbu         $v0, 0x37($s1)
    ctx->pc = 0x149288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x14928c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14928Cu;
    {
        const bool branch_taken_0x14928c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14928c) {
            ctx->pc = 0x1492BCu;
            return;
        }
    }
    ctx->pc = 0x149294u;
    // 0x149294: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x149294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14929c: 0x90630014  lbu         $v1, 0x14($v1)
    ctx->pc = 0x14929cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1492a0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1492A0u;
    {
        const bool branch_taken_0x1492a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1492A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492A0u;
        // 0x1492a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492a0) {
            ctx->pc = 0x1492BCu;
            return;
        }
    }
    ctx->pc = 0x1492A8u;
    // 0x1492a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1492A8u;
    {
        const bool branch_taken_0x1492a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1492a8) {
            ctx->pc = 0x1492BCu;
            return;
        }
    }
    ctx->pc = 0x1492B0u;
    // 0x1492b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1492b4: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1492B4u;
    {
        const bool branch_taken_0x1492b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1492B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1492B4u;
        // 0x1492b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1492b4) {
            ctx->pc = 0x149368u;
            return;
        }
    }
    ctx->pc = 0x1492BCu;
}
