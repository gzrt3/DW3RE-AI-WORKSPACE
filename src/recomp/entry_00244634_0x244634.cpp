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

// Function: entry_00244634
// Address: 0x244634 - 0x24467c
void entry_00244634_0x244634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244634_0x244634");
#endif

    ctx->pc = 0x244634u;

    // 0x244634: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x244634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x244638: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x24463c: 0x3488869f  ori         $t0, $a0, 0x869F
    ctx->pc = 0x24463cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34463);
    // 0x244640: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x244644: 0x8c24ccf4  lw          $a0, -0x330C($at)
    ctx->pc = 0x244644u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x29CCF4u));
    // 0x244648: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24464c: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x24464cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x244650: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x244654: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x244658: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x24465c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x244660: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244660u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x244664: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x244668: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x244668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24466c: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x244670: 0x101200a  movz        $a0, $t0, $at
    ctx->pc = 0x244670u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x244674: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x244678: 0xac24ccf4  sw          $a0, -0x330C($at)
    ctx->pc = 0x244678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x29CCF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29CCF4u, _value); } while (0);
    ctx->pc = 0x24467cu;
}
