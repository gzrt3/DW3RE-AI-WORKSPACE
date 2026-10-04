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

// Function: entry_0019ead8
// Address: 0x19ead8 - 0x19eb04
void entry_0019ead8_0x19ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ead8_0x19ead8");
#endif

    ctx->pc = 0x19ead8u;

    // 0x19ead8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x19eadc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EADCu;
        // 0x19eae0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19EB14u;
            return;
        }
    }
    ctx->pc = 0x19EAE4u;
    // 0x19eae4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x19eae8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19EAE8u;
    {
        const bool branch_taken_0x19eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAE8u;
        // 0x19eaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eae8) {
            ctx->pc = 0x19EB04u;
            return;
        }
    }
    ctx->pc = 0x19EAF0u;
    // 0x19eaf0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x19eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x19eaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAF4u;
        // 0x19eaf8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EB04u;
            return;
        }
    }
    ctx->pc = 0x19EAFCu;
    // 0x19eafc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19EAFCu;
    {
        const bool branch_taken_0x19eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EAFCu;
        // 0x19eb00: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19eafc) {
            ctx->pc = 0x19EB40u;
            return;
        }
    }
    ctx->pc = 0x19EB04u;
}
