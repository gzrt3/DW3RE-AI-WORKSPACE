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

// Function: entry_0012fdac
// Address: 0x12fdac - 0x12fe1c
void entry_0012fdac_0x12fdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fdac_0x12fdac");
#endif

    switch (ctx->pc) {
        case 0x12fdb4u: goto label_12fdb4;
        case 0x12fdbcu: goto label_12fdbc;
        case 0x12fdc4u: goto label_12fdc4;
        case 0x12fdccu: goto label_12fdcc;
        case 0x12fdd4u: goto label_12fdd4;
        case 0x12fddcu: goto label_12fddc;
        case 0x12fde4u: goto label_12fde4;
        case 0x12fdecu: goto label_12fdec;
        case 0x12fdf4u: goto label_12fdf4;
        case 0x12fdfcu: goto label_12fdfc;
        case 0x12fe04u: goto label_12fe04;
        case 0x12fe0cu: goto label_12fe0c;
        case 0x12fe14u: goto label_12fe14;
        default: break;
    }

    ctx->pc = 0x12fdacu;

    // 0x12fdac: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDACu;
    SET_GPR_U32(ctx, 31, 0x12FDB4u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDACu, 0x12FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDB4u;
label_12fdb4:
    // 0x12fdb4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDB4u;
    SET_GPR_U32(ctx, 31, 0x12FDBCu);
    ctx->pc = 0x12FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDB4u;
    // 0x12fdb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDB4u, 0x12FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDBCu;
label_12fdbc:
    // 0x12fdbc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDBCu;
    SET_GPR_U32(ctx, 31, 0x12FDC4u);
    ctx->pc = 0x12FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDBCu;
    // 0x12fdc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDBCu, 0x12FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC4u;
label_12fdc4:
    // 0x12fdc4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDC4u;
    SET_GPR_U32(ctx, 31, 0x12FDCCu);
    ctx->pc = 0x12FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDC4u;
    // 0x12fdc8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDC4u, 0x12FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDCCu;
label_12fdcc:
    // 0x12fdcc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDCCu;
    SET_GPR_U32(ctx, 31, 0x12FDD4u);
    ctx->pc = 0x12FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDCCu;
    // 0x12fdd0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDCCu, 0x12FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD4u;
label_12fdd4:
    // 0x12fdd4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDD4u;
    SET_GPR_U32(ctx, 31, 0x12FDDCu);
    ctx->pc = 0x12FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD4u;
    // 0x12fdd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDD4u, 0x12FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDDCu;
label_12fddc:
    // 0x12fddc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDDCu;
    SET_GPR_U32(ctx, 31, 0x12FDE4u);
    ctx->pc = 0x12FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDDCu;
    // 0x12fde0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDDCu, 0x12FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDE4u;
label_12fde4:
    // 0x12fde4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDE4u;
    SET_GPR_U32(ctx, 31, 0x12FDECu);
    ctx->pc = 0x12FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDE4u;
    // 0x12fde8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDE4u, 0x12FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDECu;
label_12fdec:
    // 0x12fdec: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDECu;
    SET_GPR_U32(ctx, 31, 0x12FDF4u);
    ctx->pc = 0x12FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDECu;
    // 0x12fdf0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDECu, 0x12FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDF4u;
label_12fdf4:
    // 0x12fdf4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDF4u;
    SET_GPR_U32(ctx, 31, 0x12FDFCu);
    ctx->pc = 0x12FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDF4u;
    // 0x12fdf8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDF4u, 0x12FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDFCu;
label_12fdfc:
    // 0x12fdfc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDFCu;
    SET_GPR_U32(ctx, 31, 0x12FE04u);
    ctx->pc = 0x12FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDFCu;
    // 0x12fe00: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDFCu, 0x12FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE04u;
label_12fe04:
    // 0x12fe04: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE04u;
    SET_GPR_U32(ctx, 31, 0x12FE0Cu);
    ctx->pc = 0x12FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE04u;
    // 0x12fe08: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE04u, 0x12FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE0Cu;
label_12fe0c:
    // 0x12fe0c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE0Cu;
    SET_GPR_U32(ctx, 31, 0x12FE14u);
    ctx->pc = 0x12FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE0Cu;
    // 0x12fe10: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE0Cu, 0x12FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE14u;
label_12fe14:
    // 0x12fe14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FE14u;
    {
        const bool branch_taken_0x12fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe14) {
            ctx->pc = 0x12FE90u;
            return;
        }
    }
    ctx->pc = 0x12FE1Cu;
}
