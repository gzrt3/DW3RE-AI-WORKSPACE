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

// Function: entry_0021cc64
// Address: 0x21cc64 - 0x21cc9c
void entry_0021cc64_0x21cc64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cc64_0x21cc64");
#endif

    ctx->pc = 0x21cc64u;

label_21cc64:
    // 0x21cc64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21cc68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21cc6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21cc70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21cc74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21cc78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x21cc7c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21CC7Cu;
    {
        const bool branch_taken_0x21cc7c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x21CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC7Cu;
        // 0x21cc80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc7c) {
            ctx->pc = 0x21CC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc64;
        }
    }
    ctx->pc = 0x21CC84u;
    // 0x21cc84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21cc88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21cc8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CC8Cu;
    {
        const bool branch_taken_0x21cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC8Cu;
        // 0x21cc90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc8c) {
            ctx->pc = 0x21CC9Cu;
            return;
        }
    }
    ctx->pc = 0x21CC94u;
    // 0x21cc94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21CC94u;
    {
        const bool branch_taken_0x21cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC94u;
        // 0x21cc98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc94) {
            ctx->pc = 0x21CD74u;
            return;
        }
    }
    ctx->pc = 0x21CC9Cu;
}
