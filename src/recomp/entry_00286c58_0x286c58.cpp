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

// Function: entry_00286c58
// Address: 0x286c58 - 0x286cc8
void entry_00286c58_0x286c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286c58_0x286c58");
#endif

    switch (ctx->pc) {
        case 0x286c70u: goto label_286c70;
        case 0x286cc4u: goto label_286cc4;
        default: break;
    }

    ctx->pc = 0x286c58u;

    // 0x286c58: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x286C58u;
    {
        const bool branch_taken_0x286c58 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c58) {
            ctx->pc = 0x286CC8u;
            return;
        }
    }
    ctx->pc = 0x286C60u;
    // 0x286c60: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x286c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c68: 0xc01d816  jal         func_076058
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C68u;
    // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286c74: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x286c78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x286c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286c7c: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
    // 0x286c80: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    // 0x286c84: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x286c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x286c8c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x286c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286c90: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286c94: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x286c98: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x286c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x286c9c: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x286c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x286ca0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ca4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x286ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x286ca8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cac: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x286cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
    // 0x286cb0: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x286cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
    // 0x286cb4: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x286cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x286cb8: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x286cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
    // 0x286cbc: 0xc01d918  jal         func_076460
    ctx->pc = 0x286CBCu;
    SET_GPR_U32(ctx, 31, 0x286CC4u);
    ctx->pc = 0x286CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CBCu;
    // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286CBCu, 0x286CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CC4u;
label_286cc4:
    // 0x286cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x286cc8u;
}
