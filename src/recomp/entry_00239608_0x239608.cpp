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

// Function: entry_00239608
// Address: 0x239608 - 0x239618
void entry_00239608_0x239608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239608_0x239608");
#endif

    ctx->pc = 0x239608u;

    // 0x239608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23960c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23960cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x239610: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x239610u;
    {
        const bool branch_taken_0x239610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239610u;
        // 0x239614: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239610) {
            ctx->pc = 0x23965Cu;
            return;
        }
    }
    ctx->pc = 0x239618u;
}
