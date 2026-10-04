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

// Function: FUN_001765c0
// Address: 0x1765c0 - 0x176614
void FUN_001765c0_0x1765c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001765c0_0x1765c0");
#endif

    switch (ctx->pc) {
        case 0x176610u: goto label_176610;
        default: break;
    }

    ctx->pc = 0x1765c0u;

    // 0x1765c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1765c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1765c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1765C4u;
    {
        const bool branch_taken_0x1765c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C4u;
        // 0x1765c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765c4) {
            ctx->pc = 0x1765D4u;
            goto label_1765d4;
        }
    }
    ctx->pc = 0x1765CCu;
    // 0x1765cc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1765CCu;
    {
        const bool branch_taken_0x1765cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1765cc) {
            ctx->pc = 0x1765E8u;
            goto label_1765e8;
        }
    }
    ctx->pc = 0x1765D4u;
label_1765d4:
    // 0x1765d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765d8: 0xa42051f6  sh          $zero, 0x51F6($at)
    ctx->pc = 0x1765d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3651F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F6u, _value); } while (0);
    // 0x1765dc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1765E0u;
    {
        const bool branch_taken_0x1765e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765E0u;
        // 0x1765e4: 0xa42051f4  sh          $zero, 0x51F4($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20980), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765e0) {
            ctx->pc = 0x176608u;
            goto label_176608;
        }
    }
    ctx->pc = 0x1765E8u;
label_1765e8:
    // 0x1765e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1765E8u;
    {
        const bool branch_taken_0x1765e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765e8) {
            ctx->pc = 0x176608u;
            goto label_176608;
        }
    }
    ctx->pc = 0x1765F0u;
    // 0x1765f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1765f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1765f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1765f8: 0xa42251f4  sh          $v0, 0x51F4($at)
    ctx->pc = 0x1765f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3651F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F4u, _value); } while (0);
    // 0x1765fc: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x176600: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x176600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x176604: 0xa42251f6  sh          $v0, 0x51F6($at)
    ctx->pc = 0x176604u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3651F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3651F6u, _value); } while (0);
label_176608:
    // 0x176608: 0xc058d08  jal         func_163420
    ctx->pc = 0x176608u;
    SET_GPR_U32(ctx, 31, 0x176610u);
    ctx->pc = 0x163420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163420u, 0x176608u, 0x176610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176610u;
label_176610:
    // 0x176610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x176614u;
}
