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

// Function: entry_00238bc8
// Address: 0x238bc8 - 0x238c0c
void entry_00238bc8_0x238bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238bc8_0x238bc8");
#endif

    ctx->pc = 0x238bc8u;

    // 0x238bc8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x238bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x238bcc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x238bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x238bd0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x238BD0u;
    {
        const bool branch_taken_0x238bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BD0u;
        // 0x238bd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bd0) {
            ctx->pc = 0x238C0Cu;
            return;
        }
    }
    ctx->pc = 0x238BD8u;
    // 0x238bd8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x238bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x238bdc: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x238bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x238be0: 0x1234823  subu        $t1, $t1, $v1
    ctx->pc = 0x238be0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x238be4: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x238be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x238be8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x238be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x238bec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238BECu;
    {
        const bool branch_taken_0x238bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238bec) {
            ctx->pc = 0x238BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238BECu;
            // 0x238bf0: 0x8d27000c  lw          $a3, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238C00u;
            goto label_238c00;
        }
    }
    ctx->pc = 0x238BF4u;
    // 0x238bf4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238BF4u;
    {
        const bool branch_taken_0x238bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF4u;
        // 0x238bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238bf4) {
            ctx->pc = 0x238C0Cu;
            return;
        }
    }
    ctx->pc = 0x238BFCu;
    // 0x238bfc: 0x0  nop
    ctx->pc = 0x238bfcu;
    // NOP
label_238c00:
    // 0x238c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238c04: 0xacc7000c  sw          $a3, 0xC($a2)
    ctx->pc = 0x238c04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
    // 0x238c08: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x238c08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x238c0cu;
}
