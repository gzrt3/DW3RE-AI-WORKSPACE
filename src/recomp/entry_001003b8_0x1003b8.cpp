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

// Function: entry_001003b8
// Address: 0x1003b8 - 0x10042c
void entry_001003b8_0x1003b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001003b8_0x1003b8");
#endif

    switch (ctx->pc) {
        case 0x1003f4u: goto label_1003f4;
        case 0x100424u: goto label_100424;
        default: break;
    }

    ctx->pc = 0x1003b8u;

    // 0x1003b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1003b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1003bc: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1003BCu;
    {
        const bool branch_taken_0x1003bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003BCu;
        // 0x1003c0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003bc) {
            ctx->pc = 0x10042Cu;
            return;
        }
    }
    ctx->pc = 0x1003C4u;
    // 0x1003c4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1003c8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1003c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1003cc: 0x2442ad68  addiu       $v0, $v0, -0x5298
    ctx->pc = 0x1003ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946152));
    // 0x1003d0: 0x24a59a70  addiu       $a1, $a1, -0x6590
    ctx->pc = 0x1003d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941296));
    // 0x1003d4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1003d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1003d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1003d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1003dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1003e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1003e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003e4: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1003e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1003e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1003e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1003ec: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1003ECu;
    SET_GPR_U32(ctx, 31, 0x1003F4u);
    ctx->pc = 0x1003F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1003ECu;
    // 0x1003f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1003ECu, 0x1003F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1003F4u;
label_1003f4:
    // 0x1003f4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1003f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1003f8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1003f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1003fc: 0x2442c2e8  addiu       $v0, $v0, -0x3D18
    ctx->pc = 0x1003fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951656));
    // 0x100400: 0x24a5ad70  addiu       $a1, $a1, -0x5290
    ctx->pc = 0x100400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946160));
    // 0x100404: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x100404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10040c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10040cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100418: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100418u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10041c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x10041Cu;
    SET_GPR_U32(ctx, 31, 0x100424u);
    ctx->pc = 0x100420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10041Cu;
    // 0x100420: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x10041Cu, 0x100424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100424u;
label_100424:
    // 0x100424: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x100424u;
    {
        const bool branch_taken_0x100424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100424) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x10042Cu;
}
