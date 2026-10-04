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

// Function: entry_0014db58
// Address: 0x14db58 - 0x14dbac
void entry_0014db58_0x14db58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014db58_0x14db58");
#endif

    ctx->pc = 0x14db58u;

    // 0x14db58: 0x8cf00050  lw          $s0, 0x50($a3)
    ctx->pc = 0x14db58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x14db5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14db5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14db60: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x14db60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x14db64: 0x14660028  bne         $v1, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x14DB64u;
    {
        const bool branch_taken_0x14db64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x14db64) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DB6Cu;
    // 0x14db6c: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x14db6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x14db70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x14db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14db74: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x14DB74u;
    {
        const bool branch_taken_0x14db74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db74) {
            ctx->pc = 0x14DBACu;
            return;
        }
    }
    ctx->pc = 0x14DB7Cu;
    // 0x14db7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14db80: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x14DB80u;
    {
        const bool branch_taken_0x14db80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db80) {
            ctx->pc = 0x14DBACu;
            return;
        }
    }
    ctx->pc = 0x14DB88u;
    // 0x14db88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14db8c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14DB8Cu;
    {
        const bool branch_taken_0x14db8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14db8c) {
            ctx->pc = 0x14DBACu;
            return;
        }
    }
    ctx->pc = 0x14DB94u;
    // 0x14db94: 0x10860005  beq         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DB94u;
    {
        const bool branch_taken_0x14db94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x14db94) {
            ctx->pc = 0x14DBACu;
            return;
        }
    }
    ctx->pc = 0x14DB9Cu;
    // 0x14db9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DB9Cu;
    {
        const bool branch_taken_0x14db9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14db9c) {
            ctx->pc = 0x14DBACu;
            return;
        }
    }
    ctx->pc = 0x14DBA4u;
    // 0x14dba4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14DBA4u;
    {
        const bool branch_taken_0x14dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dba4) {
            ctx->pc = 0x14DC08u;
            return;
        }
    }
    ctx->pc = 0x14DBACu;
}
