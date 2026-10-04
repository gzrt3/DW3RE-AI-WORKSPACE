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

// Function: entry_00215518
// Address: 0x215518 - 0x215554
void entry_00215518_0x215518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215518_0x215518");
#endif

    ctx->pc = 0x215518u;

    // 0x215518: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
    // 0x21551c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215520: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
    // 0x215524: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x215524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215528: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21552c: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x21552cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
    // 0x215530: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x215534: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215538: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21553c: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x21553cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215540: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215544: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x215544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x215548: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21554c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21554Cu;
        // 0x215550: 0xac267908  sw          $a2, 0x7908($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21554c) {
            ctx->pc = 0x2155A8u;
            return;
        }
    }
    ctx->pc = 0x215554u;
}
