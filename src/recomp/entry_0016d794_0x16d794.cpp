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

// Function: entry_0016d794
// Address: 0x16d794 - 0x16d818
void entry_0016d794_0x16d794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d794_0x16d794");
#endif

    switch (ctx->pc) {
        case 0x16d7ecu: goto label_16d7ec;
        default: break;
    }

    ctx->pc = 0x16d794u;

    // 0x16d794: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d798: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d79c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16d7a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x16D7A0u;
    {
        const bool branch_taken_0x16d7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d7a0) {
            ctx->pc = 0x16D818u;
            return;
        }
    }
    ctx->pc = 0x16D7A8u;
    // 0x16d7a8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7ac: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x16d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x16d7b0: 0x8c231eb4  lw          $v1, 0x1EB4($at)
    ctx->pc = 0x16d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB4u));
    // 0x16d7b4: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x16d7b8: 0x8f858168  lw          $a1, -0x7E98($gp)
    ctx->pc = 0x16d7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934888)));
    // 0x16d7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c0: 0x24093fff  addiu       $t1, $zero, 0x3FFF
    ctx->pc = 0x16d7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x16d7c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16d7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d7d0: 0x8c271eb8  lw          $a3, 0x1EB8($at)
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7864)));
    // 0x16d7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d7d8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d7dc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7e0: 0x8c281ebc  lw          $t0, 0x1EBC($at)
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x281EBCu));
    // 0x16d7e4: 0xc08d8aa  jal         func_2362A8
    ctx->pc = 0x16D7E4u;
    SET_GPR_U32(ctx, 31, 0x16D7ECu);
    ctx->pc = 0x16D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D7E4u;
    // 0x16d7e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2362A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2362A8u, 0x16D7E4u, 0x16D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D7ECu;
label_16d7ec:
    // 0x16d7ec: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D7ECu;
    {
        const bool branch_taken_0x16d7ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x16d7ec) {
            ctx->pc = 0x16D818u;
            return;
        }
    }
    ctx->pc = 0x16D7F4u;
    // 0x16d7f4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d7f8: 0x2405fff2  addiu       $a1, $zero, -0xE
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x16d7fc: 0x8c261eb0  lw          $a2, 0x1EB0($at)
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16d800: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x16d800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x16d804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d808: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x16d808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16d80c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16d810: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D810u;
        // 0x16d814: 0xac251eb0  sw          $a1, 0x1EB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16D8D0u;
            return;
        }
    }
    ctx->pc = 0x16D818u;
}
