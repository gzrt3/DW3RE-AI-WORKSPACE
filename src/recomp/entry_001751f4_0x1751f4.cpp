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

// Function: entry_001751f4
// Address: 0x1751f4 - 0x175270
void entry_001751f4_0x1751f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751f4_0x1751f4");
#endif

    switch (ctx->pc) {
        case 0x175200u: goto label_175200;
        case 0x175208u: goto label_175208;
        case 0x175264u: goto label_175264;
        default: break;
    }

    ctx->pc = 0x1751f4u;

    // 0x1751f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751f8: 0xc05d49c  jal         func_175270
    ctx->pc = 0x1751F8u;
    SET_GPR_U32(ctx, 31, 0x175200u);
    ctx->pc = 0x1751FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751F8u;
    // 0x1751fc: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175270u, 0x1751F8u, 0x175200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175200u;
label_175200:
    // 0x175200: 0xc08a000  jal         func_228000
    ctx->pc = 0x175200u;
    SET_GPR_U32(ctx, 31, 0x175208u);
    ctx->pc = 0x228000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228000u, 0x175200u, 0x175208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175208u;
label_175208:
    // 0x175208: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17520c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x175210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x175214: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x175218: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x175218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17521c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x17521cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x175220: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175224: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
    // 0x175228: 0x8c463674  lw          $a2, 0x3674($v0)
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13940)));
    // 0x17522c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175230: 0x8c43366c  lw          $v1, 0x366C($v0)
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13932)));
    // 0x175234: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x175238: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x175238u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x17523c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x17523cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175244: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x175248: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17524c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175250: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x175250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x175254: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x175254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x175258: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x17525c: 0xc05d49c  jal         func_175270
    ctx->pc = 0x17525Cu;
    SET_GPR_U32(ctx, 31, 0x175264u);
    ctx->pc = 0x175260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17525Cu;
    // 0x175260: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175270u, 0x17525Cu, 0x175264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175264u;
label_175264:
    // 0x175264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175268: 0x3e00008  jr          $ra
    ctx->pc = 0x175268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175268u;
        // 0x17526c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175270u;
}
