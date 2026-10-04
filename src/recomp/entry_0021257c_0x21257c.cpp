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

// Function: entry_0021257c
// Address: 0x21257c - 0x2125bc
void entry_0021257c_0x21257c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021257c_0x21257c");
#endif

    ctx->pc = 0x21257cu;

label_21257c:
    // 0x21257c: 0x0  nop
    ctx->pc = 0x21257cu;
    // NOP
    // 0x212580: 0xa44821  addu        $t1, $a1, $a0
    ctx->pc = 0x212580u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x212584: 0xa1200058  sb          $zero, 0x58($t1)
    ctx->pc = 0x212584u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x212588: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x212588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21258c: 0xa1200059  sb          $zero, 0x59($t1)
    ctx->pc = 0x21258cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 89), (uint8_t)GPR_U32(ctx, 0));
    // 0x212590: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x212590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x212594: 0xa120005a  sb          $zero, 0x5A($t1)
    ctx->pc = 0x212594u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x212598: 0xa120005b  sb          $zero, 0x5B($t1)
    ctx->pc = 0x212598u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x21259c: 0xa120005c  sb          $zero, 0x5C($t1)
    ctx->pc = 0x21259cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a0: 0xa120005d  sb          $zero, 0x5D($t1)
    ctx->pc = 0x2125a0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a4: 0xa120005e  sb          $zero, 0x5E($t1)
    ctx->pc = 0x2125a4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x2125a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2125A8u;
    {
        const bool branch_taken_0x2125a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2125A8u;
        // 0x2125ac: 0xa120005f  sb          $zero, 0x5F($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2125a8) {
            ctx->pc = 0x21257Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21257c;
        }
    }
    ctx->pc = 0x2125B0u;
    // 0x2125b0: 0x28810014  slti        $at, $a0, 0x14
    ctx->pc = 0x2125b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2125b4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2125B4u;
    {
        const bool branch_taken_0x2125b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2125b4) {
            ctx->pc = 0x2125DCu;
            return;
        }
    }
    ctx->pc = 0x2125BCu;
}
