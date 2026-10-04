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

// Function: entry_00201e80
// Address: 0x201e80 - 0x201ed0
void entry_00201e80_0x201e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201e80_0x201e80");
#endif

    ctx->pc = 0x201e80u;

    // 0x201e80: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x201e84: 0x8c29f468  lw          $t1, -0xB98($at)
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x201e88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x201e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x201e8c: 0x34655400  ori         $a1, $v1, 0x5400
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21504);
    // 0x201e90: 0x8f8690f0  lw          $a2, -0x6F10($gp)
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x201e94: 0x24e7f500  addiu       $a3, $a3, -0xB00
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964480));
    // 0x201e98: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201e9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x201ea0: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x201ea4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x201ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x201ea8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x201eac: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x201eb0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x201eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x201eb4: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x201eb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x201ebc: 0xace60144  sw          $a2, 0x144($a3)
    ctx->pc = 0x201ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 6));
    // 0x201ec0: 0xace50140  sw          $a1, 0x140($a3)
    ctx->pc = 0x201ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 5));
    // 0x201ec4: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x201ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x201ec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201EC8u;
    {
        const bool branch_taken_0x201ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ec8) {
            ctx->pc = 0x201ED8u;
            return;
        }
    }
    ctx->pc = 0x201ED0u;
}
