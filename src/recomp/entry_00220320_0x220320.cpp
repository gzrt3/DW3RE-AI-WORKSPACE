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

// Function: entry_00220320
// Address: 0x220320 - 0x220348
void entry_00220320_0x220320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220320_0x220320");
#endif

    ctx->pc = 0x220320u;

    // 0x220320: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x220324: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x220324u;
    {
        const bool branch_taken_0x220324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220324) {
            ctx->pc = 0x220364u;
            return;
        }
    }
    ctx->pc = 0x22032Cu;
    // 0x22032c: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x22032cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x220330: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220330u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220334: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220334u;
    {
        const bool branch_taken_0x220334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220334u;
        // 0x220338: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220334) {
            ctx->pc = 0x220348u;
            return;
        }
    }
    ctx->pc = 0x22033Cu;
    // 0x22033c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22033Cu;
    {
        const bool branch_taken_0x22033c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22033Cu;
        // 0x220340: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22033c) {
            ctx->pc = 0x220348u;
            return;
        }
    }
    ctx->pc = 0x220344u;
    // 0x220344: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220344u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x220348u;
}
