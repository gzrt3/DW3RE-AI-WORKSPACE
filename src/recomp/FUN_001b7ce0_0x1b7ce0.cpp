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

// Function: FUN_001b7ce0
// Address: 0x1b7ce0 - 0x1b7d74
void FUN_001b7ce0_0x1b7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7ce0_0x1b7ce0");
#endif

    switch (ctx->pc) {
        case 0x1b7cf8u: goto label_1b7cf8;
        default: break;
    }

    ctx->pc = 0x1b7ce0u;

    // 0x1b7ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b7ce4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1b7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1b7ce8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1b7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7cec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b7cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b7cf0: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7CF0u;
    SET_GPR_U32(ctx, 31, 0x1B7CF8u);
    ctx->pc = 0x1B7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7CF0u;
    // 0x1b7cf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7CF0u, 0x1B7CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7CF8u;
label_1b7cf8:
    // 0x1b7cf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7cf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7d00: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x1b7d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1b7d04: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B7D04u;
    {
        const bool branch_taken_0x1b7d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D04u;
        // 0x1b7d08: 0x2c850002  sltiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d04) {
            ctx->pc = 0x1B7D70u;
            goto label_1b7d70;
        }
    }
    ctx->pc = 0x1B7D0Cu;
    // 0x1b7d0c: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B7D0Cu;
    {
        const bool branch_taken_0x1b7d0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D0Cu;
        // 0x1b7d10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d0c) {
            ctx->pc = 0x1B7D74u;
            return;
        }
    }
    ctx->pc = 0x1B7D14u;
    // 0x1b7d14: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x1b7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x1b7d18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7D18u;
    {
        const bool branch_taken_0x1b7d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D18u;
        // 0x1b7d1c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d18) {
            ctx->pc = 0x1B7D3Cu;
            goto label_1b7d3c;
        }
    }
    ctx->pc = 0x1B7D20u;
    // 0x1b7d20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1b7d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d28: 0x4a00012  bltz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7D28u;
    {
        const bool branch_taken_0x1b7d28 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D28u;
        // 0x1b7d2c: 0x28a3001f  slti        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d28) {
            ctx->pc = 0x1B7D74u;
            return;
        }
    }
    ctx->pc = 0x1B7D30u;
    // 0x1b7d30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7D30u;
    {
        const bool branch_taken_0x1b7d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D30u;
        // 0x1b7d34: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d30) {
            ctx->pc = 0x1B7D50u;
            goto label_1b7d50;
        }
    }
    ctx->pc = 0x1B7D38u;
    // 0x1b7d38: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b7d3c:
    // 0x1b7d3c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b7d40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1b7d44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7d48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7D48u;
    {
        const bool branch_taken_0x1b7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D48u;
        // 0x1b7d4c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d48) {
            ctx->pc = 0x1B7D70u;
            goto label_1b7d70;
        }
    }
    ctx->pc = 0x1B7D50u;
label_1b7d50:
    // 0x1b7d50: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1b7d50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7d54: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b7d58: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b7d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b7d5c: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1b7d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1b7d60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b7d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b7d64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b7d64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b7d68: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1b7d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b7d6c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1b7d6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1b7d70:
    // 0x1b7d70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b7d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b7d74u;
}
