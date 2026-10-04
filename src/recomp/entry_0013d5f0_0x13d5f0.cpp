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

// Function: entry_0013d5f0
// Address: 0x13d5f0 - 0x13d628
void entry_0013d5f0_0x13d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d5f0_0x13d5f0");
#endif

    ctx->pc = 0x13d5f0u;

    // 0x13d5f0: 0x31030004  andi        $v1, $t0, 0x4
    ctx->pc = 0x13d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x13d5f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13D5F4u;
    {
        const bool branch_taken_0x13d5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F4u;
        // 0x13d5f8: 0x31030008  andi        $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5f4) {
            ctx->pc = 0x13D628u;
            return;
        }
    }
    ctx->pc = 0x13D5FCu;
    // 0x13d5fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D5FCu;
    {
        const bool branch_taken_0x13d5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5fc) {
            ctx->pc = 0x13D628u;
            return;
        }
    }
    ctx->pc = 0x13D604u;
    // 0x13d604: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d604u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d608: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13d60c: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d60cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d610: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d610u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d614: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x13d614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x13d618: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d618u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x13d61c: 0x94e3001c  lhu         $v1, 0x1C($a3)
    ctx->pc = 0x13d61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x13d620: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x13d620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x13d624: 0xa4e3001c  sh          $v1, 0x1C($a3)
    ctx->pc = 0x13d624u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 28), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d628u;
}
