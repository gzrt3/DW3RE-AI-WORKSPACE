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

// Function: entry_00222224
// Address: 0x222224 - 0x222268
void entry_00222224_0x222224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222224_0x222224");
#endif

    switch (ctx->pc) {
        case 0x222250u: goto label_222250;
        default: break;
    }

    ctx->pc = 0x222224u;

    // 0x222224: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x222224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x222228: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x222228u;
    {
        const bool branch_taken_0x222228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222228u;
        // 0x22222c: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222228) {
            ctx->pc = 0x222294u;
            return;
        }
    }
    ctx->pc = 0x222230u;
    // 0x222230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222234: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x222234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x222238: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x22223c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22223Cu;
    {
        const bool branch_taken_0x22223c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x222240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22223Cu;
        // 0x222240: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22223c) {
            ctx->pc = 0x222268u;
            return;
        }
    }
    ctx->pc = 0x222244u;
    // 0x222244: 0x8f8592d8  lw          $a1, -0x6D28($gp)
    ctx->pc = 0x222244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939352)));
    // 0x222248: 0xc056ff8  jal         func_15BFE0
    ctx->pc = 0x222248u;
    SET_GPR_U32(ctx, 31, 0x222250u);
    ctx->pc = 0x22224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222248u;
    // 0x22224c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BFE0u, 0x222248u, 0x222250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222250u;
label_222250:
    // 0x222250: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x222250u;
    {
        const bool branch_taken_0x222250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222250) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222258u;
    // 0x222258: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x222258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22225c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22225cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222260: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x222260u;
    {
        const bool branch_taken_0x222260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222260u;
        // 0x222264: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222260) {
            ctx->pc = 0x2222FCu;
            return;
        }
    }
    ctx->pc = 0x222268u;
}
