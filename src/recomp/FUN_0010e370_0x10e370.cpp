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

// Function: FUN_0010e370
// Address: 0x10e370 - 0x10e424
void FUN_0010e370_0x10e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e370_0x10e370");
#endif

    ctx->pc = 0x10e370u;

    // 0x10e370: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x10e370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e374: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10e374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10e378: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e37c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x10e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10e380: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x10e380u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10e384: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10e384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10e388: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e38c: 0x64900  sll         $t1, $a2, 4
    ctx->pc = 0x10e38cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10e390: 0x24634974  addiu       $v1, $v1, 0x4974
    ctx->pc = 0x10e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18804));
    // 0x10e394: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x10e394u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x10e398: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x10e398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e39c: 0x24c6b4e0  addiu       $a2, $a2, -0x4B20
    ctx->pc = 0x10e39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948064));
    // 0x10e3a0: 0x24e80d80  addiu       $t0, $a3, 0xD80
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
    // 0x10e3a4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e3a8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x10e3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e3ac: 0x2463496c  addiu       $v1, $v1, 0x496C
    ctx->pc = 0x10e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18796));
    // 0x10e3b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e3b4: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x10e3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e3b8: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x10e3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e3bc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e3c0: 0x24634924  addiu       $v1, $v1, 0x4924
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18724));
    // 0x10e3c4: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x10e3c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x10e3c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10e3cc: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x10e3ccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10e3d0: 0x72a00  sll         $a1, $a3, 8
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x10e3d4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x10e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x10e3d8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x10e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x10e3dc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x10e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x10e3e0: 0x288100fb  slti        $at, $a0, 0xFB
    ctx->pc = 0x10e3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e3e4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10e3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10e3e8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x10e3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x10e3ec: 0x24c30000  addiu       $v1, $a2, 0x0
    ctx->pc = 0x10e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x10e3f0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E3F0u;
    {
        const bool branch_taken_0x10e3f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E3F0u;
        // 0x10e3f4: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e3f0) {
            ctx->pc = 0x10E3FCu;
            goto label_10e3fc;
        }
    }
    ctx->pc = 0x10E3F8u;
    // 0x10e3f8: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x10e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10e3fc:
    // 0x10e3fc: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x10e3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x10e400: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x10e400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x10e404: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10e408: 0x85030220  lh          $v1, 0x220($t0)
    ctx->pc = 0x10e408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 544)));
    // 0x10e40c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x10e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x10e410: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e414: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x10e418: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E418u;
    {
        const bool branch_taken_0x10e418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e418) {
            ctx->pc = 0x10E424u;
            return;
        }
    }
    ctx->pc = 0x10E420u;
    // 0x10e420: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x10e420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x10e424u;
}
