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

// Function: FUN_00168090
// Address: 0x168090 - 0x1680f8
void FUN_00168090_0x168090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168090_0x168090");
#endif

    switch (ctx->pc) {
        case 0x1680c8u: goto label_1680c8;
        default: break;
    }

    ctx->pc = 0x168090u;

    // 0x168090: 0xaf8086e0  sw          $zero, -0x7920($gp)
    ctx->pc = 0x168090u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936288), GPR_U32(ctx, 0));
    // 0x168094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168098: 0xaf8086d0  sw          $zero, -0x7930($gp)
    ctx->pc = 0x168098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 0));
    // 0x16809c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16809cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1680a0: 0xaf8086b8  sw          $zero, -0x7948($gp)
    ctx->pc = 0x1680a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936248), GPR_U32(ctx, 0));
    // 0x1680a4: 0xa38086b0  sb          $zero, -0x7950($gp)
    ctx->pc = 0x1680a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936240), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680a8: 0xa38086b1  sb          $zero, -0x794F($gp)
    ctx->pc = 0x1680a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936241), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680ac: 0xa38086b2  sb          $zero, -0x794E($gp)
    ctx->pc = 0x1680acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936242), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680b0: 0xa38086b3  sb          $zero, -0x794D($gp)
    ctx->pc = 0x1680b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936243), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680b4: 0xa38086b4  sb          $zero, -0x794C($gp)
    ctx->pc = 0x1680b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936244), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680b8: 0xa38086b5  sb          $zero, -0x794B($gp)
    ctx->pc = 0x1680b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936245), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680bc: 0xa38086b6  sb          $zero, -0x794A($gp)
    ctx->pc = 0x1680bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936246), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680c0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1680c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1680c4: 0x24843eb0  addiu       $a0, $a0, 0x3EB0
    ctx->pc = 0x1680c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16048));
label_1680c8:
    // 0x1680c8: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x1680c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1680cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1680d0: 0xe01821  addu        $v1, $a3, $zero
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 0)));
    // 0x1680d4: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x1680d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1680d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1680d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680dc: 0xa0e00001  sb          $zero, 0x1($a3)
    ctx->pc = 0x1680dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680e0: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x1680e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1680e4: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1680e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680e8: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1680e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1680ec: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1680ECu;
    {
        const bool branch_taken_0x1680ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1680F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680ECu;
        // 0x1680f0: 0xa0e00004  sb          $zero, 0x4($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1680ec) {
            ctx->pc = 0x1680C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1680c8;
        }
    }
    ctx->pc = 0x1680F4u;
    // 0x1680f4: 0xaf8086a8  sw          $zero, -0x7958($gp)
    ctx->pc = 0x1680f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936232), GPR_U32(ctx, 0));
    ctx->pc = 0x1680f8u;
}
