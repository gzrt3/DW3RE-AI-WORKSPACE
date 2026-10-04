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

// Function: entry_00170224
// Address: 0x170224 - 0x170274
void entry_00170224_0x170224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170224_0x170224");
#endif

    ctx->pc = 0x170224u;

    // 0x170224: 0x0  nop
    ctx->pc = 0x170224u;
    // NOP
    // 0x170228: 0x94870002  lhu         $a3, 0x2($a0)
    ctx->pc = 0x170228u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17022c: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x17022cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x170230: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x170230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x170234: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x170234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x170238: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x170238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x17023c: 0x30eaffff  andi        $t2, $a3, 0xFFFF
    ctx->pc = 0x17023cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x170240: 0x3863ffff  xori        $v1, $v1, 0xFFFF
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
    // 0x170244: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x170244u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x170248: 0x38e3ffff  xori        $v1, $a3, 0xFFFF
    ctx->pc = 0x170248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)65535);
    // 0x17024c: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x17024cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x170250: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x170250u;
    {
        const bool branch_taken_0x170250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170250u;
        // 0x170254: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170250) {
            ctx->pc = 0x17029Cu;
            return;
        }
    }
    ctx->pc = 0x170258u;
    // 0x170258: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x170258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x17025c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17025cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x170260: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170260u;
    {
        const bool branch_taken_0x170260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170260) {
            ctx->pc = 0x170274u;
            return;
        }
    }
    ctx->pc = 0x170268u;
    // 0x170268: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x170268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x17026c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x170270: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x170274u;
}
