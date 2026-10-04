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

// Function: FUN_00209dd0
// Address: 0x209dd0 - 0x209ec0
void FUN_00209dd0_0x209dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00209dd0_0x209dd0");
#endif

    ctx->pc = 0x209dd0u;

    // 0x209dd0: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209dd4: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x209DD4u;
    {
        const bool branch_taken_0x209dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dd4) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209DDCu;
    // 0x209ddc: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209de0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x209DE0u;
    {
        const bool branch_taken_0x209de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209de0) {
            ctx->pc = 0x209E0Cu;
            goto label_209e0c;
        }
    }
    ctx->pc = 0x209DE8u;
    // 0x209de8: 0x8c8357e8  lw          $v1, 0x57E8($a0)
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22504)));
    // 0x209dec: 0x248557e8  addiu       $a1, $a0, 0x57E8
    ctx->pc = 0x209decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 22504));
    // 0x209df0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209df4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209DF4u;
    {
        const bool branch_taken_0x209df4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF4u;
        // 0x209df8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209df4) {
            ctx->pc = 0x209E08u;
            goto label_209e08;
        }
    }
    ctx->pc = 0x209DFCu;
    // 0x209dfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209DFCu;
    {
        const bool branch_taken_0x209dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dfc) {
            ctx->pc = 0x209E08u;
            goto label_209e08;
        }
    }
    ctx->pc = 0x209E04u;
    // 0x209e04: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x209e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_209e08:
    // 0x209e08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x209e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_209e0c:
    // 0x209e0c: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209e14: 0x8ca45720  lw          $a0, 0x5720($a1)
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22304)));
    // 0x209e18: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E70u;
            goto label_209e70;
        }
    }
    ctx->pc = 0x209E20u;
    // 0x209e20: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
    // 0x209e24: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x209e28: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x209e2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x209E2Cu;
    {
        const bool branch_taken_0x209e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E2Cu;
        // 0x209e30: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e2c) {
            ctx->pc = 0x209E48u;
            goto label_209e48;
        }
    }
    ctx->pc = 0x209E34u;
    // 0x209e34: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e38: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e3c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x209e40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209E40u;
    {
        const bool branch_taken_0x209e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e40) {
            ctx->pc = 0x209E4Cu;
            goto label_209e4c;
        }
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_209e4c:
    // 0x209e4c: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e50: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
    // 0x209e54: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e58: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e5c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x209e60: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x209E60u;
    {
        const bool branch_taken_0x209e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e60) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E68u;
    // 0x209e68: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x209E68u;
    {
        const bool branch_taken_0x209e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E68u;
        // 0x209e6c: 0xac805720  sw          $zero, 0x5720($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e68) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E70u;
label_209e70:
    // 0x209e70: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x209E70u;
    {
        const bool branch_taken_0x209e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x209e70) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209E78u;
    // 0x209e78: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
    // 0x209e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x209e80: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x209e84: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x209E84u;
    {
        const bool branch_taken_0x209e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E84u;
        // 0x209e88: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e84) {
            ctx->pc = 0x209EA0u;
            goto label_209ea0;
        }
    }
    ctx->pc = 0x209E8Cu;
    // 0x209e8c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209e90: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209e94: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x209e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209E98u;
    {
        const bool branch_taken_0x209e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E98u;
        // 0x209e9c: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e98) {
            ctx->pc = 0x209EA4u;
            goto label_209ea4;
        }
    }
    ctx->pc = 0x209EA0u;
label_209ea0:
    // 0x209ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ea4:
    // 0x209ea4: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209ea8: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
    // 0x209eac: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
    // 0x209eb0: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
    // 0x209eb4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209EB4u;
    {
        const bool branch_taken_0x209eb4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x209eb4) {
            ctx->pc = 0x209EC0u;
            return;
        }
    }
    ctx->pc = 0x209EBCu;
    // 0x209ebc: 0xac805720  sw          $zero, 0x5720($a0)
    ctx->pc = 0x209ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
    ctx->pc = 0x209ec0u;
}
