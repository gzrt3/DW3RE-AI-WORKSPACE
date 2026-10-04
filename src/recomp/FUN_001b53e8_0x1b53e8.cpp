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

// Function: FUN_001b53e8
// Address: 0x1b53e8 - 0x1b5458
void FUN_001b53e8_0x1b53e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b53e8_0x1b53e8");
#endif

    switch (ctx->pc) {
        case 0x1b5428u: goto label_1b5428;
        case 0x1b5438u: goto label_1b5438;
        case 0x1b5454u: goto label_1b5454;
        default: break;
    }

    ctx->pc = 0x1b53e8u;

    // 0x1b53e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b53ec: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b53ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b53f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b53f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b53f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b53f8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b53fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1b53fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b5400: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b5400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5404: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b5404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b5408: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1b5408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1b540c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1b540cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1b5410: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x1b5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x1b5414: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b5414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b5418: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5418u;
    {
        const bool branch_taken_0x1b5418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5418u;
        // 0x1b541c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5418) {
            ctx->pc = 0x1B5430u;
            goto label_1b5430;
        }
    }
    ctx->pc = 0x1B5420u;
    // 0x1b5420: 0xc06d280  jal         func_1B4A00
    ctx->pc = 0x1B5420u;
    SET_GPR_U32(ctx, 31, 0x1B5428u);
    ctx->pc = 0x1B5424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5420u;
    // 0x1b5424: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A00u, 0x1B5420u, 0x1B5428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5428u;
label_1b5428:
    // 0x1b5428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B5428u;
    {
        const bool branch_taken_0x1b5428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5428u;
        // 0x1b542c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5428) {
            ctx->pc = 0x1B5458u;
            return;
        }
    }
    ctx->pc = 0x1B5430u;
label_1b5430:
    // 0x1b5430: 0xc06ce88  jal         func_1B3A20
    ctx->pc = 0x1B5430u;
    SET_GPR_U32(ctx, 31, 0x1B5438u);
    ctx->pc = 0x1B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A20u, 0x1B5430u, 0x1B5438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5438u;
label_1b5438:
    // 0x1b5438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b5438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b543c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5440: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1b5440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b5444: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1b5444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b5448: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x1b5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b544c: 0xc06d280  jal         func_1B4A00
    ctx->pc = 0x1B544Cu;
    SET_GPR_U32(ctx, 31, 0x1B5454u);
    ctx->pc = 0x1B5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B544Cu;
    // 0x1b5450: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4A00u, 0x1B544Cu, 0x1B5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5454u;
label_1b5454:
    // 0x1b5454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b5454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1b5458u;
}
