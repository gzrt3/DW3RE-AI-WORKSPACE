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

// Function: FUN_0022b3b0
// Address: 0x22b3b0 - 0x22b43c
void FUN_0022b3b0_0x22b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022b3b0_0x22b3b0");
#endif

    switch (ctx->pc) {
        case 0x22b3e4u: goto label_22b3e4;
        case 0x22b3ecu: goto label_22b3ec;
        case 0x22b410u: goto label_22b410;
        case 0x22b42cu: goto label_22b42c;
        default: break;
    }

    ctx->pc = 0x22b3b0u;

    // 0x22b3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b3b4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22b3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22b3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b3bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b3c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b3c4: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x22b3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x22b3c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B3C8u;
    {
        const bool branch_taken_0x22b3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3C8u;
        // 0x22b3cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3c8) {
            ctx->pc = 0x22B3D8u;
            goto label_22b3d8;
        }
    }
    ctx->pc = 0x22B3D0u;
    // 0x22b3d0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3D0u;
    {
        const bool branch_taken_0x22b3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b3d0) {
            ctx->pc = 0x22B3F4u;
            goto label_22b3f4;
        }
    }
    ctx->pc = 0x22B3D8u;
label_22b3d8:
    // 0x22b3d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22b3d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22b3dc: 0xc05ecd8  jal         func_17B360
    ctx->pc = 0x22B3DCu;
    SET_GPR_U32(ctx, 31, 0x22B3E4u);
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B3DCu, 0x22B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3E4u;
label_22b3e4:
    // 0x22b3e4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22B3E4u;
    SET_GPR_U32(ctx, 31, 0x22B3ECu);
    ctx->pc = 0x22B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B3E4u;
    // 0x22b3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B3E4u, 0x22B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B3ECu;
label_22b3ec:
    // 0x22b3ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x22B3ECu;
    {
        const bool branch_taken_0x22b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B3ECu;
        // 0x22b3f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3ec) {
            ctx->pc = 0x22B43Cu;
            return;
        }
    }
    ctx->pc = 0x22B3F4u;
label_22b3f4:
    // 0x22b3f4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b3f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x22b3f8: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x22b3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22b3fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x22b3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x22b400: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22B400u;
    {
        const bool branch_taken_0x22b400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b400) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B408u;
    // 0x22b408: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22B408u;
    SET_GPR_U32(ctx, 31, 0x22B410u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22B408u, 0x22B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B410u;
label_22b410:
    // 0x22b410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22B410u;
    {
        const bool branch_taken_0x22b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b410) {
            ctx->pc = 0x22B438u;
            goto label_22b438;
        }
    }
    ctx->pc = 0x22B418u;
label_22b418:
    // 0x22b418: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x22b418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b41c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x22b41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b420: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x22b420u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22b424: 0xc05ecd8  jal         func_17B360
    ctx->pc = 0x22B424u;
    SET_GPR_U32(ctx, 31, 0x22B42Cu);
    ctx->pc = 0x22B428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B424u;
    // 0x22b428: 0xe60c0050  swc1        $f12, 0x50($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B360u, 0x22B424u, 0x22B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B42Cu;
label_22b42c:
    // 0x22b42c: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x22b42cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x22b430: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b434: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x22b434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_22b438:
    // 0x22b438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x22b43cu;
}
