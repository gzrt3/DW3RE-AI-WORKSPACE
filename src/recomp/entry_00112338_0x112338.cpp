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

// Function: entry_00112338
// Address: 0x112338 - 0x112348
void entry_00112338_0x112338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112338_0x112338");
#endif

    ctx->pc = 0x112338u;

    // 0x112338: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x112338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x11233c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11233Cu;
    {
        const bool branch_taken_0x11233c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11233c) {
            ctx->pc = 0x112348u;
            return;
        }
    }
    ctx->pc = 0x112344u;
    // 0x112344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x112344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112348u;
}
