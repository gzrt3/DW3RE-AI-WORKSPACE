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

// Function: entry_0023b488
// Address: 0x23b488 - 0x23b4b8
void entry_0023b488_0x23b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b488_0x23b488");
#endif

    ctx->pc = 0x23b488u;

    // 0x23b488: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23b488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23b48c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x23b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x23b490: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23b490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x23b494: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x23b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x23b498: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x23b49c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x23b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23b4a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x23b4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x23b4a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b4a8: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x23b4a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x23b4ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23b4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23b4b0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23B4B0u;
    {
        const bool branch_taken_0x23b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B4B0u;
        // 0x23b4b4: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b4b0) {
            ctx->pc = 0x23B568u;
            return;
        }
    }
    ctx->pc = 0x23B4B8u;
}
