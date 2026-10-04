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

// Function: entry_00113d34
// Address: 0x113d34 - 0x113d4c
void entry_00113d34_0x113d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d34_0x113d34");
#endif

    ctx->pc = 0x113d34u;

    // 0x113d34: 0x0  nop
    ctx->pc = 0x113d34u;
    // NOP
    // 0x113d38: 0x822300be  lb          $v1, 0xBE($s1)
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 190)));
    // 0x113d3c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x113d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x113d40: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x113D40u;
    {
        const bool branch_taken_0x113d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d40) {
            ctx->pc = 0x113D08u;
            return;
        }
    }
    ctx->pc = 0x113D48u;
    // 0x113d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x113d4cu;
}
