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

// Function: entry_0019f47c
// Address: 0x19f47c - 0x19f4b8
void entry_0019f47c_0x19f47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f47c_0x19f47c");
#endif

    ctx->pc = 0x19f47cu;

    // 0x19f47c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x19f480: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x19f480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x19f484: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x19f488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19f48c: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f498: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f49c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f4a0: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19F4A0u;
    {
        const bool branch_taken_0x19f4a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4a0) {
            ctx->pc = 0x19F4DCu;
            return;
        }
    }
    ctx->pc = 0x19F4A8u;
    // 0x19f4a8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4ac: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x19f4b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4b4: 0x0  nop
    ctx->pc = 0x19f4b4u;
    // NOP
    ctx->pc = 0x19f4b8u;
}
