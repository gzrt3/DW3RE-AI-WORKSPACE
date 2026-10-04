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

// Function: entry_001af428
// Address: 0x1af428 - 0x1af46c
void entry_001af428_0x1af428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af428_0x1af428");
#endif

    switch (ctx->pc) {
        case 0x1af43cu: goto label_1af43c;
        case 0x1af448u: goto label_1af448;
        case 0x1af458u: goto label_1af458;
        default: break;
    }

    ctx->pc = 0x1af428u;

    // 0x1af428: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1af428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1af42c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1af42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1af430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af434: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1AF434u;
    SET_GPR_U32(ctx, 31, 0x1AF43Cu);
    ctx->pc = 0x1AF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF434u;
    // 0x1af438: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1AF434u, 0x1AF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF43Cu;
label_1af43c:
    // 0x1af43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af440: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1AF440u;
    SET_GPR_U32(ctx, 31, 0x1AF448u);
    ctx->pc = 0x1AF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF440u;
    // 0x1af444: 0xae2272a8  sw          $v0, 0x72A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1AF440u, 0x1AF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF448u;
label_1af448:
    // 0x1af448: 0xae0272ac  sw          $v0, 0x72AC($s0)
    ctx->pc = 0x1af448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29356), GPR_U32(ctx, 2));
    // 0x1af44c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af450: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1AF450u;
    SET_GPR_U32(ctx, 31, 0x1AF458u);
    ctx->pc = 0x1AF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF450u;
    // 0x1af454: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1AF450u, 0x1AF458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF458u;
label_1af458:
    // 0x1af458: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af45c: 0xac6272a0  sw          $v0, 0x72A0($v1)
    ctx->pc = 0x1af45cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2872A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872A0u, _value); } while (0);
    // 0x1af460: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1af464: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x2872B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2872B0u, _value); } while (0);
    // 0x1af468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1af46cu;
}
