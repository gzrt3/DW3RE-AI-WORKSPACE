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

// Function: entry_00287024
// Address: 0x287024 - 0x287068
void entry_00287024_0x287024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00287024_0x287024");
#endif

    switch (ctx->pc) {
        case 0x287054u: goto label_287054;
        default: break;
    }

    ctx->pc = 0x287024u;

    // 0x287024: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x287024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287028: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28702c: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x28702cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
    // 0x287030: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x287030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x287034: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287034u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287038: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x287038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x28703c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28703cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x287040: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x287040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x287044: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x287044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x287048: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x287048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x28704c: 0xc01d9a0  jal         func_076680
    ctx->pc = 0x28704Cu;
    SET_GPR_U32(ctx, 31, 0x287054u);
    ctx->pc = 0x287050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28704Cu;
    // 0x287050: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x28704Cu, 0x287054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287054u;
label_287054:
    // 0x287054: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x287054u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287058: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x28705c: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x28705Cu;
    {
        const bool branch_taken_0x28705c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x287060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28705Cu;
        // 0x287060: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28705c) {
            ctx->pc = 0x286F68u;
            return;
        }
    }
    ctx->pc = 0x287064u;
    // 0x287064: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x287064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    ctx->pc = 0x287068u;
}
