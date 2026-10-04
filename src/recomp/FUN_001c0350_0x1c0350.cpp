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

// Function: FUN_001c0350
// Address: 0x1c0350 - 0x1c0424
void FUN_001c0350_0x1c0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0350_0x1c0350");
#endif

    switch (ctx->pc) {
        case 0x1c035cu: goto label_1c035c;
        default: break;
    }

    ctx->pc = 0x1c0350u;

    // 0x1c0350: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0354: 0x8c224a98  lw          $v0, 0x4A98($at)
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c0358: 0x0  nop
    ctx->pc = 0x1c0358u;
    // NOP
label_1c035c:
    // 0x1c035c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c035cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0360: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0360u;
    {
        const bool branch_taken_0x1c0360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0360) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C0368u;
    // 0x1c0368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c036c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1c036cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c0370: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x1c0370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1c0374: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C0374u;
    {
        const bool branch_taken_0x1c0374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0374) {
            ctx->pc = 0x1C03F0u;
            goto label_1c03f0;
        }
    }
    ctx->pc = 0x1C037Cu;
    // 0x1c037c: 0xa33023  subu        $a2, $a1, $v1
    ctx->pc = 0x1c037cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c0380: 0x2cc10011  sltiu       $at, $a2, 0x11
    ctx->pc = 0x1c0380u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c0384: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0384u;
    {
        const bool branch_taken_0x1c0384 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0384) {
            ctx->pc = 0x1C0398u;
            goto label_1c0398;
        }
    }
    ctx->pc = 0x1C038Cu;
    // 0x1c038c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c038cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1c0390: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C0390u;
    {
        const bool branch_taken_0x1c0390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0390u;
        // 0x1c0394: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0390) {
            ctx->pc = 0x1C03CCu;
            goto label_1c03cc;
        }
    }
    ctx->pc = 0x1C0398u;
label_1c0398:
    // 0x1c0398: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x1c0398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c039c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1c039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x1c03a0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1c03a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1c03a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c03a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c03a8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c03a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1c03ac: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1c03acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1c03b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1c03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c03b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C03B4u;
    {
        const bool branch_taken_0x1c03b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c03b4) {
            ctx->pc = 0x1C03C0u;
            goto label_1c03c0;
        }
    }
    ctx->pc = 0x1C03BCu;
    // 0x1c03bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1c03c0:
    // 0x1c03c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c03c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1c03c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1c03c8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1c03c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1c03cc:
    // 0x1c03cc: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1c03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1c03d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c03d4: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c03d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c03d8: 0x8c234a98  lw          $v1, 0x4A98($at)
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A98u));
    // 0x1c03dc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03DCu;
    {
        const bool branch_taken_0x1c03dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c03dc) {
            ctx->pc = 0x1C0404u;
            goto label_1c0404;
        }
    }
    ctx->pc = 0x1C03E4u;
    // 0x1c03e4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c03e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c03e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C03E8u;
    {
        const bool branch_taken_0x1c03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03E8u;
        // 0x1c03ec: 0xac254a98  sw          $a1, 0x4A98($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19096), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03e8) {
            ctx->pc = 0x1C0404u;
            goto label_1c0404;
        }
    }
    ctx->pc = 0x1C03F0u;
label_1c03f0:
    // 0x1c03f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c03f4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C03F4u;
    {
        const bool branch_taken_0x1c03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03f4) {
            ctx->pc = 0x1C035Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c035c;
        }
    }
    ctx->pc = 0x1C03FCu;
    // 0x1c03fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03FCu;
        // 0x1c0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C0424u;
            return;
        }
    }
    ctx->pc = 0x1C0404u;
label_1c0404:
    // 0x1c0404: 0x0  nop
    ctx->pc = 0x1c0404u;
    // NOP
    // 0x1c0408: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c040c: 0x8c234a9c  lw          $v1, 0x4A9C($at)
    ctx->pc = 0x1c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464A9Cu));
    // 0x1c0410: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1c0410u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c0414: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0414u;
    {
        const bool branch_taken_0x1c0414 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0414) {
            ctx->pc = 0x1C0424u;
            return;
        }
    }
    ctx->pc = 0x1C041Cu;
    // 0x1c041c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0420: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c0420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
    ctx->pc = 0x1c0424u;
}
