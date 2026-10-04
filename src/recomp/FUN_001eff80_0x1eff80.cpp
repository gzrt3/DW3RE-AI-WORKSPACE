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

// Function: FUN_001eff80
// Address: 0x1eff80 - 0x1f003c
void FUN_001eff80_0x1eff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eff80_0x1eff80");
#endif

    ctx->pc = 0x1eff80u;

    // 0x1eff80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eff80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eff84: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1eff84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1eff88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eff8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1eff8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1eff90: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1eff90u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1eff94: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1eff98: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1eff9c: 0x8f878f74  lw          $a3, -0x708C($gp)
    ctx->pc = 0x1eff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938484)));
    // 0x1effa0: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x1effa4: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1effa8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1effac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1effb0: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1effb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1effb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1effb8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1effbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1effbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1effc0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFFC0u;
    {
        const bool branch_taken_0x1effc0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFC0u;
        // 0x1effc4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc0) {
            ctx->pc = 0x1EFFD8u;
            goto label_1effd8;
        }
    }
    ctx->pc = 0x1EFFC8u;
    // 0x1effc8: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x1effc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x1effcc: 0xa4a20140  sh          $v0, 0x140($a1)
    ctx->pc = 0x1effccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x1effd0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EFFD0u;
    {
        const bool branch_taken_0x1effd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFD0u;
        // 0x1effd4: 0xa4a20130  sh          $v0, 0x130($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effd0) {
            ctx->pc = 0x1F0028u;
            goto label_1f0028;
        }
    }
    ctx->pc = 0x1EFFD8u;
label_1effd8:
    // 0x1effd8: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1effdc: 0x719c0  sll         $v1, $a3, 7
    ctx->pc = 0x1effdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1effe0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1effe4: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x1effe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1effe8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1effe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1effec: 0x0  nop
    ctx->pc = 0x1effecu;
    // NOP
    // 0x1efff0: 0x0  nop
    ctx->pc = 0x1efff0u;
    // NOP
    // 0x1efff4: 0x3010  mfhi        $a2
    ctx->pc = 0x1efff4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1efff8: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1efffc: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1f0000: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1f0004: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f0004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1f0008: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f0008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f000c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1f000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1f0010: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f0010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f0014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1f0018: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1f001c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1f001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1f0020: 0xa4a30130  sh          $v1, 0x130($a1)
    ctx->pc = 0x1f0020u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0024: 0xa4a20140  sh          $v0, 0x140($a1)
    ctx->pc = 0x1f0024u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 2));
label_1f0028:
    // 0x1f0028: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1f002c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f002cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0034: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1F0034u;
    SET_GPR_U32(ctx, 31, 0x1F003Cu);
    ctx->pc = 0x1F0038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0034u;
    // 0x1f0038: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F0034u, 0x1F003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F003Cu;
}
