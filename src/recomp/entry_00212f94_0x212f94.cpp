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

// Function: entry_00212f94
// Address: 0x212f94 - 0x213080
void entry_00212f94_0x212f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212f94_0x212f94");
#endif

    ctx->pc = 0x212f94u;

label_212f94:
    // 0x212f94: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x212f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212f98: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x212f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x212f9c: 0xe37004  sllv        $t6, $v1, $a3
    ctx->pc = 0x212f9cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x212fa0: 0xa34804  sllv        $t1, $v1, $a1
    ctx->pc = 0x212fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x212fa4: 0x24a70003  addiu       $a3, $a1, 0x3
    ctx->pc = 0x212fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x212fa8: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x212fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x212fac: 0xe36004  sllv        $t4, $v1, $a3
    ctx->pc = 0x212facu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x212fb0: 0xc36804  sllv        $t5, $v1, $a2
    ctx->pc = 0x212fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x212fb4: 0x24a70005  addiu       $a3, $a1, 0x5
    ctx->pc = 0x212fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x212fb8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x212fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x212fbc: 0xc35804  sllv        $t3, $v1, $a2
    ctx->pc = 0x212fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x212fc0: 0xe35004  sllv        $t2, $v1, $a3
    ctx->pc = 0x212fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x212fc4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x212fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x212fc8: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x212fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x212fcc: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x212fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x212fd0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212fd4: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x212fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x212fd8: 0xc34804  sllv        $t1, $v1, $a2
    ctx->pc = 0x212fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x212fdc: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x212fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x212fe0: 0xc34004  sllv        $t0, $v1, $a2
    ctx->pc = 0x212fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x212fe4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x212fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x212fe8: 0x28a6000e  slti        $a2, $a1, 0xE
    ctx->pc = 0x212fe8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x212fec: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x212fecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x212ff0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212ff4: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x212ff4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x212ff8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212ffc: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x212ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x213000: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x213000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x213004: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213008: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x21300c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213010: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213010u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x213014: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x213014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x213018: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x21301c: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x21301cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x213020: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213024: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213024u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x213028: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x213028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x21302c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21302cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213030: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213030u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x213034: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213038: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213038u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x21303c: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x21303cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x213040: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213044: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x213048: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x21304c: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x21304cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x213050: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x213050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x213054: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213058: 0xac271880  sw          $a3, 0x1880($at)
    ctx->pc = 0x213058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x21305c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x21305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213060: 0x8c271880  lw          $a3, 0x1880($at)
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2B1880u));
    // 0x213064: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x213064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x213068: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x21306c: 0x14c0ffc9  bnez        $a2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x21306Cu;
    {
        const bool branch_taken_0x21306c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x213070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21306Cu;
        // 0x213070: 0xac271880  sw          $a3, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21306c) {
            ctx->pc = 0x212F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f94;
        }
    }
    ctx->pc = 0x213074u;
    // 0x213074: 0x28a10016  slti        $at, $a1, 0x16
    ctx->pc = 0x213074u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x213078: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x213078u;
    {
        const bool branch_taken_0x213078 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213078u;
        // 0x21307c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213078) {
            ctx->pc = 0x2130A4u;
            return;
        }
    }
    ctx->pc = 0x213080u;
}
