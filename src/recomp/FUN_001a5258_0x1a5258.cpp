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

// Function: FUN_001a5258
// Address: 0x1a5258 - 0x1a52cc
void FUN_001a5258_0x1a5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5258_0x1a5258");
#endif

    switch (ctx->pc) {
        case 0x1a5290u: goto label_1a5290;
        case 0x1a52a4u: goto label_1a52a4;
        default: break;
    }

    ctx->pc = 0x1a5258u;

    // 0x1a5258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a5258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a525c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a5260: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5264: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a526c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a526cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5274: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1a5278: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a527c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1a527cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1a5280: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5280u;
    {
        const bool branch_taken_0x1a5280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5280) {
            ctx->pc = 0x1A5290u;
            goto label_1a5290;
        }
    }
    ctx->pc = 0x1A5288u;
    // 0x1a5288: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A5288u;
    SET_GPR_U32(ctx, 31, 0x1A5290u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A5288u, 0x1A5290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5290u;
label_1a5290:
    // 0x1a5290: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1a5294: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1a5294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1a5298: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1a5298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1a529c: 0xc06946c  jal         func_1A51B0
    ctx->pc = 0x1A529Cu;
    SET_GPR_U32(ctx, 31, 0x1A52A4u);
    ctx->pc = 0x1A52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A529Cu;
    // 0x1a52a0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A51B0u, 0x1A529Cu, 0x1A52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A52A4u;
label_1a52a4:
    // 0x1a52a4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A52A4u;
    {
        const bool branch_taken_0x1a52a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A4u;
        // 0x1a52a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52a4) {
            ctx->pc = 0x1A52C0u;
            goto label_1a52c0;
        }
    }
    ctx->pc = 0x1A52ACu;
    // 0x1a52ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a52b8: 0x806b52a  j           func_1AD4A8
    ctx->pc = 0x1A52B8u;
    ctx->pc = 0x1A52BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A52B8u;
    // 0x1a52bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    FUN_001ad4a8_0x1ad4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A52C0u;
label_1a52c0:
    // 0x1a52c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a52c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a52c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a52c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a52c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a52c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a52ccu;
}
