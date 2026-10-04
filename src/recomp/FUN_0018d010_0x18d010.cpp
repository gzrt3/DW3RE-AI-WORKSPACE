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

// Function: FUN_0018d010
// Address: 0x18d010 - 0x18d050
void FUN_0018d010_0x18d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018d010_0x18d010");
#endif

    ctx->pc = 0x18d010u;

    // 0x18d010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18d014: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18d014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18d018: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18d018u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d01c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18d01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18d020: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18d024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d02c: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x18d030: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18d034: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x18d034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d038: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d03c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d040: 0x962200e4  lhu         $v0, 0xE4($s1)
    ctx->pc = 0x18d040u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x18d044: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x18d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x18d048: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18D048u;
    SET_GPR_U32(ctx, 31, 0x18D050u);
    ctx->pc = 0x18D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D048u;
    // 0x18d04c: 0xa62200e4  sh          $v0, 0xE4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 228), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18D048u, 0x18D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D050u;
}
