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

// Function: entry_00188704
// Address: 0x188704 - 0x188770
void entry_00188704_0x188704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188704_0x188704");
#endif

    ctx->pc = 0x188704u;

    // 0x188704: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x188704u;
    {
        const bool branch_taken_0x188704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188704) {
            ctx->pc = 0x188824u;
            return;
        }
    }
    ctx->pc = 0x18870Cu;
    // 0x18870c: 0x92230232  lbu         $v1, 0x232($s1)
    ctx->pc = 0x18870cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x188710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188714: 0x14660016  bne         $v1, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x188714u;
    {
        const bool branch_taken_0x188714 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x188714) {
            ctx->pc = 0x188770u;
            return;
        }
    }
    ctx->pc = 0x18871Cu;
    // 0x18871c: 0x92240238  lbu         $a0, 0x238($s1)
    ctx->pc = 0x18871cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 568)));
    // 0x188720: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x188720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x188724: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x188724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x188728: 0x2485ffb8  addiu       $a1, $a0, -0x48
    ctx->pc = 0x188728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967224));
    // 0x18872c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x188730: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x188730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x188734: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x188734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x188738: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18873c: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x18873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
    // 0x188740: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x188740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
    // 0x188744: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x188744u;
    {
        const bool branch_taken_0x188744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188744) {
            ctx->pc = 0x188770u;
            return;
        }
    }
    ctx->pc = 0x18874Cu;
    // 0x18874c: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x18874cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x188750: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x188754: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188754u;
    {
        const bool branch_taken_0x188754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x188758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188754u;
        // 0x188758: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188754) {
            ctx->pc = 0x188770u;
            return;
        }
    }
    ctx->pc = 0x18875Cu;
    // 0x18875c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x18875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x188760: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x188760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x188764: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188764u;
    {
        const bool branch_taken_0x188764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188764) {
            ctx->pc = 0x188770u;
            return;
        }
    }
    ctx->pc = 0x18876Cu;
    // 0x18876c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18876cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188770u;
}
