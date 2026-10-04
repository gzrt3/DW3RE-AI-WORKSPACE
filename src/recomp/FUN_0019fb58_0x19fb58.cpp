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

// Function: FUN_0019fb58
// Address: 0x19fb58 - 0x19fc78
void FUN_0019fb58_0x19fb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019fb58_0x19fb58");
#endif

    switch (ctx->pc) {
        case 0x19fb58u: goto label_19fb58;
        case 0x19fb5cu: goto label_19fb5c;
        case 0x19fb60u: goto label_19fb60;
        case 0x19fb64u: goto label_19fb64;
        case 0x19fb68u: goto label_19fb68;
        case 0x19fb6cu: goto label_19fb6c;
        case 0x19fb70u: goto label_19fb70;
        case 0x19fb74u: goto label_19fb74;
        case 0x19fb78u: goto label_19fb78;
        case 0x19fb7cu: goto label_19fb7c;
        case 0x19fb80u: goto label_19fb80;
        case 0x19fb84u: goto label_19fb84;
        case 0x19fb88u: goto label_19fb88;
        case 0x19fb8cu: goto label_19fb8c;
        case 0x19fb90u: goto label_19fb90;
        case 0x19fb94u: goto label_19fb94;
        case 0x19fb98u: goto label_19fb98;
        case 0x19fb9cu: goto label_19fb9c;
        case 0x19fba0u: goto label_19fba0;
        case 0x19fba4u: goto label_19fba4;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbacu: goto label_19fbac;
        case 0x19fbb0u: goto label_19fbb0;
        case 0x19fbb4u: goto label_19fbb4;
        case 0x19fbb8u: goto label_19fbb8;
        case 0x19fbbcu: goto label_19fbbc;
        case 0x19fbc0u: goto label_19fbc0;
        case 0x19fbc4u: goto label_19fbc4;
        case 0x19fbc8u: goto label_19fbc8;
        case 0x19fbccu: goto label_19fbcc;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbd4u: goto label_19fbd4;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbdcu: goto label_19fbdc;
        case 0x19fbe0u: goto label_19fbe0;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fbecu: goto label_19fbec;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fbf4u: goto label_19fbf4;
        case 0x19fbf8u: goto label_19fbf8;
        case 0x19fbfcu: goto label_19fbfc;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc04u: goto label_19fc04;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc10u: goto label_19fc10;
        case 0x19fc14u: goto label_19fc14;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc20u: goto label_19fc20;
        case 0x19fc24u: goto label_19fc24;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        default: break;
    }

    ctx->pc = 0x19fb58u;

label_19fb58:
    // 0x19fb58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_19fb5c:
    // 0x19fb5c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x19fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_19fb60:
    // 0x19fb60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19fb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19fb64:
    // 0x19fb64: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_19fb68:
    // 0x19fb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fb6c:
    // 0x19fb6c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19fb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19fb70:
    // 0x19fb70: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19fb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_19fb74:
    // 0x19fb74: 0x241301b2  addiu       $s3, $zero, 0x1B2
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_19fb78:
    // 0x19fb78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x19fb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_19fb7c:
    // 0x19fb7c: 0x241101b5  addiu       $s1, $zero, 0x1B5
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_19fb80:
    // 0x19fb80: 0x2447a178  addiu       $a3, $v0, -0x5E88
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943096));
label_19fb84:
    // 0x19fb84: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x19fb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19fb88:
    // 0x19fb88: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x19fb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19fb8c:
    // 0x19fb8c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x19fb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19fb90:
    // 0x19fb90: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x19fb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19fb94:
    // 0x19fb94: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x19fb94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19fb98:
    // 0x19fb98: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x19fb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19fb9c:
    // 0x19fb9c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x19fb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba0:
    // 0x19fba0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x19fba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba4:
    // 0x19fba4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x19fba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fba8:
    // 0x19fba8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x19fba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbac:
    // 0x19fbac: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x19fbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbb0:
    // 0x19fbb0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x19fbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbb4:
    // 0x19fbb4: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x19fbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19fbb8:
    // 0x19fbb8: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x19fbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19fbbc:
    // 0x19fbbc: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x19fbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19fbc0:
    // 0x19fbc0: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x19fbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19fbc4:
    // 0x19fbc4: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_19fbc8:
    // 0x19fbc8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x19fbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbcc:
    // 0x19fbcc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x19fbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd0:
    // 0x19fbd0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x19fbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd4:
    // 0x19fbd4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x19fbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19fbd8:
    // 0x19fbd8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x19fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_19fbdc:
    // 0x19fbdc: 0xc067e26  jal         func_19F898
label_19fbe0:
    if (ctx->pc == 0x19FBE0u) {
        ctx->pc = 0x19FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBDCu;
        // 0x19fbe0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBE4u;
        goto label_19fbe4;
    }
    ctx->pc = 0x19FBDCu;
    SET_GPR_U32(ctx, 31, 0x19FBE4u);
    ctx->pc = 0x19FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FBDCu;
    // 0x19fbe0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19FBDCu, 0x19FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBE4u;
label_19fbe4:
    // 0x19fbe4: 0x10000019  b           . + 4 + (0x19 << 2)
label_19fbe8:
    if (ctx->pc == 0x19FBE8u) {
        ctx->pc = 0x19FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBE4u;
        // 0x19fbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBECu;
        goto label_19fbec;
    }
    ctx->pc = 0x19FBE4u;
    {
        const bool branch_taken_0x19fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBE4u;
        // 0x19fbe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbe4) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FBECu;
label_19fbec:
    // 0x19fbec: 0x0  nop
    ctx->pc = 0x19fbecu;
    // NOP
label_19fbf0:
    // 0x19fbf0: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_19fbf4:
    if (ctx->pc == 0x19FBF4u) {
        ctx->pc = 0x19FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBF0u;
        // 0x19fbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FBF8u;
        goto label_19fbf8;
    }
    ctx->pc = 0x19FBF0u;
    {
        const bool branch_taken_0x19fbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x19fbf0) {
            ctx->pc = 0x19FBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FBF0u;
            // 0x19fbf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FC38u;
            goto label_19fc38;
        }
    }
    ctx->pc = 0x19FBF8u;
label_19fbf8:
    // 0x19fbf8: 0xc067d96  jal         func_19F658
label_19fbfc:
    if (ctx->pc == 0x19FBFCu) {
        ctx->pc = 0x19FC00u;
        goto label_19fc00;
    }
    ctx->pc = 0x19FBF8u;
    SET_GPR_U32(ctx, 31, 0x19FC00u);
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19FBF8u, 0x19FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc04:
    // 0x19fc04: 0xc067dd2  jal         func_19F748
label_19fc08:
    if (ctx->pc == 0x19FC08u) {
        ctx->pc = 0x19FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC04u;
        // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC0Cu;
        goto label_19fc0c;
    }
    ctx->pc = 0x19FC04u;
    SET_GPR_U32(ctx, 31, 0x19FC0Cu);
    ctx->pc = 0x19FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC04u;
    // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FC04u, 0x19FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC0Cu;
label_19fc0c:
    // 0x19fc0c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x19fc0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fc10:
    // 0x19fc10: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x19fc10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_19fc14:
    // 0x19fc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19fc18:
    // 0x19fc18: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19fc1c:
    // 0x19fc1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19fc20:
    // 0x19fc20: 0x40f809  jalr        $v0
label_19fc24:
    if (ctx->pc == 0x19FC24u) {
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC28u;
        goto label_19fc28;
    }
    ctx->pc = 0x19FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FC28u);
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC20u, 0x19FC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC28u;
label_19fc28:
    // 0x19fc28: 0xc067e26  jal         func_19F898
label_19fc2c:
    if (ctx->pc == 0x19FC2Cu) {
        ctx->pc = 0x19FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC28u;
        // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC30u;
        goto label_19fc30;
    }
    ctx->pc = 0x19FC28u;
    SET_GPR_U32(ctx, 31, 0x19FC30u);
    ctx->pc = 0x19FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC28u;
    // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19FC28u, 0x19FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC30u;
label_19fc30:
    // 0x19fc30: 0x10000006  b           . + 4 + (0x6 << 2)
label_19fc34:
    if (ctx->pc == 0x19FC34u) {
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC38u;
        goto label_19fc38;
    }
    ctx->pc = 0x19FC30u;
    {
        const bool branch_taken_0x19fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc30) {
            ctx->pc = 0x19FC4Cu;
            goto label_19fc4c;
        }
    }
    ctx->pc = 0x19FC38u;
label_19fc38:
    // 0x19fc38: 0xc067d96  jal         func_19F658
label_19fc3c:
    if (ctx->pc == 0x19FC3Cu) {
        ctx->pc = 0x19FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC38u;
        // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC40u;
        goto label_19fc40;
    }
    ctx->pc = 0x19FC38u;
    SET_GPR_U32(ctx, 31, 0x19FC40u);
    ctx->pc = 0x19FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC38u;
    // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19FC38u, 0x19FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC40u;
label_19fc40:
    // 0x19fc40: 0xc067e26  jal         func_19F898
label_19fc44:
    if (ctx->pc == 0x19FC44u) {
        ctx->pc = 0x19FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC40u;
        // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC48u;
        goto label_19fc48;
    }
    ctx->pc = 0x19FC40u;
    SET_GPR_U32(ctx, 31, 0x19FC48u);
    ctx->pc = 0x19FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC40u;
    // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19FC40u, 0x19FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC48u;
label_19fc48:
    // 0x19fc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc4c:
    // 0x19fc4c: 0xc067d54  jal         func_19F550
label_19fc50:
    if (ctx->pc == 0x19FC50u) {
        ctx->pc = 0x19FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC4Cu;
        // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC54u;
        goto label_19fc54;
    }
    ctx->pc = 0x19FC4Cu;
    SET_GPR_U32(ctx, 31, 0x19FC54u);
    ctx->pc = 0x19FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC4Cu;
    // 0x19fc50: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19FC4Cu, 0x19FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC54u;
label_19fc54:
    // 0x19fc54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc58:
    // 0x19fc58: 0x1051ffe7  beq         $v0, $s1, . + 4 + (-0x19 << 2)
label_19fc5c:
    if (ctx->pc == 0x19FC5Cu) {
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC60u;
        goto label_19fc60;
    }
    ctx->pc = 0x19FC58u;
    {
        const bool branch_taken_0x19fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x19FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC58u;
        // 0x19fc5c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc58) {
            ctx->pc = 0x19FBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbf8;
        }
    }
    ctx->pc = 0x19FC60u;
label_19fc60:
    // 0x19fc60: 0x1053ffe3  beq         $v0, $s3, . + 4 + (-0x1D << 2)
label_19fc64:
    if (ctx->pc == 0x19FC64u) {
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC68u;
        goto label_19fc68;
    }
    ctx->pc = 0x19FC60u;
    {
        const bool branch_taken_0x19fc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x19FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC60u;
        // 0x19fc64: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc60) {
            ctx->pc = 0x19FBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbf0;
        }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19fc68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19fc6c:
    // 0x19fc6c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19fc6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19fc70:
    // 0x19fc70: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19fc74:
    // 0x19fc74: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19fc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x19fc78u;
}
