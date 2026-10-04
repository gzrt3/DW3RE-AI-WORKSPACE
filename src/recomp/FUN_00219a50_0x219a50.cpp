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

// Function: FUN_00219a50
// Address: 0x219a50 - 0x219b28
void FUN_00219a50_0x219a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00219a50_0x219a50");
#endif

    switch (ctx->pc) {
        case 0x219ab4u: goto label_219ab4;
        default: break;
    }

    ctx->pc = 0x219a50u;

    // 0x219a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219a54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x219a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x219a58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219a5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x219a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x219a60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219a64: 0x27839260  addiu       $v1, $gp, -0x6DA0
    ctx->pc = 0x219a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939232));
    // 0x219a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219a6c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x219a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
    // 0x219a70: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x219a70u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x219a74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a78: 0x8f829250  lw          $v0, -0x6DB0($gp)
    ctx->pc = 0x219a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939216)));
    // 0x219a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219a80: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x219a80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x219a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x219a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x219a88: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x219a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x219a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x219a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x219a90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x219a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x219a94: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x219a94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219a98: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x219a9c: 0xa68821  addu        $s1, $a1, $a2
    ctx->pc = 0x219a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x219aa0: 0xa6020358  sh          $v0, 0x358($s0)
    ctx->pc = 0x219aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 856), (uint16_t)GPR_U32(ctx, 2));
    // 0x219aa4: 0xa6020328  sh          $v0, 0x328($s0)
    ctx->pc = 0x219aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 808), (uint16_t)GPR_U32(ctx, 2));
    // 0x219aa8: 0xa6020410  sh          $v0, 0x410($s0)
    ctx->pc = 0x219aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1040), (uint16_t)GPR_U32(ctx, 2));
    // 0x219aac: 0xa60203e0  sh          $v0, 0x3E0($s0)
    ctx->pc = 0x219aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 992), (uint16_t)GPR_U32(ctx, 2));
    // 0x219ab0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x219ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_219ab4:
    // 0x219ab4: 0x8f829258  lw          $v0, -0x6DA8($gp)
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939224)));
    // 0x219ab8: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219AB8u;
    {
        const bool branch_taken_0x219ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ab8) {
            ctx->pc = 0x219AC8u;
            goto label_219ac8;
        }
    }
    ctx->pc = 0x219AC0u;
    // 0x219ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219AC0u;
    {
        const bool branch_taken_0x219ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac0) {
            ctx->pc = 0x219AD0u;
            goto label_219ad0;
        }
    }
    ctx->pc = 0x219AC8u;
label_219ac8:
    // 0x219ac8: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x219ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x219acc: 0xa0402283  sb          $zero, 0x2283($v0)
    ctx->pc = 0x219accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 0));
label_219ad0:
    // 0x219ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x219ad4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x219ad8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x219AD8u;
    {
        const bool branch_taken_0x219ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ad8) {
            ctx->pc = 0x219AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ab4;
        }
    }
    ctx->pc = 0x219AE0u;
    // 0x219ae0: 0x8f889254  lw          $t0, -0x6DAC($gp)
    ctx->pc = 0x219ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939220)));
    // 0x219ae4: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x219ae8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x219aec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x219aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x219af0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x219af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x219af8: 0x24a5e0f8  addiu       $a1, $a1, -0x1F08
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959352));
    // 0x219afc: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219b00: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
    // 0x219b08: 0x1010  mfhi        $v0
    ctx->pc = 0x219b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x219b0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x219b10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x219b14: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219b18: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219b1c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x219b20: 0x0  nop
    ctx->pc = 0x219b20u;
    // NOP
    // 0x219b24: 0x1010  mfhi        $v0
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    ctx->pc = 0x219b28u;
}
