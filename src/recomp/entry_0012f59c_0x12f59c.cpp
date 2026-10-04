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

// Function: entry_0012f59c
// Address: 0x12f59c - 0x12f630
void entry_0012f59c_0x12f59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f59c_0x12f59c");
#endif

    switch (ctx->pc) {
        case 0x12f5bcu: goto label_12f5bc;
        default: break;
    }

    ctx->pc = 0x12f59cu;

    // 0x12f59c: 0x0  nop
    ctx->pc = 0x12f59cu;
    // NOP
    // 0x12f5a0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x12f5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12f5a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12f5a8: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x12f5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x12f5ac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x12F5ACu;
    {
        const bool branch_taken_0x12f5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5ACu;
        // 0x12f5b0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5ac) {
            ctx->pc = 0x12F570u;
            return;
        }
    }
    ctx->pc = 0x12F5B4u;
    // 0x12f5b4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x12F5B4u;
    SET_GPR_U32(ctx, 31, 0x12F5BCu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x12F5B4u, 0x12F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5BCu;
label_12f5bc:
    // 0x12f5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f5c0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x12f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x12f5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5c8: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x12f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x12f5cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12f5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12f5d0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x12f5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x12f5d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x12f5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12f5d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x12f5d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f5dc: 0x0  nop
    ctx->pc = 0x12f5dcu;
    // NOP
    // 0x12f5e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x12f5e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x12f5e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f5e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f5e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x12f5e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x12f5ec: 0x0  nop
    ctx->pc = 0x12f5ecu;
    // NOP
    // 0x12f5f0: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x12f5f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12f5f8: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x12f5f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12f5fc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F5FCu;
    {
        const bool branch_taken_0x12f5fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f5fc) {
            ctx->pc = 0x12F60Cu;
            goto label_12f60c;
        }
    }
    ctx->pc = 0x12F604u;
    // 0x12f604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F604u;
    {
        const bool branch_taken_0x12f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F604u;
        // 0x12f608: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f604) {
            ctx->pc = 0x12F618u;
            goto label_12f618;
        }
    }
    ctx->pc = 0x12F60Cu;
label_12f60c:
    // 0x12f60c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F60Cu;
    {
        const bool branch_taken_0x12f60c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12f60c) {
            ctx->pc = 0x12F618u;
            goto label_12f618;
        }
    }
    ctx->pc = 0x12F614u;
    // 0x12f614: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12f614u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f618:
    // 0x12f618: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x12f618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f61c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f624: 0x3e00008  jr          $ra
    ctx->pc = 0x12F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F624u;
        // 0x12f628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F62Cu;
    // 0x12f62c: 0x0  nop
    ctx->pc = 0x12f62cu;
    // NOP
    ctx->pc = 0x12f630u;
}
