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

// Function: entry_00152ce8
// Address: 0x152ce8 - 0x152d34
void entry_00152ce8_0x152ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152ce8_0x152ce8");
#endif

    switch (ctx->pc) {
        case 0x152d2cu: goto label_152d2c;
        default: break;
    }

    ctx->pc = 0x152ce8u;

    // 0x152ce8: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x152cec: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x152cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x152cf0: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x152cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x152cf4: 0x24a30202  addiu       $v1, $a1, 0x202
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 514));
    // 0x152cf8: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x152cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x152cfc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x152d00: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x152d00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x152d04: 0x8ca60198  lw          $a2, 0x198($a1)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
    // 0x152d08: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x152d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d10: 0xe33804  sllv        $a3, $v1, $a3
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x152d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152d18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x152d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x152d1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152D1Cu;
    {
        const bool branch_taken_0x152d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D1Cu;
        // 0x152d20: 0xaca60198  sw          $a2, 0x198($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d1c) {
            ctx->pc = 0x152D34u;
            return;
        }
    }
    ctx->pc = 0x152D24u;
    // 0x152d24: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152D24u;
    SET_GPR_U32(ctx, 31, 0x152D2Cu);
    ctx->pc = 0x152D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D24u;
    // 0x152d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152D24u, 0x152D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D2Cu;
label_152d2c:
    // 0x152d2c: 0xc05d604  jal         func_175810
    ctx->pc = 0x152D2Cu;
    SET_GPR_U32(ctx, 31, 0x152D34u);
    ctx->pc = 0x152D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D2Cu;
    // 0x152d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175810u, 0x152D2Cu, 0x152D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D34u;
}
