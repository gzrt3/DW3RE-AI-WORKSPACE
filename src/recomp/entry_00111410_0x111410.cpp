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

// Function: entry_00111410
// Address: 0x111410 - 0x111444
void entry_00111410_0x111410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111410_0x111410");
#endif

    ctx->pc = 0x111410u;

    // 0x111410: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x111410u;
    {
        const bool branch_taken_0x111410 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111410) {
            ctx->pc = 0x111618u;
            return;
        }
    }
    ctx->pc = 0x111418u;
    // 0x111418: 0x9086003a  lbu         $a2, 0x3A($a0)
    ctx->pc = 0x111418u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x11141c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x11141cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x111420: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x111420u;
    {
        const bool branch_taken_0x111420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111420) {
            ctx->pc = 0x11144Cu;
            return;
        }
    }
    ctx->pc = 0x111428u;
    // 0x111428: 0x906b000c  lbu         $t3, 0xC($v1)
    ctx->pc = 0x111428u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x11142c: 0x906a0004  lbu         $t2, 0x4($v1)
    ctx->pc = 0x11142cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x111430: 0x90660005  lbu         $a2, 0x5($v1)
    ctx->pc = 0x111430u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x111434: 0x29610009  slti        $at, $t3, 0x9
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x111438: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x111438u;
    {
        const bool branch_taken_0x111438 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x11143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111438u;
        // 0x11143c: 0x1465021  addu        $t2, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111438) {
            ctx->pc = 0x111444u;
            return;
        }
    }
    ctx->pc = 0x111440u;
    // 0x111440: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x111444u;
}
