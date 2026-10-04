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

// Function: FUN_001d61b0
// Address: 0x1d61b0 - 0x1d624c
void FUN_001d61b0_0x1d61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d61b0_0x1d61b0");
#endif

    switch (ctx->pc) {
        case 0x1d6248u: goto label_1d6248;
        default: break;
    }

    ctx->pc = 0x1d61b0u;

    // 0x1d61b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1d61b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1d61b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d61b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d61b8: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1d61b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d61bc: 0x2463c99c  addiu       $v1, $v1, -0x3664
    ctx->pc = 0x1d61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953372));
    // 0x1d61c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d61c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d61c4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d61c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d61cc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D61CCu;
    {
        const bool branch_taken_0x1d61cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d61cc) {
            ctx->pc = 0x1D6248u;
            goto label_1d6248;
        }
    }
    ctx->pc = 0x1D61D4u;
    // 0x1d61d4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d61d8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d61d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d61dc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D61DCu;
    {
        const bool branch_taken_0x1d61dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d61dc) {
            ctx->pc = 0x1D6248u;
            goto label_1d6248;
        }
    }
    ctx->pc = 0x1D61E4u;
    // 0x1d61e4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1d61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d61e8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1d61ec: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x1d61ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d61f0: 0x2463b590  addiu       $v1, $v1, -0x4A70
    ctx->pc = 0x1d61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948240));
    // 0x1d61f4: 0x84840  sll         $t1, $t0, 1
    ctx->pc = 0x1d61f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d61f8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d61fc: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x1d61fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d6200: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1d6200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1d6204: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1d6208: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1d6208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1d620c: 0x2442b591  addiu       $v0, $v0, -0x4A6F
    ctx->pc = 0x1d620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948241));
    // 0x1d6210: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1d6210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1d6214: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d6218: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x1d6218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d621c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1d621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1d6220: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d6224: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x1d6224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d6228: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1d6228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1d622c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d622cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6230: 0x2442b592  addiu       $v0, $v0, -0x4A6E
    ctx->pc = 0x1d6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948242));
    // 0x1d6234: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1d6234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d6238: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1d6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1d623c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1d6240: 0xc05c3cc  jal         func_170F30
    ctx->pc = 0x1D6240u;
    SET_GPR_U32(ctx, 31, 0x1D6248u);
    ctx->pc = 0x1D6244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6240u;
    // 0x1d6244: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170F30u, 0x1D6240u, 0x1D6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6248u;
label_1d6248:
    // 0x1d6248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d624cu;
}
