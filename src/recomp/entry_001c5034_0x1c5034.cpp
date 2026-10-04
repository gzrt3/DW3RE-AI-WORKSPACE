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

// Function: entry_001c5034
// Address: 0x1c5034 - 0x1c5090
void entry_001c5034_0x1c5034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5034_0x1c5034");
#endif

    ctx->pc = 0x1c5034u;

label_1c5034:
    // 0x1c5034: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x1c5034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1c5038: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c503c: 0xace60048  sw          $a2, 0x48($a3)
    ctx->pc = 0x1c503cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 6));
    // 0x1c5040: 0x29430002  slti        $v1, $t2, 0x2
    ctx->pc = 0x1c5040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c5044: 0xace5004c  sw          $a1, 0x4C($a3)
    ctx->pc = 0x1c5044u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 5));
    // 0x1c5048: 0x256b0090  addiu       $t3, $t3, 0x90
    ctx->pc = 0x1c5048u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 144));
    // 0x1c504c: 0xace60060  sw          $a2, 0x60($a3)
    ctx->pc = 0x1c504cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 6));
    // 0x1c5050: 0xace50064  sw          $a1, 0x64($a3)
    ctx->pc = 0x1c5050u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 5));
    // 0x1c5054: 0xace60078  sw          $a2, 0x78($a3)
    ctx->pc = 0x1c5054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 6));
    // 0x1c5058: 0xace5007c  sw          $a1, 0x7C($a3)
    ctx->pc = 0x1c5058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 5));
    // 0x1c505c: 0xace60090  sw          $a2, 0x90($a3)
    ctx->pc = 0x1c505cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 6));
    // 0x1c5060: 0xace50094  sw          $a1, 0x94($a3)
    ctx->pc = 0x1c5060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 5));
    // 0x1c5064: 0xace60168  sw          $a2, 0x168($a3)
    ctx->pc = 0x1c5064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 360), GPR_U32(ctx, 6));
    // 0x1c5068: 0xace5016c  sw          $a1, 0x16C($a3)
    ctx->pc = 0x1c5068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 364), GPR_U32(ctx, 5));
    // 0x1c506c: 0xace60180  sw          $a2, 0x180($a3)
    ctx->pc = 0x1c506cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 384), GPR_U32(ctx, 6));
    // 0x1c5070: 0xace50184  sw          $a1, 0x184($a3)
    ctx->pc = 0x1c5070u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 388), GPR_U32(ctx, 5));
    // 0x1c5074: 0xace60198  sw          $a2, 0x198($a3)
    ctx->pc = 0x1c5074u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 408), GPR_U32(ctx, 6));
    // 0x1c5078: 0xace5019c  sw          $a1, 0x19C($a3)
    ctx->pc = 0x1c5078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 412), GPR_U32(ctx, 5));
    // 0x1c507c: 0xace601b0  sw          $a2, 0x1B0($a3)
    ctx->pc = 0x1c507cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 432), GPR_U32(ctx, 6));
    // 0x1c5080: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C5080u;
    {
        const bool branch_taken_0x1c5080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5080u;
        // 0x1c5084: 0xace501b4  sw          $a1, 0x1B4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 436), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5080) {
            ctx->pc = 0x1C5034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5034;
        }
    }
    ctx->pc = 0x1C5088u;
    // 0x1c5088: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5090u;
}
