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

// Function: FUN_0010e2f0
// Address: 0x10e2f0 - 0x10e360
void FUN_0010e2f0_0x10e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010e2f0_0x10e2f0");
#endif

    ctx->pc = 0x10e2f0u;

    // 0x10e2f0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x10e2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10e2f4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x10e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x10e2f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x10e2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10e2fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e300: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x10e300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x10e304: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x10e304u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x10e308: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10e308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10e30c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x10e30cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x10e310: 0x24634926  addiu       $v1, $v1, 0x4926
    ctx->pc = 0x10e310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18726));
    // 0x10e314: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x10e314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10e318: 0x24e30d80  addiu       $v1, $a3, 0xD80
    ctx->pc = 0x10e318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3456));
    // 0x10e31c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x10e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10e320: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x10e320u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e324: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x10e324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e328: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x10e328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x10e32c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x10e32cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x10e330: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E330u;
    {
        const bool branch_taken_0x10e330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e330) {
            ctx->pc = 0x10E33Cu;
            goto label_10e33c;
        }
    }
    ctx->pc = 0x10E338u;
    // 0x10e338: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x10e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10e33c:
    // 0x10e33c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x10e33cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x10e340: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x10e340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e344: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x10e344u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
    // 0x10e348: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x10e348u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10e34c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e350: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x10e350u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x10e354: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10E354u;
    {
        const bool branch_taken_0x10e354 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e354) {
            ctx->pc = 0x10E360u;
            return;
        }
    }
    ctx->pc = 0x10E35Cu;
    // 0x10e35c: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x10e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->pc = 0x10e360u;
}
