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

// Function: entry_00100798
// Address: 0x100798 - 0x1007c0
void entry_00100798_0x100798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100798_0x100798");
#endif

    ctx->pc = 0x100798u;

    // 0x100798: 0x94a4000c  lhu         $a0, 0xC($a1)
    ctx->pc = 0x100798u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x10079c: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x10079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x1007a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1007A0u;
    {
        const bool branch_taken_0x1007a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1007a0) {
            ctx->pc = 0x1007C0u;
            return;
        }
    }
    ctx->pc = 0x1007A8u;
    // 0x1007a8: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x1007a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1007ac: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1007acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1007b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1007b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1007b4: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1007b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1007b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1007B8u;
    {
        const bool branch_taken_0x1007b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1007BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007B8u;
        // 0x1007bc: 0xff828428  sd          $v0, -0x7BD8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935592), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007b8) {
            ctx->pc = 0x1007E0u;
            return;
        }
    }
    ctx->pc = 0x1007C0u;
}
