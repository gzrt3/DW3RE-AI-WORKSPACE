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

// Function: FUN_00238748
// Address: 0x238748 - 0x238794
void FUN_00238748_0x238748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00238748_0x238748");
#endif

    ctx->pc = 0x238748u;

    // 0x238748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23874c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238758: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23875c: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x23875Cu;
    {
        const bool branch_taken_0x23875c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x238760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23875Cu;
        // 0x238760: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23875c) {
            ctx->pc = 0x238790u;
            goto label_238790;
        }
    }
    ctx->pc = 0x238764u;
    // 0x238764: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238768: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x238768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x23876c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23876cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x290818u));
    // 0x238770: 0x24a58748  addiu       $a1, $a1, -0x78B8
    ctx->pc = 0x238770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936392));
    // 0x238774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23877c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23877cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238780: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238784: 0x808e4ea  j           func_2393A8
    ctx->pc = 0x238784u;
    ctx->pc = 0x238788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238784u;
    // 0x238788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2393A8u;
    FUN_002393a8_0x2393a8(rdram, ctx, runtime); return;
    ctx->pc = 0x23878Cu;
    // 0x23878c: 0x0  nop
    ctx->pc = 0x23878cu;
    // NOP
label_238790:
    // 0x238790: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x238790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->pc = 0x238794u;
}
