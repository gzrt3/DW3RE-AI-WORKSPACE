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

// Function: FUN_00188d20
// Address: 0x188d20 - 0x188de4
void FUN_00188d20_0x188d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188d20_0x188d20");
#endif

    ctx->pc = 0x188d20u;

    // 0x188d20: 0x8484003c  lh          $a0, 0x3C($a0)
    ctx->pc = 0x188d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x188d24: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x188d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x188d28: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D28u;
    {
        const bool branch_taken_0x188d28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D28u;
        // 0x188d2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d28) {
            ctx->pc = 0x188D3Cu;
            goto label_188d3c;
        }
    }
    ctx->pc = 0x188D30u;
    // 0x188d30: 0x240300bf  addiu       $v1, $zero, 0xBF
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x188d34: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D34u;
    {
        const bool branch_taken_0x188d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D34u;
        // 0x188d38: 0x24030097  addiu       $v1, $zero, 0x97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d34) {
            ctx->pc = 0x188D44u;
            goto label_188d44;
        }
    }
    ctx->pc = 0x188D3Cu;
label_188d3c:
    // 0x188d3c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x188D3Cu;
    {
        const bool branch_taken_0x188d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D3Cu;
        // 0x188d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d3c) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188D44u;
label_188d44:
    // 0x188d44: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D44u;
    {
        const bool branch_taken_0x188d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d44) {
            ctx->pc = 0x188D58u;
            goto label_188d58;
        }
    }
    ctx->pc = 0x188D4Cu;
    // 0x188d4c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x188d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x188d50: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D50u;
    {
        const bool branch_taken_0x188d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D50u;
        // 0x188d54: 0x24030098  addiu       $v1, $zero, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d50) {
            ctx->pc = 0x188D60u;
            goto label_188d60;
        }
    }
    ctx->pc = 0x188D58u;
label_188d58:
    // 0x188d58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x188D58u;
    {
        const bool branch_taken_0x188d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D58u;
        // 0x188d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d58) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188D60u;
label_188d60:
    // 0x188d60: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x188D60u;
    {
        const bool branch_taken_0x188d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d60) {
            ctx->pc = 0x188D74u;
            goto label_188d74;
        }
    }
    ctx->pc = 0x188D68u;
    // 0x188d68: 0x240300c1  addiu       $v1, $zero, 0xC1
    ctx->pc = 0x188d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x188d6c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D6Cu;
    {
        const bool branch_taken_0x188d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D6Cu;
        // 0x188d70: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d6c) {
            ctx->pc = 0x188D7Cu;
            goto label_188d7c;
        }
    }
    ctx->pc = 0x188D74u;
label_188d74:
    // 0x188d74: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x188D74u;
    {
        const bool branch_taken_0x188d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D74u;
        // 0x188d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d74) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188D7Cu;
label_188d7c:
    // 0x188d7c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188D7Cu;
    {
        const bool branch_taken_0x188d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d7c) {
            ctx->pc = 0x188D98u;
            goto label_188d98;
        }
    }
    ctx->pc = 0x188D84u;
    // 0x188d84: 0x240300e7  addiu       $v1, $zero, 0xE7
    ctx->pc = 0x188d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x188d88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D88u;
    {
        const bool branch_taken_0x188d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D88u;
        // 0x188d8c: 0x240300c2  addiu       $v1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d88) {
            ctx->pc = 0x188D98u;
            goto label_188d98;
        }
    }
    ctx->pc = 0x188D90u;
    // 0x188d90: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188D90u;
    {
        const bool branch_taken_0x188d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188d90) {
            ctx->pc = 0x188DA0u;
            goto label_188da0;
        }
    }
    ctx->pc = 0x188D98u;
label_188d98:
    // 0x188d98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x188D98u;
    {
        const bool branch_taken_0x188d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D98u;
        // 0x188d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d98) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188DA0u;
label_188da0:
    // 0x188da0: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x188da4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DA4u;
    {
        const bool branch_taken_0x188da4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DA4u;
        // 0x188da8: 0x240300c3  addiu       $v1, $zero, 0xC3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188da4) {
            ctx->pc = 0x188DB4u;
            goto label_188db4;
        }
    }
    ctx->pc = 0x188DACu;
    // 0x188dac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188DACu;
    {
        const bool branch_taken_0x188dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188dac) {
            ctx->pc = 0x188DBCu;
            goto label_188dbc;
        }
    }
    ctx->pc = 0x188DB4u;
label_188db4:
    // 0x188db4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x188DB4u;
    {
        const bool branch_taken_0x188db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DB4u;
        // 0x188db8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188db4) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188DBCu;
label_188dbc:
    // 0x188dbc: 0x240300ec  addiu       $v1, $zero, 0xEC
    ctx->pc = 0x188dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x188dc0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188DC0u;
    {
        const bool branch_taken_0x188dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188DC0u;
        // 0x188dc4: 0x2483ff5f  addiu       $v1, $a0, -0xA1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967135));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188dc0) {
            ctx->pc = 0x188DE0u;
            goto label_188de0;
        }
    }
    ctx->pc = 0x188DC8u;
    // 0x188dc8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x188dc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x188dcc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x188DCCu;
    {
        const bool branch_taken_0x188dcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x188dcc) {
            ctx->pc = 0x188DE0u;
            goto label_188de0;
        }
    }
    ctx->pc = 0x188DD4u;
    // 0x188dd4: 0x240300ed  addiu       $v1, $zero, 0xED
    ctx->pc = 0x188dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x188dd8: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188DD8u;
    {
        const bool branch_taken_0x188dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188dd8) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188DE0u;
label_188de0:
    // 0x188de0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188de0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188de4u;
}
