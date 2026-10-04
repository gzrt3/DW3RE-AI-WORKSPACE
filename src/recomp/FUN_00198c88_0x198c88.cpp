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

// Function: FUN_00198c88
// Address: 0x198c88 - 0x198d68
void FUN_00198c88_0x198c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198c88_0x198c88");
#endif

    switch (ctx->pc) {
        case 0x198cc0u: goto label_198cc0;
        case 0x198d34u: goto label_198d34;
        default: break;
    }

    ctx->pc = 0x198c88u;

    // 0x198c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x198c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198c8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198c94: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x198c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x198ca0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198ca4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x198CA4u;
    {
        const bool branch_taken_0x198ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CA4u;
        // 0x198ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ca4) {
            ctx->pc = 0x198CDCu;
            goto label_198cdc;
        }
    }
    ctx->pc = 0x198CACu;
    // 0x198cac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198cb0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x198cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x198cb4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x198cb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x198cb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cbc: 0x0  nop
    ctx->pc = 0x198cbcu;
    // NOP
label_198cc0:
    // 0x198cc0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x198cc4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x198CC4u;
    {
        const bool branch_taken_0x198cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CC4u;
        // 0x198cc8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cc4) {
            ctx->pc = 0x198D28u;
            goto label_198d28;
        }
    }
    ctx->pc = 0x198CCCu;
    // 0x198ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198cd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x198cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x198cd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x198CD4u;
    {
        const bool branch_taken_0x198cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198cd4) {
            ctx->pc = 0x198CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198cc0;
        }
    }
    ctx->pc = 0x198CDCu;
label_198cdc:
    // 0x198cdc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198ce0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198ce4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x198ce8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x198cec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x198cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x198cf0: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x198cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x198cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x198cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x198cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198d04: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x198D04u;
    {
        const bool branch_taken_0x198d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d04) {
            ctx->pc = 0x198D3Cu;
            goto label_198d3c;
        }
    }
    ctx->pc = 0x198D0Cu;
    // 0x198d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x198d14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x198d18: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x198d1c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x198d20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x198D20u;
    {
        const bool branch_taken_0x198d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d20) {
            ctx->pc = 0x198D4Cu;
            goto label_198d4c;
        }
    }
    ctx->pc = 0x198D28u;
label_198d28:
    // 0x198d28: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x198d2c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x198D2Cu;
    SET_GPR_U32(ctx, 31, 0x198D34u);
    ctx->pc = 0x198D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198D2Cu;
    // 0x198d30: 0x24849aa0  addiu       $a0, $a0, -0x6560 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x198D2Cu, 0x198D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198D34u;
label_198d34:
    // 0x198d34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198D34u;
    {
        const bool branch_taken_0x198d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D34u;
        // 0x198d38: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d34) {
            ctx->pc = 0x198D64u;
            goto label_198d64;
        }
    }
    ctx->pc = 0x198D3Cu;
label_198d3c:
    // 0x198d3c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x198d44: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x198d48: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_198d4c:
    // 0x198d4c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198d50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d54: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x198d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x198d58: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x198d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x198d5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198d60: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x198d60u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_198d64:
    // 0x198d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x198d68u;
}
