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

// Function: entry_00207514
// Address: 0x207514 - 0x2075a0
void entry_00207514_0x207514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207514_0x207514");
#endif

    ctx->pc = 0x207514u;

    // 0x207514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x207514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x207518: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20751c: 0x8f8490fc  lw          $a0, -0x6F04($gp)
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207520: 0x3421e2ec  ori         $at, $at, 0xE2EC
    ctx->pc = 0x207520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58092);
    // 0x207524: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x207524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x207528: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x207528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x20752c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20752cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x207530: 0x3447e2f0  ori         $a3, $v0, 0xE2F0
    ctx->pc = 0x207530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58096);
    // 0x207534: 0x813021  addu        $a2, $a0, $at
    ctx->pc = 0x207534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x207538: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x207538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20753c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x207540: 0x3421e2f0  ori         $at, $at, 0xE2F0
    ctx->pc = 0x207540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58096);
    // 0x207544: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x207544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x207548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x207548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20754c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20754cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x207550: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x207550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x207554: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x207554u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x207558: 0x0  nop
    ctx->pc = 0x207558u;
    // NOP
    // 0x20755c: 0x1010  mfhi        $v0
    ctx->pc = 0x20755cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x207560: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x207560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x207564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x207564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x207568: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x207568u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x20756c: 0x8f8390fc  lw          $v1, -0x6F04($gp)
    ctx->pc = 0x20756cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207570: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x207570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x207574: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x207574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x207578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x207578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20757c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207580: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x207580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x207584: 0x8f8290fc  lw          $v0, -0x6F04($gp)
    ctx->pc = 0x207584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
    // 0x207588: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x207588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x20758c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x207590: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x207590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x207594: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x207594u;
    {
        const bool branch_taken_0x207594 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x207598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207594u;
        // 0x207598: 0x24050190  addiu       $a1, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207594) {
            ctx->pc = 0x2075A0u;
            return;
        }
    }
    ctx->pc = 0x20759Cu;
    // 0x20759c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20759cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2075a0u;
}
