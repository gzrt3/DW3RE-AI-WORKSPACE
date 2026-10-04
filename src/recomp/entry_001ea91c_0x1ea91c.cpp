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

// Function: entry_001ea91c
// Address: 0x1ea91c - 0x1ea95c
void entry_001ea91c_0x1ea91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea91c_0x1ea91c");
#endif

    ctx->pc = 0x1ea91cu;

    // 0x1ea91c: 0x8f858eb4  lw          $a1, -0x714C($gp)
    ctx->pc = 0x1ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938292)));
    // 0x1ea920: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA928u;
    // 0x1ea928: 0x8f848eb0  lw          $a0, -0x7150($gp)
    ctx->pc = 0x1ea928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938288)));
    // 0x1ea92c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ea92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ea930: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA930u;
    {
        const bool branch_taken_0x1ea930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA930u;
        // 0x1ea934: 0xaf848eb0  sw          $a0, -0x7150($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea930) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA938u;
    // 0x1ea938: 0x8f858eac  lw          $a1, -0x7154($gp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938284)));
    // 0x1ea93c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1ea940: 0xdf8387c8  ld          $v1, -0x7838($gp)
    ctx->pc = 0x1ea940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x1ea944: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ea944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ea948: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1ea948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1ea94c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ea94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ea950: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA950u;
    {
        const bool branch_taken_0x1ea950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA950u;
        // 0x1ea954: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea950) {
            ctx->pc = 0x1EA95Cu;
            return;
        }
    }
    ctx->pc = 0x1EA958u;
    // 0x1ea958: 0xaf838eb4  sw          $v1, -0x714C($gp)
    ctx->pc = 0x1ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 3));
    ctx->pc = 0x1ea95cu;
}
