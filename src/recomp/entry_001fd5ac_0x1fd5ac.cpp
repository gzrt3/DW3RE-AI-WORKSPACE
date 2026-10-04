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

// Function: entry_001fd5ac
// Address: 0x1fd5ac - 0x1fd610
void entry_001fd5ac_0x1fd5ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd5ac_0x1fd5ac");
#endif

    ctx->pc = 0x1fd5acu;

    // 0x1fd5ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fd5acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fd5b0: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x1fd5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1fd5b4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1fd5b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd5b8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1fd5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x1fd5bc: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x1fd5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x1fd5c0: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1fd5c4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1fd5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1fd5c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1fd5cc: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1fd5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1fd5d0: 0x0  nop
    ctx->pc = 0x1fd5d0u;
    // NOP
    // 0x1fd5d4: 0x0  nop
    ctx->pc = 0x1fd5d4u;
    // NOP
    // 0x1fd5d8: 0x2810  mfhi        $a1
    ctx->pc = 0x1fd5d8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1fd5dc: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1fd5e0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1fd5e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1fd5e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1fd5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1fd5e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fd5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fd5ec: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1fd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fd5f0: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x1fd5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1fd5f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1fd5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1fd5f8: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x1fd5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x1fd5fc: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fd600: 0x288100fb  slti        $at, $a0, 0xFB
    ctx->pc = 0x1fd600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1fd604: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD604u;
    {
        const bool branch_taken_0x1fd604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD604u;
        // 0x1fd608: 0x2683000c  addiu       $v1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd604) {
            ctx->pc = 0x1FD610u;
            return;
        }
    }
    ctx->pc = 0x1FD60Cu;
    // 0x1fd60c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1fd60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fd610u;
}
