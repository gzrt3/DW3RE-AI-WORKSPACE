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

// Function: entry_0020fda8
// Address: 0x20fda8 - 0x20fe74
void entry_0020fda8_0x20fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fda8_0x20fda8");
#endif

    ctx->pc = 0x20fda8u;

label_20fda8:
    // 0x20fda8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x20fda8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20fdac: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x20fdacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fdb0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fdb4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fdb8: 0xa34014  dsllv       $t0, $v1, $a1
    ctx->pc = 0x20fdb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fdbc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x20fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fdc0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdc4: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fdc8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdc8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fdcc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdd0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20fdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x20fdd4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fdd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fdd8: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x20fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x20fddc: 0xa35814  dsllv       $t3, $v1, $a1
    ctx->pc = 0x20fddcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fde0: 0xdc2c1888  ld          $t4, 0x1888($at)
    ctx->pc = 0x20fde0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x20fde4: 0xc36814  dsllv       $t5, $v1, $a2
    ctx->pc = 0x20fde4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fde8: 0x24850003  addiu       $a1, $a0, 0x3
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fdec: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x20fdecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdf0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fdf4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fdf4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fdf8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fdf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fdfc: 0xc35014  dsllv       $t2, $v1, $a2
    ctx->pc = 0x20fdfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fe00: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe00u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe04: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fe08: 0xa34814  dsllv       $t1, $v1, $a1
    ctx->pc = 0x20fe08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe0c: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x20fe0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x20fe10: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fe14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x20fe14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x20fe18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fe1c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x20fe1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x20fe20: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe20u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe24: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20fe24u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20fe28: 0xa33814  dsllv       $a3, $v1, $a1
    ctx->pc = 0x20fe28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe2c: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x20fe2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x20fe30: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20fe34: 0xc34014  dsllv       $t0, $v1, $a2
    ctx->pc = 0x20fe34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x20fe38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x20fe38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20fe3c: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x20fe3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x20fe40: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20fe40u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20fe44: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x20fe44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x20fe48: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20fe4c: 0xa33014  dsllv       $a2, $v1, $a1
    ctx->pc = 0x20fe4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x20fe50: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x20fe50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x20fe54: 0x2885001d  slti        $a1, $a0, 0x1D
    ctx->pc = 0x20fe54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x20fe58: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x20fe58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x20fe5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fe5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fe60: 0x14a0ffd1  bnez        $a1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20FE60u;
    {
        const bool branch_taken_0x20fe60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE60u;
        // 0x20fe64: 0xfc261888  sd          $a2, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe60) {
            ctx->pc = 0x20FDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fda8;
        }
    }
    ctx->pc = 0x20FE68u;
    // 0x20fe68: 0x28810025  slti        $at, $a0, 0x25
    ctx->pc = 0x20fe68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x20fe6c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x20FE6Cu;
    {
        const bool branch_taken_0x20fe6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE6Cu;
        // 0x20fe70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe6c) {
            ctx->pc = 0x20FEA0u;
            return;
        }
    }
    ctx->pc = 0x20FE74u;
}
