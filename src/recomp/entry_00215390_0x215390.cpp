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

// Function: entry_00215390
// Address: 0x215390 - 0x2153d4
void entry_00215390_0x215390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215390_0x215390");
#endif

    ctx->pc = 0x215390u;

    // 0x215390: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215394: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x215398: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x21539c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x21539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2153a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153a4: 0xaf85920c  sw          $a1, -0x6DF4($gp)
    ctx->pc = 0x2153a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 5));
    // 0x2153a8: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x2153a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x2153ac: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2153acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2153b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153b4: 0xaf859200  sw          $a1, -0x6E00($gp)
    ctx->pc = 0x2153b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 5));
    // 0x2153b8: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2153b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
    // 0x2153bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2153c0: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x2153c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2153c4: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2153c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x2153c8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2153C8u;
    {
        const bool branch_taken_0x2153c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153C8u;
        // 0x2153cc: 0xaf859204  sw          $a1, -0x6DFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153c8) {
            ctx->pc = 0x2153D4u;
            return;
        }
    }
    ctx->pc = 0x2153D0u;
    // 0x2153d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2153d4u;
}
