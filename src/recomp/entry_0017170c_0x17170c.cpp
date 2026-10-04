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

// Function: entry_0017170c
// Address: 0x17170c - 0x171748
void entry_0017170c_0x17170c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017170c_0x17170c");
#endif

    ctx->pc = 0x17170cu;

    // 0x17170c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17170cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171710: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x171714: 0x2d430040  sltiu       $v1, $t2, 0x40
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x171718: 0xc4801128  lwc1        $f0, 0x1128($a0)
    ctx->pc = 0x171718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17171c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17171cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171720: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x171720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x171724: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x171724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x171728: 0x94851130  lhu         $a1, 0x1130($a0)
    ctx->pc = 0x171728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17172c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x17172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x171730: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x171730u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x171734: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x171734u;
    {
        const bool branch_taken_0x171734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171734u;
        // 0x171738: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171734) {
            ctx->pc = 0x171628u;
            return;
        }
    }
    ctx->pc = 0x17173Cu;
    // 0x17173c: 0x256b0820  addiu       $t3, $t3, 0x820
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2080));
    // 0x171740: 0x258c0040  addiu       $t4, $t4, 0x40
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 64));
    // 0x171744: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x171744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x171748u;
}
