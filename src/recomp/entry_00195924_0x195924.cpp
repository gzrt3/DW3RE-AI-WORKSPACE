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

// Function: entry_00195924
// Address: 0x195924 - 0x1959ac
void entry_00195924_0x195924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195924_0x195924");
#endif

    switch (ctx->pc) {
        case 0x1959a8u: goto label_1959a8;
        default: break;
    }

    ctx->pc = 0x195924u;

    // 0x195924: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x195928: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x195928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x19592c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x195930: 0x9083367c  lbu         $v1, 0x367C($a0)
    ctx->pc = 0x195930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
    // 0x195934: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x195934u;
    {
        const bool branch_taken_0x195934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195934) {
            ctx->pc = 0x1959ACu;
            return;
        }
    }
    ctx->pc = 0x19593Cu;
    // 0x19593c: 0x9083368a  lbu         $v1, 0x368A($a0)
    ctx->pc = 0x19593cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13962)));
    // 0x195940: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x195940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x195944: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x195944u;
    {
        const bool branch_taken_0x195944 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195944) {
            ctx->pc = 0x1959ACu;
            return;
        }
    }
    ctx->pc = 0x19594Cu;
    // 0x19594c: 0x90853694  lbu         $a1, 0x3694($a0)
    ctx->pc = 0x19594cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13972)));
    // 0x195950: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x195954: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x195958: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x19595c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x195960: 0x24845370  addiu       $a0, $a0, 0x5370
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
    // 0x195964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x195968: 0x84840038  lh          $a0, 0x38($a0)
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x19596c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x19596cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x195970: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x195974: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x195978: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19597c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x195980: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x195984: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x195988: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195988) {
            ctx->pc = 0x1959ACu;
            return;
        }
    }
    ctx->pc = 0x195990u;
    // 0x195990: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x195994: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x195998: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x19599c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1959a0: 0xc0415a4  jal         func_105690
    ctx->pc = 0x1959A0u;
    SET_GPR_U32(ctx, 31, 0x1959A8u);
    ctx->pc = 0x1959A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959A0u;
    // 0x1959a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1959A0u, 0x1959A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959A8u;
label_1959a8:
    // 0x1959a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1959acu;
}
