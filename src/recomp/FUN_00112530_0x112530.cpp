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

// Function: FUN_00112530
// Address: 0x112530 - 0x1125c4
void FUN_00112530_0x112530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00112530_0x112530");
#endif

    ctx->pc = 0x112530u;

    // 0x112530: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x112530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x112534: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x112534u;
    {
        const bool branch_taken_0x112534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112534u;
        // 0x112538: 0x28810021  slti        $at, $a0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112534) {
            ctx->pc = 0x112588u;
            goto label_112588;
        }
    }
    ctx->pc = 0x11253Cu;
    // 0x11253c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x11253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x112540: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x112540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x112544: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x112544u;
    {
        const bool branch_taken_0x112544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112544u;
        // 0x112548: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112544) {
            ctx->pc = 0x112580u;
            goto label_112580;
        }
    }
    ctx->pc = 0x11254Cu;
    // 0x11254c: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x112550: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x112550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x112554: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x112554u;
    {
        const bool branch_taken_0x112554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112554u;
        // 0x112558: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112554) {
            ctx->pc = 0x11257Cu;
            goto label_11257c;
        }
    }
    ctx->pc = 0x11255Cu;
    // 0x11255c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x112560: 0x24421fb0  addiu       $v0, $v0, 0x1FB0
    ctx->pc = 0x112560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8112));
    // 0x112564: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x112564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x112568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11256c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x11256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x112570: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x112570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x112574: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x112574u;
    {
        const bool branch_taken_0x112574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112574u;
        // 0x112578: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112574) {
            ctx->pc = 0x1125BCu;
            goto label_1125bc;
        }
    }
    ctx->pc = 0x11257Cu;
label_11257c:
    // 0x11257c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112580:
    // 0x112580: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112580u;
    {
        const bool branch_taken_0x112580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112580u;
        // 0x112584: 0xc21824  and         $v1, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112580) {
            ctx->pc = 0x1125C0u;
            goto label_1125c0;
        }
    }
    ctx->pc = 0x112588u;
label_112588:
    // 0x112588: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x112588u;
    {
        const bool branch_taken_0x112588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112588u;
        // 0x11258c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112588) {
            ctx->pc = 0x1125BCu;
            goto label_1125bc;
        }
    }
    ctx->pc = 0x112590u;
    // 0x112590: 0x28a10021  slti        $at, $a1, 0x21
    ctx->pc = 0x112590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x112594: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x112594u;
    {
        const bool branch_taken_0x112594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x112598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112594u;
        // 0x112598: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112594) {
            ctx->pc = 0x1125BCu;
            goto label_1125bc;
        }
    }
    ctx->pc = 0x11259Cu;
    // 0x11259c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1125a0: 0x24421dc0  addiu       $v0, $v0, 0x1DC0
    ctx->pc = 0x1125a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7616));
    // 0x1125a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1125a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1125a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1125a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1125ac: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1125acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1125b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1125b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1125b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1125b8: 0x0  nop
    ctx->pc = 0x1125b8u;
    // NOP
label_1125bc:
    // 0x1125bc: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x1125bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1125c0:
    // 0x1125c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1125c4u;
}
