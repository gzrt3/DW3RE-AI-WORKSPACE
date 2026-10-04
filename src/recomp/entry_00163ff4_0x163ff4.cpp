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

// Function: entry_00163ff4
// Address: 0x163ff4 - 0x164018
void entry_00163ff4_0x163ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163ff4_0x163ff4");
#endif

    ctx->pc = 0x163ff4u;

label_163ff4:
    // 0x163ff4: 0x0  nop
    ctx->pc = 0x163ff4u;
    // NOP
label_163ff8:
    // 0x163ff8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_163ffc:
    // 0x163ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_164000:
    if (ctx->pc == 0x164000u) {
        ctx->pc = 0x164004u;
        goto label_164004;
    }
    ctx->pc = 0x163FFCu;
    {
        const bool branch_taken_0x163ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163ffc) {
            ctx->pc = 0x164018u;
            return;
        }
    }
    ctx->pc = 0x164004u;
label_164004:
    // 0x164004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164008:
    // 0x164008: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x164008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_16400c:
    // 0x16400c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x16400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_164010:
    // 0x164010: 0x40f809  jalr        $v0
label_164014:
    if (ctx->pc == 0x164014u) {
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x164018u;
        goto label_fallthrough_0x164010;
    }
    ctx->pc = 0x164010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x164018u);
        ctx->pc = 0x164014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164010u;
        // 0x164014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164010u, 0x164018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x164010:
    ctx->pc = 0x164018u;
}
