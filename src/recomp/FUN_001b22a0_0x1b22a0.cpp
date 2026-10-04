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

// Function: FUN_001b22a0
// Address: 0x1b22a0 - 0x1b2460
void FUN_001b22a0_0x1b22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b22a0_0x1b22a0");
#endif

    switch (ctx->pc) {
        case 0x1b2300u: goto label_1b2300;
        case 0x1b2324u: goto label_1b2324;
        case 0x1b23e0u: goto label_1b23e0;
        case 0x1b23ecu: goto label_1b23ec;
        case 0x1b2418u: goto label_1b2418;
        case 0x1b2438u: goto label_1b2438;
        default: break;
    }

    ctx->pc = 0x1b22a0u;

    // 0x1b22a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b22a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b22a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b22ac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b22acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b22b0: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b22b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b22b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b22b8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b22b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22bc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b22c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b22c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b22c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b22c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b22ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b22d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b22d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b22d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b22d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b22dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b22e0: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b22e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B22E4u;
    {
        const bool branch_taken_0x1b22e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E4u;
        // 0x1b22e8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22e4) {
            ctx->pc = 0x1B22F4u;
            goto label_1b22f4;
        }
    }
    ctx->pc = 0x1B22ECu;
    // 0x1b22ec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x1B22ECu;
    {
        const bool branch_taken_0x1b22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22ECu;
        // 0x1b22f0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22ec) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B22F4u;
label_1b22f4:
    // 0x1b22f4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b22f8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B22F8u;
    SET_GPR_U32(ctx, 31, 0x1B2300u);
    ctx->pc = 0x1B22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22F8u;
    // 0x1b22fc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B22F8u, 0x1B2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2300u;
label_1b2300:
    // 0x1b2300: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2300u;
    {
        const bool branch_taken_0x1b2300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2300u;
        // 0x1b2304: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2300) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B2308u;
    // 0x1b2308: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2308u;
    {
        const bool branch_taken_0x1b2308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2308) {
            ctx->pc = 0x1B231Cu;
            goto label_1b231c;
        }
    }
    ctx->pc = 0x1B2310u;
    // 0x1b2310: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2314u;
    {
        const bool branch_taken_0x1b2314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2314u;
        // 0x1b2318: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2314) {
            ctx->pc = 0x1B232Cu;
            goto label_1b232c;
        }
    }
    ctx->pc = 0x1B231Cu;
label_1b231c:
    // 0x1b231c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B231Cu;
    SET_GPR_U32(ctx, 31, 0x1B2324u);
    ctx->pc = 0x1B2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B231Cu;
    // 0x1b2320: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B231Cu, 0x1B2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2324u;
label_1b2324:
    // 0x1b2324: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B232Cu;
label_1b232c:
    // 0x1b232c: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x1b232cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
    // 0x1b2330: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b2334: 0xac5462b0  sw          $s4, 0x62B0($v0)
    ctx->pc = 0x1b2334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 20));
    // 0x1b2338: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1b2338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1b233c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2340: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1b2340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1b2344: 0x24436240  addiu       $v1, $v0, 0x6240
    ctx->pc = 0x1b2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
    // 0x1b2348: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b2348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b234c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2350: 0x24496240  addiu       $t1, $v0, 0x6240
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
    // 0x1b2354: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x1b2354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b2358: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x1b2358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b235c: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x1b235cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b2360: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x1b2360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b2364: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x1b2364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b2368: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x1b2368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b236c: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x1b236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2370: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x1b2370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2374: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x1b2374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2378: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x1b2378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b237c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x1b237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2380: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x1b2380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b2384: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x1b2384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b2388: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x1b2388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b238c: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x1b238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b2390: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x1b2390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b2394: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x1b2394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b2398: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x1b2398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b239c: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x1b239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23a0: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x1b23a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23a4: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x1b23a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23a8: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x1b23a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23ac: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x1b23acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23b0: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x1b23b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23b4: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x1b23b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b23b8: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x1b23b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b23bc: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x1b23bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b23c0: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x1b23c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b23c4: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x1b23c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23c8: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x1b23c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23cc: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x1b23ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23d0: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x1b23d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b23d4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1b23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1b23d8: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B23D8u;
    SET_GPR_U32(ctx, 31, 0x1B23E0u);
    ctx->pc = 0x1B23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D8u;
    // 0x1b23dc: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B23D8u, 0x1B23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23E0u;
label_1b23e0:
    // 0x1b23e0: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1b23e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b23e4: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B23E4u;
    SET_GPR_U32(ctx, 31, 0x1B23ECu);
    ctx->pc = 0x1B23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23E4u;
    // 0x1b23e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B23E4u, 0x1B23ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B23ECu;
label_1b23ec:
    // 0x1b23ec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b23f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b23f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b23f8: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b23fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2400: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b2404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2408: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b240c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2410: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B2410u;
    SET_GPR_U32(ctx, 31, 0x1B2418u);
    ctx->pc = 0x1B2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2410u;
    // 0x1b2414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B2410u, 0x1B2418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2418u;
label_1b2418:
    // 0x1b2418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b241c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B241Cu;
    {
        const bool branch_taken_0x1b241c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B241Cu;
        // 0x1b2420: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b241c) {
            ctx->pc = 0x1B2430u;
            goto label_1b2430;
        }
    }
    ctx->pc = 0x1B2424u;
    // 0x1b2424: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b2428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2428u;
    {
        const bool branch_taken_0x1b2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2428u;
        // 0x1b242c: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2428) {
            ctx->pc = 0x1B2438u;
            goto label_1b2438;
        }
    }
    ctx->pc = 0x1B2430u;
label_1b2430:
    // 0x1b2430: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B2430u;
    SET_GPR_U32(ctx, 31, 0x1B2438u);
    ctx->pc = 0x1B2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2430u;
    // 0x1b2434: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B2430u, 0x1B2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2438u;
label_1b2438:
    // 0x1b2438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b243c:
    // 0x1b243c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b2440: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b2440u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b2444: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b2444u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2448: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b2448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b244c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b244cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2450: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2454: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2458: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b245c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b2460u;
}
