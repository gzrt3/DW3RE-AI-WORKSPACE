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

// Function: FUN_001e2080
// Address: 0x1e2080 - 0x1e2248
void FUN_001e2080_0x1e2080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e2080_0x1e2080");
#endif

    switch (ctx->pc) {
        case 0x1e2090u: goto label_1e2090;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2208u: goto label_1e2208;
        default: break;
    }

    ctx->pc = 0x1e2080u;

    // 0x1e2080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2088: 0xc07b18c  jal         func_1EC630
    ctx->pc = 0x1E2088u;
    SET_GPR_U32(ctx, 31, 0x1E2090u);
    ctx->pc = 0x1EC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC630u, 0x1E2088u, 0x1E2090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2090u;
label_1e2090:
    // 0x1e2090: 0x8f828d80  lw          $v0, -0x7280($gp)
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
    // 0x1e2094: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e2094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2098: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2098u;
    {
        const bool branch_taken_0x1e2098 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2098u;
        // 0x1e209c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2098) {
            ctx->pc = 0x1E20ACu;
            goto label_1e20ac;
        }
    }
    ctx->pc = 0x1E20A0u;
    // 0x1e20a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E20A0u;
    {
        const bool branch_taken_0x1e20a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20a0) {
            ctx->pc = 0x1E20ACu;
            goto label_1e20ac;
        }
    }
    ctx->pc = 0x1E20A8u;
    // 0x1e20a8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_1e20ac:
    // 0x1e20ac: 0x8f838d94  lw          $v1, -0x726C($gp)
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x1e20b0: 0xaf828d80  sw          $v0, -0x7280($gp)
    ctx->pc = 0x1e20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 2));
    // 0x1e20b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20b8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E20B8u;
    {
        const bool branch_taken_0x1e20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e20b8) {
            ctx->pc = 0x1E20FCu;
            goto label_1e20fc;
        }
    }
    ctx->pc = 0x1E20C0u;
    // 0x1e20c0: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e20c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e20c8: 0x28410108  slti        $at, $v0, 0x108
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e20cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20CCu;
    {
        const bool branch_taken_0x1e20cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20cc) {
            ctx->pc = 0x1E20DCu;
            goto label_1e20dc;
        }
    }
    ctx->pc = 0x1E20D4u;
    // 0x1e20d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E20D4u;
    {
        const bool branch_taken_0x1e20d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D4u;
        // 0x1e20d8: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d4) {
            ctx->pc = 0x1E20E4u;
            goto label_1e20e4;
        }
    }
    ctx->pc = 0x1E20DCu;
label_1e20dc:
    // 0x1e20dc: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1e20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1e20e0: 0xaf828d90  sw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
label_1e20e4:
    // 0x1e20e4: 0x28420108  slti        $v0, $v0, 0x108
    ctx->pc = 0x1e20e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x1e20e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E20E8u;
    {
        const bool branch_taken_0x1e20e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20e8) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E20F0u;
    // 0x1e20f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e20f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E20F4u;
    {
        const bool branch_taken_0x1e20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0xaf828d94  sw          $v0, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f4) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2100: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2100u;
    {
        const bool branch_taken_0x1e2100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2100) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E2108u;
    // 0x1e2108: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e210c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e2110: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2114: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2114u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e2118: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2118u;
    {
        const bool branch_taken_0x1e2118 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2118) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E2120u;
    // 0x1e2120: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x1e2120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
label_1e2124:
    // 0x1e2124: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x1e2124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1e2128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e212c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E212Cu;
    {
        const bool branch_taken_0x1e212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e212c) {
            ctx->pc = 0x1E2150u;
            goto label_1e2150;
        }
    }
    ctx->pc = 0x1E2134u;
    // 0x1e2134: 0x8f828d68  lw          $v0, -0x7298($gp)
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x1e2138: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e213c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2140: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2140u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e2144: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2144u;
    {
        const bool branch_taken_0x1e2144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2144u;
        // 0x1e2148: 0xaf828d68  sw          $v0, -0x7298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2144) {
            ctx->pc = 0x1E2150u;
            goto label_1e2150;
        }
    }
    ctx->pc = 0x1E214Cu;
    // 0x1e214c: 0xaf808d70  sw          $zero, -0x7290($gp)
    ctx->pc = 0x1e214cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 0));
label_1e2150:
    // 0x1e2150: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x1e2154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2158: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2160u;
    // 0x1e2160: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e2164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2168: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0xaf828d38  sw          $v0, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E2190u;
            goto label_1e2190;
        }
    }
    ctx->pc = 0x1E2170u;
    // 0x1e2170: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e2174: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1e2174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e2178: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2180u;
    // 0x1e2180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2184: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e2184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    // 0x1e2188: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2188u;
        // 0x1e218c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2194: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2194u;
    {
        const bool branch_taken_0x1e2194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2194u;
        // 0x1e2198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2194) {
            ctx->pc = 0x1E21C0u;
            goto label_1e21c0;
        }
    }
    ctx->pc = 0x1E219Cu;
    // 0x1e219c: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e21a0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1e21a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1e21a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E21A4u;
    {
        const bool branch_taken_0x1e21a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21a4) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21ACu;
    // 0x1e21ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e21b0: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    // 0x1e21b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E21B4u;
    {
        const bool branch_taken_0x1e21b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21b4) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21BCu;
    // 0x1e21bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e21c0:
    // 0x1e21c0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E21C0u;
    {
        const bool branch_taken_0x1e21c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e21c0) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21C8u;
    // 0x1e21c8: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e21cc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1e21ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e21d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E21D0u;
    {
        const bool branch_taken_0x1e21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21d0) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21D8u;
    // 0x1e21d8: 0xaf838d3c  sw          $v1, -0x72C4($gp)
    ctx->pc = 0x1e21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 3));
    // 0x1e21dc: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e21e0:
    // 0x1e21e0: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x1E21E0u;
    SET_GPR_U32(ctx, 31, 0x1E21E8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x1E21E0u, 0x1E21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21E8u;
label_1e21e8:
    // 0x1e21e8: 0xc07b230  jal         func_1EC8C0
    ctx->pc = 0x1E21E8u;
    SET_GPR_U32(ctx, 31, 0x1E21F0u);
    ctx->pc = 0x1EC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C0u, 0x1E21E8u, 0x1E21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21F0u;
label_1e21f0:
    // 0x1e21f0: 0xc07ab54  jal         func_1EAD50
    ctx->pc = 0x1E21F0u;
    SET_GPR_U32(ctx, 31, 0x1E21F8u);
    ctx->pc = 0x1EAD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD50u, 0x1E21F0u, 0x1E21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x1E21F8u;
    SET_GPR_U32(ctx, 31, 0x1E2200u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E21F8u, 0x1E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2200u;
label_1e2200:
    // 0x1e2200: 0xc078d9c  jal         func_1E3670
    ctx->pc = 0x1E2200u;
    SET_GPR_U32(ctx, 31, 0x1E2208u);
    ctx->pc = 0x1E3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3670u, 0x1E2200u, 0x1E2208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2208u;
label_1e2208:
    // 0x1e2208: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e220c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e2210: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1e2210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x1e2214: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e2218: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e221c: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
    // 0x1e2220: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e2224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e222c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1e2230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e2234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e2234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e2238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e223c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2240: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E2240u;
    SET_GPR_U32(ctx, 31, 0x1E2248u);
    ctx->pc = 0x1E2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2240u;
    // 0x1e2244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2240u, 0x1E2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2248u;
}
