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

// Function: FUN_001adda0
// Address: 0x1adda0 - 0x1ade0c
void FUN_001adda0_0x1adda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001adda0_0x1adda0");
#endif

    switch (ctx->pc) {
        case 0x1addd8u: goto label_1addd8;
        default: break;
    }

    ctx->pc = 0x1adda0u;

    // 0x1adda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1adda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1adda4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1adda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1adda8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1addac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1addacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1addb0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1addb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1addb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1addb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1addb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1addb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1addbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1addbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1addc0: 0xac627210  sw          $v0, 0x7210($v1)
    ctx->pc = 0x1addc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x287210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x287210u, _value); } while (0);
    // 0x1addc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1ADDC4u;
    {
        const bool branch_taken_0x1addc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADDC4u;
        // 0x1addc8: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1addc4) {
            ctx->pc = 0x1ADDF4u;
            goto label_1addf4;
        }
    }
    ctx->pc = 0x1ADDCCu;
    // 0x1addcc: 0x0  nop
    ctx->pc = 0x1addccu;
    // NOP
    // 0x1addd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1addd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1addd4: 0x0  nop
    ctx->pc = 0x1addd4u;
    // NOP
label_1addd8:
    // 0x1addd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1addd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1adddc: 0x0  nop
    ctx->pc = 0x1adddcu;
    // NOP
    // 0x1adde0: 0x0  nop
    ctx->pc = 0x1adde0u;
    // NOP
    // 0x1adde4: 0x0  nop
    ctx->pc = 0x1adde4u;
    // NOP
    // 0x1adde8: 0x0  nop
    ctx->pc = 0x1adde8u;
    // NOP
    // 0x1addec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ADDECu;
    {
        const bool branch_taken_0x1addec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1addec) {
            ctx->pc = 0x1ADDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1addd8;
        }
    }
    ctx->pc = 0x1ADDF4u;
label_1addf4:
    // 0x1addf4: 0x26305c80  addiu       $s0, $s1, 0x5C80
    ctx->pc = 0x1addf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 23680));
    // 0x1addf8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1addfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1addfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade00: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x1ade00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x1ade04: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1ADE04u;
    SET_GPR_U32(ctx, 31, 0x1ADE0Cu);
    ctx->pc = 0x1ADE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE04u;
    // 0x1ade08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1ADE04u, 0x1ADE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE0Cu;
}
