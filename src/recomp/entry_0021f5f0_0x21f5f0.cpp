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

// Function: entry_0021f5f0
// Address: 0x21f5f0 - 0x21f618
void entry_0021f5f0_0x21f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f5f0_0x21f5f0");
#endif

    ctx->pc = 0x21f5f0u;

    // 0x21f5f0: 0x15840012  bne         $t4, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21F5F0u;
    {
        const bool branch_taken_0x21f5f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f5f0) {
            ctx->pc = 0x21F63Cu;
            return;
        }
    }
    ctx->pc = 0x21F5F8u;
    // 0x21f5f8: 0x1520000f  bnez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x21F5F8u;
    {
        const bool branch_taken_0x21f5f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5f8) {
            ctx->pc = 0x21F638u;
            return;
        }
    }
    ctx->pc = 0x21F600u;
    // 0x21f600: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x21f600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
    // 0x21f604: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F604u;
    {
        const bool branch_taken_0x21f604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F604u;
        // 0x21f608: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f604) {
            ctx->pc = 0x21F618u;
            return;
        }
    }
    ctx->pc = 0x21F60Cu;
    // 0x21f60c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F60Cu;
    {
        const bool branch_taken_0x21f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F60Cu;
        // 0x21f610: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f60c) {
            ctx->pc = 0x21F61Cu;
            return;
        }
    }
    ctx->pc = 0x21F614u;
    // 0x21f614: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x21f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x21f618u;
}
