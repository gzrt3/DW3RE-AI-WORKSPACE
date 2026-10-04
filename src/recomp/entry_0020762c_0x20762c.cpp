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

// Function: entry_0020762c
// Address: 0x20762c - 0x2076b8
void entry_0020762c_0x20762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020762c_0x20762c");
#endif

    ctx->pc = 0x20762cu;

    // 0x20762c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x207630: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207634: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x207634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207638: 0x3421e2f4  ori         $at, $at, 0xE2F4
    ctx->pc = 0x207638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58100);
    // 0x20763c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x207640: 0x34434dd3  ori         $v1, $v0, 0x4DD3
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x207644: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x207644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x207648: 0x3447e2f8  ori         $a3, $v0, 0xE2F8
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58104);
    // 0x20764c: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x20764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207650: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x207654: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207658: 0x3421e2f8  ori         $at, $at, 0xE2F8
    ctx->pc = 0x207658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58104);
    // 0x20765c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x207660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x207664: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x207664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x207668: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20766c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20766cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207670: 0x0  nop
    ctx->pc = 0x207670u;
    // NOP
    // 0x207674: 0x1010  mfhi        $v0
    ctx->pc = 0x207674u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207678: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20767c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207680: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x207684: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x207684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207688: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x207688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x20768c: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x207690: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207694: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x207694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207698: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x20769c: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x20769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x2076a0: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2076a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2076a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2076a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2076a8: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x2076a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x2076ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2076ACu;
    {
        const bool branch_taken_0x2076ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2076B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2076ACu;
        // 0x2076b0: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076ac) {
            ctx->pc = 0x2076B8u;
            return;
        }
    }
    ctx->pc = 0x2076B4u;
    // 0x2076b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2076b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2076b8u;
}
