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

// Function: entry_001eab90
// Address: 0x1eab90 - 0x1eabf0
void entry_001eab90_0x1eab90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eab90_0x1eab90");
#endif

    ctx->pc = 0x1eab90u;

    // 0x1eab90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eab94: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eab98: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eab9c: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
    // 0x1eaba0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eaba4: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
    // 0x1eaba8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eaba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eabac: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1eabb0: 0x8f898ecc  lw          $t1, -0x7134($gp)
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
    // 0x1eabb4: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x1eabb8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eabbc: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x1eabc0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eabc4: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1eabc8: 0x5810  mfhi        $t3
    ctx->pc = 0x1eabc8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x1eabcc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1eabd0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1eabd4: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1eabd8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1eabd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1eabdc: 0xb2083  sra         $a0, $t3, 2
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 2));
    // 0x1eabe0: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1eabe4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1eabe8: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1EABE8u;
    SET_GPR_U32(ctx, 31, 0x1EABF0u);
    ctx->pc = 0x1EABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EABE8u;
    // 0x1eabec: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EABE8u, 0x1EABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABF0u;
}
