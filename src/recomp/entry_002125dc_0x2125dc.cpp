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

// Function: entry_002125dc
// Address: 0x2125dc - 0x212614
void entry_002125dc_0x2125dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002125dc_0x2125dc");
#endif

    ctx->pc = 0x2125dcu;

    // 0x2125dc: 0x0  nop
    ctx->pc = 0x2125dcu;
    // NOP
    // 0x2125e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2125e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2125e4: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2125e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2125e8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2125e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2125ec: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2125ECu;
    {
        const bool branch_taken_0x2125ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125ECu;
        // 0x2125f0: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125ec) {
            ctx->pc = 0x212564u;
            return;
        }
    }
    ctx->pc = 0x2125F4u;
    // 0x2125f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2125f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2125f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2125f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2125fc: 0xfc2076f8  sd          $zero, 0x76F8($at)
    ctx->pc = 0x2125fcu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5876F8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5876F8u, _value); } while (0);
    // 0x212600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x212600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212604: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x212604u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x212608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21260c: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x21260cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x212610: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x212610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x212614u;
}
