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

// Function: FUN_001447c0
// Address: 0x1447c0 - 0x144834
void FUN_001447c0_0x1447c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001447c0_0x1447c0");
#endif

    switch (ctx->pc) {
        case 0x1447d8u: goto label_1447d8;
        default: break;
    }

    ctx->pc = 0x1447c0u;

    // 0x1447c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1447c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1447c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1447c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1447c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1447cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1447ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447d0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1447D0u;
    SET_GPR_U32(ctx, 31, 0x1447D8u);
    ctx->pc = 0x1447D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1447D0u;
    // 0x1447d4: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A700u, 0x1447D0u, 0x1447D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1447D8u;
label_1447d8:
    // 0x1447d8: 0xae0201f0  sw          $v0, 0x1F0($s0)
    ctx->pc = 0x1447d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 496), GPR_U32(ctx, 2));
    // 0x1447dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1447dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1447e0: 0x8e0401f0  lw          $a0, 0x1F0($s0)
    ctx->pc = 0x1447e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x1447e4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1447e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1447e8: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x1447e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1447ec: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x1447ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x1447f0: 0xae0401f4  sw          $a0, 0x1F4($s0)
    ctx->pc = 0x1447f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 4));
    // 0x1447f4: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1447f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x1447f8: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1447F8u;
    {
        const bool branch_taken_0x1447f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1447f8) {
            ctx->pc = 0x144820u;
            goto label_144820;
        }
    }
    ctx->pc = 0x144800u;
    // 0x144800: 0x8e0401f4  lw          $a0, 0x1F4($s0)
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x144804: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144808: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x144808u;
    {
        const bool branch_taken_0x144808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x144808) {
            ctx->pc = 0x144820u;
            goto label_144820;
        }
    }
    ctx->pc = 0x144810u;
    // 0x144810: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x144810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x144814: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x144814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x144818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x144818u;
    {
        const bool branch_taken_0x144818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144818u;
        // 0x14481c: 0xae030198  sw          $v1, 0x198($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144818) {
            ctx->pc = 0x144830u;
            goto label_144830;
        }
    }
    ctx->pc = 0x144820u;
label_144820:
    // 0x144820: 0x8e040198  lw          $a0, 0x198($s0)
    ctx->pc = 0x144820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x144824: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x144828: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14482c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x14482cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_144830:
    // 0x144830: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x144834u;
}
