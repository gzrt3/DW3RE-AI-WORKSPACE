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

// Function: FUN_00199ff0
// Address: 0x199ff0 - 0x19a070
void FUN_00199ff0_0x199ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199ff0_0x199ff0");
#endif

    ctx->pc = 0x199ff0u;

    // 0x199ff0: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x199ff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x199ff4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x199ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x199ff8: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x199ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x199ffc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x199ffcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x19a000: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x19a000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x19a004: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x19a004u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x19a008: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x19a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x19a00c: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x19a00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x19a010: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x19a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x19a014: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19a014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19a018: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a018u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19a01c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19a020: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19a020u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x19a024: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x19a024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x19a028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a02c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19a030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a034: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x19a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x19a038: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19a038u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x19a03c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19a03cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x19a040: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x19a040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
    // 0x19a044: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x19a044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
    // 0x19a048: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
    // 0x19a04c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x19a04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x19a050: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x19a054: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A054u;
    {
        const bool branch_taken_0x19a054 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A054u;
        // 0x19a058: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a054) {
            ctx->pc = 0x19A068u;
            goto label_19a068;
        }
    }
    ctx->pc = 0x19A05Cu;
    // 0x19a05c: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x19a05cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
    // 0x19a060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19A060u;
    {
        const bool branch_taken_0x19a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A060u;
        // 0x19a064: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a060) {
            ctx->pc = 0x19A06Cu;
            goto label_19a06c;
        }
    }
    ctx->pc = 0x19A068u;
label_19a068:
    // 0x19a068: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_19a06c:
    // 0x19a06c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x19a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->pc = 0x19a070u;
}
