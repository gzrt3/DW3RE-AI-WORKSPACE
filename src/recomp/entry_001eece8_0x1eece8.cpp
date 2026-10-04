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

// Function: entry_001eece8
// Address: 0x1eece8 - 0x1eed1c
void entry_001eece8_0x1eece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eece8_0x1eece8");
#endif

    ctx->pc = 0x1eece8u;

    // 0x1eece8: 0x8d2e0008  lw          $t6, 0x8($t1)
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1eecec: 0x19c0000b  blez        $t6, . + 4 + (0xB << 2)
    ctx->pc = 0x1EECECu;
    {
        const bool branch_taken_0x1eecec = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1EECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EECECu;
        // 0x1eecf0: 0x252f0008  addiu       $t7, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eecec) {
            ctx->pc = 0x1EED1Cu;
            return;
        }
    }
    ctx->pc = 0x1EECF4u;
    // 0x1eecf4: 0x852a000c  lh          $t2, 0xC($t1)
    ctx->pc = 0x1eecf4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1eecf8: 0x11450008  beq         $t2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EECF8u;
    {
        const bool branch_taken_0x1eecf8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eecf8) {
            ctx->pc = 0x1EED1Cu;
            return;
        }
    }
    ctx->pc = 0x1EED00u;
    // 0x1eed00: 0x8529000e  lh          $t1, 0xE($t1)
    ctx->pc = 0x1eed00u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1eed04: 0x11250005  beq         $t1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EED04u;
    {
        const bool branch_taken_0x1eed04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 5));
        if (branch_taken_0x1eed04) {
            ctx->pc = 0x1EED1Cu;
            return;
        }
    }
    ctx->pc = 0x1EED0Cu;
    // 0x1eed0c: 0x25c9fff8  addiu       $t1, $t6, -0x8
    ctx->pc = 0x1eed0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1eed10: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1eed10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1eed14: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1eed14u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1eed18: 0xade90000  sw          $t1, 0x0($t7)
    ctx->pc = 0x1eed18u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x1eed1cu;
}
