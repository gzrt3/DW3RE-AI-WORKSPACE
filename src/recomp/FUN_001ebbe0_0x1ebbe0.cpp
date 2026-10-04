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

// Function: FUN_001ebbe0
// Address: 0x1ebbe0 - 0x1ebc50
void FUN_001ebbe0_0x1ebbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ebbe0_0x1ebbe0");
#endif

    ctx->pc = 0x1ebbe0u;

    // 0x1ebbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebbe4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1ebbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ebbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ebbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ebbec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ebbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ebbf0: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1ebbf0u;
    SET_GPR_S32(ctx, 10, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1ebbf4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ebbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ebbf8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ebbfc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1ebbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1ebc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ebc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ebc04: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ebc04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1ebc08: 0x2442f6c0  addiu       $v0, $v0, -0x940
    ctx->pc = 0x1ebc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964928));
    // 0x1ebc0c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ebc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ebc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebc14: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x1ebc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x1ebc18: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ebc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1ebc1c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1ebc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ebc20: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x1ebc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1ebc24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ebc24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc28: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1ebc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ebc2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ebc2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc30: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x1ebc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1ebc34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ebc34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc38: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ebc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ebc3c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ebc40: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ebc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ebc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ebc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ebc48: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EBC48u;
    SET_GPR_U32(ctx, 31, 0x1EBC50u);
    ctx->pc = 0x1EBC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBC48u;
    // 0x1ebc4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EBC48u, 0x1EBC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC50u;
}
