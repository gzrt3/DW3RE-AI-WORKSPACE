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

// Function: entry_0023d908
// Address: 0x23d908 - 0x23d928
void entry_0023d908_0x23d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d908_0x23d908");
#endif

    ctx->pc = 0x23d908u;

    // 0x23d908: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x23d908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x23d90c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23d910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D910u;
    {
        const bool branch_taken_0x23d910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d910) {
            ctx->pc = 0x23D928u;
            return;
        }
    }
    ctx->pc = 0x23D918u;
    // 0x23d918: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x23d918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23d91c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x23d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x23d920: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23d920u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23d924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23d928u;
}
