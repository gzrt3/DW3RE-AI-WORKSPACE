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

// Function: entry_00200590
// Address: 0x200590 - 0x200604
void entry_00200590_0x200590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200590_0x200590");
#endif

    ctx->pc = 0x200590u;

    // 0x200590: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200594: 0xac232760  sw          $v1, 0x2760($at)
    ctx->pc = 0x200594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552760u, _value); } while (0);
    // 0x200598: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x20059c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x20059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2005a0: 0x8c272760  lw          $a3, 0x2760($at)
    ctx->pc = 0x2005a0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x552760u));
    // 0x2005a4: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x2005a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2005a8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2005a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2005ac: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2005b0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005b4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2005b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2005b8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2005bc: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x2005bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2005c0: 0x0  nop
    ctx->pc = 0x2005c0u;
    // NOP
    // 0x2005c4: 0x0  nop
    ctx->pc = 0x2005c4u;
    // NOP
    // 0x2005c8: 0x2010  mfhi        $a0
    ctx->pc = 0x2005c8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2005cc: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2005ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2005d0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x2005d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x2005d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2005d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2005d8: 0xac242760  sw          $a0, 0x2760($at)
    ctx->pc = 0x2005d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10080), GPR_U32(ctx, 4));
    // 0x2005dc: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2005e0: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2005e8: 0xac232764  sw          $v1, 0x2764($at)
    ctx->pc = 0x2005e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x552764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x552764u, _value); } while (0);
    // 0x2005ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2005ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2005f0: 0x8c232764  lw          $v1, 0x2764($at)
    ctx->pc = 0x2005f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x552764u));
    // 0x2005f4: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x2005f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x2005f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2005F8u;
    {
        const bool branch_taken_0x2005f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2005FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2005F8u;
        // 0x2005fc: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2005f8) {
            ctx->pc = 0x200604u;
            return;
        }
    }
    ctx->pc = 0x200600u;
    // 0x200600: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x200600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x200604u;
}
