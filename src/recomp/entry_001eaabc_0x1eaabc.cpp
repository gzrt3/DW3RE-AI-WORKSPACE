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

// Function: entry_001eaabc
// Address: 0x1eaabc - 0x1eab10
void entry_001eaabc_0x1eaabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eaabc_0x1eaabc");
#endif

    switch (ctx->pc) {
        case 0x1eaaf4u: goto label_1eaaf4;
        default: break;
    }

    ctx->pc = 0x1eaabcu;

    // 0x1eaabc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eaac0: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eaac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eaac4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eaac8: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1eaacc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eaad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaad4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eaad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eaad8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eaadc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eaae0: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1eaae4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eaae4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eaae8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1eaaec: 0xc055148  jal         func_154520
    ctx->pc = 0x1EAAECu;
    SET_GPR_U32(ctx, 31, 0x1EAAF4u);
    ctx->pc = 0x1EAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAECu;
    // 0x1eaaf0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1EAAECu, 0x1EAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF4u;
label_1eaaf4:
    // 0x1eaaf4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1eaaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eaaf8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EAAF8u;
    {
        const bool branch_taken_0x1eaaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaf8) {
            ctx->pc = 0x1EAB80u;
            return;
        }
    }
    ctx->pc = 0x1EAB00u;
    // 0x1eab00: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1eab04: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAB04u;
    {
        const bool branch_taken_0x1eab04 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB04u;
        // 0x1eab08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab04) {
            ctx->pc = 0x1EAB10u;
            return;
        }
    }
    ctx->pc = 0x1EAB0Cu;
    // 0x1eab0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1eab10u;
}
