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

// Function: entry_002203f4
// Address: 0x2203f4 - 0x220434
void entry_002203f4_0x2203f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002203f4_0x2203f4");
#endif

    ctx->pc = 0x2203f4u;

    // 0x2203f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2203f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x2203f8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x2203f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x2203fc: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x2203fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x220400: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x220400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x220404: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x220404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x220408: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x220408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22040c: 0xa424b4ea  sh          $a0, -0x4B16($at)
    ctx->pc = 0x22040cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2FB4EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x2FB4EAu, _value); } while (0);
    // 0x220410: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x220410u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x220414: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x220414u;
    {
        const bool branch_taken_0x220414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x220418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220414u;
        // 0x220418: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220414) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x22041Cu;
    // 0x22041c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22041cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220420: 0x24e7b4e0  addiu       $a3, $a3, -0x4B20
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948064));
    // 0x220424: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x220424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x220428: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x220428u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22042c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x22042cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x220430: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x220434u;
}
