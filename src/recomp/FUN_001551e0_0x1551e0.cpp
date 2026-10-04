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

// Function: FUN_001551e0
// Address: 0x1551e0 - 0x155274
void FUN_001551e0_0x1551e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001551e0_0x1551e0");
#endif

    switch (ctx->pc) {
        case 0x1551f4u: goto label_1551f4;
        case 0x155248u: goto label_155248;
        default: break;
    }

    ctx->pc = 0x1551e0u;

    // 0x1551e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1551e4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1551e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1551e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1551ec: 0x2484b970  addiu       $a0, $a0, -0x4690
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949232));
    // 0x1551f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1551f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1551f4:
    // 0x1551f4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1551f8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1551F8u;
    {
        const bool branch_taken_0x1551f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1551f8) {
            ctx->pc = 0x155218u;
            goto label_155218;
        }
    }
    ctx->pc = 0x155200u;
    // 0x155200: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x155200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x155204: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x155208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155208u;
    {
        const bool branch_taken_0x155208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155208u;
        // 0x15520c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155208) {
            ctx->pc = 0x155218u;
            goto label_155218;
        }
    }
    ctx->pc = 0x155210u;
    // 0x155210: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x155210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x155214: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x155214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_155218:
    // 0x155218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15521c: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15521Cu;
    {
        const bool branch_taken_0x15521c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15521c) {
            ctx->pc = 0x1551F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1551f4;
        }
    }
    ctx->pc = 0x155224u;
    // 0x155224: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155228: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15522c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15522cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155230: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155234: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x155234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
    // 0x155238: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x15523c: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
    // 0x155240: 0xc066f34  jal         func_19BCD0
    ctx->pc = 0x155240u;
    SET_GPR_U32(ctx, 31, 0x155248u);
    ctx->pc = 0x155244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155240u;
    // 0x155244: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCD0u, 0x155240u, 0x155248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155248u;
label_155248:
    // 0x155248: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15524c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155250: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155254: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155258: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x15525c: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x15525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    // 0x155260: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x155264: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x155264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x155268: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
    // 0x15526c: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x15526Cu;
    SET_GPR_U32(ctx, 31, 0x155274u);
    ctx->pc = 0x155270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15526Cu;
    // 0x155270: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x15526Cu, 0x155274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155274u;
}
