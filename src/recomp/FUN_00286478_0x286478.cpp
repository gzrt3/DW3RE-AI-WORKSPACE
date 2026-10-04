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

// Function: FUN_00286478
// Address: 0x286478 - 0x286530
void FUN_00286478_0x286478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286478_0x286478");
#endif

    switch (ctx->pc) {
        case 0x2864a0u: goto label_2864a0;
        default: break;
    }

    ctx->pc = 0x286478u;

    // 0x286478: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x286478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
    // 0x28647c: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0xBC0003C0u));
    // 0x286480: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x286480u;
    {
        const bool branch_taken_0x286480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x286484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286480u;
        // 0x286484: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286480) {
            ctx->pc = 0x2864C8u;
            goto label_2864c8;
        }
    }
    ctx->pc = 0x286488u;
    // 0x286488: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
    // 0x28648c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x28648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x286490: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
    // 0x286494: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x286494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x286498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x286498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28649c: 0x0  nop
    ctx->pc = 0x28649cu;
    // NOP
label_2864a0:
    // 0x2864a0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2864a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2864a4: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2864a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2864a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2864a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2864ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2864b0: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x2864b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2864b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2864b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2864B8u;
    {
        const bool branch_taken_0x2864b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864b8) {
            ctx->pc = 0x2864A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864a0;
        }
    }
    ctx->pc = 0x2864C0u;
    // 0x2864c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2864C0u;
    {
        const bool branch_taken_0x2864c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2864C0u;
        // 0x2864c4: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864c0) {
            ctx->pc = 0x2864CCu;
            goto label_2864cc;
        }
    }
    ctx->pc = 0x2864C8u;
label_2864c8:
    // 0x2864c8: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_2864cc:
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
            return;
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
    ctx->pc = 0x286530u;
}
