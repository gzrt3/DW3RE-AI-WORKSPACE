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

// Function: entry_001b6928
// Address: 0x1b6928 - 0x1b69f8
void entry_001b6928_0x1b6928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6928_0x1b6928");
#endif

    ctx->pc = 0x1b6928u;

    // 0x1b6928: 0x18a1804  sllv        $v1, $t2, $t4
    ctx->pc = 0x1b6928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b692c: 0x1ed1006  srlv        $v0, $t5, $t7
    ctx->pc = 0x1b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6930: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6930u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6934: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6938: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b6938u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b693c: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b693cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6940: 0x72c02  srl         $a1, $a3, 16
    ctx->pc = 0x1b6940u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1b6944: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b6944u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b6948: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6948u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b694c: 0x30eeffff  andi        $t6, $a3, 0xFFFF
    ctx->pc = 0x1b694cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1b6950: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1b6950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6954: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6954u;
    {
        const bool branch_taken_0x1b6954 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6954) {
            ctx->pc = 0x1B6958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6954u;
            // 0x1b6958: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B695Cu;
            goto label_1b695c;
        }
    }
    ctx->pc = 0x1B695Cu;
label_1b695c:
    // 0x1b695c: 0x1012  mflo        $v0
    ctx->pc = 0x1b695cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6960: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6960u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6964: 0x4e4018  mult        $t0, $v0, $t6
    ctx->pc = 0x1b6964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6968: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b696c: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1b696cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6970: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b6970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6974: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6974u;
    {
        const bool branch_taken_0x1b6974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6974u;
        // 0x1b6978: 0x1c0782d  daddu       $t7, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6974) {
            ctx->pc = 0x1B69A0u;
            goto label_1b69a0;
        }
    }
    ctx->pc = 0x1B697Cu;
    // 0x1b697c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1b697cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b6980: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1b6980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6984: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6984u;
    {
        const bool branch_taken_0x1b6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6984) {
            ctx->pc = 0x1B6988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6984u;
            // 0x1b6988: 0xc83023  subu        $a2, $a2, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69A4u;
            goto label_1b69a4;
        }
    }
    ctx->pc = 0x1B698Cu;
    // 0x1b698c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x1b698cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6990: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x1b6990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1b6994: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6998: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b6998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1b699c: 0x0  nop
    ctx->pc = 0x1b699cu;
    // NOP
label_1b69a0:
    // 0x1b69a0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1b69a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1b69a4:
    // 0x1b69a4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b69a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b69a8: 0xc9001b  divu        $zero, $a2, $t1
    ctx->pc = 0x1b69a8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x1b69ac: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B69ACu;
    {
        const bool branch_taken_0x1b69ac = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b69ac) {
            ctx->pc = 0x1B69B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B69ACu;
            // 0x1b69b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B69B4u;
            goto label_1b69b4;
        }
    }
    ctx->pc = 0x1B69B4u;
label_1b69b4:
    // 0x1b69b4: 0x1012  mflo        $v0
    ctx->pc = 0x1b69b4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b69b8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b69b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b69bc: 0x4f4018  mult        $t0, $v0, $t7
    ctx->pc = 0x1b69bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b69c0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b69c4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b69c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b69c8: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b69cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B69CCu;
    {
        const bool branch_taken_0x1b69cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69CCu;
        // 0x1b69d0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69cc) {
            ctx->pc = 0x1B69F8u;
            return;
        }
    }
    ctx->pc = 0x1B69D4u;
    // 0x1b69d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b69d8: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b69d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b69dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B69DCu;
    {
        const bool branch_taken_0x1b69dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B69E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69DCu;
        // 0x1b69e0: 0x885023  subu        $t2, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b69dc) {
            ctx->pc = 0x1B69F8u;
            return;
        }
    }
    ctx->pc = 0x1B69E4u;
    // 0x1b69e4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b69e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b69e8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b69ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b69ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b69f0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b69f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1b69f4: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x1b69f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    ctx->pc = 0x1b69f8u;
}
