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

// Function: entry_001b0920
// Address: 0x1b0920 - 0x1b09b4
void entry_001b0920_0x1b0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0920_0x1b0920");
#endif

    switch (ctx->pc) {
        case 0x1b0954u: goto label_1b0954;
        case 0x1b0968u: goto label_1b0968;
        case 0x1b099cu: goto label_1b099c;
        case 0x1b09b0u: goto label_1b09b0;
        default: break;
    }

    ctx->pc = 0x1b0920u;

    // 0x1b0920: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b0924: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0928: 0x24508480  addiu       $s0, $v0, -0x7B80
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x1b092c: 0x24848cc8  addiu       $a0, $a0, -0x7338
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937800));
    // 0x1b0930: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b0938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b093c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b093cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0944: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0948: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1b0948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b094c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B094Cu;
    SET_GPR_U32(ctx, 31, 0x1B0954u);
    ctx->pc = 0x1B0950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B094Cu;
    // 0x1b0950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B094Cu, 0x1B0954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0954u;
label_1b0954:
    // 0x1b0954: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0954u;
    {
        const bool branch_taken_0x1b0954 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0954) {
            ctx->pc = 0x1B0958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0954u;
            // 0x1b0958: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0970u;
            goto label_1b0970;
        }
    }
    ctx->pc = 0x1B095Cu;
    // 0x1b095c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0960: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0960u;
    SET_GPR_U32(ctx, 31, 0x1B0968u);
    ctx->pc = 0x1B0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0960u;
    // 0x1b0964: 0x8c4472ac  lw          $a0, 0x72AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0960u, 0x1B0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0968u;
label_1b0968:
    // 0x1b0968: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B0968u;
    {
        const bool branch_taken_0x1b0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0968u;
        // 0x1b096c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0968) {
            ctx->pc = 0x1B09B4u;
            return;
        }
    }
    ctx->pc = 0x1B0970u;
label_1b0970:
    // 0x1b0970: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0974: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1b0974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1b0978: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1b0978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1b097c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1b097cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1b0980: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x1b0980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b0984: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x1b0984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b0988: 0x8e637290  lw          $v1, 0x7290($s3)
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29328)));
    // 0x1b098c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B098Cu;
    {
        const bool branch_taken_0x1b098c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B098Cu;
        // 0x1b0990: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b098c) {
            ctx->pc = 0x1B099Cu;
            goto label_1b099c;
        }
    }
    ctx->pc = 0x1B0994u;
    // 0x1b0994: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0994u;
    SET_GPR_U32(ctx, 31, 0x1B099Cu);
    ctx->pc = 0x1B0998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0994u;
    // 0x1b0998: 0x2484ab58  addiu       $a0, $a0, -0x54A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0994u, 0x1B099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B099Cu;
label_1b099c:
    // 0x1b099c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b09a0: 0x2111825  or          $v1, $s0, $s1
    ctx->pc = 0x1b09a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x1b09a4: 0x8c4472ac  lw          $a0, 0x72AC($v0)
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2872ACu));
    // 0x1b09a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B09A8u;
    SET_GPR_U32(ctx, 31, 0x1B09B0u);
    ctx->pc = 0x1B09ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B09A8u;
    // 0x1b09ac: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B09A8u, 0x1B09B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B09B0u;
label_1b09b0:
    // 0x1b09b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b09b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b09b4u;
}
