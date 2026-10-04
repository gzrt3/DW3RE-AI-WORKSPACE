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

// Function: FUN_001b0588
// Address: 0x1b0588 - 0x1b062c
void FUN_001b0588_0x1b0588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0588_0x1b0588");
#endif

    switch (ctx->pc) {
        case 0x1b059cu: goto label_1b059c;
        case 0x1b05b0u: goto label_1b05b0;
        case 0x1b0600u: goto label_1b0600;
        case 0x1b061cu: goto label_1b061c;
        default: break;
    }

    ctx->pc = 0x1b0588u;

    // 0x1b0588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b058c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b0590: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b0590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b0594: 0xc06bebc  jal         func_1AFAF0
    ctx->pc = 0x1B0594u;
    SET_GPR_U32(ctx, 31, 0x1B059Cu);
    ctx->pc = 0x1B0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0594u;
    // 0x1b0598: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAF0u, 0x1B0594u, 0x1B059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B059Cu;
label_1b059c:
    // 0x1b059c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b05a0: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1B05A0u;
    {
        const bool branch_taken_0x1b05a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05A0u;
        // 0x1b05a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05a0) {
            ctx->pc = 0x1B0620u;
            goto label_1b0620;
        }
    }
    ctx->pc = 0x1B05A8u;
    // 0x1b05a8: 0xc06be60  jal         func_1AF980
    ctx->pc = 0x1B05A8u;
    SET_GPR_U32(ctx, 31, 0x1B05B0u);
    ctx->pc = 0x1B05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05A8u;
    // 0x1b05ac: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF980u, 0x1B05A8u, 0x1B05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B05B0u;
label_1b05b0:
    // 0x1b05b0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B05B0u;
    {
        const bool branch_taken_0x1b05b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B05B0u;
        // 0x1b05b4: 0x3c100028  lui         $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05b0) {
            ctx->pc = 0x1B061Cu;
            goto label_1b061c;
        }
    }
    ctx->pc = 0x1B05B8u;
    // 0x1b05b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b05bc: 0xae0272d4  sw          $v0, 0x72D4($s0)
    ctx->pc = 0x1b05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 2));
    // 0x1b05c0: 0x260372d4  addiu       $v1, $s0, 0x72D4
    ctx->pc = 0x1b05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 29396));
    // 0x1b05c4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1b05c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1b05c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05cc: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x1b05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x1b05d0: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b05d4: 0xae2272b0  sw          $v0, 0x72B0($s1)
    ctx->pc = 0x1b05d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
    // 0x1b05d8: 0x24848450  addiu       $a0, $a0, -0x7BB0
    ctx->pc = 0x1b05d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935632));
    // 0x1b05dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b05e0: 0x256bf110  addiu       $t3, $t3, -0xEF0
    ctx->pc = 0x1b05e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294963472));
    // 0x1b05e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b05e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b05e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b05ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b05ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b05f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b05f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b05f8: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B05F8u;
    SET_GPR_U32(ctx, 31, 0x1B0600u);
    ctx->pc = 0x1B05FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B05F8u;
    // 0x1b05fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B05F8u, 0x1B0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0600u;
label_1b0600:
    // 0x1b0600: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B0600u;
    {
        const bool branch_taken_0x1b0600 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b0600) {
            ctx->pc = 0x1B0604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0600u;
            // 0x1b0604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0620u;
            goto label_1b0620;
        }
    }
    ctx->pc = 0x1B0608u;
    // 0x1b0608: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1b0608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
    // 0x1b060c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1b0610: 0xae2072b0  sw          $zero, 0x72B0($s1)
    ctx->pc = 0x1b0610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29360), GPR_U32(ctx, 0));
    // 0x1b0614: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B0614u;
    SET_GPR_U32(ctx, 31, 0x1B061Cu);
    ctx->pc = 0x1B0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0614u;
    // 0x1b0618: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B0614u, 0x1B061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B061Cu;
label_1b061c:
    // 0x1b061c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b061cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0620:
    // 0x1b0620: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b0620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0624: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b0624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0628: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b0628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b062cu;
}
