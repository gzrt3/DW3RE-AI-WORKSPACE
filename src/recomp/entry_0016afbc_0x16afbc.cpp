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

// Function: entry_0016afbc
// Address: 0x16afbc - 0x16aff0
void entry_0016afbc_0x16afbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016afbc_0x16afbc");
#endif

    ctx->pc = 0x16afbcu;

    // 0x16afbc: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x16afbcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x16afc0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x16afc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x16afc4: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16afc8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AFC8u;
    {
        const bool branch_taken_0x16afc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFC8u;
        // 0x16afcc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc8) {
            ctx->pc = 0x16AFF0u;
            return;
        }
    }
    ctx->pc = 0x16AFD0u;
    // 0x16afd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16afd4: 0x8c231edc  lw          $v1, 0x1EDC($at)
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
    // 0x16afd8: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x16afdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16afe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AFE0u;
    {
        const bool branch_taken_0x16afe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe0) {
            ctx->pc = 0x16AFF0u;
            return;
        }
    }
    ctx->pc = 0x16AFE8u;
    // 0x16afe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AFE8u;
    {
        const bool branch_taken_0x16afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe8) {
            ctx->pc = 0x16AFF4u;
            return;
        }
    }
    ctx->pc = 0x16AFF0u;
}
