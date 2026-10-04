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

// Function: entry_001b172c
// Address: 0x1b172c - 0x1b17b4
void entry_001b172c_0x1b172c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b172c_0x1b172c");
#endif

    switch (ctx->pc) {
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b17b0u: goto label_1b17b0;
        default: break;
    }

    ctx->pc = 0x1b172cu;

    // 0x1b172c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1730: 0x26106700  addiu       $s0, $s0, 0x6700
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26368));
    // 0x1b1734: 0x24516280  addiu       $s1, $v0, 0x6280
    ctx->pc = 0x1b1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b1738: 0xac546280  sw          $s4, 0x6280($v0)
    ctx->pc = 0x1b1738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 20));
    // 0x1b173c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1740: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1b1744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1748: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1b174c: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B174Cu;
    SET_GPR_U32(ctx, 31, 0x1B1754u);
    ctx->pc = 0x1B1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B174Cu;
    // 0x1b1750: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B174Cu, 0x1B1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1754u;
label_1b1754:
    // 0x1b1754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1758: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1758u;
    SET_GPR_U32(ctx, 31, 0x1B1760u);
    ctx->pc = 0x1B175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1758u;
    // 0x1b175c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1758u, 0x1B1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1760u;
label_1b1760:
    // 0x1b1760: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1764: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1764u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1768: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b176c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1770: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1774: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1778: 0x256b1638  addiu       $t3, $t3, 0x1638
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5688));
    // 0x1b177c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1784: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1788: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1788u;
    SET_GPR_U32(ctx, 31, 0x1B1790u);
    ctx->pc = 0x1B178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1788u;
    // 0x1b178c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1788u, 0x1B1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1790u;
label_1b1790:
    // 0x1b1790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1794: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1794u;
    {
        const bool branch_taken_0x1b1794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1794u;
        // 0x1b1798: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1794) {
            ctx->pc = 0x1B17A8u;
            goto label_1b17a8;
        }
    }
    ctx->pc = 0x1B179Cu;
    // 0x1b179c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b17a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17A0u;
    {
        const bool branch_taken_0x1b17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a0) {
            ctx->pc = 0x1B17B0u;
            goto label_1b17b0;
        }
    }
    ctx->pc = 0x1B17A8u;
label_1b17a8:
    // 0x1b17a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B17A8u;
    SET_GPR_U32(ctx, 31, 0x1B17B0u);
    ctx->pc = 0x1B17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17A8u;
    // 0x1b17ac: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B17A8u, 0x1B17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B0u;
label_1b17b0:
    // 0x1b17b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b17b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b17b4u;
}
