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

// Function: FUN_001751c0
// Address: 0x1751c0 - 0x175268
void FUN_001751c0_0x1751c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001751c0_0x1751c0");
#endif

    switch (ctx->pc) {
        case 0x1751ecu: goto label_1751ec;
        case 0x175200u: goto label_175200;
        case 0x175208u: goto label_175208;
        case 0x175264u: goto label_175264;
        default: break;
    }

    ctx->pc = 0x1751c0u;

    // 0x1751c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1751c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1751c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1751c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1751c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1751c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1751cc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1751ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1751d0: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x1751d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x1751d4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1751D4u;
    {
        const bool branch_taken_0x1751d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1751D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751D4u;
        // 0x1751d8: 0x3c04002f  lui         $a0, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751d4) {
            ctx->pc = 0x1751F4u;
            goto label_1751f4;
        }
    }
    ctx->pc = 0x1751DCu;
    // 0x1751dc: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1751dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x1751e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1751e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1751e4: 0xc05d49c  jal         func_175270
    ctx->pc = 0x1751E4u;
    SET_GPR_U32(ctx, 31, 0x1751ECu);
    ctx->pc = 0x1751E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1751E4u;
    // 0x1751e8: 0x24842600  addiu       $a0, $a0, 0x2600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175270u, 0x1751E4u, 0x1751ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751ECu;
label_1751ec:
    // 0x1751ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1751ECu;
    {
        const bool branch_taken_0x1751ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1751F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1751ECu;
        // 0x1751f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1751ec) {
            ctx->pc = 0x175268u;
            return;
        }
    }
    ctx->pc = 0x1751F4u;
label_1751f4:
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
    ctx->pc = 0x175268u;
}
