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

// Function: entry_00127ec8
// Address: 0x127ec8 - 0x127f04
void entry_00127ec8_0x127ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ec8_0x127ec8");
#endif

    switch (ctx->pc) {
        case 0x127efcu: goto label_127efc;
        default: break;
    }

    ctx->pc = 0x127ec8u;

    // 0x127ec8: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x127ec8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x127ecc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x127eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x127ed0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x127ED0u;
    {
        const bool branch_taken_0x127ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED0u;
        // 0x127ed4: 0x2841003d  slti        $at, $v0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ed0) {
            ctx->pc = 0x127F04u;
            return;
        }
    }
    ctx->pc = 0x127ED8u;
    // 0x127ed8: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x127ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x127ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x127ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127ee4: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x127ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127eec: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x127eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x127ef0: 0xc60c0304  lwc1        $f12, 0x304($s0)
    ctx->pc = 0x127ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x127ef4: 0xc066e14  jal         func_19B850
    ctx->pc = 0x127EF4u;
    SET_GPR_U32(ctx, 31, 0x127EFCu);
    ctx->pc = 0x127EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EF4u;
    // 0x127ef8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x127EF4u, 0x127EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EFCu;
label_127efc:
    // 0x127efc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x127EFCu;
    {
        const bool branch_taken_0x127efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EFCu;
        // 0x127f00: 0x26040250  addiu       $a0, $s0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127efc) {
            ctx->pc = 0x127F5Cu;
            return;
        }
    }
    ctx->pc = 0x127F04u;
}
