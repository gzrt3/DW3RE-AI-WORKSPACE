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

// Function: FUN_001a1ff8
// Address: 0x1a1ff8 - 0x1a20f8
void FUN_001a1ff8_0x1a1ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1ff8_0x1a1ff8");
#endif

    switch (ctx->pc) {
        case 0x1a2030u: goto label_1a2030;
        case 0x1a203cu: goto label_1a203c;
        case 0x1a2048u: goto label_1a2048;
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2060u: goto label_1a2060;
        case 0x1a206cu: goto label_1a206c;
        case 0x1a2078u: goto label_1a2078;
        case 0x1a2084u: goto label_1a2084;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20d0u: goto label_1a20d0;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20f4u: goto label_1a20f4;
        default: break;
    }

    ctx->pc = 0x1a1ff8u;

    // 0x1a1ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a1ffc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a1ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1a2000: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a2004: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a2004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2008: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a200c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a2010: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a2014: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a2018: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1a2018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1a201c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a2020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2024: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a2024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a2028: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2028u;
    SET_GPR_U32(ctx, 31, 0x1A2030u);
    ctx->pc = 0x1A202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2028u;
    // 0x1a202c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2028u, 0x1A2030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2030u;
label_1a2030:
    // 0x1a2030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2034: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2034u;
    SET_GPR_U32(ctx, 31, 0x1A203Cu);
    ctx->pc = 0x1A2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2034u;
    // 0x1a2038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2034u, 0x1A203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A203Cu;
label_1a203c:
    // 0x1a203c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2040: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2040u;
    SET_GPR_U32(ctx, 31, 0x1A2048u);
    ctx->pc = 0x1A2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2040u;
    // 0x1a2044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2040u, 0x1A2048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2048u;
label_1a2048:
    // 0x1a2048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a204c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A204Cu;
    SET_GPR_U32(ctx, 31, 0x1A2054u);
    ctx->pc = 0x1A2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A204Cu;
    // 0x1a2050: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A204Cu, 0x1A2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2054u;
label_1a2054:
    // 0x1a2054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2058: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2058u;
    SET_GPR_U32(ctx, 31, 0x1A2060u);
    ctx->pc = 0x1A205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2058u;
    // 0x1a205c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2058u, 0x1A2060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2060u;
label_1a2060:
    // 0x1a2060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2064: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2064u;
    SET_GPR_U32(ctx, 31, 0x1A206Cu);
    ctx->pc = 0x1A2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2064u;
    // 0x1a2068: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2064u, 0x1A206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A206Cu;
label_1a206c:
    // 0x1a206c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a206cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2070: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2070u;
    SET_GPR_U32(ctx, 31, 0x1A2078u);
    ctx->pc = 0x1A2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2070u;
    // 0x1a2074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2070u, 0x1A2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2078u;
label_1a2078:
    // 0x1a2078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a207c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A207Cu;
    SET_GPR_U32(ctx, 31, 0x1A2084u);
    ctx->pc = 0x1A2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A207Cu;
    // 0x1a2080: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A207Cu, 0x1A2084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2084u;
label_1a2084:
    // 0x1a2084: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a2084u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1a2088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a208c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A208Cu;
    SET_GPR_U32(ctx, 31, 0x1A2094u);
    ctx->pc = 0x1A2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A208Cu;
    // 0x1a2090: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A208Cu, 0x1A2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2094u;
label_1a2094:
    // 0x1a2094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2098: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2098u;
    SET_GPR_U32(ctx, 31, 0x1A20A0u);
    ctx->pc = 0x1A209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2098u;
    // 0x1a209c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2098u, 0x1A20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20A0u;
label_1a20a0:
    // 0x1a20a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a20a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20a4: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1a20a8: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1a20ac: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1a20b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1a20b4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a20b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a20b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a20bc: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1a20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
    // 0x1a20c0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A20C0u;
    {
        const bool branch_taken_0x1a20c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C0u;
        // 0x1a20c4: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20c0) {
            ctx->pc = 0x1A20E8u;
            goto label_1a20e8;
        }
    }
    ctx->pc = 0x1A20C8u;
    // 0x1a20c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20cc: 0x0  nop
    ctx->pc = 0x1a20ccu;
    // NOP
label_1a20d0:
    // 0x1a20d0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A20D0u;
    SET_GPR_U32(ctx, 31, 0x1A20D8u);
    ctx->pc = 0x1A20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20D0u;
    // 0x1a20d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A20D0u, 0x1A20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20D8u;
label_1a20d8:
    // 0x1a20d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1a20dc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1a20dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1a20e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A20E0u;
    {
        const bool branch_taken_0x1a20e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20E0u;
        // 0x1a20e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20e0) {
            ctx->pc = 0x1A20D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a20d0;
        }
    }
    ctx->pc = 0x1A20E8u;
label_1a20e8:
    // 0x1a20e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20ec: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A20ECu;
    SET_GPR_U32(ctx, 31, 0x1A20F4u);
    ctx->pc = 0x1A20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20ECu;
    // 0x1a20f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A20ECu, 0x1A20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20F4u;
label_1a20f4:
    // 0x1a20f4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    ctx->pc = 0x1a20f8u;
}
