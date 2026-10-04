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

// Function: entry_001b55bc
// Address: 0x1b55bc - 0x1b5618
void entry_001b55bc_0x1b55bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b55bc_0x1b55bc");
#endif

    ctx->pc = 0x1b55bcu;

    // 0x1b55bc: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1b55bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b55c0: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B5618u;
            return;
        }
    }
    ctx->pc = 0x1B55C8u;
    // 0x1b55c8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b55cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b55ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b55d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b55d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b55d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b55dc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1b55dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1b55e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b55e4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b55e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b55ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b55ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b55f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b55f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b55f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1b55f8: 0x18c027  nor         $t8, $zero, $t8
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 24)));
    // 0x1b55fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b5600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b5604: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x1b5604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1b5608: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b5608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b560c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b5610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5614: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x1b5614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    ctx->pc = 0x1b5618u;
}
