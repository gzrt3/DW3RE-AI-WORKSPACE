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

// Function: entry_00220434
// Address: 0x220434 - 0x22045c
void entry_00220434_0x220434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220434_0x220434");
#endif

    ctx->pc = 0x220434u;

    // 0x220434: 0x90e30010  lbu         $v1, 0x10($a3)
    ctx->pc = 0x220434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x220438: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x220438u;
    {
        const bool branch_taken_0x220438 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x220438) {
            ctx->pc = 0x22047Cu;
            return;
        }
    }
    ctx->pc = 0x220440u;
    // 0x220440: 0x94e4000a  lhu         $a0, 0xA($a3)
    ctx->pc = 0x220440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x220444: 0x288300fa  slti        $v1, $a0, 0xFA
    ctx->pc = 0x220444u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)250) ? 1 : 0);
    // 0x220448: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x220448u;
    {
        const bool branch_taken_0x220448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220448u;
        // 0x22044c: 0x2881010f  slti        $at, $a0, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220448) {
            ctx->pc = 0x22045Cu;
            return;
        }
    }
    ctx->pc = 0x220450u;
    // 0x220450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x220450u;
    {
        const bool branch_taken_0x220450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220450u;
        // 0x220454: 0x851821  addu        $v1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220450) {
            ctx->pc = 0x22045Cu;
            return;
        }
    }
    ctx->pc = 0x220458u;
    // 0x220458: 0xa4e3000a  sh          $v1, 0xA($a3)
    ctx->pc = 0x220458u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x22045cu;
}
