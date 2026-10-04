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

// Function: entry_001cb530
// Address: 0x1cb530 - 0x1cb58c
void entry_001cb530_0x1cb530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb530_0x1cb530");
#endif

    ctx->pc = 0x1cb530u;

    // 0x1cb530: 0x908a0234  lbu         $t2, 0x234($a0)
    ctx->pc = 0x1cb530u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1cb534: 0x90830239  lbu         $v1, 0x239($a0)
    ctx->pc = 0x1cb534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 569)));
    // 0x1cb538: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x1cb538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x1cb53c: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x1cb53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x1cb540: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1cb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1cb544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb548: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb54c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb550: 0xa1200  sll         $v0, $t2, 8
    ctx->pc = 0x1cb550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1cb554: 0x4a2023  subu        $a0, $v0, $t2
    ctx->pc = 0x1cb554u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1cb558: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1cb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cb55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1cb560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb564: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cb564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cb568: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1cb568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cb56c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1cb56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1cb570: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1cb570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1cb574: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cb574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cb578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cb57c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cb580: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cb580u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1cb584: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CB584u;
    SET_GPR_U32(ctx, 31, 0x1CB58Cu);
    ctx->pc = 0x1CB588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB584u;
    // 0x1cb588: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CB584u, 0x1CB58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB58Cu;
}
