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

// Function: entry_00157e90
// Address: 0x157e90 - 0x157ec8
void entry_00157e90_0x157e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e90_0x157e90");
#endif

    ctx->pc = 0x157e90u;

    // 0x157e90: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157e94: 0xa0224af6  sb          $v0, 0x4AF6($at)
    ctx->pc = 0x157e94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x334AF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF6u, _value); } while (0);
    // 0x157e98: 0x3a23000f  xori        $v1, $s1, 0xF
    ctx->pc = 0x157e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)15);
    // 0x157e9c: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x157e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x157ea0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157ea4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x157ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x157ea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x157eac: 0xaf82863c  sw          $v0, -0x79C4($gp)
    ctx->pc = 0x157eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 2));
    // 0x157eb0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x157eb4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x157EB4u;
    {
        const bool branch_taken_0x157eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EB4u;
        // 0x157eb8: 0xa4234af4  sh          $v1, 0x4AF4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19188), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb4) {
            ctx->pc = 0x157EC8u;
            return;
        }
    }
    ctx->pc = 0x157EBCu;
    // 0x157ebc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x157ec0: 0x16220047  bne         $s1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x157EC0u;
    {
        const bool branch_taken_0x157ec0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x157EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157EC0u;
        // 0x157ec4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ec0) {
            ctx->pc = 0x157FE0u;
            return;
        }
    }
    ctx->pc = 0x157EC8u;
}
