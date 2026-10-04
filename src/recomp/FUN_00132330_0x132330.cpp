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

// Function: FUN_00132330
// Address: 0x132330 - 0x1323a8
void FUN_00132330_0x132330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00132330_0x132330");
#endif

    switch (ctx->pc) {
        case 0x1323a4u: goto label_1323a4;
        default: break;
    }

    ctx->pc = 0x132330u;

    // 0x132330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132334: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x132334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x132338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13233c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x132340: 0x9025a402  lbu         $a1, -0x5BFE($at)
    ctx->pc = 0x132340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A402u));
    // 0x132344: 0x14a30017  bne         $a1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x132344u;
    {
        const bool branch_taken_0x132344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x132344) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x13234Cu;
    // 0x13234c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x13234cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x132350: 0x28a1001e  slti        $at, $a1, 0x1E
    ctx->pc = 0x132350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x132354: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x132354u;
    {
        const bool branch_taken_0x132354 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132354) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x13235Cu;
    // 0x13235c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x132360: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x132360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x132364: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x132364u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x132368: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x132368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x13236c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x13236cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132370: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x132370u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x132374: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x132378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13237c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x13237cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132380: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x132380u;
    {
        const bool branch_taken_0x132380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x132384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132380u;
        // 0x132384: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132380) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x132388u;
    // 0x132388: 0x24635060  addiu       $v1, $v1, 0x5060
    ctx->pc = 0x132388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20576));
    // 0x13238c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132390: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x132394: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132394u;
    {
        const bool branch_taken_0x132394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132394) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x13239Cu;
    // 0x13239c: 0xc08c204  jal         func_230810
    ctx->pc = 0x13239Cu;
    SET_GPR_U32(ctx, 31, 0x1323A4u);
    ctx->pc = 0x1323A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13239Cu;
    // 0x1323a0: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230810u, 0x13239Cu, 0x1323A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323A4u;
label_1323a4:
    // 0x1323a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1323a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1323a8u;
}
