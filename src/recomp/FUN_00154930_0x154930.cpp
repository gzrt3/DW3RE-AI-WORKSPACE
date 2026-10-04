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

// Function: FUN_00154930
// Address: 0x154930 - 0x154aa8
void FUN_00154930_0x154930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154930_0x154930");
#endif

    switch (ctx->pc) {
        case 0x154960u: goto label_154960;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549ecu: goto label_1549ec;
        case 0x154a44u: goto label_154a44;
        case 0x154a58u: goto label_154a58;
        default: break;
    }

    ctx->pc = 0x154930u;

    // 0x154930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x154934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15493c: 0x14a0001b  bnez        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x15493Cu;
    {
        const bool branch_taken_0x15493c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x154940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15493Cu;
        // 0x154940: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15493c) {
            ctx->pc = 0x1549ACu;
            goto label_1549ac;
        }
    }
    ctx->pc = 0x154944u;
    // 0x154944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154948: 0x68980  sll         $s1, $a2, 6
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x15494c: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154954: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x154954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x154958: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154958u;
    SET_GPR_U32(ctx, 31, 0x154960u);
    ctx->pc = 0x15495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154958u;
    // 0x15495c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154958u, 0x154960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154960u;
label_154960:
    // 0x154960: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x154960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154964: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x154968: 0x2463ba24  addiu       $v1, $v1, -0x45DC
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949412));
    // 0x15496c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154970: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154974: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x154974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x154978: 0x2463ba28  addiu       $v1, $v1, -0x45D8
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949416));
    // 0x15497c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154980: 0xe420b9a0  swc1        $f0, -0x4660($at)
    ctx->pc = 0x154980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9A0u, _value); } while (0); }
    // 0x154984: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154988: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x154988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15498c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154990: 0xe420b9a4  swc1        $f0, -0x465C($at)
    ctx->pc = 0x154990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9A4u, _value); } while (0); }
    // 0x154994: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x154994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154998: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x15499c: 0xe420b9a8  swc1        $f0, -0x4658($at)
    ctx->pc = 0x15499cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32B9A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32B9A8u, _value); } while (0); }
    // 0x1549a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1549a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1549a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1549A4u;
    {
        const bool branch_taken_0x1549a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549A4u;
        // 0x1549a8: 0xac23b9ac  sw          $v1, -0x4654($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549a4) {
            ctx->pc = 0x154AA8u;
            return;
        }
    }
    ctx->pc = 0x1549ACu;
label_1549ac:
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
            goto label_154a1c;
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
label_154a1c:
    // 0x154a1c: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x154A1Cu;
    {
        const bool branch_taken_0x154a1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x154a1c) {
            ctx->pc = 0x154A8Cu;
            goto label_154a8c;
        }
    }
    ctx->pc = 0x154A24u;
    // 0x154a24: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154a28: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154a2c: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154a30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154a38: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x154a3c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154A3Cu;
    SET_GPR_U32(ctx, 31, 0x154A44u);
    ctx->pc = 0x154A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A3Cu;
    // 0x154a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154A3Cu, 0x154A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A44u;
label_154a44:
    // 0x154a44: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x154a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154a50: 0xc066e14  jal         func_19B850
    ctx->pc = 0x154A50u;
    SET_GPR_U32(ctx, 31, 0x154A58u);
    ctx->pc = 0x154A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A50u;
    // 0x154a54: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x154A50u, 0x154A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A58u;
label_154a58:
    // 0x154a58: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x154a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x154a60: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a64: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x154a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154a68: 0xac23ba0c  sw          $v1, -0x45F4($at)
    ctx->pc = 0x154a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x32BA0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA0Cu, _value); } while (0);
    // 0x154a6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a70: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x154a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154a74: 0xe422ba00  swc1        $f2, -0x4600($at)
    ctx->pc = 0x154a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA00u, _value); } while (0); }
    // 0x154a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a7c: 0xe421ba04  swc1        $f1, -0x45FC($at)
    ctx->pc = 0x154a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x32BA04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x32BA04u, _value); } while (0); }
    // 0x154a80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x154a84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x154A84u;
    {
        const bool branch_taken_0x154a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A84u;
        // 0x154a88: 0xe420ba08  swc1        $f0, -0x45F8($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294949384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a84) {
            ctx->pc = 0x154AA8u;
            return;
        }
    }
    ctx->pc = 0x154A8Cu;
label_154a8c:
    // 0x154a8c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154a90: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154a94: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154a98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x154a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154aa0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x154AA0u;
    SET_GPR_U32(ctx, 31, 0x154AA8u);
    ctx->pc = 0x154AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AA0u;
    // 0x154aa4: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x154AA0u, 0x154AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AA8u;
}
