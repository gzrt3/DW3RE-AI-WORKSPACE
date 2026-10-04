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

// Function: entry_00188dbc
// Address: 0x188dbc - 0x188de0
void entry_00188dbc_0x188dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188dbc_0x188dbc");
#endif

    ctx->pc = 0x188dbcu;

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
            return;
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
            return;
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
}
