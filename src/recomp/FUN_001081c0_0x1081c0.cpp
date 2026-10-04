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

// Function: FUN_001081c0
// Address: 0x1081c0 - 0x108230
void FUN_001081c0_0x1081c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001081c0_0x1081c0");
#endif

    switch (ctx->pc) {
        case 0x1081e8u: goto label_1081e8;
        case 0x1081f8u: goto label_1081f8;
        default: break;
    }

    ctx->pc = 0x1081c0u;

    // 0x1081c0: 0xaf8084b0  sw          $zero, -0x7B50($gp)
    ctx->pc = 0x1081c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935728), GPR_U32(ctx, 0));
    // 0x1081c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1081c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081c8: 0xaf8084a0  sw          $zero, -0x7B60($gp)
    ctx->pc = 0x1081c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U32(ctx, 0));
    // 0x1081cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1081ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081d0: 0xaf808478  sw          $zero, -0x7B88($gp)
    ctx->pc = 0x1081d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U32(ctx, 0));
    // 0x1081d4: 0xaf808474  sw          $zero, -0x7B8C($gp)
    ctx->pc = 0x1081d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935668), GPR_U32(ctx, 0));
    // 0x1081d8: 0xaf808480  sw          $zero, -0x7B80($gp)
    ctx->pc = 0x1081d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U32(ctx, 0));
    // 0x1081dc: 0xaf80847c  sw          $zero, -0x7B84($gp)
    ctx->pc = 0x1081dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935676), GPR_U32(ctx, 0));
    // 0x1081e0: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x1081e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x1081e4: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x1081e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
label_1081e8:
    // 0x1081e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1081e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1081ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1081f0: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x1081f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1081f4: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1081f8:
    // 0x1081f8: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x1081f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1081fc: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x1081fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 0));
    // 0x108200: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x108200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x108204: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x108204u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x108208: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x108208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x10820c: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x10820cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x108210: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x108214: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x108214u;
    {
        const bool branch_taken_0x108214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108214u;
        // 0x108218: 0xad400018  sw          $zero, 0x18($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108214) {
            ctx->pc = 0x1081F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1081f8;
        }
    }
    ctx->pc = 0x10821Cu;
    // 0x10821c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10821cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x108220: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x108220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x108224: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x108224u;
    {
        const bool branch_taken_0x108224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108224u;
        // 0x108228: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108224) {
            ctx->pc = 0x1081E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1081e8;
        }
    }
    ctx->pc = 0x10822Cu;
    // 0x10822c: 0xaf808484  sw          $zero, -0x7B7C($gp)
    ctx->pc = 0x10822cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935684), GPR_U32(ctx, 0));
    ctx->pc = 0x108230u;
}
