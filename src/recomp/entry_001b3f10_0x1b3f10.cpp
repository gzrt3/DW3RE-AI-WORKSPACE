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

// Function: entry_001b3f10
// Address: 0x1b3f10 - 0x1b3fd0
void entry_001b3f10_0x1b3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3f10_0x1b3f10");
#endif

    ctx->pc = 0x1b3f10u;

    // 0x1b3f10: 0x460c6102  mul.s       $f4, $f12, $f12
    ctx->pc = 0x1b3f10u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1b3f14: 0x3c01ad47  lui         $at, 0xAD47
    ctx->pc = 0x1b3f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)44359 << 16));
    // 0x1b3f18: 0x3421d74e  ori         $at, $at, 0xD74E
    ctx->pc = 0x1b3f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55118);
    // 0x1b3f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3f20: 0x3c01310f  lui         $at, 0x310F
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12559 << 16));
    // 0x1b3f24: 0x342174f6  ori         $at, $at, 0x74F6
    ctx->pc = 0x1b3f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29942);
    // 0x1b3f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f2c: 0x0  nop
    ctx->pc = 0x1b3f2cu;
    // NOP
    // 0x1b3f30: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f38: 0x3c01b493  lui         $at, 0xB493
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46227 << 16));
    // 0x1b3f3c: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x1b3f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x1b3f40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f44: 0x0  nop
    ctx->pc = 0x1b3f44u;
    // NOP
    // 0x1b3f48: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f50: 0x3c0137d0  lui         $at, 0x37D0
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14288 << 16));
    // 0x1b3f54: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x1b3f54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x1b3f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f5c: 0x0  nop
    ctx->pc = 0x1b3f5cu;
    // NOP
    // 0x1b3f60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f68: 0x3c01bab6  lui         $at, 0xBAB6
    ctx->pc = 0x1b3f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47798 << 16));
    // 0x1b3f6c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b3f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1b3f70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f74: 0x0  nop
    ctx->pc = 0x1b3f74u;
    // NOP
    // 0x1b3f78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f80: 0x3c013d2a  lui         $at, 0x3D2A
    ctx->pc = 0x1b3f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15658 << 16));
    // 0x1b3f84: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b3f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b3f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3f8c: 0x0  nop
    ctx->pc = 0x1b3f8cu;
    // NOP
    // 0x1b3f90: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3f94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b3f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b3f98: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B3F98u;
    {
        const bool branch_taken_0x1b3f98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3F98u;
        // 0x1b3f9c: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3f98) {
            ctx->pc = 0x1B3FD0u;
            return;
        }
    }
    ctx->pc = 0x1B3FA0u;
    // 0x1b3fa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1b3fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3fa4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b3fa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3fa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3fac: 0x460d6082  mul.s       $f2, $f12, $f13
    ctx->pc = 0x1b3facu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1b3fb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3fb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b3fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b3fb8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1b3fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1b3fbc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1b3fbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1b3fc0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b3fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b3fc4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B3FC4u;
    {
        const bool branch_taken_0x1b3fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3FC4u;
        // 0x1b3fc8: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3fc4) {
            ctx->pc = 0x1B4028u;
            return;
        }
    }
    ctx->pc = 0x1B3FCCu;
    // 0x1b3fcc: 0x0  nop
    ctx->pc = 0x1b3fccu;
    // NOP
    ctx->pc = 0x1b3fd0u;
}
