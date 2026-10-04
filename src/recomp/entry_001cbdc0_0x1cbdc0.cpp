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

// Function: entry_001cbdc0
// Address: 0x1cbdc0 - 0x1cbe1c
void entry_001cbdc0_0x1cbdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbdc0_0x1cbdc0");
#endif

    ctx->pc = 0x1cbdc0u;

    // 0x1cbdc0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cbdc4: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1cbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1cbdc8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbdcc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1cbdd0: 0x90490000  lbu         $t1, 0x0($v0)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbdd4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1cbdd8: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x1cbddc: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1cbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1cbde0: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1cbde4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cbde8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x1cbdec: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1cbdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1cbdf0: 0x24424c8c  addiu       $v0, $v0, 0x4C8C
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19596));
    // 0x1cbdf4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cbdf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1cbdfc: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x1cbdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cbe00: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1cbe04: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x1cbe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1cbe08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cbe0c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cbe10: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbe14: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x1CBE14u;
    SET_GPR_U32(ctx, 31, 0x1CBE1Cu);
    ctx->pc = 0x1CBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE14u;
    // 0x1cbe18: 0x8f8581d0  lw          $a1, -0x7E30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x1CBE14u, 0x1CBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE1Cu;
}
