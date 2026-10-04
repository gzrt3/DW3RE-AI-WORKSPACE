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

// Function: entry_0017bcdc
// Address: 0x17bcdc - 0x17bcf4
void entry_0017bcdc_0x17bcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcdc_0x17bcdc");
#endif

    ctx->pc = 0x17bcdcu;

    // 0x17bcdc: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x17bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17bce0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17bce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17bce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BCE4u;
    {
        const bool branch_taken_0x17bce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bce4) {
            ctx->pc = 0x17BCF4u;
            return;
        }
    }
    ctx->pc = 0x17BCECu;
    // 0x17bcec: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x17bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x17bcf0: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    ctx->pc = 0x17bcf4u;
}
