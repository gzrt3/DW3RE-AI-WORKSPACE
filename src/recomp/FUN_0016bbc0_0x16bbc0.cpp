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

// Function: FUN_0016bbc0
// Address: 0x16bbc0 - 0x16bc4c
void FUN_0016bbc0_0x16bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bbc0_0x16bbc0");
#endif

    switch (ctx->pc) {
        case 0x16bbd4u: goto label_16bbd4;
        case 0x16bbecu: goto label_16bbec;
        default: break;
    }

    ctx->pc = 0x16bbc0u;

    // 0x16bbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bbc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bbc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bbcc: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x16BBCCu;
    SET_GPR_U32(ctx, 31, 0x16BBD4u);
    ctx->pc = 0x16BBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBCCu;
    // 0x16bbd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x16BBCCu, 0x16BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBD4u;
label_16bbd4:
    // 0x16bbd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bbd8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BBD8u;
    {
        const bool branch_taken_0x16bbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x16BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBD8u;
        // 0x16bbdc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbd8) {
            ctx->pc = 0x16BBE4u;
            goto label_16bbe4;
        }
    }
    ctx->pc = 0x16BBE0u;
    // 0x16bbe0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x16bbe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_16bbe4:
    // 0x16bbe4: 0xc08d9e0  jal         func_236780
    ctx->pc = 0x16BBE4u;
    SET_GPR_U32(ctx, 31, 0x16BBECu);
    ctx->pc = 0x236780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236780u, 0x16BBE4u, 0x16BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBECu;
label_16bbec:
    // 0x16bbec: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x16bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16bbf0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BBF0u;
    {
        const bool branch_taken_0x16bbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBF0u;
        // 0x16bbf4: 0x30430020  andi        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbf0) {
            ctx->pc = 0x16BBFCu;
            goto label_16bbfc;
        }
    }
    ctx->pc = 0x16BBF8u;
    // 0x16bbf8: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x16bbf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_16bbfc:
    // 0x16bbfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BBFCu;
    {
        const bool branch_taken_0x16bbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bbfc) {
            ctx->pc = 0x16BC08u;
            goto label_16bc08;
        }
    }
    ctx->pc = 0x16BC04u;
    // 0x16bc04: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x16bc04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_16bc08:
    // 0x16bc08: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x16bc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x16bc0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC0Cu;
    {
        const bool branch_taken_0x16bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC0Cu;
        // 0x16bc10: 0x30430040  andi        $v1, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc0c) {
            ctx->pc = 0x16BC18u;
            goto label_16bc18;
        }
    }
    ctx->pc = 0x16BC14u;
    // 0x16bc14: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x16bc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_16bc18:
    // 0x16bc18: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC18u;
    {
        const bool branch_taken_0x16bc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc18) {
            ctx->pc = 0x16BC24u;
            goto label_16bc24;
        }
    }
    ctx->pc = 0x16BC20u;
    // 0x16bc20: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x16bc20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_16bc24:
    // 0x16bc24: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x16bc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16bc28: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC28u;
    {
        const bool branch_taken_0x16bc28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc28) {
            ctx->pc = 0x16BC34u;
            goto label_16bc34;
        }
    }
    ctx->pc = 0x16BC30u;
    // 0x16bc30: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x16bc30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
label_16bc34:
    // 0x16bc34: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x16bc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x16bc38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16BC38u;
    {
        const bool branch_taken_0x16bc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bc38) {
            ctx->pc = 0x16BC44u;
            goto label_16bc44;
        }
    }
    ctx->pc = 0x16BC40u;
    // 0x16bc40: 0x36100040  ori         $s0, $s0, 0x40
    ctx->pc = 0x16bc40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)64);
label_16bc44:
    // 0x16bc44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16bc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bc48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x16bc4cu;
}
