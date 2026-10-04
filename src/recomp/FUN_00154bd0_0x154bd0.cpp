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

// Function: FUN_00154bd0
// Address: 0x154bd0 - 0x154c20
void FUN_00154bd0_0x154bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00154bd0_0x154bd0");
#endif

    switch (ctx->pc) {
        case 0x154c1cu: goto label_154c1c;
        default: break;
    }

    ctx->pc = 0x154bd0u;

    // 0x154bd0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x154bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x154bd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154bd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x154bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x154bdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154BDCu;
    {
        const bool branch_taken_0x154bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BDCu;
        // 0x154be0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bdc) {
            ctx->pc = 0x154BF8u;
            goto label_154bf8;
        }
    }
    ctx->pc = 0x154BE4u;
    // 0x154be4: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x154be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x154be8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x154be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x154bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154BF0u;
    {
        const bool branch_taken_0x154bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154bf0) {
            ctx->pc = 0x154C00u;
            goto label_154c00;
        }
    }
    ctx->pc = 0x154BF8u;
label_154bf8:
    // 0x154bf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x154bfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154c00:
    // 0x154c00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154c04: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x154c08: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
    // 0x154c0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x154c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154c14: 0xc066e14  jal         func_19B850
    ctx->pc = 0x154C14u;
    SET_GPR_U32(ctx, 31, 0x154C1Cu);
    ctx->pc = 0x154C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C14u;
    // 0x154c18: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x154C14u, 0x154C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C1Cu;
label_154c1c:
    // 0x154c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x154c20u;
}
