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

// Function: entry_00239c5c
// Address: 0x239c5c - 0x239cc0
void entry_00239c5c_0x239c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239c5c_0x239c5c");
#endif

    switch (ctx->pc) {
        case 0x239c64u: goto label_239c64;
        default: break;
    }

    ctx->pc = 0x239c5cu;

    // 0x239c5c: 0xc08e9dc  jal         func_23A770
    ctx->pc = 0x239C5Cu;
    SET_GPR_U32(ctx, 31, 0x239C64u);
    ctx->pc = 0x239C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239C5Cu;
    // 0x239c60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A770u, 0x239C5Cu, 0x239C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239C64u;
label_239c64:
    // 0x239c64: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x239c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x239c68: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x239C68u;
    {
        const bool branch_taken_0x239c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C68u;
        // 0x239c6c: 0x111a42  srl         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c68) {
            ctx->pc = 0x239CC8u;
            return;
        }
    }
    ctx->pc = 0x239C70u;
    // 0x239c70: 0x3c0f0029  lui         $t7, 0x29
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)41 << 16));
    // 0x239c74: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239c78: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239c7c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x239c80: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x239c84: 0x1204000e  beq         $s0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x239C84u;
    {
        const bool branch_taken_0x239c84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x239C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239C84u;
        // 0x239c88: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c84) {
            ctx->pc = 0x239CC0u;
            return;
        }
    }
    ctx->pc = 0x239C8Cu;
    // 0x239c8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239c90: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239c94: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x239c94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x239c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c9c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x239c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239ca0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x239ca4: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x239ca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239cac: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x239cacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x239cb0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x239cb4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x239cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x239cb8: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x239CB8u;
    {
        const bool branch_taken_0x239cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239CB8u;
        // 0x239cbc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cb8) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x239CC0u;
}
