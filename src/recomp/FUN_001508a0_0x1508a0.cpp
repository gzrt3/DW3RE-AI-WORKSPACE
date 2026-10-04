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

// Function: FUN_001508a0
// Address: 0x1508a0 - 0x150930
void FUN_001508a0_0x1508a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001508a0_0x1508a0");
#endif

    switch (ctx->pc) {
        case 0x1508e8u: goto label_1508e8;
        case 0x1508f8u: goto label_1508f8;
        case 0x150908u: goto label_150908;
        default: break;
    }

    ctx->pc = 0x1508a0u;

    // 0x1508a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1508a4: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1508a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1508a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1508ac: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1508acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x1508b0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1508b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1508b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1508b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1508b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1508bc: 0x246303a0  addiu       $v1, $v1, 0x3A0
    ctx->pc = 0x1508bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x1508c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1508c4: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1508c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1508c8: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x1508c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1508cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1508CCu;
    {
        const bool branch_taken_0x1508cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508CCu;
        // 0x1508d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508cc) {
            ctx->pc = 0x150924u;
            goto label_150924;
        }
    }
    ctx->pc = 0x1508D4u;
    // 0x1508d4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1508d8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1508D8u;
    {
        const bool branch_taken_0x1508d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1508DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1508D8u;
        // 0x1508dc: 0x24650150  addiu       $a1, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508d8) {
            ctx->pc = 0x150924u;
            goto label_150924;
        }
    }
    ctx->pc = 0x1508E0u;
    // 0x1508e0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1508E0u;
    SET_GPR_U32(ctx, 31, 0x1508E8u);
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1508E0u, 0x1508E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508E8u;
label_1508e8:
    // 0x1508e8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1508ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1508f0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1508F0u;
    SET_GPR_U32(ctx, 31, 0x1508F8u);
    ctx->pc = 0x1508F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1508F0u;
    // 0x1508f4: 0x24450050  addiu       $a1, $v0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1508F0u, 0x1508F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508F8u;
label_1508f8:
    // 0x1508f8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1508fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x150900: 0xc066e26  jal         func_19B898
    ctx->pc = 0x150900u;
    SET_GPR_U32(ctx, 31, 0x150908u);
    ctx->pc = 0x150904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150900u;
    // 0x150904: 0x24450040  addiu       $a1, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x150900u, 0x150908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x150908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x15090c: 0x8463020a  lh          $v1, 0x20A($v1)
    ctx->pc = 0x15090cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 522)));
    // 0x150910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150914: 0x0  nop
    ctx->pc = 0x150914u;
    // NOP
    // 0x150918: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x150918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15091c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15091Cu;
    {
        const bool branch_taken_0x15091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15091Cu;
        // 0x150920: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15091c) {
            ctx->pc = 0x15092Cu;
            goto label_15092c;
        }
    }
    ctx->pc = 0x150924u;
label_150924:
    // 0x150924: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x150928: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x150928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_15092c:
    // 0x15092c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x150930u;
}
