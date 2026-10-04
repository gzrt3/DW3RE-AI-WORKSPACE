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

// Function: FUN_0019a258
// Address: 0x19a258 - 0x19a2d8
void FUN_0019a258_0x19a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a258_0x19a258");
#endif

    ctx->pc = 0x19a258u;

    // 0x19a258: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x19a258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19a25c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x19a260: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19a260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x19a264: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x19a268: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x19a268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x19a26c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x19a26cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x19a270: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x19a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x19a274: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x19a274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x19a278: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x19a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x19a27c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19a280: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19a288: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19a288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19a28c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x19a28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x19a290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a294: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19a298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a29c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x19a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x19a2a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19a2a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x19a2a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19a2a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19a2a8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x19a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x19a2ac: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x19a2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x19a2b0: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x19a2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x19a2b4: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x19a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x19a2b8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x19a2bc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A2BCu;
    {
        const bool branch_taken_0x19a2bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2bc) {
            ctx->pc = 0x19A2D0u;
            goto label_19a2d0;
        }
    }
    ctx->pc = 0x19A2C4u;
    // 0x19a2c4: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x19a2c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x19a2c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A2C8u;
    {
        const bool branch_taken_0x19a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2C8u;
        // 0x19a2cc: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2c8) {
            ctx->pc = 0x19A2D4u;
            goto label_19a2d4;
        }
    }
    ctx->pc = 0x19A2D0u;
label_19a2d0:
    // 0x19a2d0: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x19a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_19a2d4:
    // 0x19a2d4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x19a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->pc = 0x19a2d8u;
}
