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

// Function: entry_001a26c8
// Address: 0x1a26c8 - 0x1a26f4
void entry_001a26c8_0x1a26c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26c8_0x1a26c8");
#endif

    switch (ctx->pc) {
        case 0x1a26dcu: goto label_1a26dc;
        default: break;
    }

    ctx->pc = 0x1a26c8u;

    // 0x1a26c8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A26C8u;
    {
        const bool branch_taken_0x1a26c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26c8) {
            ctx->pc = 0x1A26F4u;
            return;
        }
    }
    ctx->pc = 0x1A26D0u;
    // 0x1a26d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a26d4: 0xc068610  jal         func_1A1840
    ctx->pc = 0x1A26D4u;
    SET_GPR_U32(ctx, 31, 0x1A26DCu);
    ctx->pc = 0x1A26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26D4u;
    // 0x1a26d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1840u, 0x1A26D4u, 0x1A26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26DCu;
label_1a26dc:
    // 0x1a26dc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1a26e0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a26e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a26e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1a26ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a26f0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1a26f4u;
}
