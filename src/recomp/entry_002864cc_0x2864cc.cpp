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

// Function: entry_002864cc
// Address: 0x2864cc - 0x286658
void entry_002864cc_0x2864cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002864cc_0x2864cc");
#endif

    switch (ctx->pc) {
        case 0x286580u: goto label_286580;
        case 0x286628u: goto label_286628;
        default: break;
    }

    ctx->pc = 0x2864ccu;

    // 0x2864cc: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2864ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
    // 0x2864d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2864d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2864d4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2864d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2864d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2864D8u;
    {
        const bool branch_taken_0x2864d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864d8) {
            ctx->pc = 0x286530u;
            goto label_286530;
        }
    }
    ctx->pc = 0x2864E0u;
    // 0x2864e0: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2864e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2864e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2864ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2864f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2864f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2864f4: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
    // 0x2864f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2864f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2864fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2864fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x286500: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x286500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x286504: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x286504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x286508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x286508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28650c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x286510: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x286510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x286514: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x286514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28651c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x286520: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x286520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x286524: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x286524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x286528: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x286528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28652c: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x28652cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_286530:
    // 0x286530: 0x3e00008  jr          $ra
    ctx->pc = 0x286530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286538u;
    // 0x286538: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x286538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28653c: 0x2ce20081  sltiu       $v0, $a3, 0x81
    ctx->pc = 0x28653cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x286540: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286540u;
    {
        const bool branch_taken_0x286540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286540u;
        // 0x286544: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286540) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x286548u;
    // 0x286548: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x28654c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28654Cu;
        // 0x286550: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28654c) {
            ctx->pc = 0x28655Cu;
            goto label_28655c;
        }
    }
    ctx->pc = 0x286554u;
    // 0x286554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286554u;
    {
        const bool branch_taken_0x286554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286554u;
        // 0x286558: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286554) {
            ctx->pc = 0x286564u;
            goto label_286564;
        }
    }
    ctx->pc = 0x28655Cu;
label_28655c:
    // 0x28655c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x286560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286564:
    // 0x286564: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x286564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x286568: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28656c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28656Cu;
    {
        const bool branch_taken_0x28656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28656Cu;
        // 0x286570: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28656c) {
            ctx->pc = 0x2865ACu;
            goto label_2865ac;
        }
    }
    ctx->pc = 0x286574u;
    // 0x286574: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x286574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286578: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x286578u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
    // 0x28657c: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x28657cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_286580:
    // 0x286580: 0x24a247b0  addiu       $v0, $a1, 0x47B0
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
    // 0x286584: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x286588: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x28658c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28658cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x286590: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x286590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x286598: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x286598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28659c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28659Cu;
    {
        const bool branch_taken_0x28659c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28659Cu;
        // 0x2865a0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28659c) {
            ctx->pc = 0x286580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286580;
        }
    }
    ctx->pc = 0x2865A4u;
    // 0x2865a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2865A4u;
    {
        const bool branch_taken_0x2865a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A4u;
        // 0x2865a8: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a4) {
            ctx->pc = 0x2865B4u;
            goto label_2865b4;
        }
    }
    ctx->pc = 0x2865ACu;
label_2865ac:
    // 0x2865ac: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
    // 0x2865b0: 0xdd234700  ld          $v1, 0x4700($t1)
    ctx->pc = 0x2865b0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x80074700u));
label_2865b4:
    // 0x2865b4: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x2865b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
    // 0x2865b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2865b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2865bc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2865bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2865c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2865C0u;
    {
        const bool branch_taken_0x2865c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865c0) {
            ctx->pc = 0x2865D0u;
            goto label_2865d0;
        }
    }
    ctx->pc = 0x2865C8u;
    // 0x2865c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2865C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865C8u;
        // 0x2865cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865D0u;
label_2865d0:
    // 0x2865d0: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x2865d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
    // 0x2865d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2865D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2865D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865D4u;
        // 0x2865d8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2865D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2865DCu;
    // 0x2865dc: 0x0  nop
    ctx->pc = 0x2865dcu;
    // NOP
    // 0x2865e0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2865e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865e4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2865e8: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x2865ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2865ECu;
    {
        const bool branch_taken_0x2865ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2865F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865ECu;
        // 0x2865f0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865ec) {
            ctx->pc = 0x286614u;
            goto label_286614;
        }
    }
    ctx->pc = 0x2865F4u;
    // 0x2865f4: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x2865f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2865f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2865F8u;
    {
        const bool branch_taken_0x2865f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865F8u;
        // 0x2865fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865f8) {
            ctx->pc = 0x286608u;
            goto label_286608;
        }
    }
    ctx->pc = 0x286600u;
    // 0x286600: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286600u;
    {
        const bool branch_taken_0x286600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286600u;
        // 0x286604: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286600) {
            ctx->pc = 0x286610u;
            goto label_286610;
        }
    }
    ctx->pc = 0x286608u;
label_286608:
    // 0x286608: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x286608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28660c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286610:
    // 0x286610: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_286614:
    // 0x286614: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286618: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x286618u;
    {
        const bool branch_taken_0x286618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286618u;
        // 0x28661c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286618) {
            ctx->pc = 0x28664Cu;
            goto label_28664c;
        }
    }
    ctx->pc = 0x286620u;
    // 0x286620: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x286624: 0x0  nop
    ctx->pc = 0x286624u;
    // NOP
label_286628:
    // 0x286628: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x28662c: 0x250347b0  addiu       $v1, $t0, 0x47B0
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 18352));
    // 0x286630: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x286634: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x286634u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286638: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28663c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x286640: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x286640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x286644: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x286644u;
    {
        const bool branch_taken_0x286644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286644u;
        // 0x286648: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286644) {
            ctx->pc = 0x286628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286628;
        }
    }
    ctx->pc = 0x28664Cu;
label_28664c:
    // 0x28664c: 0x3e00008  jr          $ra
    ctx->pc = 0x28664Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28664Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286654u;
    // 0x286654: 0x0  nop
    ctx->pc = 0x286654u;
    // NOP
    ctx->pc = 0x286658u;
}
