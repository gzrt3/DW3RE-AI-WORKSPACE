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

// Function: entry_0018b80c
// Address: 0x18b80c - 0x18b8a0
void entry_0018b80c_0x18b80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b80c_0x18b80c");
#endif

    switch (ctx->pc) {
        case 0x18b838u: goto label_18b838;
        case 0x18b888u: goto label_18b888;
        case 0x18b898u: goto label_18b898;
        default: break;
    }

    ctx->pc = 0x18b80cu;

    // 0x18b80c: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x18B80Cu;
    {
        const bool branch_taken_0x18b80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b80c) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B814u;
    // 0x18b814: 0x92230240  lbu         $v1, 0x240($s1)
    ctx->pc = 0x18b814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 576)));
    // 0x18b818: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18b81c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x18B81Cu;
    {
        const bool branch_taken_0x18b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B81Cu;
        // 0x18b820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b81c) {
            ctx->pc = 0x18B8B0u;
            return;
        }
    }
    ctx->pc = 0x18B824u;
    // 0x18b824: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x18b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x18b828: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x18B828u;
    {
        const bool branch_taken_0x18b828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B828u;
        // 0x18b82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b828) {
            ctx->pc = 0x18B8A0u;
            return;
        }
    }
    ctx->pc = 0x18B830u;
    // 0x18b830: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x18B830u;
    SET_GPR_U32(ctx, 31, 0x18B838u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x18B830u, 0x18B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B838u;
label_18b838:
    // 0x18b838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b83c: 0x0  nop
    ctx->pc = 0x18b83cu;
    // NOP
    // 0x18b840: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18b844: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18b848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b84c: 0x0  nop
    ctx->pc = 0x18b84cu;
    // NOP
    // 0x18b850: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18b854: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18b854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18b858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b85c: 0x0  nop
    ctx->pc = 0x18b85cu;
    // NOP
    // 0x18b860: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x18b864: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18b868: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18b86c: 0x0  nop
    ctx->pc = 0x18b86cu;
    // NOP
    // 0x18b870: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x18b870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x18b874: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18B874u;
    {
        const bool branch_taken_0x18b874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B874u;
        // 0x18b878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b874) {
            ctx->pc = 0x18B890u;
            goto label_18b890;
        }
    }
    ctx->pc = 0x18B87Cu;
    // 0x18b87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18b87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b880: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B880u;
    SET_GPR_U32(ctx, 31, 0x18B888u);
    ctx->pc = 0x18B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B880u;
    // 0x18b884: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B880u, 0x18B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B888u;
label_18b888:
    // 0x18b888: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x18B888u;
    {
        const bool branch_taken_0x18b888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b888) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B890u;
label_18b890:
    // 0x18b890: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x18B890u;
    SET_GPR_U32(ctx, 31, 0x18B898u);
    ctx->pc = 0x18B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B890u;
    // 0x18b894: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x18B890u, 0x18B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B898u;
label_18b898:
    // 0x18b898: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B898u;
    {
        const bool branch_taken_0x18b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b898) {
            ctx->pc = 0x18B8B8u;
            return;
        }
    }
    ctx->pc = 0x18B8A0u;
}
