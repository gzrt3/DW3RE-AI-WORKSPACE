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

// Function: entry_0011b24c
// Address: 0x11b24c - 0x11b284
void entry_0011b24c_0x11b24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b24c_0x11b24c");
#endif

    switch (ctx->pc) {
        case 0x11b280u: goto label_11b280;
        default: break;
    }

    ctx->pc = 0x11b24cu;

    // 0x11b24c: 0xdf868b70  ld          $a2, -0x7490($gp)
    ctx->pc = 0x11b24cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x11b250: 0x3c023e61  lui         $v0, 0x3E61
    ctx->pc = 0x11b250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15969 << 16));
    // 0x11b254: 0x344447ae  ori         $a0, $v0, 0x47AE
    ctx->pc = 0x11b254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18350);
    // 0x11b258: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x11b258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x11b25c: 0x3c024108  lui         $v0, 0x4108
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16648 << 16));
    // 0x11b260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b264: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11b264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b268: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x11b268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11b26c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x11b26cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11b270: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x11b270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b274: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11b274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11b278: 0xc05c8b0  jal         func_1722C0
    ctx->pc = 0x11B278u;
    SET_GPR_U32(ctx, 31, 0x11B280u);
    ctx->pc = 0x11B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B278u;
    // 0x11b27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722C0u, 0x11B278u, 0x11B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B280u;
label_11b280:
    // 0x11b280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11b280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b284u;
}
