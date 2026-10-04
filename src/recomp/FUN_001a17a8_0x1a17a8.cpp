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

// Function: FUN_001a17a8
// Address: 0x1a17a8 - 0x1a1838
void FUN_001a17a8_0x1a17a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a17a8_0x1a17a8");
#endif

    switch (ctx->pc) {
        case 0x1a17d8u: goto label_1a17d8;
        default: break;
    }

    ctx->pc = 0x1a17a8u;

    // 0x1a17a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a17a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17ac: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1a17acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a17b0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x1a17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a17b4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x1a17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1a17b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1a17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a17bc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1a17bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1a17c0: 0x2c640039  sltiu       $a0, $v1, 0x39
    ctx->pc = 0x1a17c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x1a17c4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A17C4u;
    {
        const bool branch_taken_0x1a17c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A17C4u;
        // 0x1a17c8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a17c4) {
            ctx->pc = 0x1A182Cu;
            goto label_1a182c;
        }
    }
    ctx->pc = 0x1A17CCu;
    // 0x1a17cc: 0x8cc80024  lw          $t0, 0x24($a2)
    ctx->pc = 0x1a17ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1a17d0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a17d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17d4: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1a17d4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a17d8:
    // 0x1a17d8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1a17dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1a17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1a17e0: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x1a17e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a17e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a17e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a17e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1a17ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x1a17ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a17f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x1a17f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1a17f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a17f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a17f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a17fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1a17fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1a1800: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1a1800u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1a1804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1804u;
    {
        const bool branch_taken_0x1a1804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1804u;
        // 0x1a1808: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1804) {
            ctx->pc = 0x1A1814u;
            goto label_1a1814;
        }
    }
    ctx->pc = 0x1A180Cu;
    // 0x1a180c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1a180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a1810: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a1810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1a1814:
    // 0x1a1814: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x1a1814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1a1818: 0x2c430039  sltiu       $v1, $v0, 0x39
    ctx->pc = 0x1a1818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)57) ? 1 : 0);
    // 0x1a181c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1A181Cu;
    {
        const bool branch_taken_0x1a181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A181Cu;
        // 0x1a1820: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a181c) {
            ctx->pc = 0x1A17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a17d8;
        }
    }
    ctx->pc = 0x1A1824u;
    // 0x1a1824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1824u;
    {
        const bool branch_taken_0x1a1824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1824u;
        // 0x1a1828: 0x149102d  daddu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1824) {
            ctx->pc = 0x1A1838u;
            return;
        }
    }
    ctx->pc = 0x1A182Cu;
label_1a182c:
    // 0x1a182c: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x1a182cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1a1830: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a1830u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1834: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1a1834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    ctx->pc = 0x1a1838u;
}
