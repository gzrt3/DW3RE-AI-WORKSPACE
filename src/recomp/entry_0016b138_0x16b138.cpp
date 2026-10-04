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

// Function: entry_0016b138
// Address: 0x16b138 - 0x16b178
void entry_0016b138_0x16b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b138_0x16b138");
#endif

    switch (ctx->pc) {
        case 0x16b158u: goto label_16b158;
        default: break;
    }

    ctx->pc = 0x16b138u;

    // 0x16b138: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x16b13c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16b13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b140: 0x27a4002e  addiu       $a0, $sp, 0x2E
    ctx->pc = 0x16b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x16b144: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16b144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16b148: 0x27a5002f  addiu       $a1, $sp, 0x2F
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 47));
    // 0x16b14c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x16b14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b150: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x16B150u;
    SET_GPR_U32(ctx, 31, 0x16B158u);
    ctx->pc = 0x16B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B150u;
    // 0x16b154: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B190u, 0x16B150u, 0x16B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B158u;
label_16b158:
    // 0x16b158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B158u;
    {
        const bool branch_taken_0x16b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b158) {
            ctx->pc = 0x16B178u;
            return;
        }
    }
    ctx->pc = 0x16B160u;
    // 0x16b160: 0x93a6002e  lbu         $a2, 0x2E($sp)
    ctx->pc = 0x16b160u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x16b164: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b168: 0x93a7002f  lbu         $a3, 0x2F($sp)
    ctx->pc = 0x16b168u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 47)));
    // 0x16b16c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b170: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x16B170u;
    SET_GPR_U32(ctx, 31, 0x16B178u);
    ctx->pc = 0x16B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B170u;
    // 0x16b174: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x16B170u, 0x16B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B178u;
}
