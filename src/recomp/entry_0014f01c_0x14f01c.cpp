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

// Function: entry_0014f01c
// Address: 0x14f01c - 0x14f09c
void entry_0014f01c_0x14f01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f01c_0x14f01c");
#endif

    ctx->pc = 0x14f01cu;

    // 0x14f01c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x14f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f020: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14f020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14f024: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f028: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f02c: 0x0  nop
    ctx->pc = 0x14f02cu;
    // NOP
    // 0x14f030: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x14f030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14f034: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x14f034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f038: 0x0  nop
    ctx->pc = 0x14f038u;
    // NOP
    // 0x14f03c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F03Cu;
    {
        const bool branch_taken_0x14f03c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F03Cu;
        // 0x14f040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f03c) {
            ctx->pc = 0x14F048u;
            goto label_14f048;
        }
    }
    ctx->pc = 0x14F044u;
    // 0x14f044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f048:
    // 0x14f048: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F048u;
    {
        const bool branch_taken_0x14f048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f048) {
            ctx->pc = 0x14F064u;
            goto label_14f064;
        }
    }
    ctx->pc = 0x14F050u;
    // 0x14f050: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x14f054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f05c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F05Cu;
    {
        const bool branch_taken_0x14f05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F05Cu;
        // 0x14f060: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f05c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F064u;
label_14f064:
    // 0x14f064: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x14f068: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f06c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f070: 0x0  nop
    ctx->pc = 0x14f070u;
    // NOP
    // 0x14f074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f078: 0x0  nop
    ctx->pc = 0x14f078u;
    // NOP
    // 0x14f07c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14F07Cu;
    {
        const bool branch_taken_0x14f07c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F07Cu;
        // 0x14f080: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f07c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F084u;
    // 0x14f084: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x14f088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f08c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14F08Cu;
    {
        const bool branch_taken_0x14f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F08Cu;
        // 0x14f090: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f08c) {
            ctx->pc = 0x14F094u;
            goto label_14f094;
        }
    }
    ctx->pc = 0x14F094u;
label_14f094:
    // 0x14f094: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x14F094u;
    {
        const bool branch_taken_0x14f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F094u;
        // 0x14f098: 0xe60101bc  swc1        $f1, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f094) {
            ctx->pc = 0x14F1E8u;
            return;
        }
    }
    ctx->pc = 0x14F09Cu;
}
