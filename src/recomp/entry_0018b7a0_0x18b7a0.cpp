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

// Function: entry_0018b7a0
// Address: 0x18b7a0 - 0x18b80c
void entry_0018b7a0_0x18b7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b7a0_0x18b7a0");
#endif

    switch (ctx->pc) {
        case 0x18b7c0u: goto label_18b7c0;
        case 0x18b808u: goto label_18b808;
        default: break;
    }

    ctx->pc = 0x18b7a0u;

    // 0x18b7a0: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B80Cu;
            return;
        }
    }
    ctx->pc = 0x18B7A8u;
    // 0x18b7a8: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b7a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x18b7ac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x18b7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x18b7b0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18B7B0u;
    {
        const bool branch_taken_0x18b7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b7b0) {
            ctx->pc = 0x18B80Cu;
            return;
        }
    }
    ctx->pc = 0x18B7B8u;
    // 0x18b7b8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B7B8u;
    SET_GPR_U32(ctx, 31, 0x18B7C0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B7B8u, 0x18B7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B7C0u;
label_18b7c0:
    // 0x18b7c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b7c4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x18b7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x18b7c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7cc: 0x0  nop
    ctx->pc = 0x18b7ccu;
    // NOP
    // 0x18b7d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b7d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x18b7d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b7e0: 0x0  nop
    ctx->pc = 0x18b7e0u;
    // NOP
    // 0x18b7e4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b7e4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b7e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b7e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b7ec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18b7f0: 0x0  nop
    ctx->pc = 0x18b7f0u;
    // NOP
    // 0x18b7f4: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x18b7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x18b7f8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B7F8u;
    {
        const bool branch_taken_0x18b7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B7F8u;
        // 0x18b7fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7f8) {
            ctx->pc = 0x18B80Cu;
            return;
        }
    }
    ctx->pc = 0x18B800u;
    // 0x18b800: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B800u;
    SET_GPR_U32(ctx, 31, 0x18B808u);
    ctx->pc = 0x18B804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B800u;
    // 0x18b804: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B800u, 0x18B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B808u;
label_18b808:
    // 0x18b808: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x18b80cu;
}
