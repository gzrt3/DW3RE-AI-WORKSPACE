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

// Function: FUN_001f6e00
// Address: 0x1f6e00 - 0x1f6edc
void FUN_001f6e00_0x1f6e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f6e00_0x1f6e00");
#endif

    switch (ctx->pc) {
        case 0x1f6e24u: goto label_1f6e24;
        default: break;
    }

    ctx->pc = 0x1f6e00u;

    // 0x1f6e00: 0x8f839024  lw          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938660)));
    // 0x1f6e04: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1F6E04u;
    {
        const bool branch_taken_0x1f6e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e04) {
            ctx->pc = 0x1F6EDCu;
            return;
        }
    }
    ctx->pc = 0x1F6E0Cu;
    // 0x1f6e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f6e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6e14: 0x27858ff8  addiu       $a1, $gp, -0x7008
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938616));
    // 0x1f6e18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f6e1c: 0x27879000  addiu       $a3, $gp, -0x7000
    ctx->pc = 0x1f6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938624));
    // 0x1f6e20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f6e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f6e24:
    // 0x1f6e24: 0xe95821  addu        $t3, $a3, $t1
    ctx->pc = 0x1f6e24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1f6e28: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1f6e2c: 0x14660011  bne         $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6E74u;
            goto label_1f6e74;
        }
    }
    ctx->pc = 0x1F6E34u;
    // 0x1f6e34: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1f6e38: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6e40: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x1f6e40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f6e44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6E44u;
    {
        const bool branch_taken_0x1f6e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e44) {
            ctx->pc = 0x1F6E54u;
            goto label_1f6e54;
        }
    }
    ctx->pc = 0x1F6E4Cu;
    // 0x1f6e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6E4Cu;
    {
        const bool branch_taken_0x1f6e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E4Cu;
        // 0x1f6e50: 0xad430000  sw          $v1, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e4c) {
            ctx->pc = 0x1F6E5Cu;
            goto label_1f6e5c;
        }
    }
    ctx->pc = 0x1F6E54u;
label_1f6e54:
    // 0x1f6e54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f6e58: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
label_1f6e5c:
    // 0x1f6e5c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e60: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1f6e60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1f6e64: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6E64u;
    {
        const bool branch_taken_0x1f6e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e64) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E6Cu;
    // 0x1f6e6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F6E6Cu;
    {
        const bool branch_taken_0x1f6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E6Cu;
        // 0x1f6e70: 0xad600000  sw          $zero, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e6c) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E74u;
label_1f6e74:
    // 0x1f6e74: 0x0  nop
    ctx->pc = 0x1f6e74u;
    // NOP
    // 0x1f6e78: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6E78u;
    {
        const bool branch_taken_0x1f6e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f6e78) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6E80u;
    // 0x1f6e80: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1f6e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1f6e84: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f6e8c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f6e8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f6e90: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f6e90u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1f6e94: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x1f6e98: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6e9c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6E9Cu;
    {
        const bool branch_taken_0x1f6e9c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1f6e9c) {
            ctx->pc = 0x1F6EA8u;
            goto label_1f6ea8;
        }
    }
    ctx->pc = 0x1F6EA4u;
    // 0x1f6ea4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1f6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
label_1f6ea8:
    // 0x1f6ea8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f6ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f6eac: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f6eacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6eb0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1F6EB0u;
    {
        const bool branch_taken_0x1f6eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6EB0u;
        // 0x1f6eb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6eb0) {
            ctx->pc = 0x1F6E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6e24;
        }
    }
    ctx->pc = 0x1F6EB8u;
    // 0x1f6eb8: 0x8f838ff0  lw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938608)));
    // 0x1f6ebc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f6ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f6ec0: 0x28612710  slti        $at, $v1, 0x2710
    ctx->pc = 0x1f6ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x1f6ec4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6EC4u;
    {
        const bool branch_taken_0x1f6ec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6ec4) {
            ctx->pc = 0x1F6ED4u;
            goto label_1f6ed4;
        }
    }
    ctx->pc = 0x1F6ECCu;
    // 0x1f6ecc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6ECCu;
    {
        const bool branch_taken_0x1f6ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6ECCu;
        // 0x1f6ed0: 0xaf838ff0  sw          $v1, -0x7010($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ecc) {
            ctx->pc = 0x1F6EDCu;
            return;
        }
    }
    ctx->pc = 0x1F6ED4u;
label_1f6ed4:
    // 0x1f6ed4: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x1f6ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1f6ed8: 0xaf838ff0  sw          $v1, -0x7010($gp)
    ctx->pc = 0x1f6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938608), GPR_U32(ctx, 3));
    ctx->pc = 0x1f6edcu;
}
