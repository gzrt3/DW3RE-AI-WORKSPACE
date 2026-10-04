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

// Function: FUN_001abf90
// Address: 0x1abf90 - 0x1ac190
void FUN_001abf90_0x1abf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001abf90_0x1abf90");
#endif

    switch (ctx->pc) {
        case 0x1abfc8u: goto label_1abfc8;
        case 0x1abfd8u: goto label_1abfd8;
        case 0x1ac024u: goto label_1ac024;
        case 0x1ac088u: goto label_1ac088;
        case 0x1ac118u: goto label_1ac118;
        case 0x1ac154u: goto label_1ac154;
        default: break;
    }

    ctx->pc = 0x1abf90u;

    // 0x1abf90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1abf94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1abf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1abf98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1abf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1abf9c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfa0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1abfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1abfa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1abfa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abfac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1abfacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfb0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1abfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1abfb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1abfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abfb8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1abfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1abfbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1abfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1abfc0: 0xc06aef0  jal         func_1ABBC0
    ctx->pc = 0x1ABFC0u;
    SET_GPR_U32(ctx, 31, 0x1ABFC8u);
    ctx->pc = 0x1ABFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABFC0u;
    // 0x1abfc4: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABBC0u, 0x1ABFC0u, 0x1ABFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFC8u;
label_1abfc8:
    // 0x1abfc8: 0x4400069  bltz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x1ABFC8u;
    {
        const bool branch_taken_0x1abfc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ABFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFC8u;
        // 0x1abfcc: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfc8) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1ABFD0u;
    // 0x1abfd0: 0xc06af30  jal         func_1ABCC0
    ctx->pc = 0x1ABFD0u;
    SET_GPR_U32(ctx, 31, 0x1ABFD8u);
    ctx->pc = 0x1ABCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABCC0u, 0x1ABFD0u, 0x1ABFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABFD8u;
label_1abfd8:
    // 0x1abfd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABFD8u;
    {
        const bool branch_taken_0x1abfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFD8u;
        // 0x1abfdc: 0x3c140037  lui         $s4, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfd8) {
            ctx->pc = 0x1ABFECu;
            goto label_1abfec;
        }
    }
    ctx->pc = 0x1ABFE0u;
    // 0x1abfe0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1abfe4: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1ABFE4u;
    {
        const bool branch_taken_0x1abfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFE4u;
        // 0x1abfe8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abfe4) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x1abfecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abff0: 0x26924780  addiu       $s2, $s4, 0x4780
    ctx->pc = 0x1abff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 18304));
    // 0x1abff4: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1ABFF4u;
    {
        const bool branch_taken_0x1abff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFF4u;
        // 0x1abff8: 0xae934780  sw          $s3, 0x4780($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 18304), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abff4) {
            ctx->pc = 0x1AC120u;
            goto label_1ac120;
        }
    }
    ctx->pc = 0x1ABFFCu;
    // 0x1abffc: 0x2a2200fd  slti        $v0, $s1, 0xFD
    ctx->pc = 0x1abffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)253) ? 1 : 0);
    // 0x1ac000: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1AC000u;
    {
        const bool branch_taken_0x1ac000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC000u;
        // 0x1ac004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac000) {
            ctx->pc = 0x1AC10Cu;
            goto label_1ac10c;
        }
    }
    ctx->pc = 0x1AC008u;
    // 0x1ac008: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1ac008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1ac00c: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x1ac00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1ac010: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1ac014: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC080u;
            goto label_1ac080;
        }
    }
    ctx->pc = 0x1AC01Cu;
    // 0x1ac01c: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1ac020: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac024:
    // 0x1ac024: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1ac024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ac028: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1ac028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ac02c: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x1ac02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac030: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x1ac030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac034: 0x68e80017  ldl         $t0, 0x17($a3)
    ctx->pc = 0x1ac034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1ac038: 0x6ce80010  ldr         $t0, 0x10($a3)
    ctx->pc = 0x1ac038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1ac03c: 0x68e9001f  ldl         $t1, 0x1F($a3)
    ctx->pc = 0x1ac03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ac040: 0x6ce90018  ldr         $t1, 0x18($a3)
    ctx->pc = 0x1ac040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ac044: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x1ac044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac048: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x1ac048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac04c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1ac04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac050: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1ac050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac054: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x1ac054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac058: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x1ac058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac05c: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x1ac05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac060: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x1ac060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac064: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1ac064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1ac068: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ac06c: 0x0  nop
    ctx->pc = 0x1ac06cu;
    // NOP
    // 0x1ac070: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1AC070u;
    {
        const bool branch_taken_0x1ac070 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac070) {
            ctx->pc = 0x1AC024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac024;
        }
    }
    ctx->pc = 0x1AC078u;
    // 0x1ac078: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1AC078u;
    {
        const bool branch_taken_0x1ac078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac078) {
            ctx->pc = 0x1AC0BCu;
            goto label_1ac0bc;
        }
    }
    ctx->pc = 0x1AC080u;
label_1ac080:
    // 0x1ac080: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ac080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1ac084: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac088:
    // 0x1ac088: 0xdcea0000  ld          $t2, 0x0($a3)
    ctx->pc = 0x1ac088u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ac08c: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x1ac08cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ac090: 0xdce60010  ld          $a2, 0x10($a3)
    ctx->pc = 0x1ac090u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1ac094: 0xdce80018  ld          $t0, 0x18($a3)
    ctx->pc = 0x1ac094u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1ac098: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1ac098u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1ac09c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x1ac09cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x1ac0a0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x1ac0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x1ac0a4: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1ac0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1ac0a8: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1ac0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1ac0ac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ac0b0: 0x0  nop
    ctx->pc = 0x1ac0b0u;
    // NOP
    // 0x1ac0b4: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1AC0B4u;
    {
        const bool branch_taken_0x1ac0b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac0b4) {
            ctx->pc = 0x1AC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac088;
        }
    }
    ctx->pc = 0x1AC0BCu;
label_1ac0bc:
    // 0x1ac0bc: 0x68e90007  ldl         $t1, 0x7($a3)
    ctx->pc = 0x1ac0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1ac0c0: 0x6ce90000  ldr         $t1, 0x0($a3)
    ctx->pc = 0x1ac0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1ac0c4: 0x68ea000f  ldl         $t2, 0xF($a3)
    ctx->pc = 0x1ac0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1ac0c8: 0x6cea0008  ldr         $t2, 0x8($a3)
    ctx->pc = 0x1ac0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1ac0cc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1ac0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ac0d0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1ac0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ac0d4: 0x88e8001b  lwl         $t0, 0x1B($a3)
    ctx->pc = 0x1ac0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x1ac0d8: 0x98e80018  lwr         $t0, 0x18($a3)
    ctx->pc = 0x1ac0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x1ac0dc: 0xb0890007  sdl         $t1, 0x7($a0)
    ctx->pc = 0x1ac0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0e0: 0xb4890000  sdr         $t1, 0x0($a0)
    ctx->pc = 0x1ac0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0e4: 0xb08a000f  sdl         $t2, 0xF($a0)
    ctx->pc = 0x1ac0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0e8: 0xb48a0008  sdr         $t2, 0x8($a0)
    ctx->pc = 0x1ac0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0ec: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x1ac0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0f0: 0xb4860010  sdr         $a2, 0x10($a0)
    ctx->pc = 0x1ac0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac0f4: 0xa888001b  swl         $t0, 0x1B($a0)
    ctx->pc = 0x1ac0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ac0f8: 0x26a34780  addiu       $v1, $s5, 0x4780
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1ac0fc: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1ac0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1ac100: 0xb8880018  swr         $t0, 0x18($a0)
    ctx->pc = 0x1ac100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1ac104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC104u;
    {
        const bool branch_taken_0x1ac104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC104u;
        // 0x1ac108: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac104) {
            ctx->pc = 0x1AC128u;
            goto label_1ac128;
        }
    }
    ctx->pc = 0x1AC10Cu;
label_1ac10c:
    // 0x1ac10c: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1ac10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1ac110: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1AC110u;
    SET_GPR_U32(ctx, 31, 0x1AC118u);
    ctx->pc = 0x1AC114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC110u;
    // 0x1ac114: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1AC110u, 0x1AC118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC118u;
label_1ac118:
    // 0x1ac118: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC118u;
    {
        const bool branch_taken_0x1ac118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC118u;
        // 0x1ac11c: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac118) {
            ctx->pc = 0x1AC124u;
            goto label_1ac124;
        }
    }
    ctx->pc = 0x1AC120u;
label_1ac120:
    // 0x1ac120: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1ac120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1ac124:
    // 0x1ac124: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1ac128:
    // 0x1ac128: 0x26b04780  addiu       $s0, $s5, 0x4780
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 18304));
    // 0x1ac12c: 0x24a44980  addiu       $a0, $a1, 0x4980
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 18816));
    // 0x1ac130: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ac130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ac134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ac138: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ac138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac13c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ac13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac140: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1ac140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1ac144: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ac144u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac148: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac14c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AC14Cu;
    SET_GPR_U32(ctx, 31, 0x1AC154u);
    ctx->pc = 0x1AC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC14Cu;
    // 0x1ac150: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AC14Cu, 0x1AC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC154u;
label_1ac154:
    // 0x1ac154: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC154u;
    {
        const bool branch_taken_0x1ac154 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ac154) {
            ctx->pc = 0x1AC158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC154u;
            // 0x1ac158: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC168u;
            goto label_1ac168;
        }
    }
    ctx->pc = 0x1AC15Cu;
    // 0x1ac15c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1ac15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1ac160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC160u;
        // 0x1ac164: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1AC168u;
label_1ac168:
    // 0x1ac168: 0x8e824780  lw          $v0, 0x4780($s4)
    ctx->pc = 0x1ac168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18304)));
    // 0x1ac16c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1ac16cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1ac170:
    // 0x1ac170: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ac170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ac174: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ac174u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ac178: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ac178u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ac17c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ac17cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac180: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ac180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac184: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac188: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac18c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ac18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac190u;
}
