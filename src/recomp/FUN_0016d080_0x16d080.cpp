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

// Function: FUN_0016d080
// Address: 0x16d080 - 0x16d184
void FUN_0016d080_0x16d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016d080_0x16d080");
#endif

    switch (ctx->pc) {
        case 0x16d0b0u: goto label_16d0b0;
        case 0x16d0c4u: goto label_16d0c4;
        case 0x16d12cu: goto label_16d12c;
        case 0x16d140u: goto label_16d140;
        default: break;
    }

    ctx->pc = 0x16d080u;

    // 0x16d080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16d084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16d084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16d088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16d088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16d08c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16d090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d094: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d098: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x16D098u;
    {
        const bool branch_taken_0x16d098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D098u;
        // 0x16d09c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d098) {
            ctx->pc = 0x16D180u;
            goto label_16d180;
        }
    }
    ctx->pc = 0x16D0A0u;
    // 0x16d0a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d0a4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d0a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16d0a8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D0A8u;
    {
        const bool branch_taken_0x16d0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D0A8u;
        // 0x16d0ac: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d0a8) {
            ctx->pc = 0x16D0D8u;
            goto label_16d0d8;
        }
    }
    ctx->pc = 0x16D0B0u;
label_16d0b0:
    // 0x16d0b0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d0b4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16d0b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d0bc: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16D0BCu;
    SET_GPR_U32(ctx, 31, 0x16D0C4u);
    ctx->pc = 0x16D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D0BCu;
    // 0x16d0c0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16D0BCu, 0x16D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D0C4u;
label_16d0c4:
    // 0x16d0c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d0c8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16D0C8u;
    {
        const bool branch_taken_0x16d0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d0c8) {
            ctx->pc = 0x16D0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d0b0;
        }
    }
    ctx->pc = 0x16D0D0u;
    // 0x16d0d0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    // 0x16d0d4: 0x112b80  sll         $a1, $s1, 14
    ctx->pc = 0x16d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_16d0d8:
    // 0x16d0d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x16d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x16d0dc: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16d0dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x16d0e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16d0e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x16d0e4: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x16d0e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x16d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x16d0ec: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16d0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16d0f0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x16d0f4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x16d0f8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d0fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16d100: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16d104: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16d108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d10c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16d110: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16d118: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
    // 0x16d11c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d120: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x16d124: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16D124u;
    {
        const bool branch_taken_0x16d124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d124) {
            ctx->pc = 0x16D150u;
            goto label_16d150;
        }
    }
    ctx->pc = 0x16D12Cu;
label_16d12c:
    // 0x16d12c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d130: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x16d134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16d138: 0xc08d61c  jal         func_235870
    ctx->pc = 0x16D138u;
    SET_GPR_U32(ctx, 31, 0x16D140u);
    ctx->pc = 0x16D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D138u;
    // 0x16d13c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x16D138u, 0x16D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D140u;
label_16d140:
    // 0x16d140: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16d144: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16D144u;
    {
        const bool branch_taken_0x16d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16d144) {
            ctx->pc = 0x16D12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d12c;
        }
    }
    ctx->pc = 0x16D14Cu;
    // 0x16d14c: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16d150:
    // 0x16d150: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16d150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d154: 0x3c03400f  lui         $v1, 0x400F
    ctx->pc = 0x16d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16399 << 16));
    // 0x16d158: 0x34653f80  ori         $a1, $v1, 0x3F80
    ctx->pc = 0x16d158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16256);
    // 0x16d15c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x16d160: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x16d160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x16d164: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x16d168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16d168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16d16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16d170: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16d170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16d174: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x16d178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16d17c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16d180:
    // 0x16d180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16d180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x16d184u;
}
