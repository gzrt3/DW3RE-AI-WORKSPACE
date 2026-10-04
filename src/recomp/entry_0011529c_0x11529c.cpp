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

// Function: entry_0011529c
// Address: 0x11529c - 0x1152d8
void entry_0011529c_0x11529c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011529c_0x11529c");
#endif

    ctx->pc = 0x11529cu;

    // 0x11529c: 0x28a10060  slti        $at, $a1, 0x60
    ctx->pc = 0x11529cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1152a0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1152A0u;
    {
        const bool branch_taken_0x1152a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152A0u;
        // 0x1152a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152a0) {
            ctx->pc = 0x1152D8u;
            return;
        }
    }
    ctx->pc = 0x1152A8u;
    // 0x1152a8: 0x28a10089  slti        $at, $a1, 0x89
    ctx->pc = 0x1152a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1152ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1152ACu;
    {
        const bool branch_taken_0x1152ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1152ac) {
            ctx->pc = 0x1152D8u;
            return;
        }
    }
    ctx->pc = 0x1152B4u;
    // 0x1152b4: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x1152b8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1152b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1152bc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1152bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1152c0: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1152c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1152c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1152cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1152d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1152d4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x1152d8u;
}
