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

// Function: entry_0011a760
// Address: 0x11a760 - 0x11a798
void entry_0011a760_0x11a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a760_0x11a760");
#endif

    switch (ctx->pc) {
        case 0x11a794u: goto label_11a794;
        default: break;
    }

    ctx->pc = 0x11a760u;

    // 0x11a760: 0xdf868b70  ld          $a2, -0x7490($gp)
    ctx->pc = 0x11a760u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x11a764: 0x346447ae  ori         $a0, $v1, 0x47AE
    ctx->pc = 0x11a764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x11a768: 0x3c023fe6  lui         $v0, 0x3FE6
    ctx->pc = 0x11a768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
    // 0x11a76c: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x11a76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x11a770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a774: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11a774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11a778: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x11a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
    // 0x11a77c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x11a77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11a780: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x11a780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11a784: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11a784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x11a788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a78c: 0xc05c8b0  jal         func_1722C0
    ctx->pc = 0x11A78Cu;
    SET_GPR_U32(ctx, 31, 0x11A794u);
    ctx->pc = 0x11A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A78Cu;
    // 0x11a790: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1722C0u, 0x11A78Cu, 0x11A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A794u;
label_11a794:
    // 0x11a794: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11a794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a798u;
}
