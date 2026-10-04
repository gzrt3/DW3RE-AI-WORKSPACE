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

// Function: FUN_0019feb8
// Address: 0x19feb8 - 0x19ff20
void FUN_0019feb8_0x19feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019feb8_0x19feb8");
#endif

    ctx->pc = 0x19feb8u;

    // 0x19feb8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19feb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19febc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19febcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fec0: 0x8cc30150  lw          $v1, 0x150($a2)
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x19fec4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19fec8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FEC8u;
    {
        const bool branch_taken_0x19fec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEC8u;
        // 0x19fecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fec8) {
            ctx->pc = 0x19FEF0u;
            goto label_19fef0;
        }
    }
    ctx->pc = 0x19FED0u;
    // 0x19fed0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x19FED0u;
    {
        const bool branch_taken_0x19fed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fed0) {
            ctx->pc = 0x19FED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED0u;
            // 0x19fed4: 0x8cc2084c  lw          $v0, 0x84C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEF4u;
            goto label_19fef4;
        }
    }
    ctx->pc = 0x19FED8u;
    // 0x19fed8: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FED8u;
    {
        const bool branch_taken_0x19fed8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x19fed8) {
            ctx->pc = 0x19FEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FED8u;
            // 0x19fedc: 0xacc00854  sw          $zero, 0x854($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FEECu;
            goto label_19feec;
        }
    }
    ctx->pc = 0x19FEE0u;
    // 0x19fee0: 0x8cc20854  lw          $v0, 0x854($a2)
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2132)));
    // 0x19fee4: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x19fee4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19fee8: 0xacc00854  sw          $zero, 0x854($a2)
    ctx->pc = 0x19fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2132), GPR_U32(ctx, 0));
label_19feec:
    // 0x19feec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19feecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fef0:
    // 0x19fef0: 0x8cc2084c  lw          $v0, 0x84C($a2)
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2124)));
label_19fef4:
    // 0x19fef4: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19fef8: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FEF8u;
    {
        const bool branch_taken_0x19fef8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEF8u;
        // 0x19fefc: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fef8) {
            ctx->pc = 0x19FF14u;
            goto label_19ff14;
        }
    }
    ctx->pc = 0x19FF00u;
    // 0x19ff00: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x19ff00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19ff04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FF04u;
    {
        const bool branch_taken_0x19ff04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ff04) {
            ctx->pc = 0x19FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FF04u;
            // 0x19ff08: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FF18u;
            goto label_19ff18;
        }
    }
    ctx->pc = 0x19FF0Cu;
    // 0x19ff0c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x19ff10: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x19ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
label_19ff14:
    // 0x19ff14: 0x8cc20850  lw          $v0, 0x850($a2)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
label_19ff18:
    // 0x19ff18: 0x8cc401ac  lw          $a0, 0x1AC($a2)
    ctx->pc = 0x19ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 428)));
    // 0x19ff1c: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x19ff1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    ctx->pc = 0x19ff20u;
}
