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

// Function: FUN_0010eae0
// Address: 0x10eae0 - 0x10eb2c
void FUN_0010eae0_0x10eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010eae0_0x10eae0");
#endif

    ctx->pc = 0x10eae0u;

    // 0x10eae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10eae4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x10eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x10eae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10eaec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10eaf0: 0x8c274a04  lw          $a3, 0x4A04($at)
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x334A04u));
    // 0x10eaf4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x10eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x10eaf8: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
    // 0x10eafc: 0x24a5f4a0  addiu       $a1, $a1, -0xB60
    ctx->pc = 0x10eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964384));
    // 0x10eb00: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x10eb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x10eb04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x10eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x10eb08: 0x71a00  sll         $v1, $a3, 8
    ctx->pc = 0x10eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x10eb0c: 0x8c2249fc  lw          $v0, 0x49FC($at)
    ctx->pc = 0x10eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
    // 0x10eb10: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x10eb10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10eb14: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x10eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x10eb18: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x10eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x10eb1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x10eb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10eb20: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x10eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x10eb24: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x10EB24u;
    SET_GPR_U32(ctx, 31, 0x10EB2Cu);
    ctx->pc = 0x10EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB24u;
    // 0x10eb28: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x10EB24u, 0x10EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB2Cu;
}
