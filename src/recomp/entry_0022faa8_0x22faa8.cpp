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

// Function: entry_0022faa8
// Address: 0x22faa8 - 0x22fb5c
void entry_0022faa8_0x22faa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022faa8_0x22faa8");
#endif

    ctx->pc = 0x22faa8u;

    // 0x22faa8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x22faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x22faac: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x22faacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22fab0: 0x2442f4a0  addiu       $v0, $v0, -0xB60
    ctx->pc = 0x22fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964384));
    // 0x22fab4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x22fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x22fab8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x22fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22fabc: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22fac0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x22fac4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fac8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x22fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x22facc: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x22faccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22fad0: 0x0  nop
    ctx->pc = 0x22fad0u;
    // NOP
    // 0x22fad4: 0x0  nop
    ctx->pc = 0x22fad4u;
    // NOP
    // 0x22fad8: 0x1810  mfhi        $v1
    ctx->pc = 0x22fad8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22fadc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x22fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x22fae0: 0xac260470  sw          $a2, 0x470($at)
    ctx->pc = 0x22fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1136), GPR_U32(ctx, 6));
    // 0x22fae4: 0x24423420  addiu       $v0, $v0, 0x3420
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13344));
    // 0x22fae8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x22fae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x22faec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22faf0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22faf4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22faf8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22fafc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x22fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22fb00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22fb04: 0xac230474  sw          $v1, 0x474($at)
    ctx->pc = 0x22fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1140), GPR_U32(ctx, 3));
    // 0x22fb08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22fb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fb0c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x22fb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22fb10: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x22FB10u;
    {
        const bool branch_taken_0x22fb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB10u;
        // 0x22fb14: 0x3c010029  lui         $at, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb10) {
            ctx->pc = 0x22FC50u;
            return;
        }
    }
    ctx->pc = 0x22FB18u;
    // 0x22fb18: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x22fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x22fb1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22fb20: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x22fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x22fb24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22fb28: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb2c: 0x28a10027  slti        $at, $a1, 0x27
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)39) ? 1 : 0);
    // 0x22fb30: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB30u;
        // 0x22fb34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FB5Cu;
            return;
        }
    }
    ctx->pc = 0x22FB38u;
    // 0x22fb38: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22fb3c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x22fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x22fb40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22fb44: 0x2463ff8c  addiu       $v1, $v1, -0x74
    ctx->pc = 0x22fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967180));
    // 0x22fb48: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x22fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22fb4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22fb50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22fb54: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x22fb54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x22fb58: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x22fb58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x22fb5cu;
}
