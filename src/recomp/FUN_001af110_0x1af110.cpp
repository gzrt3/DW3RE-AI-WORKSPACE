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

// Function: FUN_001af110
// Address: 0x1af110 - 0x1af1a8
void FUN_001af110_0x1af110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af110_0x1af110");
#endif

    switch (ctx->pc) {
        case 0x1af164u: goto label_1af164;
        case 0x1af18cu: goto label_1af18c;
        default: break;
    }

    ctx->pc = 0x1af110u;

    // 0x1af110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af114: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1af118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af11c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1af120: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af124: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1af128: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x1af12c: 0xae0372d4  sw          $v1, 0x72D4($s0)
    ctx->pc = 0x1af12cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2872D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D4u, _value); } while (0);
    // 0x1af130: 0x8e0272d4  lw          $v0, 0x72D4($s0)
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2872D4u));
    // 0x1af134: 0xac8272d8  sw          $v0, 0x72D8($a0)
    ctx->pc = 0x1af134u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872D8u, _value); } while (0);
    // 0x1af138: 0x8e0372d4  lw          $v1, 0x72D4($s0)
    ctx->pc = 0x1af138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2872D4u));
    // 0x1af13c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF13Cu;
    {
        const bool branch_taken_0x1af13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF13Cu;
        // 0x1af140: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af13c) {
            ctx->pc = 0x1AF158u;
            goto label_1af158;
        }
    }
    ctx->pc = 0x1AF144u;
    // 0x1af144: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1af144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1af148: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af14c: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af14cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
    // 0x1af150: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AF150u;
    {
        const bool branch_taken_0x1af150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF150u;
        // 0x1af154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af150) {
            ctx->pc = 0x1AF1A4u;
            goto label_1af1a4;
        }
    }
    ctx->pc = 0x1AF158u;
label_1af158:
    // 0x1af158: 0x8c4472a8  lw          $a0, 0x72A8($v0)
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    // 0x1af15c: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1AF15Cu;
    SET_GPR_U32(ctx, 31, 0x1AF164u);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1AF15Cu, 0x1AF164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF164u;
label_1af164:
    // 0x1af164: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af168: 0x8c627294  lw          $v0, 0x7294($v1)
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x287294u));
    // 0x1af16c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF16Cu;
    {
        const bool branch_taken_0x1af16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af16c) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF174u;
    // 0x1af174: 0x8c435f40  lw          $v1, 0x5F40($v0)
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24384)));
    // 0x1af178: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF178u;
    {
        const bool branch_taken_0x1af178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF178u;
        // 0x1af17c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af178) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF180u;
    // 0x1af180: 0x8c4472a0  lw          $a0, 0x72A0($v0)
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
    // 0x1af184: 0xc069214  jal         func_1A4850
    ctx->pc = 0x1AF184u;
    SET_GPR_U32(ctx, 31, 0x1AF18Cu);
    ctx->pc = 0x1A4850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4850u, 0x1AF184u, 0x1AF18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF18Cu;
label_1af18c:
    // 0x1af18c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF18Cu;
    {
        const bool branch_taken_0x1af18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af18c) {
            ctx->pc = 0x1AF19Cu;
            goto label_1af19c;
        }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af198: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
label_1af19c:
    // 0x1af19c: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1af19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1af1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af1a4:
    // 0x1af1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1af1a8u;
}
