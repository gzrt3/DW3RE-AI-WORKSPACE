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

// Function: entry_001364ac
// Address: 0x1364ac - 0x136504
void entry_001364ac_0x1364ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001364ac_0x1364ac");
#endif

    ctx->pc = 0x1364acu;

    // 0x1364ac: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364b0: 0xa420a3e4  sh          $zero, -0x5C1C($at)
    ctx->pc = 0x1364b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E4u, _value); } while (0);
    // 0x1364b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364b8: 0xa420a3e8  sh          $zero, -0x5C18($at)
    ctx->pc = 0x1364b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E8u, _value); } while (0);
    // 0x1364bc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364c0: 0xa020a3ea  sb          $zero, -0x5C16($at)
    ctx->pc = 0x1364c0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3EAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x30A3EAu, _value); } while (0);
    // 0x1364c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1364c8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1364c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1364cc: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1364CCu;
    {
        const bool branch_taken_0x1364cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1364cc) {
            ctx->pc = 0x13650Cu;
            return;
        }
    }
    ctx->pc = 0x1364D4u;
    // 0x1364d4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x1364d8: 0x8c24a414  lw          $a0, -0x5BEC($at)
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A414u));
    // 0x1364dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1364dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1364e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1364e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1364e4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1364E4u;
    {
        const bool branch_taken_0x1364e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364e4) {
            ctx->pc = 0x136504u;
            return;
        }
    }
    ctx->pc = 0x1364ECu;
    // 0x1364ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1364ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1364f0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1364f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1364f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1364f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1364F8u;
    {
        const bool branch_taken_0x1364f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364F8u;
        // 0x1364fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364f8) {
            ctx->pc = 0x136540u;
            return;
        }
    }
    ctx->pc = 0x136500u;
    // 0x136500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x136500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136504u;
}
