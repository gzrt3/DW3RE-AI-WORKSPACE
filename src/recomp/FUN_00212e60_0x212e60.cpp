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

// Function: FUN_00212e60
// Address: 0x212e60 - 0x2130a8
void FUN_00212e60_0x212e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00212e60_0x212e60");
#endif

    switch (ctx->pc) {
        case 0x212e7cu: goto label_212e7c;
        case 0x212f48u: goto label_212f48;
        case 0x212f94u: goto label_212f94;
        case 0x213080u: goto label_213080;
        default: break;
    }

    ctx->pc = 0x212e60u;

    // 0x212e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212e64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x212e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x212e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212e6c: 0x34664ef8  ori         $a2, $v1, 0x4EF8
    ctx->pc = 0x212e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20216);
    // 0x212e70: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x212e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x212e74: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x212e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x212e78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x212e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
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
            goto label_212f74;
        }
    }
    ctx->pc = 0x212F48u;
label_212f48:
    // 0x212f48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212f4c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x212f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x212f50: 0xdc241888  ld          $a0, 0x1888($at)
    ctx->pc = 0x212f50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 6280)));
    // 0x212f54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x212f54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x212f58: 0x673014  dsllv       $a2, $a3, $v1
    ctx->pc = 0x212f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x212f5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x212f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x212f60: 0x28a30025  slti        $v1, $a1, 0x25
    ctx->pc = 0x212f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x212f64: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x212f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x212f68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x212f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x212f6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x212F6Cu;
    {
        const bool branch_taken_0x212f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x212F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212F6Cu;
        // 0x212f70: 0xfc241888  sd          $a0, 0x1888($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 6280), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212f6c) {
            ctx->pc = 0x212F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212f48;
        }
    }
    ctx->pc = 0x212F74u;
label_212f74:
    // 0x212f74: 0x0  nop
    ctx->pc = 0x212f74u;
    // NOP
    // 0x212f78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x212f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212f7c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x212f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x212f80: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x212f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x212f84: 0x34664ef0  ori         $a2, $v1, 0x4EF0
    ctx->pc = 0x212f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20208);
    // 0x212f88: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x212f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
    // 0x212f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x212f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212f90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
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
            goto label_2130a4;
        }
    }
    ctx->pc = 0x213080u;
label_213080:
    // 0x213080: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x213084: 0xa73004  sllv        $a2, $a3, $a1
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x213088: 0x8c241880  lw          $a0, 0x1880($at)
    ctx->pc = 0x213088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6272)));
    // 0x21308c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x213090: 0x28a30016  slti        $v1, $a1, 0x16
    ctx->pc = 0x213090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x213094: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x213094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x213098: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x213098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x21309c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21309Cu;
    {
        const bool branch_taken_0x21309c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2130A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21309Cu;
        // 0x2130a0: 0xac241880  sw          $a0, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21309c) {
            ctx->pc = 0x213080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213080;
        }
    }
    ctx->pc = 0x2130A4u;
label_2130a4:
    // 0x2130a4: 0x0  nop
    ctx->pc = 0x2130a4u;
    // NOP
    ctx->pc = 0x2130a8u;
}
