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

// Function: FUN_001578d0
// Address: 0x1578d0 - 0x15797c
void FUN_001578d0_0x1578d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001578d0_0x1578d0");
#endif

    switch (ctx->pc) {
        case 0x157948u: goto label_157948;
        default: break;
    }

    ctx->pc = 0x1578d0u;

    // 0x1578d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1578d4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x1578d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1578d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1578dc: 0x8c22c9b0  lw          $v0, -0x3650($at)
    ctx->pc = 0x1578dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x29C9B0u));
    // 0x1578e0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1578E0u;
    {
        const bool branch_taken_0x1578e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1578E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E0u;
        // 0x1578e4: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e0) {
            ctx->pc = 0x1578F4u;
            goto label_1578f4;
        }
    }
    ctx->pc = 0x1578E8u;
    // 0x1578e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1578E8u;
    {
        const bool branch_taken_0x1578e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578E8u;
        // 0x1578ec: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578e8) {
            ctx->pc = 0x1578F8u;
            goto label_1578f8;
        }
    }
    ctx->pc = 0x1578F0u;
    // 0x1578f0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1578f4:
    // 0x1578f4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1578f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1578f8:
    // 0x1578f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1578F8u;
    {
        const bool branch_taken_0x1578f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F8u;
        // 0x1578fc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f8) {
            ctx->pc = 0x157910u;
            goto label_157910;
        }
    }
    ctx->pc = 0x157900u;
    // 0x157900: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157900u;
    {
        const bool branch_taken_0x157900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157900u;
        // 0x157904: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157900) {
            ctx->pc = 0x157914u;
            goto label_157914;
        }
    }
    ctx->pc = 0x157908u;
    // 0x157908: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x157908u;
    {
        const bool branch_taken_0x157908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157908u;
        // 0x15790c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157908) {
            ctx->pc = 0x157950u;
            goto label_157950;
        }
    }
    ctx->pc = 0x157910u;
label_157910:
    // 0x157910: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x157910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_157914:
    // 0x157914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x157918: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x157918u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x15791c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15791cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x157920: 0x82282d  daddu       $a1, $a0, $v0
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x157924: 0x41138  dsll        $v0, $a0, 4
    ctx->pc = 0x157924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 4);
    // 0x157928: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15792c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x15792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x157930: 0x44182d  daddu       $v1, $v0, $a0
    ctx->pc = 0x157930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x157934: 0x310f8  dsll        $v0, $v1, 3
    ctx->pc = 0x157934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 3);
    // 0x157938: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x157938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x15793c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x15793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x157940: 0xc06d554  jal         func_1B5550
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 31, 0x157948u);
    ctx->pc = 0x157944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157940u;
    // 0x157944: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5550u, 0x157940u, 0x157948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157948u;
label_157948:
    // 0x157948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x157948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15794c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x15794cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_157950:
    // 0x157950: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x157950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x157954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157958: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x15795c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x15795cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x157960: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x157960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x157964: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x157964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x157968: 0x0  nop
    ctx->pc = 0x157968u;
    // NOP
    // 0x15796c: 0x0  nop
    ctx->pc = 0x15796cu;
    // NOP
    // 0x157970: 0x1010  mfhi        $v0
    ctx->pc = 0x157970u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x157974: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x157978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x15797cu;
}
