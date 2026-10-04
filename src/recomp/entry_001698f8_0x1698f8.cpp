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

// Function: entry_001698f8
// Address: 0x1698f8 - 0x169970
void entry_001698f8_0x1698f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001698f8_0x1698f8");
#endif

    switch (ctx->pc) {
        case 0x169900u: goto label_169900;
        default: break;
    }

    ctx->pc = 0x1698f8u;

    // 0x1698f8: 0xc088d68  jal         func_2235A0
    ctx->pc = 0x1698F8u;
    SET_GPR_U32(ctx, 31, 0x169900u);
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x1698F8u, 0x169900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169900u;
label_169900:
    // 0x169900: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x169900u;
    {
        const bool branch_taken_0x169900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169900) {
            ctx->pc = 0x169978u;
            return;
        }
    }
    ctx->pc = 0x169908u;
    // 0x169908: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16990c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x16990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x169910: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x169910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x169914: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x169918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16991c: 0x24637b50  addiu       $v1, $v1, 0x7B50
    ctx->pc = 0x16991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31568));
    // 0x169920: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x169928: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x169928u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x16992c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16992cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x169930: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169934: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x169934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x169938: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16993c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x169940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169944: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x169948: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x169948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16994c: 0x0  nop
    ctx->pc = 0x16994cu;
    // NOP
    // 0x169950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169954: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x169954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169958: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169958u;
    {
        const bool branch_taken_0x169958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169958u;
        // 0x16995c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169958) {
            ctx->pc = 0x169970u;
            return;
        }
    }
    ctx->pc = 0x169960u;
    // 0x169960: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x169964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169964u;
    {
        const bool branch_taken_0x169964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169964) {
            ctx->pc = 0x169978u;
            return;
        }
    }
    ctx->pc = 0x16996Cu;
    // 0x16996c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x169970u;
}
