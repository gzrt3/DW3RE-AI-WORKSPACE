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

// Function: FUN_0013c820
// Address: 0x13c820 - 0x13c8d0
void FUN_0013c820_0x13c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c820_0x13c820");
#endif

    switch (ctx->pc) {
        case 0x13c83cu: goto label_13c83c;
        case 0x13c884u: goto label_13c884;
        case 0x13c88cu: goto label_13c88c;
        default: break;
    }

    ctx->pc = 0x13c820u;

    // 0x13c820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c82c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c834: 0xc0590dc  jal         func_164370
    ctx->pc = 0x13C834u;
    SET_GPR_U32(ctx, 31, 0x13C83Cu);
    ctx->pc = 0x13C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C834u;
    // 0x13c838: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x13C834u, 0x13C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C83Cu;
label_13c83c:
    // 0x13c83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c840: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x13C840u;
    {
        const bool branch_taken_0x13c840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c840) {
            ctx->pc = 0x13C8CCu;
            goto label_13c8cc;
        }
    }
    ctx->pc = 0x13C848u;
    // 0x13c848: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x13c848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x13c84c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13c850: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x13c850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x13c854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c858: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x13c858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x13c85c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c860: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x13c860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x13c864: 0xdf8689d8  ld          $a2, -0x7628($gp)
    ctx->pc = 0x13c864u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937048)));
    // 0x13c868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13c868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13c86c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x13c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x13c870: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13c874: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x13c878: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x13c878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13c87c: 0xc0718c4  jal         func_1C6310
    ctx->pc = 0x13C87Cu;
    SET_GPR_U32(ctx, 31, 0x13C884u);
    ctx->pc = 0x13C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C87Cu;
    // 0x13c880: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6310u, 0x13C87Cu, 0x13C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C884u;
label_13c884:
    // 0x13c884: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x13C884u;
    SET_GPR_U32(ctx, 31, 0x13C88Cu);
    ctx->pc = 0x13C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C884u;
    // 0x13c888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x13C884u, 0x13C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C88Cu;
label_13c88c:
    // 0x13c88c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c890: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x13c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x13c894: 0xa20402e1  sb          $a0, 0x2E1($s0)
    ctx->pc = 0x13c894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 4));
    // 0x13c898: 0x3c053f1b  lui         $a1, 0x3F1B
    ctx->pc = 0x13c898u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16155 << 16));
    // 0x13c89c: 0xae0302b0  sw          $v1, 0x2B0($s0)
    ctx->pc = 0x13c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 3));
    // 0x13c8a0: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13c8a4: 0xae0302b8  sw          $v1, 0x2B8($s0)
    ctx->pc = 0x13c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 3));
    // 0x13c8a8: 0x2484c8e0  addiu       $a0, $a0, -0x3720
    ctx->pc = 0x13c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953184));
    // 0x13c8ac: 0xae0502c0  sw          $a1, 0x2C0($s0)
    ctx->pc = 0x13c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 5));
    // 0x13c8b0: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x13c8b4: 0xae0502c8  sw          $a1, 0x2C8($s0)
    ctx->pc = 0x13c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 5));
    // 0x13c8b8: 0x24636600  addiu       $v1, $v1, 0x6600
    ctx->pc = 0x13c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26112));
    // 0x13c8bc: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x13c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x13c8c0: 0xa21102e4  sb          $s1, 0x2E4($s0)
    ctx->pc = 0x13c8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 17));
    // 0x13c8c4: 0xae040364  sw          $a0, 0x364($s0)
    ctx->pc = 0x13c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 4));
    // 0x13c8c8: 0xae030368  sw          $v1, 0x368($s0)
    ctx->pc = 0x13c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 3));
label_13c8cc:
    // 0x13c8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x13c8d0u;
}
