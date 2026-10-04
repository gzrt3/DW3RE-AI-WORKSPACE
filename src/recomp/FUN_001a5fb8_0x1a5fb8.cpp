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

// Function: FUN_001a5fb8
// Address: 0x1a5fb8 - 0x1a6060
void FUN_001a5fb8_0x1a5fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5fb8_0x1a5fb8");
#endif

    switch (ctx->pc) {
        case 0x1a5ff8u: goto label_1a5ff8;
        default: break;
    }

    ctx->pc = 0x1a5fb8u;

    // 0x1a5fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a5fbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5fc0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1a5fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    // 0x1a5fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5fc8: 0x8e255b60  lw          $a1, 0x5B60($s1)
    ctx->pc = 0x1a5fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x285B60u));
    // 0x1a5fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5fd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5fd4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1a5fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x1a5fd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5FD8u;
    {
        const bool branch_taken_0x1a5fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FD8u;
        // 0x1a5fdc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5fd8) {
            ctx->pc = 0x1A6000u;
            goto label_1a6000;
        }
    }
    ctx->pc = 0x1A5FE0u;
    // 0x1a5fe0: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a5fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    // 0x1a5fe4: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a5fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
    // 0x1a5fe8: 0x264216c0  addiu       $v0, $s2, 0x16C0
    ctx->pc = 0x1a5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
    // 0x1a5fec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ff0: 0xc06968e  jal         func_1A5A38
    ctx->pc = 0x1A5FF0u;
    SET_GPR_U32(ctx, 31, 0x1A5FF8u);
    ctx->pc = 0x1A5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FF0u;
    // 0x1a5ff4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A38u, 0x1A5FF0u, 0x1A5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FF8u;
label_1a5ff8:
    // 0x1a5ff8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5FF8u;
    {
        const bool branch_taken_0x1a5ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5FF8u;
        // 0x1a5ffc: 0x8e255b60  lw          $a1, 0x5B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ff8) {
            ctx->pc = 0x1A6004u;
            goto label_1a6004;
        }
    }
    ctx->pc = 0x1A6000u;
label_1a6000:
    // 0x1a6000: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a6004:
    // 0x1a6004: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a6004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6008: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A6008u;
    {
        const bool branch_taken_0x1a6008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6008u;
        // 0x1a600c: 0x264216c0  addiu       $v0, $s2, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6008) {
            ctx->pc = 0x1A6040u;
            goto label_1a6040;
        }
    }
    ctx->pc = 0x1A6010u;
    // 0x1a6010: 0x264416c0  addiu       $a0, $s2, 0x16C0
    ctx->pc = 0x1a6010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5824));
    // 0x1a6014: 0xae205b60  sw          $zero, 0x5B60($s1)
    ctx->pc = 0x1a6014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 0));
    // 0x1a6018: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1a6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a601c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a601cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6020: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a6020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a6024: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a602c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a602cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6034: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1a6034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6038: 0x806968e  j           func_1A5A38
    ctx->pc = 0x1A6038u;
    ctx->pc = 0x1A603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6038u;
    // 0x1a603c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A38u;
    FUN_001a5a38_0x1a5a38(rdram, ctx, runtime); return;
    ctx->pc = 0x1A6040u;
label_1a6040:
    // 0x1a6040: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1a6040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a6044: 0xae235b60  sw          $v1, 0x5B60($s1)
    ctx->pc = 0x1a6044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 23392), GPR_U32(ctx, 3));
    // 0x1a6048: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a6048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a604c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1a604cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a6050: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a6050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a6054: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6058: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a605c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a6060u;
}
