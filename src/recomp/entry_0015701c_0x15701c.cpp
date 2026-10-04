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

// Function: entry_0015701c
// Address: 0x15701c - 0x157108
void entry_0015701c_0x15701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015701c_0x15701c");
#endif

    ctx->pc = 0x15701cu;

label_15701c:
    // 0x15701c: 0x0  nop
    ctx->pc = 0x15701cu;
    // NOP
    // 0x157020: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157020u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157024: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x157028: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x157028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x15702c: 0x294c001a  slti        $t4, $t2, 0x1A
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x157030: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x157034: 0xad2d0190  sw          $t5, 0x190($t1)
    ctx->pc = 0x157034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 400), GPR_U32(ctx, 13));
    // 0x157038: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157038u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15703c: 0xad2d0194  sw          $t5, 0x194($t1)
    ctx->pc = 0x15703cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 404), GPR_U32(ctx, 13));
    // 0x157040: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157040u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x157044: 0xad2d0198  sw          $t5, 0x198($t1)
    ctx->pc = 0x157044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 408), GPR_U32(ctx, 13));
    // 0x157048: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157048u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15704c: 0xad2d01c0  sw          $t5, 0x1C0($t1)
    ctx->pc = 0x15704cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 448), GPR_U32(ctx, 13));
    // 0x157050: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157050u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157054: 0xad2d01c4  sw          $t5, 0x1C4($t1)
    ctx->pc = 0x157054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 452), GPR_U32(ctx, 13));
    // 0x157058: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157058u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15705c: 0xad2d01c8  sw          $t5, 0x1C8($t1)
    ctx->pc = 0x15705cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 456), GPR_U32(ctx, 13));
    // 0x157060: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157060u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157064: 0xad2d01f0  sw          $t5, 0x1F0($t1)
    ctx->pc = 0x157064u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 496), GPR_U32(ctx, 13));
    // 0x157068: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157068u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15706c: 0xad2d01f4  sw          $t5, 0x1F4($t1)
    ctx->pc = 0x15706cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 500), GPR_U32(ctx, 13));
    // 0x157070: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157070u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x157074: 0xad2d01f8  sw          $t5, 0x1F8($t1)
    ctx->pc = 0x157074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 504), GPR_U32(ctx, 13));
    // 0x157078: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157078u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15707c: 0xad2d0220  sw          $t5, 0x220($t1)
    ctx->pc = 0x15707cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 544), GPR_U32(ctx, 13));
    // 0x157080: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157080u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x157084: 0xad2d0224  sw          $t5, 0x224($t1)
    ctx->pc = 0x157084u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 548), GPR_U32(ctx, 13));
    // 0x157088: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x157088u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x15708c: 0xad2d0228  sw          $t5, 0x228($t1)
    ctx->pc = 0x15708cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 552), GPR_U32(ctx, 13));
    // 0x157090: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x157090u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x157094: 0xad2d0250  sw          $t5, 0x250($t1)
    ctx->pc = 0x157094u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 592), GPR_U32(ctx, 13));
    // 0x157098: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x157098u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x15709c: 0xad2d0254  sw          $t5, 0x254($t1)
    ctx->pc = 0x15709cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 596), GPR_U32(ctx, 13));
    // 0x1570a0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570a0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570a4: 0xad2d0258  sw          $t5, 0x258($t1)
    ctx->pc = 0x1570a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 600), GPR_U32(ctx, 13));
    // 0x1570a8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570a8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570ac: 0xad2d0280  sw          $t5, 0x280($t1)
    ctx->pc = 0x1570acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 640), GPR_U32(ctx, 13));
    // 0x1570b0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570b0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570b4: 0xad2d0284  sw          $t5, 0x284($t1)
    ctx->pc = 0x1570b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 644), GPR_U32(ctx, 13));
    // 0x1570b8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570b8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570bc: 0xad2d0288  sw          $t5, 0x288($t1)
    ctx->pc = 0x1570bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 648), GPR_U32(ctx, 13));
    // 0x1570c0: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570c4: 0xad2d02b0  sw          $t5, 0x2B0($t1)
    ctx->pc = 0x1570c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 688), GPR_U32(ctx, 13));
    // 0x1570c8: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570c8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570cc: 0xad2d02b4  sw          $t5, 0x2B4($t1)
    ctx->pc = 0x1570ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 692), GPR_U32(ctx, 13));
    // 0x1570d0: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570d0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570d4: 0xad2d02b8  sw          $t5, 0x2B8($t1)
    ctx->pc = 0x1570d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 696), GPR_U32(ctx, 13));
    // 0x1570d8: 0x90ed0000  lbu         $t5, 0x0($a3)
    ctx->pc = 0x1570d8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1570dc: 0xad2d02e0  sw          $t5, 0x2E0($t1)
    ctx->pc = 0x1570dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 736), GPR_U32(ctx, 13));
    // 0x1570e0: 0x90ed0001  lbu         $t5, 0x1($a3)
    ctx->pc = 0x1570e0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1570e4: 0xad2d02e4  sw          $t5, 0x2E4($t1)
    ctx->pc = 0x1570e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 740), GPR_U32(ctx, 13));
    // 0x1570e8: 0x90ed0002  lbu         $t5, 0x2($a3)
    ctx->pc = 0x1570e8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1570ec: 0x1580ffcb  bnez        $t4, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1570ECu;
    {
        const bool branch_taken_0x1570ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570ECu;
        // 0x1570f0: 0xad2d02e8  sw          $t5, 0x2E8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 744), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570ec) {
            ctx->pc = 0x15701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15701c;
        }
    }
    ctx->pc = 0x1570F4u;
    // 0x1570f4: 0x29410022  slti        $at, $t2, 0x22
    ctx->pc = 0x1570f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1570f8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1570F8u;
    {
        const bool branch_taken_0x1570f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1570FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1570F8u;
        // 0x1570fc: 0xa2840  sll         $a1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1570f8) {
            ctx->pc = 0x157134u;
            return;
        }
    }
    ctx->pc = 0x157100u;
    // 0x157100: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x157100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x157104: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x157104u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    ctx->pc = 0x157108u;
}
