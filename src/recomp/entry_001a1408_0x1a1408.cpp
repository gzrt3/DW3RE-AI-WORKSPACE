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

// Function: entry_001a1408
// Address: 0x1a1408 - 0x1a147c
void entry_001a1408_0x1a1408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1408_0x1a1408");
#endif

    switch (ctx->pc) {
        case 0x1a141cu: goto label_1a141c;
        case 0x1a144cu: goto label_1a144c;
        default: break;
    }

    ctx->pc = 0x1a1408u;

    // 0x1a1408: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1a1408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a140c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A140Cu;
    {
        const bool branch_taken_0x1a140c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a140c) {
            ctx->pc = 0x1A147Cu;
            return;
        }
    }
    ctx->pc = 0x1A1414u;
    // 0x1a1414: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A1414u;
    SET_GPR_U32(ctx, 31, 0x1A141Cu);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A1414u, 0x1A141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A141Cu;
label_1a141c:
    // 0x1a141c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a1424: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x1a1424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x1a1428: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a1428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a142c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a142cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4));
    // 0x1a1430: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x1a1430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x1a1434: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a1434u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 17));
    // 0x1a1438: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a143c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x1a143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x1a1440: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x1a1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a1444: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A1444u;
    SET_GPR_U32(ctx, 31, 0x1A144Cu);
    ctx->pc = 0x1A1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1444u;
    // 0x1a1448: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A1444u, 0x1A144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A144Cu;
label_1a144c:
    // 0x1a144c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a144cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a1450: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1a1454: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1458: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1a1458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1a145c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1a1460: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a1460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a1464: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a1464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a1468: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x1a1468u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1a146c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1a146cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a1470: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1a1470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1a1474: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1474u;
    {
        const bool branch_taken_0x1a1474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1474u;
        // 0x1a1478: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1474) {
            ctx->pc = 0x1A14BCu;
            return;
        }
    }
    ctx->pc = 0x1A147Cu;
}
