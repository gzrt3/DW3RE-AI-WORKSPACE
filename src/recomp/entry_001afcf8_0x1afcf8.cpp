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

// Function: entry_001afcf8
// Address: 0x1afcf8 - 0x1afd30
void entry_001afcf8_0x1afcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afcf8_0x1afcf8");
#endif

    switch (ctx->pc) {
        case 0x1afd14u: goto label_1afd14;
        case 0x1afd1cu: goto label_1afd1c;
        default: break;
    }

    ctx->pc = 0x1afcf8u;

    // 0x1afcf8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1afcfc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1afcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1afd00: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x375F50u));
    // 0x1afd04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1afd08: 0xac717298  sw          $s1, 0x7298($v1)
    ctx->pc = 0x1afd08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x287298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x287298u, _value); } while (0);
    // 0x1afd0c: 0xc0691c8  jal         func_1A4720
    ctx->pc = 0x1AFD0Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD14u);
    ctx->pc = 0x1AFD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD0Cu;
    // 0x1afd10: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4720u, 0x1AFD0Cu, 0x1AFD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD14u;
label_1afd14:
    // 0x1afd14: 0xc06bf0a  jal         func_1AFC28
    ctx->pc = 0x1AFD14u;
    SET_GPR_U32(ctx, 31, 0x1AFD1Cu);
    ctx->pc = 0x1AFD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD14u;
    // 0x1afd18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC28u, 0x1AFD14u, 0x1AFD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD1Cu;
label_1afd1c:
    // 0x1afd1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFD1Cu;
    {
        const bool branch_taken_0x1afd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD1Cu;
        // 0x1afd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afd1c) {
            ctx->pc = 0x1AFD38u;
            return;
        }
    }
    ctx->pc = 0x1AFD24u;
    // 0x1afd24: 0x8e0472ac  lw          $a0, 0x72AC($s0)
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
    // 0x1afd28: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFD28u;
    SET_GPR_U32(ctx, 31, 0x1AFD30u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFD28u, 0x1AFD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD30u;
}
