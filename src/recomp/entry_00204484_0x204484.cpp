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

// Function: entry_00204484
// Address: 0x204484 - 0x20455c
void entry_00204484_0x204484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204484_0x204484");
#endif

    switch (ctx->pc) {
        case 0x2044f0u: goto label_2044f0;
        case 0x204500u: goto label_204500;
        case 0x204518u: goto label_204518;
        case 0x204530u: goto label_204530;
        case 0x204548u: goto label_204548;
        case 0x204558u: goto label_204558;
        default: break;
    }

    ctx->pc = 0x204484u;

    // 0x204484: 0x1443823  subu        $a3, $t2, $a0
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x204488: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20448c: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x20448cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x204490: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x204494: 0x24c6f500  addiu       $a2, $a2, -0xB00
    ctx->pc = 0x204494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964480));
    // 0x204498: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x204498u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20449c: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x20449cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2044a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2044a4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x2044a8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2044ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2044b0: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2044b4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2044b8: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x2044b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2044bc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2044BCu;
    {
        const bool branch_taken_0x2044bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044BCu;
        // 0x2044c0: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044bc) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x2044C4u;
    // 0x2044c4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2044c8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2044cc: 0x24c6dff0  addiu       $a2, $a2, -0x2010
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959088));
    // 0x2044d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2044d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2044d8: 0xa00008  jr          $a1
    ctx->pc = 0x2044D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2044E0u: goto label_2044e0;
            case 0x2044F8u: goto label_2044f8;
            case 0x204508u: goto label_204508;
            case 0x204520u: goto label_204520;
            case 0x204538u: goto label_204538;
            case 0x204550u: goto label_204550;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2044E0u;
label_2044e0:
    // 0x2044e0: 0x24e60018  addiu       $a2, $a3, 0x18
    ctx->pc = 0x2044e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2044e4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2044e8: 0xc06c4d2  jal         func_1B1348
    ctx->pc = 0x2044E8u;
    SET_GPR_U32(ctx, 31, 0x2044F0u);
    ctx->pc = 0x2044ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044E8u;
    // 0x2044ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1348u, 0x2044E8u, 0x2044F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044F0u;
label_2044f0:
    // 0x2044f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2044F0u;
    {
        const bool branch_taken_0x2044f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2044F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F0u;
        // 0x2044f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2044f0) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x2044F8u;
label_2044f8:
    // 0x2044f8: 0xc06c52a  jal         func_1B14A8
    ctx->pc = 0x2044F8u;
    SET_GPR_U32(ctx, 31, 0x204500u);
    ctx->pc = 0x2044FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2044F8u;
    // 0x2044fc: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14A8u, 0x2044F8u, 0x204500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204500u;
label_204500:
    // 0x204500: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x204500u;
    {
        const bool branch_taken_0x204500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204500u;
        // 0x204504: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204500) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204508u;
label_204508:
    // 0x204508: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x204508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20450c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x20450cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x204510: 0xc06c558  jal         func_1B1560
    ctx->pc = 0x204510u;
    SET_GPR_U32(ctx, 31, 0x204518u);
    ctx->pc = 0x204514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204510u;
    // 0x204514: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1560u, 0x204510u, 0x204518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204518u;
label_204518:
    // 0x204518: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x204518u;
    {
        const bool branch_taken_0x204518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204518u;
        // 0x20451c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204518) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204520u;
label_204520:
    // 0x204520: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x204524: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x204524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x204528: 0xc06c5b2  jal         func_1B16C8
    ctx->pc = 0x204528u;
    SET_GPR_U32(ctx, 31, 0x204530u);
    ctx->pc = 0x20452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204528u;
    // 0x20452c: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B16C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B16C8u, 0x204528u, 0x204530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204530u;
label_204530:
    // 0x204530: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x204530u;
    {
        const bool branch_taken_0x204530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204530u;
        // 0x204534: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204530) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204538u;
label_204538:
    // 0x204538: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x20453c: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x204540: 0xc06c5f8  jal         func_1B17E0
    ctx->pc = 0x204540u;
    SET_GPR_U32(ctx, 31, 0x204548u);
    ctx->pc = 0x204544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204540u;
    // 0x204544: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B17E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B17E0u, 0x204540u, 0x204548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204548u;
label_204548:
    // 0x204548: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x204548u;
    {
        const bool branch_taken_0x204548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204548u;
        // 0x20454c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204548) {
            ctx->pc = 0x20455Cu;
            return;
        }
    }
    ctx->pc = 0x204550u;
label_204550:
    // 0x204550: 0xc06c87a  jal         func_1B21E8
    ctx->pc = 0x204550u;
    SET_GPR_U32(ctx, 31, 0x204558u);
    ctx->pc = 0x204554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204550u;
    // 0x204554: 0x8ce40008  lw          $a0, 0x8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B21E8u, 0x204550u, 0x204558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204558u;
label_204558:
    // 0x204558: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x204558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20455cu;
}
