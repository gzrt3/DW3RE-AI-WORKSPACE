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

// Function: entry_002445d4
// Address: 0x2445d4 - 0x244614
void entry_002445d4_0x2445d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002445d4_0x2445d4");
#endif

    ctx->pc = 0x2445d4u;

    // 0x2445d4: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x2445d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2445d8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2445d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2445dc: 0x5200a  movz        $a0, $zero, $a1
    ctx->pc = 0x2445dcu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2445e0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2445e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2445e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2445e8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2445ec: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x2445ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2445f0: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x2445f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x2445f4: 0x29210064  slti        $at, $t1, 0x64
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2445f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2445F8u;
    {
        const bool branch_taken_0x2445f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445f8) {
            ctx->pc = 0x244608u;
            goto label_244608;
        }
    }
    ctx->pc = 0x244600u;
    // 0x244600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x9243c  dsll32      $a0, $t1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x244608u;
label_244608:
    // 0x244608: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x24460c: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
label_244610:
    // 0x244610: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x244610u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->pc = 0x244614u;
}
