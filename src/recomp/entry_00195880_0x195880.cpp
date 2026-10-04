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

// Function: entry_00195880
// Address: 0x195880 - 0x1958e4
void entry_00195880_0x195880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195880_0x195880");
#endif

    switch (ctx->pc) {
        case 0x1958e0u: goto label_1958e0;
        default: break;
    }

    ctx->pc = 0x195880u;

    // 0x195880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195884: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x195888: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x19588c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x195890: 0x2484b170  addiu       $a0, $a0, -0x4E90
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
    // 0x195894: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x195894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x195898: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x19589c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1958a0: 0x8484010a  lh          $a0, 0x10A($a0)
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 266)));
    // 0x1958a4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1958a8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1958ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1958b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1958b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1958b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1958bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1958c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958E4u;
            return;
        }
    }
    ctx->pc = 0x1958C8u;
    // 0x1958c8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1958cc: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1958d0: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1958d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1958d8: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1958D8u;
    SET_GPR_U32(ctx, 31, 0x1958E0u);
    ctx->pc = 0x1958DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958D8u;
    // 0x1958dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1958D8u, 0x1958E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1958e4u;
}
