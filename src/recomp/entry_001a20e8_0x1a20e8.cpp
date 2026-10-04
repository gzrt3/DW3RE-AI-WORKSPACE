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

// Function: entry_001a20e8
// Address: 0x1a20e8 - 0x1a2148
void entry_001a20e8_0x1a20e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a20e8_0x1a20e8");
#endif

    switch (ctx->pc) {
        case 0x1a20f4u: goto label_1a20f4;
        case 0x1a2114u: goto label_1a2114;
        default: break;
    }

    ctx->pc = 0x1a20e8u;

    // 0x1a20e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a20ec: 0xc0685e2  jal         func_1A1788
    ctx->pc = 0x1A20ECu;
    SET_GPR_U32(ctx, 31, 0x1A20F4u);
    ctx->pc = 0x1A20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20ECu;
    // 0x1a20f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1788u, 0x1A20ECu, 0x1A20F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A20F4u;
label_1a20f4:
    // 0x1a20f4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x1a20f8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A20F8u;
    {
        const bool branch_taken_0x1a20f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a20f8) {
            ctx->pc = 0x1A20FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A20F8u;
            // 0x1a20fc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A211Cu;
            goto label_1a211c;
        }
    }
    ctx->pc = 0x1A2100u;
    // 0x1a2100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2108: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1a2108u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1a210c: 0xc068852  jal         func_1A2148
    ctx->pc = 0x1A210Cu;
    SET_GPR_U32(ctx, 31, 0x1A2114u);
    ctx->pc = 0x1A2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A210Cu;
    // 0x1a2110: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2148u, 0x1A210Cu, 0x1A2114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2114u;
label_1a2114:
    // 0x1a2114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2114u;
    {
        const bool branch_taken_0x1a2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2114u;
        // 0x1a2118: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2114) {
            ctx->pc = 0x1A2120u;
            goto label_1a2120;
        }
    }
    ctx->pc = 0x1A211Cu;
label_1a211c:
    // 0x1a211c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a2120:
    // 0x1a2120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a2124: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a2124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a2128: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a2128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a212c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a212cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2130: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a2130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a2134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a2134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2138: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a2138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a213c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a213cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2140: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2140u;
        // 0x1a2144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2148u;
}
