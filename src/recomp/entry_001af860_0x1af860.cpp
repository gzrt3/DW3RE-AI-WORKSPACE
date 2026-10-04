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

// Function: entry_001af860
// Address: 0x1af860 - 0x1af92c
void entry_001af860_0x1af860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af860_0x1af860");
#endif

    switch (ctx->pc) {
        case 0x1af86cu: goto label_1af86c;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af910u: goto label_1af910;
        case 0x1af928u: goto label_1af928;
        default: break;
    }

    ctx->pc = 0x1af860u;

    // 0x1af860: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af864: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AF864u;
    SET_GPR_U32(ctx, 31, 0x1AF86Cu);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AF864u, 0x1AF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF86Cu;
label_1af86c:
    // 0x1af86c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AF86Cu;
    {
        const bool branch_taken_0x1af86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF86Cu;
        // 0x1af870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af86c) {
            ctx->pc = 0x1AF92Cu;
            return;
        }
    }
    ctx->pc = 0x1AF874u;
    // 0x1af874: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1af874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1af878: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1af878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af87c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1af87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af880: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1af880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1af884: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1af884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1af888: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1af888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1af88c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1af88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1af890: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1af890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af894: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1af894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af898: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1af898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af89c: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1af89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1af8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1af8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1af8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8ac: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1af8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1af8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1af8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1af8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1af8bc: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1af8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1af8c0: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1af8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af8c4: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1af8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af8c8: 0x8e837290  lw          $v1, 0x7290($s4)
    ctx->pc = 0x1af8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8cc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8CCu;
        // 0x1af8d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8D4u;
    // 0x1af8d4: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1af8d8: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF8D8u;
    SET_GPR_U32(ctx, 31, 0x1AF8E0u);
    ctx->pc = 0x1AF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8D8u;
    // 0x1af8dc: 0x2484a9b0  addiu       $a0, $a0, -0x5650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF8D8u, 0x1AF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8E0u;
label_1af8e0:
    // 0x1af8e0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8ECu;
    // 0x1af8ec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1af8f0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8F0u;
    // 0x1af8f4: 0x2484a9c0  addiu       $a0, $a0, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF8F0u, 0x1AF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF8FCu;
    {
        const bool branch_taken_0x1af8fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8FCu;
        // 0x1af900: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8fc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF904u;
    // 0x1af904: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1af904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1af908: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF908u;
    SET_GPR_U32(ctx, 31, 0x1AF910u);
    ctx->pc = 0x1AF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF908u;
    // 0x1af90c: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF908u, 0x1AF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF910u;
label_1af910:
    // 0x1af910: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1af914: 0x27c26100  addiu       $v0, $fp, 0x6100
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
    // 0x1af918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af91c: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af920: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AF920u;
    SET_GPR_U32(ctx, 31, 0x1AF928u);
    ctx->pc = 0x1AF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF920u;
    // 0x1af924: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AF920u, 0x1AF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1af92cu;
}
