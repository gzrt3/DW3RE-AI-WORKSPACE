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

// Function: FUN_00170f30
// Address: 0x170f30 - 0x170f9c
void FUN_00170f30_0x170f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00170f30_0x170f30");
#endif

    ctx->pc = 0x170f30u;

    // 0x170f30: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x170f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x170f34: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F34u;
        // 0x170f38: 0x43880  sll         $a3, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F9Cu;
            return;
        }
    }
    ctx->pc = 0x170F3Cu;
    // 0x170f3c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x170f40: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x170f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x170f44: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x170f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
    // 0x170f48: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x170f4c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x170f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x170f50: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x170f54: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x170f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170f58: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x170f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x170f5c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x170F5Cu;
    {
        const bool branch_taken_0x170f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f5c) {
            ctx->pc = 0x170F9Cu;
            return;
        }
    }
    ctx->pc = 0x170F64u;
    // 0x170f64: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x170f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x170f68: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x170f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x170f6c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x170F6Cu;
    {
        const bool branch_taken_0x170f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F6Cu;
        // 0x170f70: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f6c) {
            ctx->pc = 0x170F9Cu;
            return;
        }
    }
    ctx->pc = 0x170F74u;
    // 0x170f74: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x170f78: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x170f7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x170f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x170f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x170f84: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x170f88: 0xaca40040  sw          $a0, 0x40($a1)
    ctx->pc = 0x170f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 4));
    // 0x170f8c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x170f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x170f90: 0x8f848738  lw          $a0, -0x78C8($gp)
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936376)));
    // 0x170f94: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x170f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
    // 0x170f98: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x170f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x170f9cu;
}
