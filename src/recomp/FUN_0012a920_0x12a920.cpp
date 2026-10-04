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

// Function: FUN_0012a920
// Address: 0x12a920 - 0x12aa00
void FUN_0012a920_0x12a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012a920_0x12a920");
#endif

    switch (ctx->pc) {
        case 0x12a954u: goto label_12a954;
        case 0x12a974u: goto label_12a974;
        case 0x12a988u: goto label_12a988;
        case 0x12a98cu: goto label_12a98c;
        case 0x12a994u: goto label_12a994;
        case 0x12a9e0u: goto label_12a9e0;
        default: break;
    }

    ctx->pc = 0x12a920u;

    // 0x12a920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12a924: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12a924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12a928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a92c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a938: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x12a938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12a93c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A93Cu;
    {
        const bool branch_taken_0x12a93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A93Cu;
        // 0x12a940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a93c) {
            ctx->pc = 0x12A94Cu;
            goto label_12a94c;
        }
    }
    ctx->pc = 0x12A944u;
    // 0x12a944: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A944u;
    {
        const bool branch_taken_0x12a944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a944) {
            ctx->pc = 0x12A95Cu;
            goto label_12a95c;
        }
    }
    ctx->pc = 0x12A94Cu;
label_12a94c:
    // 0x12a94c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12A94Cu;
    SET_GPR_U32(ctx, 31, 0x12A954u);
    ctx->pc = 0x12A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A94Cu;
    // 0x12a950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12A94Cu, 0x12A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A954u;
label_12a954:
    // 0x12a954: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x12A954u;
    {
        const bool branch_taken_0x12a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A954u;
        // 0x12a958: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a954) {
            ctx->pc = 0x12AA00u;
            return;
        }
    }
    ctx->pc = 0x12A95Cu;
label_12a95c:
    // 0x12a95c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x12a95cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12a960: 0x28420190  slti        $v0, $v0, 0x190
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
    // 0x12a964: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A964u;
    {
        const bool branch_taken_0x12a964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a964) {
            ctx->pc = 0x12A97Cu;
            goto label_12a97c;
        }
    }
    ctx->pc = 0x12A96Cu;
    // 0x12a96c: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12A96Cu;
    SET_GPR_U32(ctx, 31, 0x12A974u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12A96Cu, 0x12A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A974u;
label_12a974:
    // 0x12a974: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12A974u;
    {
        const bool branch_taken_0x12a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a974) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A97Cu;
label_12a97c:
    // 0x12a97c: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x12a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a980: 0xc04abe4  jal         func_12AF90
    ctx->pc = 0x12A980u;
    SET_GPR_U32(ctx, 31, 0x12A988u);
    ctx->pc = 0x12A984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A980u;
    // 0x12a984: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AF90u, 0x12A980u, 0x12A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A988u;
label_12a988:
    // 0x12a988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12a988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a98c:
    // 0x12a98c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12A98Cu;
    SET_GPR_U32(ctx, 31, 0x12A994u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12A98Cu, 0x12A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A994u;
label_12a994:
    // 0x12a994: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12a994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a998: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x12a99c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a99cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9a0: 0x0  nop
    ctx->pc = 0x12a9a0u;
    // NOP
    // 0x12a9a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12a9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12a9a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x12a9ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12a9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12a9b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a9b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9b4: 0x0  nop
    ctx->pc = 0x12a9b4u;
    // NOP
    // 0x12a9b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12a9b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x12a9bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12a9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12a9c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12a9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12a9c4: 0x0  nop
    ctx->pc = 0x12a9c4u;
    // NOP
    // 0x12a9c8: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x12a9c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12a9cc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9CCu;
    {
        const bool branch_taken_0x12a9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9cc) {
            ctx->pc = 0x12A9E0u;
            goto label_12a9e0;
        }
    }
    ctx->pc = 0x12A9D4u;
    // 0x12a9d4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x12a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a9d8: 0xc04aa84  jal         func_12AA10
    ctx->pc = 0x12A9D8u;
    SET_GPR_U32(ctx, 31, 0x12A9E0u);
    ctx->pc = 0x12A9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9D8u;
    // 0x12a9dc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AA10u, 0x12A9D8u, 0x12A9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9E0u;
label_12a9e0:
    // 0x12a9e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12a9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x12a9e4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x12a9e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a9e8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12A9E8u;
    {
        const bool branch_taken_0x12a9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9e8) {
            ctx->pc = 0x12A98Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a98c;
        }
    }
    ctx->pc = 0x12A9F0u;
    // 0x12a9f0: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x12a9f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12a9f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12a9f8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x12a9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_12a9fc:
    // 0x12a9fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x12aa00u;
}
