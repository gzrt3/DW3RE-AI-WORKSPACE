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

// Function: FUN_001f1930
// Address: 0x1f1930 - 0x1f19c8
void FUN_001f1930_0x1f1930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1930_0x1f1930");
#endif

    switch (ctx->pc) {
        case 0x1f194cu: goto label_1f194c;
        case 0x1f1954u: goto label_1f1954;
        case 0x1f1960u: goto label_1f1960;
        case 0x1f1968u: goto label_1f1968;
        case 0x1f1990u: goto label_1f1990;
        case 0x1f199cu: goto label_1f199c;
        case 0x1f19a4u: goto label_1f19a4;
        default: break;
    }

    ctx->pc = 0x1f1930u;

    // 0x1f1930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1934: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1934u;
        // 0x1f1938: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F1988u;
            goto label_1f1988;
        }
    }
    ctx->pc = 0x1F193Cu;
    // 0x1f193c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1940: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1f1940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f1944: 0xc078050  jal         func_1E0140
    ctx->pc = 0x1F1944u;
    SET_GPR_U32(ctx, 31, 0x1F194Cu);
    ctx->pc = 0x1F1948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1944u;
    // 0x1f1948: 0xaf828fd0  sw          $v0, -0x7030($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x1F1944u, 0x1F194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F194Cu;
label_1f194c:
    // 0x1f194c: 0xc078070  jal         func_1E01C0
    ctx->pc = 0x1F194Cu;
    SET_GPR_U32(ctx, 31, 0x1F1954u);
    ctx->pc = 0x1E01C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01C0u, 0x1F194Cu, 0x1F1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1954u;
label_1f1954:
    // 0x1f1954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f1954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1958u;
    {
        const bool branch_taken_0x1f1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1958u;
        // 0x1f195c: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1958) {
            ctx->pc = 0x1F1968u;
            goto label_1f1968;
        }
    }
    ctx->pc = 0x1F1960u;
label_1f1960:
    // 0x1f1960: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F1960u;
    SET_GPR_U32(ctx, 31, 0x1F1968u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F1960u, 0x1F1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1968u;
label_1f1968:
    // 0x1f1968: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f1968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
    // 0x1f196c: 0x0  nop
    ctx->pc = 0x1f196cu;
    // NOP
    // 0x1f1970: 0x0  nop
    ctx->pc = 0x1f1970u;
    // NOP
    // 0x1f1974: 0x0  nop
    ctx->pc = 0x1f1974u;
    // NOP
    // 0x1f1978: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1978u;
    {
        const bool branch_taken_0x1f1978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1978) {
            ctx->pc = 0x1F1960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1960;
        }
    }
    ctx->pc = 0x1F1980u;
    // 0x1f1980: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1980u;
    {
        const bool branch_taken_0x1f1980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1980u;
        // 0x1f1984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1980) {
            ctx->pc = 0x1F19C8u;
            return;
        }
    }
    ctx->pc = 0x1F1988u;
label_1f1988:
    // 0x1f1988: 0xc078078  jal         func_1E01E0
    ctx->pc = 0x1F1988u;
    SET_GPR_U32(ctx, 31, 0x1F1990u);
    ctx->pc = 0x1E01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E01E0u, 0x1F1988u, 0x1F1990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1990u;
label_1f1990:
    // 0x1f1990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1994: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1994u;
    {
        const bool branch_taken_0x1f1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1994u;
        // 0x1f1998: 0xaf838fc4  sw          $v1, -0x703C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1994) {
            ctx->pc = 0x1F19A4u;
            goto label_1f19a4;
        }
    }
    ctx->pc = 0x1F199Cu;
label_1f199c:
    // 0x1f199c: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F199Cu;
    SET_GPR_U32(ctx, 31, 0x1F19A4u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F199Cu, 0x1F19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A4u;
label_1f19a4:
    // 0x1f19a4: 0x0  nop
    ctx->pc = 0x1f19a4u;
    // NOP
    // 0x1f19a8: 0x8f838fc4  lw          $v1, -0x703C($gp)
    ctx->pc = 0x1f19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938564)));
    // 0x1f19ac: 0x0  nop
    ctx->pc = 0x1f19acu;
    // NOP
    // 0x1f19b0: 0x0  nop
    ctx->pc = 0x1f19b0u;
    // NOP
    // 0x1f19b4: 0x0  nop
    ctx->pc = 0x1f19b4u;
    // NOP
    // 0x1f19b8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F19B8u;
    {
        const bool branch_taken_0x1f19b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f19b8) {
            ctx->pc = 0x1F199Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f199c;
        }
    }
    ctx->pc = 0x1F19C0u;
    // 0x1f19c0: 0xaf808fd0  sw          $zero, -0x7030($gp)
    ctx->pc = 0x1f19c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 0));
    // 0x1f19c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f19c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1f19c8u;
}
