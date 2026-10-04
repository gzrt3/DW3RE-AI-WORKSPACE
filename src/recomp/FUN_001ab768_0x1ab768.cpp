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

// Function: FUN_001ab768
// Address: 0x1ab768 - 0x1ab7e0
void FUN_001ab768_0x1ab768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab768_0x1ab768");
#endif

    switch (ctx->pc) {
        case 0x1ab7ccu: goto label_1ab7cc;
        default: break;
    }

    ctx->pc = 0x1ab768u;

    // 0x1ab768: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ab768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1ab76c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab770: 0x8c435c10  lw          $v1, 0x5C10($v0)
    ctx->pc = 0x1ab770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x285C10u));
    // 0x1ab774: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab778: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab77c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ab77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ab780: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AB780u;
    {
        const bool branch_taken_0x1ab780 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB780u;
        // 0x1ab784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab780) {
            ctx->pc = 0x1AB7D8u;
            goto label_1ab7d8;
        }
    }
    ctx->pc = 0x1AB788u;
    // 0x1ab788: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1ab78c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ab78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1ab790: 0x24434640  addiu       $v1, $v0, 0x4640
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
    // 0x1ab794: 0xac454640  sw          $a1, 0x4640($v0)
    ctx->pc = 0x1ab794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x374640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374640u, _value); } while (0);
    // 0x1ab798: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1ab798u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x374644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374644u, _value); } while (0);
    // 0x1ab79c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab7a0: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1ab7a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x374648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x374648u, _value); } while (0);
    // 0x1ab7a4: 0x248445c0  addiu       $a0, $a0, 0x45C0
    ctx->pc = 0x1ab7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17856));
    // 0x1ab7a8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7ac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab7b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ab7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ab7b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7b8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab7bc: 0x26094600  addiu       $t1, $s0, 0x4600
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 17920));
    // 0x1ab7c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab7c4: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AB7C4u;
    SET_GPR_U32(ctx, 31, 0x1AB7CCu);
    ctx->pc = 0x1AB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7C4u;
    // 0x1ab7c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AB7C4u, 0x1AB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7CCu;
label_1ab7cc:
    // 0x1ab7cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB7CCu;
    {
        const bool branch_taken_0x1ab7cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7CCu;
        // 0x1ab7d0: 0x8e024600  lw          $v0, 0x4600($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7cc) {
            ctx->pc = 0x1AB7D8u;
            goto label_1ab7d8;
        }
    }
    ctx->pc = 0x1AB7D4u;
    // 0x1ab7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab7d8:
    // 0x1ab7d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab7dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ab7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ab7e0u;
}
