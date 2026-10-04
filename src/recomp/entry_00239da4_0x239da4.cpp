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

// Function: entry_00239da4
// Address: 0x239da4 - 0x239de0
void entry_00239da4_0x239da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239da4_0x239da4");
#endif

    ctx->pc = 0x239da4u;

    // 0x239da4: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239da8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x239da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x239dac: 0x12020080  beq         $s0, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x239DACu;
    {
        const bool branch_taken_0x239dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x239DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DACu;
        // 0x239db0: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dac) {
            ctx->pc = 0x239FB0u;
            return;
        }
    }
    ctx->pc = 0x239DB4u;
    // 0x239db4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x239db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x239db8: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x239db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239dbc: 0xd1202b  sltu        $a0, $a2, $s1
    ctx->pc = 0x239dbcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x239dc0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239DC0u;
    {
        const bool branch_taken_0x239dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DC0u;
        // 0x239dc4: 0xd11023  subu        $v0, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dc0) {
            ctx->pc = 0x239DE0u;
            return;
        }
    }
    ctx->pc = 0x239DC8u;
    // 0x239dc8: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x239dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239dd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x239dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239DD4u;
    {
        const bool branch_taken_0x239dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239DD4u;
        // 0x239dd8: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239dd4) {
            ctx->pc = 0x239DE8u;
            return;
        }
    }
    ctx->pc = 0x239DDCu;
    // 0x239ddc: 0x0  nop
    ctx->pc = 0x239ddcu;
    // NOP
    ctx->pc = 0x239de0u;
}
