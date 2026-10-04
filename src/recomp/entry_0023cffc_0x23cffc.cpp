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

// Function: entry_0023cffc
// Address: 0x23cffc - 0x23d06c
void entry_0023cffc_0x23cffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cffc_0x23cffc");
#endif

    switch (ctx->pc) {
        case 0x23d04cu: goto label_23d04c;
        default: break;
    }

    ctx->pc = 0x23cffcu;

    // 0x23cffc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d000: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23d004: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d008: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d00c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d010: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d014: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d018: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x23d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x23d01c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x23d01cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x23d020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d024: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23d028: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D028u;
    {
        const bool branch_taken_0x23d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d028) {
            ctx->pc = 0x23D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D028u;
            // 0x23d02c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            return;
        }
    }
    ctx->pc = 0x23D030u;
    // 0x23d030: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x23d034: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d038: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23d038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23d03c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d040: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23d040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23d044: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d048: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23d04c:
    // 0x23d04c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d04cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d050: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d050u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d054: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x23d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x23d058: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d05c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23d060: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D060u;
    {
        const bool branch_taken_0x23d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d060) {
            ctx->pc = 0x23D064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D060u;
            // 0x23d064: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d04c;
        }
    }
    ctx->pc = 0x23D068u;
    // 0x23d068: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23d06cu;
}
