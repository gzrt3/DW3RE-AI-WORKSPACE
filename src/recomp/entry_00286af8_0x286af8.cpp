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

// Function: entry_00286af8
// Address: 0x286af8 - 0x286b30
void entry_00286af8_0x286af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286af8_0x286af8");
#endif

    switch (ctx->pc) {
        case 0x286b10u: goto label_286b10;
        default: break;
    }

    ctx->pc = 0x286af8u;

    // 0x286af8: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x286af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
    // 0x286afc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x286afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286b00: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x286b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x286b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x286b08: 0xc01d80e  jal         func_076038
    ctx->pc = 0x286B08u;
    SET_GPR_U32(ctx, 31, 0x286B10u);
    ctx->pc = 0x286B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286B08u;
    // 0x286b0c: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x286B08u, 0x286B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B10u;
label_286b10:
    // 0x286b10: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x286b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286b14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x286B14u;
    {
        const bool branch_taken_0x286b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B14u;
        // 0x286b18: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b14) {
            ctx->pc = 0x286B78u;
            return;
        }
    }
    ctx->pc = 0x286B1Cu;
    // 0x286b1c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x286b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x286b20: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x286b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286b24: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x286B24u;
    {
        const bool branch_taken_0x286b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B24u;
        // 0x286b28: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b24) {
            ctx->pc = 0x286B88u;
            return;
        }
    }
    ctx->pc = 0x286B2Cu;
    // 0x286b2c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x286b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->pc = 0x286b30u;
}
