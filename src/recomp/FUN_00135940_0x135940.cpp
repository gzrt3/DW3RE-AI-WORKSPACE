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

// Function: FUN_00135940
// Address: 0x135940 - 0x1359ac
void FUN_00135940_0x135940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135940_0x135940");
#endif

    switch (ctx->pc) {
        case 0x135980u: goto label_135980;
        case 0x135988u: goto label_135988;
        case 0x135990u: goto label_135990;
        default: break;
    }

    ctx->pc = 0x135940u;

    // 0x135940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135944: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135948: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13594c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135950: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135954: 0x9022a3ea  lbu         $v0, -0x5C16($at)
    ctx->pc = 0x135954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x135958: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x135958u;
    {
        const bool branch_taken_0x135958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x135958) {
            ctx->pc = 0x135980u;
            goto label_135980;
        }
    }
    ctx->pc = 0x135960u;
    // 0x135960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x135960u;
    {
        const bool branch_taken_0x135960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135960) {
            ctx->pc = 0x135980u;
            goto label_135980;
        }
    }
    ctx->pc = 0x135968u;
    // 0x135968: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x13596c: 0x30420110  andi        $v0, $v0, 0x110
    ctx->pc = 0x13596cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)272);
    // 0x135970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135970u;
    {
        const bool branch_taken_0x135970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135970u;
        // 0x135974: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135970) {
            ctx->pc = 0x135980u;
            goto label_135980;
        }
    }
    ctx->pc = 0x135978u;
    // 0x135978: 0xc04d44c  jal         func_135130
    ctx->pc = 0x135978u;
    SET_GPR_U32(ctx, 31, 0x135980u);
    ctx->pc = 0x13597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135978u;
    // 0x13597c: 0xa023a3ea  sb          $v1, -0x5C16($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943722), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135130u, 0x135978u, 0x135980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135980u;
label_135980:
    // 0x135980: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x135980u;
    SET_GPR_U32(ctx, 31, 0x135988u);
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x135980u, 0x135988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135988u;
label_135988:
    // 0x135988: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x135988u;
    SET_GPR_U32(ctx, 31, 0x135990u);
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x135988u, 0x135990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135990u;
label_135990:
    // 0x135990: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135994: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x135998: 0x8c30a410  lw          $s0, -0x5BF0($at)
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x30A410u));
    // 0x13599c: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x1359a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1359a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359a4: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1359A4u;
    SET_GPR_U32(ctx, 31, 0x1359ACu);
    ctx->pc = 0x1359A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1359A4u;
    // 0x1359a8: 0x24060540  addiu       $a2, $zero, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1359A4u, 0x1359ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1359ACu;
}
