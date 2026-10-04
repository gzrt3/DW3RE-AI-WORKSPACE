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

// Function: FUN_00243910
// Address: 0x243910 - 0x24399c
void FUN_00243910_0x243910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00243910_0x243910");
#endif

    ctx->pc = 0x243910u;

    // 0x243910: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x243910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x243914: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x243914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x243918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x243918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24391c: 0x246349a4  addiu       $v1, $v1, 0x49A4
    ctx->pc = 0x24391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18852));
    // 0x243920: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x243920u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x243924: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x243928: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x243928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24392c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x24392cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x243930: 0x244249a5  addiu       $v0, $v0, 0x49A5
    ctx->pc = 0x243930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18853));
    // 0x243934: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x243934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x243938: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x243938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24393c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24393cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243940: 0x244249a6  addiu       $v0, $v0, 0x49A6
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18854));
    // 0x243944: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x243944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x243948: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x243948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24394c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x243950: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x243954: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x243954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243958: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x243958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24395c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24395cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x243960: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x243964: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x243968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x243968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24396c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x243970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243974: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x243974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x243978: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x243978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24397c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24397cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x243980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x243984: 0x28410bb8  slti        $at, $v0, 0xBB8
    ctx->pc = 0x243984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x243988: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x243988u;
    {
        const bool branch_taken_0x243988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x243988) {
            ctx->pc = 0x243998u;
            goto label_243998;
        }
    }
    ctx->pc = 0x243990u;
    // 0x243990: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243990u;
    {
        const bool branch_taken_0x243990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243990) {
            ctx->pc = 0x24399Cu;
            return;
        }
    }
    ctx->pc = 0x243998u;
label_243998:
    // 0x243998: 0x24020bb8  addiu       $v0, $zero, 0xBB8
    ctx->pc = 0x243998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->pc = 0x24399cu;
}
