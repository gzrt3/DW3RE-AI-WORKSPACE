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

// Function: entry_001549ac
// Address: 0x1549ac - 0x154a1c
void entry_001549ac_0x1549ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001549ac_0x1549ac");
#endif

    switch (ctx->pc) {
        case 0x1549d8u: goto label_1549d8;
        case 0x1549ecu: goto label_1549ec;
        default: break;
    }

    ctx->pc = 0x1549acu;

    // 0x1549ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1549b0: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1549B0u;
    {
        const bool branch_taken_0x1549b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1549B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B0u;
        // 0x1549b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b0) {
            ctx->pc = 0x154A1Cu;
            return;
        }
    }
    ctx->pc = 0x1549B8u;
    // 0x1549b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1549bc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1549bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1549c0: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x1549c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1549cc: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1549d0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1549D0u;
    SET_GPR_U32(ctx, 31, 0x1549D8u);
    ctx->pc = 0x1549D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549D0u;
    // 0x1549d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1549D0u, 0x1549D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549D8u;
label_1549d8:
    // 0x1549d8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1549d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1549dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1549dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1549e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1549e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1549e4: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1549E4u;
    SET_GPR_U32(ctx, 31, 0x1549ECu);
    ctx->pc = 0x1549E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549E4u;
    // 0x1549e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1549E4u, 0x1549ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549ECu;
label_1549ec:
    // 0x1549ec: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1549ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1549f0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1549f4: 0xac20b9bc  sw          $zero, -0x4644($at)
    ctx->pc = 0x1549f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x32B9BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9BCu, _value); } while (0);
    // 0x1549f8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1549f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1549fc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x154a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154a04: 0xe422b9b0  swc1        $f2, -0x4650($at)
    ctx->pc = 0x154a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9B0u, _value); } while (0); }
    // 0x154a08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a0c: 0xe421b9b4  swc1        $f1, -0x464C($at)
    ctx->pc = 0x154a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9B4u, _value); } while (0); }
    // 0x154a10: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x154A14u;
    {
        const bool branch_taken_0x154a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A14u;
        // 0x154a18: 0xe420b9b8  swc1        $f0, -0x4648($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a14) {
            ctx->pc = 0x154AA8u;
            return;
        }
    }
    ctx->pc = 0x154A1Cu;
}
