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

// Function: FUN_00234db0
// Address: 0x234db0 - 0x234e58
void FUN_00234db0_0x234db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00234db0_0x234db0");
#endif

    switch (ctx->pc) {
        case 0x234dd8u: goto label_234dd8;
        case 0x234de8u: goto label_234de8;
        case 0x234e38u: goto label_234e38;
        case 0x234e44u: goto label_234e44;
        default: break;
    }

    ctx->pc = 0x234db0u;

    // 0x234db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dbc: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x234dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x234dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234dc4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x234dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x234dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234dcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x234dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234dd0: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x234DD0u;
    SET_GPR_U32(ctx, 31, 0x234DD8u);
    ctx->pc = 0x234DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234DD0u;
    // 0x234dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x234DD0u, 0x234DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DD8u;
label_234dd8:
    // 0x234dd8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x234DD8u;
    {
        const bool branch_taken_0x234dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DD8u;
        // 0x234ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dd8) {
            ctx->pc = 0x234E48u;
            goto label_234e48;
        }
    }
    ctx->pc = 0x234DE0u;
    // 0x234de0: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x234DE0u;
    SET_GPR_U32(ctx, 31, 0x234DE8u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x234DE0u, 0x234DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DE8u;
label_234de8:
    // 0x234de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234dec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234df0: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x234df4: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x234DF4u;
    {
        const bool branch_taken_0x234df4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DF4u;
        // 0x234df8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234df4) {
            ctx->pc = 0x234E3Cu;
            goto label_234e3c;
        }
    }
    ctx->pc = 0x234DFCu;
    // 0x234dfc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x234dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x234e00: 0x2449ad00  addiu       $t1, $v0, -0x5300
    ctx->pc = 0x234e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x234e04: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x234e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x234e08: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x234e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x234e0c: 0x6a47000f  ldl         $a3, 0xF($s2)
    ctx->pc = 0x234e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x234e10: 0x6e470008  ldr         $a3, 0x8($s2)
    ctx->pc = 0x234e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x234e14: 0x6a480017  ldl         $t0, 0x17($s2)
    ctx->pc = 0x234e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x234e18: 0x6e480010  ldr         $t0, 0x10($s2)
    ctx->pc = 0x234e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x234e1c: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x234e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234e20: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x234e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234e24: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x234e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234e28: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x234e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234e2c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x234e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x234e30: 0xc08d192  jal         func_234648
    ctx->pc = 0x234E30u;
    SET_GPR_U32(ctx, 31, 0x234E38u);
    ctx->pc = 0x234E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E30u;
    // 0x234e34: 0xb5280010  sdr         $t0, 0x10($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x234E30u, 0x234E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E38u;
label_234e38:
    // 0x234e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234e3c:
    // 0x234e3c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x234E3Cu;
    SET_GPR_U32(ctx, 31, 0x234E44u);
    ctx->pc = 0x234E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234E3Cu;
    // 0x234e40: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x234E3Cu, 0x234E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E44u;
label_234e44:
    // 0x234e44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x234e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234e48:
    // 0x234e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x234e58u;
}
