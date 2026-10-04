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

// Function: entry_00220228
// Address: 0x220228 - 0x220268
void entry_00220228_0x220228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220228_0x220228");
#endif

    ctx->pc = 0x220228u;

    // 0x220228: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x220228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22022c: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x22022cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x220230: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x220234: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x220234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x220238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x22023c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220240: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x220240u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x220244: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220244u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220248: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x220248u;
    {
        const bool branch_taken_0x220248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220248u;
        // 0x22024c: 0x24c6b4e0  addiu       $a2, $a2, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220248) {
            ctx->pc = 0x2202C0u;
            return;
        }
    }
    ctx->pc = 0x220250u;
    // 0x220250: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x220250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220258: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22025c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x22025cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x220260: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x220260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220264: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220264u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x220268u;
}
