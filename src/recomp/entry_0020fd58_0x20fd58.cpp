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

// Function: entry_0020fd58
// Address: 0x20fd58 - 0x20fda8
void entry_0020fd58_0x20fd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fd58_0x20fd58");
#endif

    ctx->pc = 0x20fd58u;

    // 0x20fd58: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x20fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20fd5c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x20fd60: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x20fd60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x20fd64: 0x29a40005  slti        $a0, $t5, 0x5
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20fd68: 0xa1650001  sb          $a1, 0x1($t3)
    ctx->pc = 0x20fd68u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x20fd6c: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x20fd6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x20fd70: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x20FD70u;
    {
        const bool branch_taken_0x20fd70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD70u;
        // 0x20fd74: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd70) {
            ctx->pc = 0x20FD48u;
            return;
        }
    }
    ctx->pc = 0x20FD78u;
    // 0x20fd78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20fd7c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x20fd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x20fd80: 0x29040082  slti        $a0, $t0, 0x82
    ctx->pc = 0x20fd80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x20fd84: 0x1480ffb4  bnez        $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x20FD84u;
    {
        const bool branch_taken_0x20fd84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD84u;
        // 0x20fd88: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd84) {
            ctx->pc = 0x20FC58u;
            return;
        }
    }
    ctx->pc = 0x20FD8Cu;
    // 0x20fd8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20fd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fd90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x20fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x20fd94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fd98: 0x34454ef8  ori         $a1, $v0, 0x4EF8
    ctx->pc = 0x20fd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20216);
    // 0x20fd9c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20fda0: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x20fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x20fda4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x20fda8u;
}
