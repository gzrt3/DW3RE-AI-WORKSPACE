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

// Function: FUN_001b0e38
// Address: 0x1b0e38 - 0x1b0f98
void FUN_001b0e38_0x1b0e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0e38_0x1b0e38");
#endif

    switch (ctx->pc) {
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f70u: goto label_1b0f70;
        default: break;
    }

    ctx->pc = 0x1b0e38u;

    // 0x1b0e38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b0e3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b0e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b0e40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b0e44: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
    // 0x1b0e48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b0e4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b0e4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b0e54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b0e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b0e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b0e5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b0e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b0e64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b0e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b0e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b0e6c: 0x26f17380  addiu       $s1, $s7, 0x7380
    ctx->pc = 0x1b0e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 29568));
    // 0x1b0e70: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b0e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b0e74: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1b0e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0e78: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b0e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b0e7c: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1B0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E84u);
    ctx->pc = 0x1B0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E7Cu;
    // 0x1b0e80: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1B0E7Cu, 0x1B0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0E84u;
label_1b0e84:
    // 0x1b0e84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0E84u;
    {
        const bool branch_taken_0x1b0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E84u;
        // 0x1b0e88: 0x3c160028  lui         $s6, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e84) {
            ctx->pc = 0x1B0E94u;
            goto label_1b0e94;
        }
    }
    ctx->pc = 0x1B0E8Cu;
    // 0x1b0e8c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1B0E8Cu;
    {
        const bool branch_taken_0x1b0e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e8c) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b0e98: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0E98u;
    {
        const bool branch_taken_0x1b0e98 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1b0e98) {
            ctx->pc = 0x1B0E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E98u;
            // 0x1b0e9c: 0xaef57380  sw          $s5, 0x7380($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0EB4u;
            goto label_1b0eb4;
        }
    }
    ctx->pc = 0x1B0EA0u;
    // 0x1b0ea0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1b0ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1b0ea4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0EA4u;
    SET_GPR_U32(ctx, 31, 0x1B0EACu);
    ctx->pc = 0x1B0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EA4u;
    // 0x1b0ea8: 0x2484ac58  addiu       $a0, $a0, -0x53A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0EA4u, 0x1B0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x8ec47290  lw          $a0, 0x7290($s6)
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
    // 0x1b0eb0: 0xaef57380  sw          $s5, 0x7380($s7)
    ctx->pc = 0x1b0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 29568), GPR_U32(ctx, 21));
label_1b0eb4:
    // 0x1b0eb4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1b0eb8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x1b0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x1b0ebc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0EDCu;
            goto label_1b0edc;
        }
    }
    ctx->pc = 0x1B0EC4u;
    // 0x1b0ec4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b0ec8: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1b0ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b0ecc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1b0eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1b0ed0: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x1b0ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b0ed4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b0ed8: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x1b0ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
label_1b0edc:
    // 0x1b0edc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0EDCu;
    {
        const bool branch_taken_0x1b0edc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B0EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EDCu;
        // 0x1b0ee0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0edc) {
            ctx->pc = 0x1B0EECu;
            goto label_1b0eec;
        }
    }
    ctx->pc = 0x1B0EE4u;
    // 0x1b0ee4: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0EE4u;
    SET_GPR_U32(ctx, 31, 0x1B0EECu);
    ctx->pc = 0x1B0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EE4u;
    // 0x1b0ee8: 0x2484ac70  addiu       $a0, $a0, -0x5390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0EE4u, 0x1B0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EECu;
label_1b0eec:
    // 0x1b0eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0ef0: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B0EF0u;
    SET_GPR_U32(ctx, 31, 0x1B0EF8u);
    ctx->pc = 0x1B0EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0EF0u;
    // 0x1b0ef4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B0EF0u, 0x1B0EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0EF8u;
label_1b0ef8:
    // 0x1b0ef8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0efc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b0f00: 0x24507300  addiu       $s0, $v0, 0x7300
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29440));
    // 0x1b0f04: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1b0f08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f0c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b0f10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b0f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f18: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1b0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b0f1c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b0f24: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B0F24u, 0x1B0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0F2Cu;
    {
        const bool branch_taken_0x1b0f2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0f2c) {
            ctx->pc = 0x1B0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F2Cu;
            // 0x1b0f30: 0x8ec27290  lw          $v0, 0x7290($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0F48u;
            goto label_1b0f48;
        }
    }
    ctx->pc = 0x1B0F34u;
    // 0x1b0f34: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0f38: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0F38u;
    SET_GPR_U32(ctx, 31, 0x1B0F40u);
    ctx->pc = 0x1B0F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F38u;
    // 0x1b0f3c: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0F38u, 0x1B0F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F40u;
label_1b0f40:
    // 0x1b0f40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F40u;
        // 0x1b0f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B0F74u;
            goto label_1b0f74;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0F48u;
    {
        const bool branch_taken_0x1b0f48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F48u;
        // 0x1b0f4c: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f48) {
            ctx->pc = 0x1B0F58u;
            goto label_1b0f58;
        }
    }
    ctx->pc = 0x1B0F50u;
    // 0x1b0f50: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0F50u;
    SET_GPR_U32(ctx, 31, 0x1B0F58u);
    ctx->pc = 0x1B0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F50u;
    // 0x1b0f54: 0x2484ac88  addiu       $a0, $a0, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0F50u, 0x1B0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F58u;
label_1b0f58:
    // 0x1b0f58: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1b0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1b0f5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b0f60: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b0f64: 0x8c6472a8  lw          $a0, 0x72A8($v1)
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x2872A8u));
    // 0x1b0f68: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0F68u;
    SET_GPR_U32(ctx, 31, 0x1B0F70u);
    ctx->pc = 0x1B0F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F68u;
    // 0x1b0f6c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0F68u, 0x1B0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F70u;
label_1b0f70:
    // 0x1b0f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b0f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f74:
    // 0x1b0f74: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b0f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0f78: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b0f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0f7c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b0f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0f80: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b0f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0f84: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b0f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0f88: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b0f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0f90: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0f94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b0f98u;
}
