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

// Function: entry_001ec7ec
// Address: 0x1ec7ec - 0x1ec80c
void entry_001ec7ec_0x1ec7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec7ec_0x1ec7ec");
#endif

    ctx->pc = 0x1ec7ecu;

    // 0x1ec7ec: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EC7ECu;
    {
        const bool branch_taken_0x1ec7ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7ECu;
        // 0x1ec7f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ec) {
            ctx->pc = 0x1EC814u;
            return;
        }
    }
    ctx->pc = 0x1EC7F4u;
    // 0x1ec7f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec7f8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1ec7fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC7FCu;
    {
        const bool branch_taken_0x1ec7fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC7FCu;
        // 0x1ec800: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7fc) {
            ctx->pc = 0x1EC80Cu;
            return;
        }
    }
    ctx->pc = 0x1EC804u;
    // 0x1ec804: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ec808: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ec808u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1ec80cu;
}
