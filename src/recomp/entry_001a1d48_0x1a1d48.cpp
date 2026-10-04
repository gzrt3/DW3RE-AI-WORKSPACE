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

// Function: entry_001a1d48
// Address: 0x1a1d48 - 0x1a1db0
void entry_001a1d48_0x1a1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1d48_0x1a1d48");
#endif

    switch (ctx->pc) {
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d80u: goto label_1a1d80;
        default: break;
    }

    ctx->pc = 0x1a1d48u;

    // 0x1a1d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d4c: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1A1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D54u);
    ctx->pc = 0x1A1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D4Cu;
    // 0x1a1d50: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1A1D4Cu, 0x1A1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1D54u;
label_1a1d54:
    // 0x1a1d54: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1d54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1a1d58: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1a1d58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1d5c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D5Cu;
        // 0x1a1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1E2Cu;
            return;
        }
    }
    ctx->pc = 0x1A1D64u;
    // 0x1a1d64: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1a1d68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1d6c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1D6Cu;
    {
        const bool branch_taken_0x1a1d6c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D6Cu;
        // 0x1a1d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d6c) {
            ctx->pc = 0x1A1DB0u;
            return;
        }
    }
    ctx->pc = 0x1A1D74u;
    // 0x1a1d74: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x1a1d74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a1d78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1a1d7c: 0x0  nop
    ctx->pc = 0x1a1d7cu;
    // NOP
label_1a1d80:
    // 0x1a1d80: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a1d84: 0x600013  mtlo        $v1
    ctx->pc = 0x1a1d84u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1a1d88: 0x72628000  madd        $s0, $s3, $v0
    ctx->pc = 0x1a1d88u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1a1d8c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a1d90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1a1d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1d94: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a1d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1a1d98: 0x5043ffd5  beql        $v0, $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A1D98u;
    {
        const bool branch_taken_0x1a1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1d98) {
            ctx->pc = 0x1A1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D98u;
            // 0x1a1d9c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1CF0u;
            return;
        }
    }
    ctx->pc = 0x1A1DA0u;
    // 0x1a1da0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a1da4: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x1a1da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a1da8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A1DA8u;
    {
        const bool branch_taken_0x1a1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA8u;
        // 0x1a1dac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da8) {
            ctx->pc = 0x1A1D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d80;
        }
    }
    ctx->pc = 0x1A1DB0u;
}
