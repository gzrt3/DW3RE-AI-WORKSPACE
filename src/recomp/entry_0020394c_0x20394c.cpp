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

// Function: entry_0020394c
// Address: 0x20394c - 0x203990
void entry_0020394c_0x20394c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020394c_0x20394c");
#endif

    ctx->pc = 0x20394cu;

    // 0x20394c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20394cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x203950: 0x8c27f468  lw          $a3, -0xB98($at)
    ctx->pc = 0x203950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964328)));
    // 0x203954: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x203958: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20395c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203960: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x203960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x203964: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x203968: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x20396c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203970: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x203974: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x203974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x203978: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x203978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20397c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x20397cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x203980: 0xaca0013c  sw          $zero, 0x13C($a1)
    ctx->pc = 0x203980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 316), GPR_U32(ctx, 0));
    // 0x203984: 0xac24f474  sw          $a0, -0xB8C($at)
    ctx->pc = 0x203984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964340), GPR_U32(ctx, 4));
    // 0x203988: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x203988u;
    {
        const bool branch_taken_0x203988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203988u;
        // 0x20398c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203988) {
            ctx->pc = 0x2039E8u;
            return;
        }
    }
    ctx->pc = 0x203990u;
}
