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

// Function: FUN_001badb0
// Address: 0x1badb0 - 0x1bae24
void FUN_001badb0_0x1badb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001badb0_0x1badb0");
#endif

    switch (ctx->pc) {
        case 0x1badf8u: goto label_1badf8;
        case 0x1bae10u: goto label_1bae10;
        default: break;
    }

    ctx->pc = 0x1badb0u;

    // 0x1badb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1badb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1badb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1badb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1badb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1badb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1badbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1badbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1badc0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BADC0u;
    {
        const bool branch_taken_0x1badc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1badc0) {
            ctx->pc = 0x1BAE20u;
            goto label_1bae20;
        }
    }
    ctx->pc = 0x1BADC8u;
    // 0x1badc8: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1badc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
    // 0x1badcc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BADCCu;
    {
        const bool branch_taken_0x1badcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1badcc) {
            ctx->pc = 0x1BAE20u;
            goto label_1bae20;
        }
    }
    ctx->pc = 0x1BADD4u;
    // 0x1badd4: 0xa600021c  sh          $zero, 0x21C($s0)
    ctx->pc = 0x1badd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 540), (uint16_t)GPR_U32(ctx, 0));
    // 0x1badd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1baddc: 0x92030231  lbu         $v1, 0x231($s0)
    ctx->pc = 0x1baddcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
    // 0x1bade0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADE0u;
    {
        const bool branch_taken_0x1bade0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bade0) {
            ctx->pc = 0x1BAE00u;
            goto label_1bae00;
        }
    }
    ctx->pc = 0x1BADE8u;
    // 0x1bade8: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x1bade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1badec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1badecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1badf0: 0xc050f08  jal         func_143C20
    ctx->pc = 0x1BADF0u;
    SET_GPR_U32(ctx, 31, 0x1BADF8u);
    ctx->pc = 0x1BADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADF0u;
    // 0x1badf4: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x1BADF0u, 0x1BADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADF8u;
label_1badf8:
    // 0x1badf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BADF8u;
    {
        const bool branch_taken_0x1badf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADF8u;
        // 0x1badfc: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badf8) {
            ctx->pc = 0x1BAE14u;
            goto label_1bae14;
        }
    }
    ctx->pc = 0x1BAE00u;
label_1bae00:
    // 0x1bae00: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1bae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bae04: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x1bae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bae08: 0xc050ed0  jal         func_143B40
    ctx->pc = 0x1BAE08u;
    SET_GPR_U32(ctx, 31, 0x1BAE10u);
    ctx->pc = 0x1BAE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE08u;
    // 0x1bae0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B40u, 0x1BAE08u, 0x1BAE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE10u;
label_1bae10:
    // 0x1bae10: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1bae14:
    // 0x1bae14: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bae18: 0xa2040236  sb          $a0, 0x236($s0)
    ctx->pc = 0x1bae18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bae1c: 0xa2030235  sb          $v1, 0x235($s0)
    ctx->pc = 0x1bae1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 3));
label_1bae20:
    // 0x1bae20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1bae24u;
}
