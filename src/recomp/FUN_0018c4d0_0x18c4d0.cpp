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

// Function: FUN_0018c4d0
// Address: 0x18c4d0 - 0x18c54c
void FUN_0018c4d0_0x18c4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c4d0_0x18c4d0");
#endif

    switch (ctx->pc) {
        case 0x18c518u: goto label_18c518;
        default: break;
    }

    ctx->pc = 0x18c4d0u;

    // 0x18c4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c4d4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18c4d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c4dc: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x18c4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c4e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x18c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18c4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c4ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18c4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c4f0: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x18c4f4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x18c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x18c4f8: 0x24a52cc0  addiu       $a1, $a1, 0x2CC0
    ctx->pc = 0x18c4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11456));
    // 0x18c4fc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18C4FCu;
    {
        const bool branch_taken_0x18c4fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4FCu;
        // 0x18c500: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4fc) {
            ctx->pc = 0x18C548u;
            goto label_18c548;
        }
    }
    ctx->pc = 0x18C504u;
    // 0x18c504: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x18c504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x18c508: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C508u;
    {
        const bool branch_taken_0x18c508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0x240300b4  addiu       $v1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c508) {
            ctx->pc = 0x18C51Cu;
            goto label_18c51c;
        }
    }
    ctx->pc = 0x18C510u;
    // 0x18c510: 0xc064224  jal         func_190890
    ctx->pc = 0x18C510u;
    SET_GPR_U32(ctx, 31, 0x18C518u);
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x18C510u, 0x18C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C518u;
label_18c518:
    // 0x18c518: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_18c51c:
    // 0x18c51c: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x18c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x18c520: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x18c520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x18c524: 0x3c033d0e  lui         $v1, 0x3D0E
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15630 << 16));
    // 0x18c528: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x18c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
    // 0x18c52c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x18c52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x18c530: 0xae0300b8  sw          $v1, 0xB8($s0)
    ctx->pc = 0x18c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
    // 0x18c534: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x18c534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c538: 0x3c034226  lui         $v1, 0x4226
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16934 << 16));
    // 0x18c53c: 0x346327f0  ori         $v1, $v1, 0x27F0
    ctx->pc = 0x18c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10224);
    // 0x18c540: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x18c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x18c544: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x18c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_18c548:
    // 0x18c548: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x18c54cu;
}
