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

// Function: entry_00140618
// Address: 0x140618 - 0x140638
void entry_00140618_0x140618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140618_0x140618");
#endif

    ctx->pc = 0x140618u;

    // 0x140618: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x14061c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x14061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x140620: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140620u;
    {
        const bool branch_taken_0x140620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140620) {
            ctx->pc = 0x14063Cu;
            return;
        }
    }
    ctx->pc = 0x140628u;
    // 0x140628: 0x860201ac  lh          $v0, 0x1AC($s0)
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x14062c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140630: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140630u;
    {
        const bool branch_taken_0x140630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140630u;
        // 0x140634: 0xa60201ac  sh          $v0, 0x1AC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140630) {
            ctx->pc = 0x14063Cu;
            return;
        }
    }
    ctx->pc = 0x140638u;
}
