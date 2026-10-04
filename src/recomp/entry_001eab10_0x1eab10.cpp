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

// Function: entry_001eab10
// Address: 0x1eab10 - 0x1eab80
void entry_001eab10_0x1eab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eab10_0x1eab10");
#endif

    switch (ctx->pc) {
        case 0x1eab78u: goto label_1eab78;
        default: break;
    }

    ctx->pc = 0x1eab10u;

    // 0x1eab10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1eab14: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eab18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eab1c: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eab20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eab24: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eab28: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eab28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eab2c: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1eab30: 0x8f8b8ecc  lw          $t3, -0x7134($gp)
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
    // 0x1eab34: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
    // 0x1eab38: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
    // 0x1eab3c: 0x4810  mfhi        $t1
    ctx->pc = 0x1eab3cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1eab40: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eab40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eab44: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eab48: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x1eab4c: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1eab50: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1eab54: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x1eab58: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x1eab5c: 0x12c2021  addu        $a0, $t1, $t4
    ctx->pc = 0x1eab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1eab60: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1eab64: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1eab68: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1eab68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1eab6c: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1eab70: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1EAB70u;
    SET_GPR_U32(ctx, 31, 0x1EAB78u);
    ctx->pc = 0x1EAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB70u;
    // 0x1eab74: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EAB70u, 0x1EAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB78u;
label_1eab78:
    // 0x1eab78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EAB78u;
    {
        const bool branch_taken_0x1eab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab78) {
            ctx->pc = 0x1EABF0u;
            return;
        }
    }
    ctx->pc = 0x1EAB80u;
}
