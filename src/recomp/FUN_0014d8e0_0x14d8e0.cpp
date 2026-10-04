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

// Function: FUN_0014d8e0
// Address: 0x14d8e0 - 0x14da3c
void FUN_0014d8e0_0x14d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d8e0_0x14d8e0");
#endif

    switch (ctx->pc) {
        case 0x14d934u: goto label_14d934;
        case 0x14d988u: goto label_14d988;
        case 0x14d9d8u: goto label_14d9d8;
        case 0x14da00u: goto label_14da00;
        case 0x14da20u: goto label_14da20;
        case 0x14da38u: goto label_14da38;
        default: break;
    }

    ctx->pc = 0x14d8e0u;

    // 0x14d8e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14d8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14d8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d8f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14d8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8f8: 0x80a6002a  lb          $a2, 0x2A($a1)
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x14d8fc: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x14D8FCu;
    {
        const bool branch_taken_0x14d8fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8FCu;
        // 0x14d900: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8fc) {
            ctx->pc = 0x14D93Cu;
            goto label_14d93c;
        }
    }
    ctx->pc = 0x14D904u;
    // 0x14d904: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d908: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x14d908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14d90c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x14D90Cu;
    {
        const bool branch_taken_0x14d90c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D90Cu;
        // 0x14d910: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d90c) {
            ctx->pc = 0x14D9E0u;
            goto label_14d9e0;
        }
    }
    ctx->pc = 0x14D914u;
    // 0x14d914: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d918: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14d918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14d91c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d91cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d920: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x14d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d924: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d924u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d928: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14d928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14d92c: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14D92Cu;
    SET_GPR_U32(ctx, 31, 0x14D934u);
    ctx->pc = 0x14D930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D92Cu;
    // 0x14d930: 0x8ca40010  lw          $a0, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14D92Cu, 0x14D934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D934u;
label_14d934:
    // 0x14d934: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14D934u;
    {
        const bool branch_taken_0x14d934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D934u;
        // 0x14d938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d934) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D93Cu;
label_14d93c:
    // 0x14d93c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d940: 0x14c30013  bne         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x14D940u;
    {
        const bool branch_taken_0x14d940 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D940u;
        // 0x14d944: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d940) {
            ctx->pc = 0x14D990u;
            goto label_14d990;
        }
    }
    ctx->pc = 0x14D948u;
    // 0x14d948: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d94c: 0x8c630200  lw          $v1, 0x200($v1)
    ctx->pc = 0x14d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14d950: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x14D950u;
    {
        const bool branch_taken_0x14d950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d950) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D958u;
    // 0x14d958: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x14d958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14d95c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x14D95Cu;
    {
        const bool branch_taken_0x14d95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d95c) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D964u;
    // 0x14d964: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d968: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x14d968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x14d96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d970: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x14d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d978: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14d978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14d97c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d980: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14D980u;
    SET_GPR_U32(ctx, 31, 0x14D988u);
    ctx->pc = 0x14D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D980u;
    // 0x14d984: 0x8c440200  lw          $a0, 0x200($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14D980u, 0x14D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D988u;
label_14d988:
    // 0x14d988: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14D988u;
    {
        const bool branch_taken_0x14d988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D988u;
        // 0x14d98c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d988) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D990u;
label_14d990:
    // 0x14d990: 0x14c30012  bne         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D990u;
    {
        const bool branch_taken_0x14d990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d990) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D998u;
    // 0x14d998: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d99c: 0x8c630200  lw          $v1, 0x200($v1)
    ctx->pc = 0x14d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x14d9a0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14D9A0u;
    {
        const bool branch_taken_0x14d9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9a0) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D9A8u;
    // 0x14d9a8: 0x90630232  lbu         $v1, 0x232($v1)
    ctx->pc = 0x14d9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x14d9ac: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14D9ACu;
    {
        const bool branch_taken_0x14d9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d9ac) {
            ctx->pc = 0x14D9DCu;
            goto label_14d9dc;
        }
    }
    ctx->pc = 0x14D9B4u;
    // 0x14d9b4: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x14d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x14d9b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x14d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x14d9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14d9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d9c0: 0xc4610154  lwc1        $f1, 0x154($v1)
    ctx->pc = 0x14d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d9c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14d9c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14d9c8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14d9cc: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14d9d0: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x14D9D0u;
    SET_GPR_U32(ctx, 31, 0x14D9D8u);
    ctx->pc = 0x14D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9D0u;
    // 0x14d9d4: 0x8c440200  lw          $a0, 0x200($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 512)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x14D9D0u, 0x14D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9D8u;
label_14d9d8:
    // 0x14d9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14d9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14d9dc:
    // 0x14d9dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14d9e0:
    // 0x14d9e0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14D9E0u;
    {
        const bool branch_taken_0x14d9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9E0u;
        // 0x14d9e4: 0x3c053f80  lui         $a1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9e0) {
            ctx->pc = 0x14DA38u;
            goto label_14da38;
        }
    }
    ctx->pc = 0x14D9E8u;
    // 0x14d9e8: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x14d9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x14d9ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D9ECu;
    {
        const bool branch_taken_0x14d9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9ECu;
        // 0x14d9f0: 0xae05000c  sw          $a1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9ec) {
            ctx->pc = 0x14DA08u;
            goto label_14da08;
        }
    }
    ctx->pc = 0x14D9F4u;
    // 0x14d9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9f8: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14D9F8u;
    SET_GPR_U32(ctx, 31, 0x14DA00u);
    ctx->pc = 0x14D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9F8u;
    // 0x14d9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14D9F8u, 0x14DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA00u;
label_14da00:
    // 0x14da00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14DA00u;
    {
        const bool branch_taken_0x14da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA00u;
        // 0x14da04: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da00) {
            ctx->pc = 0x14DA3Cu;
            return;
        }
    }
    ctx->pc = 0x14DA08u;
label_14da08:
    // 0x14da08: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x14da08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x14da0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14DA0Cu;
    {
        const bool branch_taken_0x14da0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA0Cu;
        // 0x14da10: 0x3223000c  andi        $v1, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da0c) {
            ctx->pc = 0x14DA28u;
            goto label_14da28;
        }
    }
    ctx->pc = 0x14DA14u;
    // 0x14da14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14da18: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14DA18u;
    SET_GPR_U32(ctx, 31, 0x14DA20u);
    ctx->pc = 0x14DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA18u;
    // 0x14da1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14DA18u, 0x14DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA20u;
label_14da20:
    // 0x14da20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA20u;
    {
        const bool branch_taken_0x14da20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14da20) {
            ctx->pc = 0x14DA38u;
            goto label_14da38;
        }
    }
    ctx->pc = 0x14DA28u;
label_14da28:
    // 0x14da28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DA28u;
    {
        const bool branch_taken_0x14da28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA28u;
        // 0x14da2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da28) {
            ctx->pc = 0x14DA38u;
            goto label_14da38;
        }
    }
    ctx->pc = 0x14DA30u;
    // 0x14da30: 0xc07b064  jal         func_1EC190
    ctx->pc = 0x14DA30u;
    SET_GPR_U32(ctx, 31, 0x14DA38u);
    ctx->pc = 0x14DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14DA30u;
    // 0x14da34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC190u, 0x14DA30u, 0x14DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DA38u;
label_14da38:
    // 0x14da38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14da38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14da3cu;
}
