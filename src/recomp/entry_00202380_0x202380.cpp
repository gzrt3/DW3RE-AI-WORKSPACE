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

// Function: entry_00202380
// Address: 0x202380 - 0x2023d0
void entry_00202380_0x202380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202380_0x202380");
#endif

    ctx->pc = 0x202380u;

    // 0x202380: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x202384: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x202388: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x20238c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x20238cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x202390: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x202394: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x202398: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20239c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2023a0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2023a4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2023a8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2023ac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2023b0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2023b4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x2023b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2023b8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2023b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2023bc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x2023bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x2023c0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x2023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x2023c4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x2023c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x2023c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2023C8u;
    {
        const bool branch_taken_0x2023c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023C8u;
        // 0x2023cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023c8) {
            ctx->pc = 0x2023D8u;
            return;
        }
    }
    ctx->pc = 0x2023D0u;
}
