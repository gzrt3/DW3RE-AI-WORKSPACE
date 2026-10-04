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

// Function: FUN_00152c70
// Address: 0x152c70 - 0x152d38
void FUN_00152c70_0x152c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00152c70_0x152c70");
#endif

    switch (ctx->pc) {
        case 0x152d2cu: goto label_152d2c;
        case 0x152d34u: goto label_152d34;
        default: break;
    }

    ctx->pc = 0x152c70u;

    // 0x152c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152c74: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x152c78: 0x27838138  addiu       $v1, $gp, -0x7EC8
    ctx->pc = 0x152c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934840));
    // 0x152c7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152c80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x152c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152c84: 0xdca80270  ld          $t0, 0x270($a1)
    ctx->pc = 0x152c84u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 624)));
    // 0x152c88: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x152c8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x152c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152c90: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x152c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x152c94: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x152c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x152c98: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152C98u;
    {
        const bool branch_taken_0x152c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C98u;
        // 0x152c9c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c98) {
            ctx->pc = 0x152CB4u;
            goto label_152cb4;
        }
    }
    ctx->pc = 0x152CA0u;
    // 0x152ca0: 0x14860003  bne         $a0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x152CA0u;
    {
        const bool branch_taken_0x152ca0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x152CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CA0u;
        // 0x152ca4: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ca0) {
            ctx->pc = 0x152CB0u;
            goto label_152cb0;
        }
    }
    ctx->pc = 0x152CA8u;
    // 0x152ca8: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152cac: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152cacu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_152cb0:
    // 0x152cb0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x152cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_152cb4:
    // 0x152cb4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x152cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x152cb8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x152CB8u;
    {
        const bool branch_taken_0x152cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CB8u;
        // 0x152cbc: 0x7343c  dsll32      $a2, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cb8) {
            ctx->pc = 0x152CE8u;
            goto label_152ce8;
        }
    }
    ctx->pc = 0x152CC0u;
    // 0x152cc0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152cc0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x152cc4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x152CC4u;
    {
        const bool branch_taken_0x152cc4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x152CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152CC4u;
        // 0x152cc8: 0x61883  sra         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152cc4) {
            ctx->pc = 0x152CD4u;
            goto label_152cd4;
        }
    }
    ctx->pc = 0x152CCCu;
    // 0x152ccc: 0x24c30003  addiu       $v1, $a2, 0x3
    ctx->pc = 0x152cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x152cd0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x152cd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_152cd4:
    // 0x152cd4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x152cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152cd8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x152cd8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x152cdc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x152cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x152ce0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152ce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152ce4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152ce4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_152ce8:
    // 0x152ce8: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x152ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x152cec: 0x24a30200  addiu       $v1, $a1, 0x200
    ctx->pc = 0x152cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
    // 0x152cf0: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x152cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x152cf4: 0x24a30202  addiu       $v1, $a1, 0x202
    ctx->pc = 0x152cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 514));
    // 0x152cf8: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x152cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x152cfc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x152cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x152d00: 0xa4670000  sh          $a3, 0x0($v1)
    ctx->pc = 0x152d00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x152d04: 0x8ca60198  lw          $a2, 0x198($a1)
    ctx->pc = 0x152d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 408)));
    // 0x152d08: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x152d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x152d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152d10: 0xe33804  sllv        $a3, $v1, $a3
    ctx->pc = 0x152d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x152d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152d18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x152d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x152d1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x152D1Cu;
    {
        const bool branch_taken_0x152d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152D1Cu;
        // 0x152d20: 0xaca60198  sw          $a2, 0x198($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152d1c) {
            ctx->pc = 0x152D34u;
            goto label_152d34;
        }
    }
    ctx->pc = 0x152D24u;
    // 0x152d24: 0xc0439cc  jal         func_10E730
    ctx->pc = 0x152D24u;
    SET_GPR_U32(ctx, 31, 0x152D2Cu);
    ctx->pc = 0x152D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D24u;
    // 0x152d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E730u, 0x152D24u, 0x152D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D2Cu;
label_152d2c:
    // 0x152d2c: 0xc05d604  jal         func_175810
    ctx->pc = 0x152D2Cu;
    SET_GPR_U32(ctx, 31, 0x152D34u);
    ctx->pc = 0x152D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D2Cu;
    // 0x152d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175810u, 0x152D2Cu, 0x152D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D34u;
label_152d34:
    // 0x152d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x152d38u;
}
