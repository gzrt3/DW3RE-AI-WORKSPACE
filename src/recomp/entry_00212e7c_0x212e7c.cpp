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

// Function: entry_00212e7c
// Address: 0x212e7c - 0x212f48
void entry_00212e7c_0x212e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212e7c_0x212e7c");
#endif

    ctx->pc = 0x212e7cu;

label_212e7c:
    // 0x212e7c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x212e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x212e80: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x212e80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x212e84: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212e84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x212e88: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212e8c: 0xc44814  dsllv       $t1, $a0, $a2
    ctx->pc = 0x212e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x212e90: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x212e94: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x212e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212e98: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x212e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x212e9c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212e9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x212ea0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212ea4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x212ea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x212ea8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ea8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x212eac: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x212eacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x212eb0: 0xc46014  dsllv       $t4, $a0, $a2
    ctx->pc = 0x212eb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x212eb4: 0xdc2d1888  ld          $t5, 0x1888($at)
    ctx->pc = 0x212eb4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x212eb8: 0xe47014  dsllv       $t6, $a0, $a3
    ctx->pc = 0x212eb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x212ebc: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x212ec0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x212ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212ec4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x212ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x212ec8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212ec8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x212ecc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212ed0: 0xe45814  dsllv       $t3, $a0, $a3
    ctx->pc = 0x212ed0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x212ed4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ed4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x212ed8: 0x24a70005  addiu       $a3, $a1, 0x5
    ctx->pc = 0x212ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x212edc: 0xc45014  dsllv       $t2, $a0, $a2
    ctx->pc = 0x212edcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x212ee0: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x212ee0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x212ee4: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x212ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x212ee8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x212ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x212eec: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212ef0: 0x1ac6025  or          $t4, $t5, $t4
    ctx->pc = 0x212ef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x212ef4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212ef4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x212ef8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x212ef8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x212efc: 0xc44014  dsllv       $t0, $a0, $a2
    ctx->pc = 0x212efcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x212f00: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x212f00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x212f04: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x212f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x212f08: 0xe44814  dsllv       $t1, $a0, $a3
    ctx->pc = 0x212f08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x212f0c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x212f0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x212f10: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x212f10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x212f14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x212f14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x212f18: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x212f18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x212f1c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x212f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x212f20: 0xc43814  dsllv       $a3, $a0, $a2
    ctx->pc = 0x212f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x212f24: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x212f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x212f28: 0x28a6001d  slti        $a2, $a1, 0x1D
    ctx->pc = 0x212f28u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x212f2c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x212f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x212f30: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212f34: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x212F34u;
    {
        const bool branch_taken_0x212f34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F34u;
        // 0x212f38: 0xfc271888  sd          $a3, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f34) {
            ctx->pc = 0x212E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212e7c;
        }
    }
    ctx->pc = 0x212F3Cu;
    // 0x212f3c: 0x28a10025  slti        $at, $a1, 0x25
    ctx->pc = 0x212f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x212f40: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x212F40u;
    {
        const bool branch_taken_0x212f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x212F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F40u;
        // 0x212f44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f40) {
            ctx->pc = 0x212F74u;
            return;
        }
    }
    ctx->pc = 0x212F48u;
}
