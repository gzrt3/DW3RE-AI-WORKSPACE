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

// Function: FUN_00233f10
// Address: 0x233f10 - 0x233fa4
void FUN_00233f10_0x233f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233f10_0x233f10");
#endif

    ctx->pc = 0x233f10u;

    // 0x233f10: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x233f10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f14: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x233f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x233f18: 0x24c704b0  addiu       $a3, $a2, 0x4B0
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1200));
    // 0x233f1c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x233f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x233f20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2904B0u));
    // 0x233f24: 0xc1902  srl         $v1, $t4, 4
    ctx->pc = 0x233f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x233f28: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x233f2c: 0x52102  srl         $a0, $a1, 4
    ctx->pc = 0x233f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x233f30: 0x25102  srl         $t2, $v0, 4
    ctx->pc = 0x233f30u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x233f34: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x233f34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x233f38: 0x8a1023  subu        $v0, $a0, $t2
    ctx->pc = 0x233f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x233f3c: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x233f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x233f40: 0x84102  srl         $t0, $t0, 4
    ctx->pc = 0x233f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 4));
    // 0x233f44: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x233f44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x233f48: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x233f48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x233f4c: 0x25842  srl         $t3, $v0, 1
    ctx->pc = 0x233f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x233f50: 0xad20001c  sw          $zero, 0x1C($t1)
    ctx->pc = 0x233f50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 0));
    // 0x233f54: 0x681023  subu        $v0, $v1, $t0
    ctx->pc = 0x233f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x233f58: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x233f58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
    // 0x233f5c: 0x1443023  subu        $a2, $t2, $a0
    ctx->pc = 0x233f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x233f60: 0xad200014  sw          $zero, 0x14($t1)
    ctx->pc = 0x233f60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 0));
    // 0x233f64: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x233f64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x233f68: 0xad200010  sw          $zero, 0x10($t1)
    ctx->pc = 0x233f68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 0));
    // 0x233f6c: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x233f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x233f70: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x233f70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f74: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x233f78: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x233f7c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x233f7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x233f80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x233F80u;
    {
        const bool branch_taken_0x233f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F80u;
        // 0x233f84: 0x31842  srl         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f80) {
            ctx->pc = 0x233F98u;
            goto label_233f98;
        }
    }
    ctx->pc = 0x233F88u;
    // 0x233f88: 0xad2b0010  sw          $t3, 0x10($t1)
    ctx->pc = 0x233f88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 11));
    // 0x233f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x233F8Cu;
    {
        const bool branch_taken_0x233f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F8Cu;
        // 0x233f90: 0xad2a0008  sw          $t2, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f8c) {
            ctx->pc = 0x233F9Cu;
            goto label_233f9c;
        }
    }
    ctx->pc = 0x233F94u;
    // 0x233f94: 0x0  nop
    ctx->pc = 0x233f94u;
    // NOP
label_233f98:
    // 0x233f98: 0xad260018  sw          $a2, 0x18($t1)
    ctx->pc = 0x233f98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 6));
label_233f9c:
    // 0x233f9c: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x233f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x233fa0: 0x4c102b  sltu        $v0, $v0, $t4
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    ctx->pc = 0x233fa4u;
}
