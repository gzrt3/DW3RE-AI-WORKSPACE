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

// Function: entry_001b3e38
// Address: 0x1b3e38 - 0x1b3ec0
void entry_001b3e38_0x1b3e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3e38_0x1b3e38");
#endif

    switch (ctx->pc) {
        case 0x1b3e68u: goto label_1b3e68;
        default: break;
    }

    ctx->pc = 0x1b3e38u;

    // 0x1b3e38: 0x24e7ff81  addiu       $a3, $a3, -0x7F
    ctx->pc = 0x1b3e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967169));
    // 0x1b3e3c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1b3e40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b3e44: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x1b3e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1b3e48: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1b3e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b3e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e50: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b3e54: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1b3e58: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1b3e5c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b3e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e64: 0x0  nop
    ctx->pc = 0x1b3e64u;
    // NOP
label_1b3e68:
    // 0x1b3e68: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x1b3e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1b3e6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b3e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b3e70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3E70u;
    {
        const bool branch_taken_0x1b3e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3e70) {
            ctx->pc = 0x1B3E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B3E70u;
            // 0x1b3e74: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3E88u;
            goto label_1b3e88;
        }
    }
    ctx->pc = 0x1B3E78u;
    // 0x1b3e78: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b3e7c: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3e80: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1b3e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1b3e84: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1b3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_1b3e88:
    // 0x1b3e88: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B3E88u;
    {
        const bool branch_taken_0x1b3e88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E88u;
        // 0x1b3e8c: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e88) {
            ctx->pc = 0x1B3E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3e68;
        }
    }
    ctx->pc = 0x1B3E90u;
    // 0x1b3e90: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B3E90u;
    {
        const bool branch_taken_0x1b3e90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3E90u;
        // 0x1b3e94: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3e90) {
            ctx->pc = 0x1B3E9Cu;
            goto label_1b3e9c;
        }
    }
    ctx->pc = 0x1B3E98u;
    // 0x1b3e98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1b3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b3e9c:
    // 0x1b3e9c: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x1b3e9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1b3ea0: 0x71dc0  sll         $v1, $a3, 23
    ctx->pc = 0x1b3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 23));
    // 0x1b3ea4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1b3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3ea8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b3eac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b3eb0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b3eb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3EBCu;
    // 0x1b3ebc: 0x0  nop
    ctx->pc = 0x1b3ebcu;
    // NOP
    ctx->pc = 0x1b3ec0u;
}
