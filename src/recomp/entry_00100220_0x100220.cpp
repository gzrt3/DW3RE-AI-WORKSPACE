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

// Function: entry_00100220
// Address: 0x100220 - 0x100294
void entry_00100220_0x100220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100220_0x100220");
#endif

    switch (ctx->pc) {
        case 0x10025cu: goto label_10025c;
        case 0x10028cu: goto label_10028c;
        default: break;
    }

    ctx->pc = 0x100220u;

    // 0x100220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100224: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x100224u;
    {
        const bool branch_taken_0x100224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x100228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100224u;
        // 0x100228: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100224) {
            ctx->pc = 0x100294u;
            return;
        }
    }
    ctx->pc = 0x10022Cu;
    // 0x10022c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x10022cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100230: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100234: 0x24427130  addiu       $v0, $v0, 0x7130
    ctx->pc = 0x100234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28976));
    // 0x100238: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0
    ctx->pc = 0x100238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
    // 0x10023c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100244: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10024c: 0x23102  srl         $a2, $v0, 4
    ctx->pc = 0x10024cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x100250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x100250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100254: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100254u;
    SET_GPR_U32(ctx, 31, 0x10025Cu);
    ctx->pc = 0x100258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100254u;
    // 0x100258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100254u, 0x10025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10025Cu;
label_10025c:
    // 0x10025c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x10025cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x100260: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x100260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x100264: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x100264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
    // 0x100268: 0x24a57130  addiu       $a1, $a1, 0x7130
    ctx->pc = 0x100268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28976));
    // 0x10026c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x100270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100274: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x100274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x100278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x100278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10027c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10027cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x100280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100284: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x100284u;
    SET_GPR_U32(ctx, 31, 0x10028Cu);
    ctx->pc = 0x100288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100284u;
    // 0x100288: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x100284u, 0x10028Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10028Cu;
label_10028c:
    // 0x10028c: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x10028Cu;
    {
        const bool branch_taken_0x10028c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10028c) {
            ctx->pc = 0x1005B0u;
            return;
        }
    }
    ctx->pc = 0x100294u;
}
