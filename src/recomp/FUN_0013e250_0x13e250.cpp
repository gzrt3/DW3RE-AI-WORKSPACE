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

// Function: FUN_0013e250
// Address: 0x13e250 - 0x13e2c0
void FUN_0013e250_0x13e250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013e250_0x13e250");
#endif

    switch (ctx->pc) {
        case 0x13e260u: goto label_13e260;
        case 0x13e270u: goto label_13e270;
        default: break;
    }

    ctx->pc = 0x13e250u;

    // 0x13e250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13e250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13e254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e258: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x13e258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x13e25c: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x13e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
label_13e260:
    // 0x13e260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13e260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13e264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e268: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x13e268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x13e26c: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x13e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_13e270:
    // 0x13e270: 0x885021  addu        $t2, $a0, $t0
    ctx->pc = 0x13e270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x13e274: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x13e274u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x13e278: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x13e278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x13e27c: 0xad400024  sw          $zero, 0x24($t2)
    ctx->pc = 0x13e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 0));
    // 0x13e280: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x13e280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x13e284: 0xad400044  sw          $zero, 0x44($t2)
    ctx->pc = 0x13e284u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 68), GPR_U32(ctx, 0));
    // 0x13e288: 0x25080100  addiu       $t0, $t0, 0x100
    ctx->pc = 0x13e288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
    // 0x13e28c: 0xad400064  sw          $zero, 0x64($t2)
    ctx->pc = 0x13e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 100), GPR_U32(ctx, 0));
    // 0x13e290: 0xad400084  sw          $zero, 0x84($t2)
    ctx->pc = 0x13e290u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 132), GPR_U32(ctx, 0));
    // 0x13e294: 0xad4000a4  sw          $zero, 0xA4($t2)
    ctx->pc = 0x13e294u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 164), GPR_U32(ctx, 0));
    // 0x13e298: 0xad4000c4  sw          $zero, 0xC4($t2)
    ctx->pc = 0x13e298u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 196), GPR_U32(ctx, 0));
    // 0x13e29c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13E29Cu;
    {
        const bool branch_taken_0x13e29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E29Cu;
        // 0x13e2a0: 0xad4000e4  sw          $zero, 0xE4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e29c) {
            ctx->pc = 0x13E270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e270;
        }
    }
    ctx->pc = 0x13E2A4u;
    // 0x13e2a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13e2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13e2a8: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x13e2a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e2ac: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13E2ACu;
    {
        const bool branch_taken_0x13e2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2ACu;
        // 0x13e2b0: 0x25290200  addiu       $t1, $t1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2ac) {
            ctx->pc = 0x13E260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e260;
        }
    }
    ctx->pc = 0x13E2B4u;
    // 0x13e2b4: 0xaf808538  sw          $zero, -0x7AC8($gp)
    ctx->pc = 0x13e2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935864), GPR_U32(ctx, 0));
    // 0x13e2b8: 0xaf80853c  sw          $zero, -0x7AC4($gp)
    ctx->pc = 0x13e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935868), GPR_U32(ctx, 0));
    // 0x13e2bc: 0xaf808540  sw          $zero, -0x7AC0($gp)
    ctx->pc = 0x13e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935872), GPR_U32(ctx, 0));
    ctx->pc = 0x13e2c0u;
}
