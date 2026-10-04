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

// Function: entry_0023d4e0
// Address: 0x23d4e0 - 0x23d55c
void entry_0023d4e0_0x23d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d4e0_0x23d4e0");
#endif

    switch (ctx->pc) {
        case 0x23d528u: goto label_23d528;
        default: break;
    }

    ctx->pc = 0x23d4e0u;

    // 0x23d4e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d4e4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d4e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d4ec: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d4f0: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x23d4f4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d4f8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d4fc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d500: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d504: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d508: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x23d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x23d50c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x23d50cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x23d510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d514: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x23d518: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D518u;
    {
        const bool branch_taken_0x23d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d518) {
            ctx->pc = 0x23D55Cu;
            return;
        }
    }
    ctx->pc = 0x23D520u;
    // 0x23d520: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23d520u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d524: 0x0  nop
    ctx->pc = 0x23d524u;
    // NOP
label_23d528:
    // 0x23d528: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23d52c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23d530: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d534: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23d534u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x23d538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D538u;
    {
        const bool branch_taken_0x23d538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D538u;
        // 0x23d53c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d538) {
            ctx->pc = 0x23D55Cu;
            return;
        }
    }
    ctx->pc = 0x23D540u;
    // 0x23d540: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d544: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d544u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d548: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23d54c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d550: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x23d554: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x23D554u;
    {
        const bool branch_taken_0x23d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d554) {
            ctx->pc = 0x23D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D554u;
            // 0x23d558: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d528;
        }
    }
    ctx->pc = 0x23D55Cu;
}
