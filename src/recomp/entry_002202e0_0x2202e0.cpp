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

// Function: entry_002202e0
// Address: 0x2202e0 - 0x220320
void entry_002202e0_0x2202e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002202e0_0x2202e0");
#endif

    ctx->pc = 0x2202e0u;

    // 0x2202e0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2202e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2202e4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2202e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x2202e8: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x2202e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x2202ec: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x2202ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x2202f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x2202f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x2202f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2202f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2202f8: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x2202f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x2202fc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2202fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220300: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x220300u;
    {
        const bool branch_taken_0x220300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220300u;
        // 0x220304: 0x2508b4e0  addiu       $t0, $t0, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220300) {
            ctx->pc = 0x220378u;
            return;
        }
    }
    ctx->pc = 0x220308u;
    // 0x220308: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x220308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22030c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22030cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220310: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x220314: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220314u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220318: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22031c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x22031cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x220320u;
}
