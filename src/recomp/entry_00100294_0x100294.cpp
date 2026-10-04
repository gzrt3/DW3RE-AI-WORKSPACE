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

// Function: entry_00100294
// Address: 0x100294 - 0x100304
void entry_00100294_0x100294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100294_0x100294");
#endif

    switch (ctx->pc) {
        case 0x1002ccu: goto label_1002cc;
        case 0x1002fcu: goto label_1002fc;
        default: break;
    }

    ctx->pc = 0x100294u;

    // 0x100294: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100294u;
    {
        const bool branch_taken_0x100294 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x100294) {
            ctx->pc = 0x100304u;
            return;
        }
    }
    ctx->pc = 0x10029Cu;
    // 0x10029c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x10029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1002a0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1002a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1002a4: 0x24429760  addiu       $v0, $v0, -0x68A0
    ctx->pc = 0x1002a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940512));
    // 0x1002a8: 0x24a59520  addiu       $a1, $a1, -0x6AE0
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
    // 0x1002ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1002acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1002b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002b4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1002b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1002b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002bc: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x1002bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1002c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1002c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002c4: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1002C4u;
    SET_GPR_U32(ctx, 31, 0x1002CCu);
    ctx->pc = 0x1002C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002C4u;
    // 0x1002c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1002C4u, 0x1002CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002CCu;
label_1002cc:
    // 0x1002cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1002ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1002d0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x1002d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x1002d4: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x1002d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x1002d8: 0x24a59760  addiu       $a1, $a1, -0x68A0
    ctx->pc = 0x1002d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940512));
    // 0x1002dc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1002dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1002e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1002e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002e4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1002e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1002ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1002f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f4: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x1002F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1002F4u;
    // 0x1002f8: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1002F4u, 0x1002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1002FCu;
    {
        const bool branch_taken_0x1002fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1002fc) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x100304u;
}
