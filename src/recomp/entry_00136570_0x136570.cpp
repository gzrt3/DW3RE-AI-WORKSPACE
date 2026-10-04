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

// Function: entry_00136570
// Address: 0x136570 - 0x1365c8
void entry_00136570_0x136570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136570_0x136570");
#endif

    ctx->pc = 0x136570u;

    // 0x136570: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x136574: 0x8c22c998  lw          $v0, -0x3668($at)
    ctx->pc = 0x136574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C998u));
    // 0x136578: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x136578u;
    {
        const bool branch_taken_0x136578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136578) {
            ctx->pc = 0x1366B0u;
            return;
        }
    }
    ctx->pc = 0x136580u;
    // 0x136580: 0x8f86863c  lw          $a2, -0x79C4($gp)
    ctx->pc = 0x136580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x136584: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x136584u;
    {
        const bool branch_taken_0x136584 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x136584) {
            ctx->pc = 0x1365C8u;
            return;
        }
    }
    ctx->pc = 0x13658Cu;
    // 0x13658c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x136590: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x136590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x136594: 0x9025a400  lbu         $a1, -0x5C00($at)
    ctx->pc = 0x136594u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A400u));
    // 0x136598: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x136598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x13659c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365a0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1365a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1365a4: 0x24a5fffd  addiu       $a1, $a1, -0x3
    ctx->pc = 0x1365a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1365a8: 0x9023a402  lbu         $v1, -0x5BFE($at)
    ctx->pc = 0x1365a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A402u));
    // 0x1365ac: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1365acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1365b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1365b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1365b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1365b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1365b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1365bc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1365bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1365c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1365C0u;
    {
        const bool branch_taken_0x1365c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1365c0) {
            ctx->pc = 0x13660Cu;
            return;
        }
    }
    ctx->pc = 0x1365C8u;
}
