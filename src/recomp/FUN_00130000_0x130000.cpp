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

// Function: FUN_00130000
// Address: 0x130000 - 0x1300a4
void FUN_00130000_0x130000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130000_0x130000");
#endif

    switch (ctx->pc) {
        case 0x130010u: goto label_130010;
        case 0x130020u: goto label_130020;
        case 0x130028u: goto label_130028;
        case 0x130038u: goto label_130038;
        case 0x130048u: goto label_130048;
        case 0x130050u: goto label_130050;
        case 0x130060u: goto label_130060;
        case 0x130070u: goto label_130070;
        case 0x130078u: goto label_130078;
        case 0x130088u: goto label_130088;
        case 0x130098u: goto label_130098;
        case 0x1300a0u: goto label_1300a0;
        default: break;
    }

    ctx->pc = 0x130000u;

    // 0x130000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130008: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130008u;
    SET_GPR_U32(ctx, 31, 0x130010u);
    ctx->pc = 0x13000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130008u;
    // 0x13000c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130008u, 0x130010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130010u;
label_130010:
    // 0x130010: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130010u;
    {
        const bool branch_taken_0x130010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130010u;
        // 0x130014: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130010) {
            ctx->pc = 0x130030u;
            goto label_130030;
        }
    }
    ctx->pc = 0x130018u;
    // 0x130018: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130018u;
    SET_GPR_U32(ctx, 31, 0x130020u);
    ctx->pc = 0x13001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130018u;
    // 0x13001c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130018u, 0x130020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130020u;
label_130020:
    // 0x130020: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130020u;
    SET_GPR_U32(ctx, 31, 0x130028u);
    ctx->pc = 0x130024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130020u;
    // 0x130024: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130020u, 0x130028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130028u;
label_130028:
    // 0x130028: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x130028u;
    {
        const bool branch_taken_0x130028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130028u;
        // 0x13002c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130028) {
            ctx->pc = 0x1300A4u;
            return;
        }
    }
    ctx->pc = 0x130030u;
label_130030:
    // 0x130030: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130030u;
    SET_GPR_U32(ctx, 31, 0x130038u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130030u, 0x130038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130038u;
label_130038:
    // 0x130038: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130038u;
    {
        const bool branch_taken_0x130038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130038u;
        // 0x13003c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130038) {
            ctx->pc = 0x130058u;
            goto label_130058;
        }
    }
    ctx->pc = 0x130040u;
    // 0x130040: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130040u;
    SET_GPR_U32(ctx, 31, 0x130048u);
    ctx->pc = 0x130044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130040u;
    // 0x130044: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130040u, 0x130048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130048u;
label_130048:
    // 0x130048: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130048u;
    SET_GPR_U32(ctx, 31, 0x130050u);
    ctx->pc = 0x13004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130048u;
    // 0x13004c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130048u, 0x130050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130050u;
label_130050:
    // 0x130050: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x130050u;
    {
        const bool branch_taken_0x130050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130050) {
            ctx->pc = 0x1300A0u;
            goto label_1300a0;
        }
    }
    ctx->pc = 0x130058u;
label_130058:
    // 0x130058: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130058u;
    SET_GPR_U32(ctx, 31, 0x130060u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130058u, 0x130060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130060u;
label_130060:
    // 0x130060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130060u;
    {
        const bool branch_taken_0x130060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130060u;
        // 0x130064: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130060) {
            ctx->pc = 0x130080u;
            goto label_130080;
        }
    }
    ctx->pc = 0x130068u;
    // 0x130068: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130068u;
    SET_GPR_U32(ctx, 31, 0x130070u);
    ctx->pc = 0x13006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130068u;
    // 0x13006c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130068u, 0x130070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130070u;
label_130070:
    // 0x130070: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130070u;
    SET_GPR_U32(ctx, 31, 0x130078u);
    ctx->pc = 0x130074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130070u;
    // 0x130074: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130070u, 0x130078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130078u;
label_130078:
    // 0x130078: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x130078u;
    {
        const bool branch_taken_0x130078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130078) {
            ctx->pc = 0x1300A0u;
            goto label_1300a0;
        }
    }
    ctx->pc = 0x130080u;
label_130080:
    // 0x130080: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x130080u;
    SET_GPR_U32(ctx, 31, 0x130088u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x130080u, 0x130088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130088u;
label_130088:
    // 0x130088: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130088u;
    {
        const bool branch_taken_0x130088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130088u;
        // 0x13008c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130088) {
            ctx->pc = 0x1300A0u;
            goto label_1300a0;
        }
    }
    ctx->pc = 0x130090u;
    // 0x130090: 0xc059eb8  jal         func_167AE0
    ctx->pc = 0x130090u;
    SET_GPR_U32(ctx, 31, 0x130098u);
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x130090u, 0x130098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130098u;
label_130098:
    // 0x130098: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x130098u;
    SET_GPR_U32(ctx, 31, 0x1300A0u);
    ctx->pc = 0x13009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130098u;
    // 0x13009c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x130098u, 0x1300A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A0u;
label_1300a0:
    // 0x1300a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1300a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1300a4u;
}
