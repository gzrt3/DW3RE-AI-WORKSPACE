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

// Function: FUN_001c5000
// Address: 0x1c5000 - 0x1c5088
void FUN_001c5000_0x1c5000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c5000_0x1c5000");
#endif

    switch (ctx->pc) {
        case 0x1c5034u: goto label_1c5034;
        default: break;
    }

    ctx->pc = 0x1c5000u;

    // 0x1c5000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c5000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5004: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c5004u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5008: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x1c5008u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1c500c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1c500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1c5010: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1c5014: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1c5014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c5018: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x1c5018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x1c501c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c501cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c5020: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x1c5020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1c5024: 0x3103ffff  andi        $v1, $t0, 0xFFFF
    ctx->pc = 0x1c5024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1c5028: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1c5028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1c502c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1c502cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c5030: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x1c5030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
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
}
