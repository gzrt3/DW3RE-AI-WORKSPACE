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

// Function: entry_00185afc
// Address: 0x185afc - 0x185b4c
void entry_00185afc_0x185afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185afc_0x185afc");
#endif

    ctx->pc = 0x185afcu;

    // 0x185afc: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x185afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185b00: 0x3c0348af  lui         $v1, 0x48AF
    ctx->pc = 0x185b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
    // 0x185b04: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x185b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x185b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b0c: 0x0  nop
    ctx->pc = 0x185b0cu;
    // NOP
    // 0x185b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b14: 0x0  nop
    ctx->pc = 0x185b14u;
    // NOP
    // 0x185b18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x185B18u;
    {
        const bool branch_taken_0x185b18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x185B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B18u;
        // 0x185b1c: 0x3c034974  lui         $v1, 0x4974 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b18) {
            ctx->pc = 0x185B28u;
            goto label_185b28;
        }
    }
    ctx->pc = 0x185B20u;
    // 0x185b20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185B20u;
    {
        const bool branch_taken_0x185b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B20u;
        // 0x185b24: 0xa220023c  sb          $zero, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b20) {
            ctx->pc = 0x185B74u;
            return;
        }
    }
    ctx->pc = 0x185B28u;
label_185b28:
    // 0x185b28: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x185b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x185b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185b30: 0x0  nop
    ctx->pc = 0x185b30u;
    // NOP
    // 0x185b34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185b34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185b38: 0x0  nop
    ctx->pc = 0x185b38u;
    // NOP
    // 0x185b3c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B74u;
            return;
        }
    }
    ctx->pc = 0x185B44u;
    // 0x185b44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x185B44u;
    {
        const bool branch_taken_0x185b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B44u;
        // 0x185b48: 0xa225023c  sb          $a1, 0x23C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 572), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b44) {
            ctx->pc = 0x185B74u;
            return;
        }
    }
    ctx->pc = 0x185B4Cu;
}
