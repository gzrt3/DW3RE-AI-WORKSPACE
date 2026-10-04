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

// Function: FUN_001ac398
// Address: 0x1ac398 - 0x1ac5b4
void FUN_001ac398_0x1ac398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac398_0x1ac398");
#endif

    switch (ctx->pc) {
        case 0x1ac3d0u: goto label_1ac3d0;
        case 0x1ac3e0u: goto label_1ac3e0;
        case 0x1ac408u: goto label_1ac408;
        case 0x1ac440u: goto label_1ac440;
        case 0x1ac4a8u: goto label_1ac4a8;
        case 0x1ac538u: goto label_1ac538;
        case 0x1ac57cu: goto label_1ac57c;
        default: break;
    }

    ctx->pc = 0x1ac398u;

    // 0x1ac398: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ac398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ac39c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1ac39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1ac3a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1ac3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1ac3a4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ac3ac: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ac3acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3b0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ac3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1ac3b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac3b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ac3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ac3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ac3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ac3c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ac3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3c8: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1AC3C8u;
    SET_GPR_U32(ctx, 31, 0x1AC3D0u);
    ctx->pc = 0x1AC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC3C8u;
    // 0x1ac3cc: 0xffb50060  sd          $s5, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1AC3C8u, 0x1AC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3D0u;
label_1ac3d0:
    // 0x1ac3d0: 0x4400071  bltz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1AC3D0u;
    {
        const bool branch_taken_0x1ac3d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1AC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3D0u;
        // 0x1ac3d4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3d0) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3D8u;
    // 0x1ac3d8: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1AC3D8u;
    SET_GPR_U32(ctx, 31, 0x1AC3E0u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1AC3D8u, 0x1AC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC3E0u;
label_1ac3e0:
    // 0x1ac3e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC3E0u;
    {
        const bool branch_taken_0x1ac3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac3e0) {
            ctx->pc = 0x1AC3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC3E0u;
            // 0x1ac3e4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC3F4u;
            goto label_1ac3f4;
        }
    }
    ctx->pc = 0x1AC3E8u;
    // 0x1ac3e8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac3ec: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1AC3ECu;
    {
        const bool branch_taken_0x1ac3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC3ECu;
        // 0x1ac3f0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac3ec) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC3F4u;
label_1ac3f4:
    // 0x1ac3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac3f8: 0x24514788  addiu       $s1, $v0, 0x4788
    ctx->pc = 0x1ac3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18312));
    // 0x1ac3fc: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1ac3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ac400: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1AC400u;
    SET_GPR_U32(ctx, 31, 0x1AC408u);
    ctx->pc = 0x1AC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC400u;
    // 0x1ac404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1AC400u, 0x1AC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC408u;
label_1ac408:
    // 0x1ac408: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1ac408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x1ac40c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1AC40Cu;
    {
        const bool branch_taken_0x1ac40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC40Cu;
        // 0x1ac410: 0xa0400103  sb          $zero, 0x103($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 259), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac40c) {
            ctx->pc = 0x1AC540u;
            goto label_1ac540;
        }
    }
    ctx->pc = 0x1AC414u;
    // 0x1ac414: 0x2a4200fd  slti        $v0, $s2, 0xFD
    ctx->pc = 0x1ac414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1ac418: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1AC418u;
    {
        const bool branch_taken_0x1ac418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC418u;
        // 0x1ac41c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac418) {
            ctx->pc = 0x1AC528u;
            goto label_1ac528;
        }
    }
    ctx->pc = 0x1AC420u;
    // 0x1ac420: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1ac424: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1ac428: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ac42c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AC42Cu;
    {
        const bool branch_taken_0x1ac42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC42Cu;
        // 0x1ac430: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac42c) {
            ctx->pc = 0x1AC49Cu;
            goto label_1ac49c;
        }
    }
    ctx->pc = 0x1AC434u;
    // 0x1ac434: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1ac438: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac438u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1ac43c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac440:
    // 0x1ac440: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac444: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac448: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ac44c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ac450: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ac454: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ac458: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x1ac458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ac45c: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x1ac45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ac460: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac464: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac468: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac46c: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac470: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac474: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac478: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ac478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac47c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ac47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac480: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ac484: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ac488: 0x0  nop
    ctx->pc = 0x1ac488u;
    // NOP
    // 0x1ac48c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AC48Cu;
    {
        const bool branch_taken_0x1ac48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac48c) {
            ctx->pc = 0x1AC440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac440;
        }
    }
    ctx->pc = 0x1AC494u;
    // 0x1ac494: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC494u;
    {
        const bool branch_taken_0x1ac494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac494) {
            ctx->pc = 0x1AC4DCu;
            goto label_1ac4dc;
        }
    }
    ctx->pc = 0x1AC49Cu;
label_1ac49c:
    // 0x1ac49c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1ac4a0: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac4a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1ac4a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac4a8:
    // 0x1ac4a8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x1ac4a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac4ac: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1ac4acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ac4b0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x1ac4b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ac4b4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x1ac4b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1ac4b8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1ac4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1ac4bc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1ac4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1ac4c0: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x1ac4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x1ac4c4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1ac4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x1ac4c8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1ac4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ac4cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ac4d0: 0x0  nop
    ctx->pc = 0x1ac4d0u;
    // NOP
    // 0x1ac4d4: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AC4D4u;
    {
        const bool branch_taken_0x1ac4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac4d4) {
            ctx->pc = 0x1AC4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac4a8;
        }
    }
    ctx->pc = 0x1AC4DCu;
label_1ac4dc:
    // 0x1ac4dc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x1ac4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac4e0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x1ac4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac4e4: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x1ac4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1ac4e8: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x1ac4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1ac4ec: 0x68680017  ldl         $t0, 0x17($v1)
    ctx->pc = 0x1ac4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ac4f0: 0x6c680010  ldr         $t0, 0x10($v1)
    ctx->pc = 0x1ac4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ac4f4: 0x8869001b  lwl         $t1, 0x1B($v1)
    ctx->pc = 0x1ac4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x1ac4f8: 0x98690018  lwr         $t1, 0x18($v1)
    ctx->pc = 0x1ac4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x1ac4fc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x1ac4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac500: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x1ac500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac504: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x1ac504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac508: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x1ac508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac50c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac510: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac514: 0xa889001b  swl         $t1, 0x1B($a0)
    ctx->pc = 0x1ac514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ac518: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ac518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ac51c: 0xb8890018  swr         $t1, 0x18($a0)
    ctx->pc = 0x1ac51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ac520: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AC520u;
    {
        const bool branch_taken_0x1ac520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC520u;
        // 0x1ac524: 0xaea24780  sw          $v0, 0x4780($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 18304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac520) {
            ctx->pc = 0x1AC550u;
            goto label_1ac550;
        }
    }
    ctx->pc = 0x1AC528u;
label_1ac528:
    // 0x1ac528: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1ac528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1ac52c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ac52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac530: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1AC530u;
    SET_GPR_U32(ctx, 31, 0x1AC538u);
    ctx->pc = 0x1AC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC530u;
    // 0x1ac534: 0x3c150037  lui         $s5, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1AC530u, 0x1AC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC538u;
label_1ac538:
    // 0x1ac538: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC538u;
    {
        const bool branch_taken_0x1ac538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC538u;
        // 0x1ac53c: 0xae32fff8  sw          $s2, -0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac538) {
            ctx->pc = 0x1AC54Cu;
            goto label_1ac54c;
        }
    }
    ctx->pc = 0x1AC540u;
label_1ac540:
    // 0x1ac540: 0xa0400104  sb          $zero, 0x104($v0)
    ctx->pc = 0x1ac540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 260), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac544: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1ac544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1ac548: 0xae20fff8  sw          $zero, -0x8($s1)
    ctx->pc = 0x1ac548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), GPR_U32(ctx, 0));
label_1ac54c:
    // 0x1ac54c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac550:
    // 0x1ac550: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1ac554: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
    // 0x1ac558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ac558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac55c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac564: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac568: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ac56c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac56cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac570: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac574: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC574u;
    SET_GPR_U32(ctx, 31, 0x1AC57Cu);
    ctx->pc = 0x1AC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC574u;
    // 0x1ac578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC574u, 0x1AC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC57Cu;
label_1ac57c:
    // 0x1ac57c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC57Cu;
    {
        const bool branch_taken_0x1ac57c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac57c) {
            ctx->pc = 0x1AC580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC57Cu;
            // 0x1ac580: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC590u;
            goto label_1ac590;
        }
    }
    ctx->pc = 0x1AC584u;
    // 0x1ac584: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac588: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC588u;
    {
        const bool branch_taken_0x1ac588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC588u;
        // 0x1ac58c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac588) {
            ctx->pc = 0x1AC598u;
            goto label_1ac598;
        }
    }
    ctx->pc = 0x1AC590u;
label_1ac590:
    // 0x1ac590: 0x8ea24780  lw          $v0, 0x4780($s5)
    ctx->pc = 0x1ac590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18304)));
    // 0x1ac594: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1ac594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1ac598:
    // 0x1ac598: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ac598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ac59c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ac59cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ac5a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac5a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac5a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac5a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac5ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac5b4u;
}
