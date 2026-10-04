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

// Function: entry_00188f14
// Address: 0x188f14 - 0x189000
void entry_00188f14_0x188f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188f14_0x188f14");
#endif

    ctx->pc = 0x188f14u;

    // 0x188f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188f18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188f1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f20: 0x3e00008  jr          $ra
    ctx->pc = 0x188F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F20u;
        // 0x188f24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188F28u;
    // 0x188f28: 0x0  nop
    ctx->pc = 0x188f28u;
    // NOP
    // 0x188f2c: 0x0  nop
    ctx->pc = 0x188f2cu;
    // NOP
    // 0x188f30: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x188f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x188f34: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x188f34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x188f38: 0x30e32000  andi        $v1, $a3, 0x2000
    ctx->pc = 0x188f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8192);
    // 0x188f3c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x188F3Cu;
    {
        const bool branch_taken_0x188f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F3Cu;
        // 0x188f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f3c) {
            ctx->pc = 0x188FC0u;
            goto label_188fc0;
        }
    }
    ctx->pc = 0x188F44u;
    // 0x188f44: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x188f44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x188f48: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x188f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x188f4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188F4Cu;
    {
        const bool branch_taken_0x188f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F4Cu;
        // 0x188f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f4c) {
            ctx->pc = 0x188F5Cu;
            goto label_188f5c;
        }
    }
    ctx->pc = 0x188F54u;
    // 0x188f54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188F54u;
    {
        const bool branch_taken_0x188f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F54u;
        // 0x188f58: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f54) {
            ctx->pc = 0x188F60u;
            goto label_188f60;
        }
    }
    ctx->pc = 0x188F5Cu;
label_188f5c:
    // 0x188f5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x188f5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188f60:
    // 0x188f60: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x188F60u;
    {
        const bool branch_taken_0x188f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f60) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F68u;
    // 0x188f68: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x188f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x188f6c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x188f6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x188f70: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x188F70u;
    {
        const bool branch_taken_0x188f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188f70) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F78u;
    // 0x188f78: 0x8ca7002c  lw          $a3, 0x2C($a1)
    ctx->pc = 0x188f78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x188f7c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x188f80: 0x90e40009  lbu         $a0, 0x9($a3)
    ctx->pc = 0x188f80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
    // 0x188f84: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x188F84u;
    {
        const bool branch_taken_0x188f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188f84) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F8Cu;
    // 0x188f8c: 0x90c30008  lbu         $v1, 0x8($a2)
    ctx->pc = 0x188f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x188f90: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x188F90u;
    {
        const bool branch_taken_0x188f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x188f90) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188F98u;
    // 0x188f98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x188f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f9c: 0x90e3000d  lbu         $v1, 0xD($a3)
    ctx->pc = 0x188f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x188fa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188fa4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x188fa8: 0x0  nop
    ctx->pc = 0x188fa8u;
    // NOP
    // 0x188fac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x188facu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x188fb0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x188FB0u;
    {
        const bool branch_taken_0x188fb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fb0) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FB8u;
    // 0x188fb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x188FB8u;
    {
        const bool branch_taken_0x188fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FB8u;
        // 0x188fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fb8) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FC0u;
label_188fc0:
    // 0x188fc0: 0x90840232  lbu         $a0, 0x232($a0)
    ctx->pc = 0x188fc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x188fc4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x188fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x188fc8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x188FC8u;
    {
        const bool branch_taken_0x188fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FC8u;
        // 0x188fcc: 0x30e30800  andi        $v1, $a3, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fc8) {
            ctx->pc = 0x188FE8u;
            goto label_188fe8;
        }
    }
    ctx->pc = 0x188FD0u;
    // 0x188fd0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x188fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x188fd4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x188FD4u;
    {
        const bool branch_taken_0x188fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x188FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188FD4u;
        // 0x188fd8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188fd4) {
            ctx->pc = 0x188FE4u;
            goto label_188fe4;
        }
    }
    ctx->pc = 0x188FDCu;
    // 0x188fdc: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x188FDCu;
    {
        const bool branch_taken_0x188fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x188fdc) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FE4u;
label_188fe4:
    // 0x188fe4: 0x30e30800  andi        $v1, $a3, 0x800
    ctx->pc = 0x188fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_188fe8:
    // 0x188fe8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x188FE8u;
    {
        const bool branch_taken_0x188fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x188fe8) {
            ctx->pc = 0x188FF4u;
            goto label_188ff4;
        }
    }
    ctx->pc = 0x188FF0u;
    // 0x188ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188ff4:
    // 0x188ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x188FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188FFCu;
    // 0x188ffc: 0x0  nop
    ctx->pc = 0x188ffcu;
    // NOP
    ctx->pc = 0x189000u;
}
