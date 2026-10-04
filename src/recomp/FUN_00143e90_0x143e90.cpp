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

// Function: FUN_00143e90
// Address: 0x143e90 - 0x143f00
void FUN_00143e90_0x143e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00143e90_0x143e90");
#endif

    ctx->pc = 0x143e90u;

    // 0x143e90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x143e94: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x143e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x143e98: 0x9026490c  lbu         $a2, 0x490C($at)
    ctx->pc = 0x143e98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x143e9c: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x143E9Cu;
    {
        const bool branch_taken_0x143e9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x143EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E9Cu;
        // 0x143ea0: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e9c) {
            ctx->pc = 0x143EBCu;
            goto label_143ebc;
        }
    }
    ctx->pc = 0x143EA4u;
    // 0x143ea4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143ea8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x143EA8u;
    {
        const bool branch_taken_0x143ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143ea8) {
            ctx->pc = 0x143ED0u;
            goto label_143ed0;
        }
    }
    ctx->pc = 0x143EB0u;
    // 0x143eb0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x143EB0u;
    {
        const bool branch_taken_0x143eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143eb0) {
            ctx->pc = 0x143F8Cu;
            return;
        }
    }
    ctx->pc = 0x143EB8u;
    // 0x143eb8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x143eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_143ebc:
    // 0x143ebc: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143EBCu;
    {
        const bool branch_taken_0x143ebc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x143ebc) {
            ctx->pc = 0x143ED0u;
            goto label_143ed0;
        }
    }
    ctx->pc = 0x143EC4u;
    // 0x143ec4: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x143ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x143ec8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x143EC8u;
    {
        const bool branch_taken_0x143ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ec8) {
            ctx->pc = 0x143F8Cu;
            return;
        }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x8487021c  lh          $a3, 0x21C($a0)
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143ed4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x143ed8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143edc: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x143edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x143ee0: 0xa487021e  sh          $a3, 0x21E($a0)
    ctx->pc = 0x143ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 542), (uint16_t)GPR_U32(ctx, 7));
    // 0x143ee4: 0x8488021c  lh          $t0, 0x21C($a0)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x143ee8: 0x8489028c  lh          $t1, 0x28C($a0)
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 652)));
    // 0x143eec: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x143ef0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x143ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x143ef4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x143ef8: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x143efc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x143efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    ctx->pc = 0x143f00u;
}
