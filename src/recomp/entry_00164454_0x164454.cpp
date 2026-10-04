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

// Function: entry_00164454
// Address: 0x164454 - 0x164474
void entry_00164454_0x164454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164454_0x164454");
#endif

    ctx->pc = 0x164454u;

    // 0x164454: 0x0  nop
    ctx->pc = 0x164454u;
    // NOP
    // 0x164458: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x16445c: 0x28e1012c  slti        $at, $a3, 0x12C
    ctx->pc = 0x16445cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x164460: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x164460u;
    {
        const bool branch_taken_0x164460 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x164464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164460u;
        // 0x164464: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164460) {
            ctx->pc = 0x164474u;
            return;
        }
    }
    ctx->pc = 0x164468u;
    // 0x164468: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x164468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16446c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16446Cu;
    {
        const bool branch_taken_0x16446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16446c) {
            ctx->pc = 0x164444u;
            return;
        }
    }
    ctx->pc = 0x164474u;
}
