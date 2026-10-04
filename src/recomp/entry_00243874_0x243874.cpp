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

// Function: entry_00243874
// Address: 0x243874 - 0x2438bc
void entry_00243874_0x243874(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243874_0x243874");
#endif

    ctx->pc = 0x243874u;

    // 0x243874: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x243874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x243878: 0x24630238  addiu       $v1, $v1, 0x238
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 568));
    // 0x24387c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x243880: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x243880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243884: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x243884u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x243888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x243888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x24388c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x24388cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x243890: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x243890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x243894: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x243894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243898: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x243898u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x24389c: 0x29010064  slti        $at, $t0, 0x64
    ctx->pc = 0x24389cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2438a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2438A0u;
    {
        const bool branch_taken_0x2438a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2438a0) {
            ctx->pc = 0x2438B0u;
            goto label_2438b0;
        }
    }
    ctx->pc = 0x2438A8u;
    // 0x2438a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2438A8u;
    {
        const bool branch_taken_0x2438a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x8143c  dsll32      $v0, $t0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438a8) {
            ctx->pc = 0x2438B8u;
            goto label_2438b8;
        }
    }
    ctx->pc = 0x2438B0u;
label_2438b0:
    // 0x2438b0: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2438b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x2438b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
label_2438b8:
    // 0x2438b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2438b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    ctx->pc = 0x2438bcu;
}
