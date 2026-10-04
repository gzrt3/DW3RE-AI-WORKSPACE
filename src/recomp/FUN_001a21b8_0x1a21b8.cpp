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

// Function: FUN_001a21b8
// Address: 0x1a21b8 - 0x1a2760
void FUN_001a21b8_0x1a21b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a21b8_0x1a21b8");
#endif

    switch (ctx->pc) {
        case 0x1a222cu: goto label_1a222c;
        case 0x1a2238u: goto label_1a2238;
        case 0x1a224cu: goto label_1a224c;
        case 0x1a22ecu: goto label_1a22ec;
        case 0x1a22f8u: goto label_1a22f8;
        case 0x1a2308u: goto label_1a2308;
        case 0x1a2314u: goto label_1a2314;
        case 0x1a2324u: goto label_1a2324;
        case 0x1a2334u: goto label_1a2334;
        case 0x1a2344u: goto label_1a2344;
        case 0x1a2354u: goto label_1a2354;
        case 0x1a237cu: goto label_1a237c;
        case 0x1a2388u: goto label_1a2388;
        case 0x1a2394u: goto label_1a2394;
        case 0x1a23a0u: goto label_1a23a0;
        case 0x1a23acu: goto label_1a23ac;
        case 0x1a23b8u: goto label_1a23b8;
        case 0x1a23c4u: goto label_1a23c4;
        case 0x1a2408u: goto label_1a2408;
        case 0x1a2414u: goto label_1a2414;
        case 0x1a2420u: goto label_1a2420;
        case 0x1a242cu: goto label_1a242c;
        case 0x1a2438u: goto label_1a2438;
        case 0x1a2444u: goto label_1a2444;
        case 0x1a2450u: goto label_1a2450;
        case 0x1a2494u: goto label_1a2494;
        case 0x1a24a8u: goto label_1a24a8;
        case 0x1a24bcu: goto label_1a24bc;
        case 0x1a24ccu: goto label_1a24cc;
        case 0x1a24dcu: goto label_1a24dc;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24fcu: goto label_1a24fc;
        case 0x1a2508u: goto label_1a2508;
        case 0x1a251cu: goto label_1a251c;
        case 0x1a2528u: goto label_1a2528;
        case 0x1a2534u: goto label_1a2534;
        case 0x1a2548u: goto label_1a2548;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2570u: goto label_1a2570;
        case 0x1a2584u: goto label_1a2584;
        case 0x1a2590u: goto label_1a2590;
        case 0x1a25a0u: goto label_1a25a0;
        case 0x1a25a8u: goto label_1a25a8;
        case 0x1a25e8u: goto label_1a25e8;
        case 0x1a2620u: goto label_1a2620;
        case 0x1a2648u: goto label_1a2648;
        case 0x1a26dcu: goto label_1a26dc;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a2734u: goto label_1a2734;
        default: break;
    }

    ctx->pc = 0x1a21b8u;

    // 0x1a21b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1a21bc: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1a21c0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1a21c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1a21c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a21c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21cc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a21ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1a21d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a21d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a21d4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1a21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1a21d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a21dc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1a21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1a21e0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a21e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1a21e4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1a21e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a21e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1a21ec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a21ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1a21f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a21f4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1a21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a21f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a21fc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1a21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    // 0x1a2200: 0x2468a288  addiu       $t0, $v1, -0x5D78
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943368));
    // 0x1a2204: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x1a2204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a2208: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x1a2208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a220c: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1a220cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a2210: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1a2210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a2214: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a2214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2218: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a2218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a221c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1a221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2220: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1a2220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a2224: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2224u;
    SET_GPR_U32(ctx, 31, 0x1A222Cu);
    ctx->pc = 0x1A2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2224u;
    // 0x1a2228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2224u, 0x1A222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A222Cu;
label_1a222c:
    // 0x1a222c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2230: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2230u;
    SET_GPR_U32(ctx, 31, 0x1A2238u);
    ctx->pc = 0x1A2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2230u;
    // 0x1a2234: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2230u, 0x1A2238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2238u;
label_1a2238:
    // 0x1a2238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a223c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2240: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1a2240u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1a2244: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2244u;
    SET_GPR_U32(ctx, 31, 0x1A224Cu);
    ctx->pc = 0x1A2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2244u;
    // 0x1a2248: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2244u, 0x1A224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A224Cu;
label_1a224c:
    // 0x1a224c: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x1a224cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2250: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a2254: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1a2254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1a2258: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1a2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1a225c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2264: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x1a2264u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x1a2268: 0x10820115  beq         $a0, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x1A2268u;
    {
        const bool branch_taken_0x1a2268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2268u;
        // 0x1a226c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2268) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2270u;
    // 0x1a2270: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1a2270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1a2274: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2278: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1A2278u;
    {
        const bool branch_taken_0x1a2278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2278) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A2280u;
    // 0x1a2280: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a2280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1a2284: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2288: 0x108200f1  beq         $a0, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A2290u;
    // 0x1a2290: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1a2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1a2294: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2298: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x1A2298u;
    {
        const bool branch_taken_0x1a2298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2298) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A22A0u;
    // 0x1a22a0: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1a22a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1a22a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a22a8: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x1A22A8u;
    {
        const bool branch_taken_0x1a22a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22a8) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A22B0u;
    // 0x1a22b0: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a22b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1a22b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a22b8: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1A22B8u;
    {
        const bool branch_taken_0x1a22b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22b8) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A22C0u;
    // 0x1a22c0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1a22c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1a22c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a22c8: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x1A22C8u;
    {
        const bool branch_taken_0x1a22c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22c8) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A22D0u;
    // 0x1a22d0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1a22d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1a22d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a22d8: 0x108200dd  beq         $a0, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x1A22D8u;
    {
        const bool branch_taken_0x1a22d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22d8) {
            ctx->pc = 0x1A2650u;
            goto label_1a2650;
        }
    }
    ctx->pc = 0x1A22E0u;
    // 0x1a22e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22e4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A22E4u;
    SET_GPR_U32(ctx, 31, 0x1A22ECu);
    ctx->pc = 0x1A22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22E4u;
    // 0x1a22e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A22E4u, 0x1A22ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22ECu;
label_1a22ec:
    // 0x1a22ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22f0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A22F0u;
    SET_GPR_U32(ctx, 31, 0x1A22F8u);
    ctx->pc = 0x1A22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22F0u;
    // 0x1a22f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A22F0u, 0x1A22F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A22F8u;
label_1a22f8:
    // 0x1a22f8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1a22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x1a22fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2300: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2300u;
    SET_GPR_U32(ctx, 31, 0x1A2308u);
    ctx->pc = 0x1A2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2300u;
    // 0x1a2304: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2300u, 0x1A2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2308u;
label_1a2308:
    // 0x1a2308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a230c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A230Cu;
    SET_GPR_U32(ctx, 31, 0x1A2314u);
    ctx->pc = 0x1A2310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A230Cu;
    // 0x1a2310: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A230Cu, 0x1A2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a2314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a231c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A231Cu;
    SET_GPR_U32(ctx, 31, 0x1A2324u);
    ctx->pc = 0x1A2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A231Cu;
    // 0x1a2320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A231Cu, 0x1A2324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2324u;
label_1a2324:
    // 0x1a2324: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a2324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1a2328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a232c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A232Cu;
    SET_GPR_U32(ctx, 31, 0x1A2334u);
    ctx->pc = 0x1A2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A232Cu;
    // 0x1a2330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A232Cu, 0x1A2334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2334u;
label_1a2334:
    // 0x1a2334: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a2334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a233c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A233Cu;
    SET_GPR_U32(ctx, 31, 0x1A2344u);
    ctx->pc = 0x1A2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A233Cu;
    // 0x1a2340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A233Cu, 0x1A2344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2344u;
label_1a2344:
    // 0x1a2344: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a2344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a234c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A234Cu;
    SET_GPR_U32(ctx, 31, 0x1A2354u);
    ctx->pc = 0x1A2350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A234Cu;
    // 0x1a2350: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A234Cu, 0x1A2354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2354u;
label_1a2354:
    // 0x1a2354: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a2354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1a2358: 0x32e30002  andi        $v1, $s7, 0x2
    ctx->pc = 0x1a2358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1a235c: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1a235cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a2360: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1a2360u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a2364: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x1a2364u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1a2368: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A2368u;
    {
        const bool branch_taken_0x1a2368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2368u;
        // 0x1a236c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2368) {
            ctx->pc = 0x1A23F4u;
            goto label_1a23f4;
        }
    }
    ctx->pc = 0x1A2370u;
    // 0x1a2370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2374: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2374u;
    SET_GPR_U32(ctx, 31, 0x1A237Cu);
    ctx->pc = 0x1A2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2374u;
    // 0x1a2378: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2374u, 0x1A237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A237Cu;
label_1a237c:
    // 0x1a237c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2380: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2380u;
    SET_GPR_U32(ctx, 31, 0x1A2388u);
    ctx->pc = 0x1A2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2380u;
    // 0x1a2384: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2380u, 0x1A2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2388u;
label_1a2388:
    // 0x1a2388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a238c: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A238Cu;
    SET_GPR_U32(ctx, 31, 0x1A2394u);
    ctx->pc = 0x1A2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A238Cu;
    // 0x1a2390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A238Cu, 0x1A2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2394u;
label_1a2394:
    // 0x1a2394: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2398: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2398u;
    SET_GPR_U32(ctx, 31, 0x1A23A0u);
    ctx->pc = 0x1A239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2398u;
    // 0x1a239c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2398u, 0x1A23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23A0u;
label_1a23a0:
    // 0x1a23a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a23a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23a4: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A23A4u;
    SET_GPR_U32(ctx, 31, 0x1A23ACu);
    ctx->pc = 0x1A23A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23A4u;
    // 0x1a23a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A23A4u, 0x1A23ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23ACu;
label_1a23ac:
    // 0x1a23ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a23acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23b0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A23B0u;
    SET_GPR_U32(ctx, 31, 0x1A23B8u);
    ctx->pc = 0x1A23B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23B0u;
    // 0x1a23b4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A23B0u, 0x1A23B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23B8u;
label_1a23b8:
    // 0x1a23b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a23b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23bc: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A23BCu;
    SET_GPR_U32(ctx, 31, 0x1A23C4u);
    ctx->pc = 0x1A23C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A23BCu;
    // 0x1a23c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A23BCu, 0x1A23C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23C4u;
label_1a23c4:
    // 0x1a23c4: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1a23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1a23c8: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1a23c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1a23cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a23ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1a23d0: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1a23d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1a23d4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a23d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a23d8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a23d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a23dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a23e0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a23e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a23e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a23e8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1a23e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a23ec: 0xfe900010  sd          $s0, 0x10($s4)
    ctx->pc = 0x1a23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 16));
    // 0x1a23f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a23f4:
    // 0x1a23f4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A23F4u;
    {
        const bool branch_taken_0x1a23f4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23F4u;
        // 0x1a23f8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23f4) {
            ctx->pc = 0x1A2480u;
            goto label_1a2480;
        }
    }
    ctx->pc = 0x1A23FCu;
    // 0x1a23fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a23fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2400: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2400u;
    SET_GPR_U32(ctx, 31, 0x1A2408u);
    ctx->pc = 0x1A2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2400u;
    // 0x1a2404: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2400u, 0x1A2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2408u;
label_1a2408:
    // 0x1a2408: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a240c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A240Cu;
    SET_GPR_U32(ctx, 31, 0x1A2414u);
    ctx->pc = 0x1A2410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A240Cu;
    // 0x1a2410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A240Cu, 0x1A2414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2414u;
label_1a2414:
    // 0x1a2414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a2414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2418: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2418u;
    SET_GPR_U32(ctx, 31, 0x1A2420u);
    ctx->pc = 0x1A241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2418u;
    // 0x1a241c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2418u, 0x1A2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2420u;
label_1a2420:
    // 0x1a2420: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2424: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2424u;
    SET_GPR_U32(ctx, 31, 0x1A242Cu);
    ctx->pc = 0x1A2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2424u;
    // 0x1a2428: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2424u, 0x1A242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A242Cu;
label_1a242c:
    // 0x1a242c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a242cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2430: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2430u;
    SET_GPR_U32(ctx, 31, 0x1A2438u);
    ctx->pc = 0x1A2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2430u;
    // 0x1a2434: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2430u, 0x1A2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2438u;
label_1a2438:
    // 0x1a2438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a243c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A243Cu;
    SET_GPR_U32(ctx, 31, 0x1A2444u);
    ctx->pc = 0x1A2440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A243Cu;
    // 0x1a2440: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A243Cu, 0x1A2444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2444u;
label_1a2444:
    // 0x1a2444: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a2444u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2448: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A2448u;
    SET_GPR_U32(ctx, 31, 0x1A2450u);
    ctx->pc = 0x1A244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2448u;
    // 0x1a244c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A2448u, 0x1A2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2450u;
label_1a2450:
    // 0x1a2450: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1a2454: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1a2458: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a2458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1a245c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1a245cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1a2460: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a2460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1a2464: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a2464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1a2468: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a246c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1a246cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1a2470: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a2470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a2474: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1a2474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1a2478: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x1a2478u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x1a247c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a2480:
    // 0x1a2480: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a2480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2484: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2484u;
    {
        const bool branch_taken_0x1a2484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2484u;
        // 0x1a2488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2484) {
            ctx->pc = 0x1A2494u;
            goto label_1a2494;
        }
    }
    ctx->pc = 0x1A248Cu;
    // 0x1a248c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A248Cu;
    SET_GPR_U32(ctx, 31, 0x1A2494u);
    ctx->pc = 0x1A2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A248Cu;
    // 0x1a2490: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A248Cu, 0x1A2494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2494u;
label_1a2494:
    // 0x1a2494: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2494u;
    {
        const bool branch_taken_0x1a2494 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2494u;
        // 0x1a2498: 0x3be1021  addu        $v0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2494) {
            ctx->pc = 0x1A24A8u;
            goto label_1a24a8;
        }
    }
    ctx->pc = 0x1A249Cu;
    // 0x1a249c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a249cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24a0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24A0u;
    SET_GPR_U32(ctx, 31, 0x1A24A8u);
    ctx->pc = 0x1A24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24A0u;
    // 0x1a24a4: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24A0u, 0x1A24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24A8u;
label_1a24a8:
    // 0x1a24a8: 0x16b00045  bne         $s5, $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1A24A8u;
    {
        const bool branch_taken_0x1a24a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24A8u;
        // 0x1a24ac: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24a8) {
            ctx->pc = 0x1A25C0u;
            goto label_1a25c0;
        }
    }
    ctx->pc = 0x1A24B0u;
    // 0x1a24b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24b4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24B4u;
    SET_GPR_U32(ctx, 31, 0x1A24BCu);
    ctx->pc = 0x1A24B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24B4u;
    // 0x1a24b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24B4u, 0x1A24BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24BCu;
label_1a24bc:
    // 0x1a24bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a24bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24c4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24C4u;
    SET_GPR_U32(ctx, 31, 0x1A24CCu);
    ctx->pc = 0x1A24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24C4u;
    // 0x1a24c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24C4u, 0x1A24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24CCu;
label_1a24cc:
    // 0x1a24cc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a24ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24d4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24D4u;
    SET_GPR_U32(ctx, 31, 0x1A24DCu);
    ctx->pc = 0x1A24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24D4u;
    // 0x1a24d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24D4u, 0x1A24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24DCu;
label_1a24dc:
    // 0x1a24dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a24dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24e4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24E4u;
    SET_GPR_U32(ctx, 31, 0x1A24ECu);
    ctx->pc = 0x1A24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24E4u;
    // 0x1a24e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24E4u, 0x1A24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24ECu;
label_1a24ec:
    // 0x1a24ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a24ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a24f4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A24F4u;
    SET_GPR_U32(ctx, 31, 0x1A24FCu);
    ctx->pc = 0x1A24F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A24F4u;
    // 0x1a24f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A24F4u, 0x1A24FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A24FCu;
label_1a24fc:
    // 0x1a24fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a24fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2500: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2500u;
    SET_GPR_U32(ctx, 31, 0x1A2508u);
    ctx->pc = 0x1A2504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2500u;
    // 0x1a2504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2500u, 0x1A2508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2508u;
label_1a2508:
    // 0x1a2508: 0x1615000a  bne         $s0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2508u;
    {
        const bool branch_taken_0x1a2508 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2508u;
        // 0x1a250c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2508) {
            ctx->pc = 0x1A2534u;
            goto label_1a2534;
        }
    }
    ctx->pc = 0x1A2510u;
    // 0x1a2510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2514: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2514u;
    SET_GPR_U32(ctx, 31, 0x1A251Cu);
    ctx->pc = 0x1A2518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2514u;
    // 0x1a2518: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2514u, 0x1A251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A251Cu;
label_1a251c:
    // 0x1a251c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2520: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2520u;
    SET_GPR_U32(ctx, 31, 0x1A2528u);
    ctx->pc = 0x1A2524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2520u;
    // 0x1a2524: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2520u, 0x1A2528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2528u;
label_1a2528:
    // 0x1a2528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a252c: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A252Cu;
    SET_GPR_U32(ctx, 31, 0x1A2534u);
    ctx->pc = 0x1A2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A252Cu;
    // 0x1a2530: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A252Cu, 0x1A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2534u;
label_1a2534:
    // 0x1a2534: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A2534u;
    {
        const bool branch_taken_0x1a2534 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2534u;
        // 0x1a2538: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2534) {
            ctx->pc = 0x1A2550u;
            goto label_1a2550;
        }
    }
    ctx->pc = 0x1A253Cu;
    // 0x1a253c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2540: 0xc068d2c  jal         func_1A34B0
    ctx->pc = 0x1A2540u;
    SET_GPR_U32(ctx, 31, 0x1A2548u);
    ctx->pc = 0x1A2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2540u;
    // 0x1a2544: 0x24a5a298  addiu       $a1, $a1, -0x5D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A34B0u, 0x1A2540u, 0x1A2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1A2548u;
    {
        const bool branch_taken_0x1a2548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2548u;
        // 0x1a254c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2548) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2550u;
label_1a2550:
    // 0x1a2550: 0x16550003  bne         $s2, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2550u;
    {
        const bool branch_taken_0x1a2550 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2550u;
        // 0x1a2554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2550) {
            ctx->pc = 0x1A2560u;
            goto label_1a2560;
        }
    }
    ctx->pc = 0x1A2558u;
    // 0x1a2558: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x1A255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2558u;
    // 0x1a255c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2558u, 0x1A2560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x16f50003  bne         $s7, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2560u;
    {
        const bool branch_taken_0x1a2560 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2560u;
        // 0x1a2564: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2560) {
            ctx->pc = 0x1A2570u;
            goto label_1a2570;
        }
    }
    ctx->pc = 0x1A2568u;
    // 0x1a2568: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2568u;
    SET_GPR_U32(ctx, 31, 0x1A2570u);
    ctx->pc = 0x1A256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2568u;
    // 0x1a256c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2568u, 0x1A2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2570u;
label_1a2570:
    // 0x1a2570: 0x16350013  bne         $s1, $s5, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A2570u;
    {
        const bool branch_taken_0x1a2570 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1A2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2570u;
        // 0x1a2574: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2570) {
            ctx->pc = 0x1A25C0u;
            goto label_1a25c0;
        }
    }
    ctx->pc = 0x1A2578u;
    // 0x1a2578: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a257c: 0xc068624  jal         func_1A1890
    ctx->pc = 0x1A257Cu;
    SET_GPR_U32(ctx, 31, 0x1A2584u);
    ctx->pc = 0x1A2580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A257Cu;
    // 0x1a2580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1890u, 0x1A257Cu, 0x1A2584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2584u;
label_1a2584:
    // 0x1a2584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2588: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2588u;
    SET_GPR_U32(ctx, 31, 0x1A2590u);
    ctx->pc = 0x1A258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2588u;
    // 0x1a258c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2588u, 0x1A2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2590u;
label_1a2590:
    // 0x1a2590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2594: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A2594u;
    {
        const bool branch_taken_0x1a2594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2594u;
        // 0x1a2598: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2594) {
            ctx->pc = 0x1A25C0u;
            goto label_1a25c0;
        }
    }
    ctx->pc = 0x1A259Cu;
    // 0x1a259c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a25a0:
    // 0x1a25a0: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A25A0u;
    SET_GPR_U32(ctx, 31, 0x1A25A8u);
    ctx->pc = 0x1A25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25A0u;
    // 0x1a25a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A25A0u, 0x1A25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25A8u;
label_1a25a8:
    // 0x1a25a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a25a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a25ac: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1a25acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1a25b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A25B0u;
    {
        const bool branch_taken_0x1a25b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b0) {
            ctx->pc = 0x1A25A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a25a0;
        }
    }
    ctx->pc = 0x1A25B8u;
    // 0x1a25b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A25B8u;
    {
        const bool branch_taken_0x1a25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B8u;
        // 0x1a25bc: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b8) {
            ctx->pc = 0x1A25C4u;
            goto label_1a25c4;
        }
    }
    ctx->pc = 0x1A25C0u;
label_1a25c0:
    // 0x1a25c0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1a25c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1a25c4:
    // 0x1a25c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a25c8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x1a25c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1a25cc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x1a25d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a25d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a25d4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a25d8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A25D8u;
            // 0x1a25dc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25ECu;
            goto label_1a25ec;
        }
    }
    ctx->pc = 0x1A25E0u;
    // 0x1a25e0: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A25E0u;
    SET_GPR_U32(ctx, 31, 0x1A25E8u);
    ctx->pc = 0x1A25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25E0u;
    // 0x1a25e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A25E0u, 0x1A25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A25E8u;
label_1a25e8:
    // 0x1a25e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a25e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a25ec:
    // 0x1a25ec: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x1a25ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x1a25f0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a25f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1a25f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a25f8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a25f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a25fc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a2600: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x1a2604: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x1a2604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
    // 0x1a2608: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1a260c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A260Cu;
    {
        const bool branch_taken_0x1a260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A260Cu;
        // 0x1a2610: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a260c) {
            ctx->pc = 0x1A2638u;
            goto label_1a2638;
        }
    }
    ctx->pc = 0x1A2614u;
    // 0x1a2614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2618: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A2618u;
    SET_GPR_U32(ctx, 31, 0x1A2620u);
    ctx->pc = 0x1A261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2618u;
    // 0x1a261c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A2618u, 0x1A2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2620u;
label_1a2620:
    // 0x1a2620: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a2620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a2624: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a2628: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a262c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x1a2630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a2634: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a2634u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1a2638:
    // 0x1a2638: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1A2638u;
    {
        const bool branch_taken_0x1a2638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2638u;
        // 0x1a263c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2638) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2640u;
    // 0x1a2640: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A2640u;
    SET_GPR_U32(ctx, 31, 0x1A2648u);
    ctx->pc = 0x1A2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2640u;
    // 0x1a2644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A2640u, 0x1A2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2648u;
label_1a2648:
    // 0x1a2648: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1A2648u;
    {
        const bool branch_taken_0x1a2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2648u;
        // 0x1a264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2648) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2650u;
label_1a2650:
    // 0x1a2650: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1a2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x1a2654: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2658: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A2658u;
    {
        const bool branch_taken_0x1a2658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2658) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2660u;
    // 0x1a2660: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a2660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1a2664: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2668: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A2668u;
    {
        const bool branch_taken_0x1a2668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2668) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A2670u;
    // 0x1a2670: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1a2674: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2678: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A2678u;
    {
        const bool branch_taken_0x1a2678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2678) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2680u;
    // 0x1a2680: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x1a2684: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2688: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2688u;
    {
        const bool branch_taken_0x1a2688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2688) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2690u;
    // 0x1a2690: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1a2694: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2698: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2698u;
    {
        const bool branch_taken_0x1a2698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2698) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A26A0u;
    // 0x1a26a0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x1a26a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a26a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A26A8u;
    {
        const bool branch_taken_0x1a26a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a26a8) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A26B0u;
    // 0x1a26b0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1a26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x1a26b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a26b8: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A26B8u;
    {
        const bool branch_taken_0x1a26b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a26b8) {
            ctx->pc = 0x1A2710u;
            goto label_1a2710;
        }
    }
    ctx->pc = 0x1A26C0u;
label_1a26c0:
    // 0x1a26c0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a26c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x1a26c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a26c8:
    // 0x1a26c8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A26C8u;
    {
        const bool branch_taken_0x1a26c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26c8) {
            ctx->pc = 0x1A26F4u;
            goto label_1a26f4;
        }
    }
    ctx->pc = 0x1A26D0u;
    // 0x1a26d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26d4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A26D4u;
    SET_GPR_U32(ctx, 31, 0x1A26DCu);
    ctx->pc = 0x1A26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26D4u;
    // 0x1a26d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A26D4u, 0x1A26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26DCu;
label_1a26dc:
    // 0x1a26dc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1a26e0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a26e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a26e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a26ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a26f0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1a26f4:
    // 0x1a26f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A26F4u;
    {
        const bool branch_taken_0x1a26f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F4u;
        // 0x1a26f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f4) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A26FCu;
    // 0x1a26fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2700: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A2700u;
    SET_GPR_U32(ctx, 31, 0x1A2708u);
    ctx->pc = 0x1A2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2700u;
    // 0x1a2704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A2700u, 0x1A2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2708u;
    {
        const bool branch_taken_0x1a2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2708u;
        // 0x1a270c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2708) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2710u;
label_1a2710:
    // 0x1a2710: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1a2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1a2714: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2718: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2720u;
    // 0x1a2720: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a2724: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2724u;
    {
        const bool branch_taken_0x1a2724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2724u;
        // 0x1a2728: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2724) {
            ctx->pc = 0x1A273Cu;
            goto label_1a273c;
        }
    }
    ctx->pc = 0x1A272Cu;
    // 0x1a272c: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A272Cu;
    SET_GPR_U32(ctx, 31, 0x1A2734u);
    ctx->pc = 0x1A2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A272Cu;
    // 0x1a2730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A272Cu, 0x1A2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2734u;
label_1a2734:
    // 0x1a2734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2738:
    // 0x1a2738: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a2738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a273c:
    // 0x1a273c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a2740: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a2744: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a2744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a2748: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a274c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a274cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2750: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a2750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a2754: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a2754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2758: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a2758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a275c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1a2760u;
}
