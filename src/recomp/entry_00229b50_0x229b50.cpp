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

// Function: entry_00229b50
// Address: 0x229b50 - 0x229bbc
void entry_00229b50_0x229b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229b50_0x229b50");
#endif

    switch (ctx->pc) {
        case 0x229b74u: goto label_229b74;
        case 0x229b80u: goto label_229b80;
        default: break;
    }

    ctx->pc = 0x229b50u;

    // 0x229b50: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b54: 0x8c23a290  lw          $v1, -0x5D70($at)
    ctx->pc = 0x229b54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x58A290u));
    // 0x229b58: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x229B58u;
    {
        const bool branch_taken_0x229b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x229B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B58u;
        // 0x229b5c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b58) {
            ctx->pc = 0x229BBCu;
            return;
        }
    }
    ctx->pc = 0x229B60u;
    // 0x229b60: 0x3c0240b5  lui         $v0, 0x40B5
    ctx->pc = 0x229b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16565 << 16));
    // 0x229b64: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x229b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
    // 0x229b68: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x229b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x229b6c: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x229B6Cu;
    SET_GPR_U32(ctx, 31, 0x229B74u);
    ctx->pc = 0x229B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B6Cu;
    // 0x229b70: 0x2803c  dsll32      $s0, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x229B6Cu, 0x229B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B74u;
label_229b74:
    // 0x229b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x229b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b78: 0xc04003c  jal         func_1000F0
    ctx->pc = 0x229B78u;
    SET_GPR_U32(ctx, 31, 0x229B80u);
    ctx->pc = 0x229B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229B78u;
    // 0x229b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000F0u, 0x229B78u, 0x229B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229B80u;
label_229b80:
    // 0x229b80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x229B80u;
    {
        const bool branch_taken_0x229b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B80u;
        // 0x229b84: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b80) {
            ctx->pc = 0x229BBCu;
            return;
        }
    }
    ctx->pc = 0x229B88u;
    // 0x229b88: 0x8c244968  lw          $a0, 0x4968($at)
    ctx->pc = 0x229b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18792)));
    // 0x229b8c: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x229b8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x229b90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229b94: 0xac23a290  sw          $v1, -0x5D70($at)
    ctx->pc = 0x229b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A290u, _value); } while (0);
    // 0x229b98: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x229b98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
    // 0x229b9c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229ba0: 0xac23a294  sw          $v1, -0x5D6C($at)
    ctx->pc = 0x229ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A294u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A294u, _value); } while (0);
    // 0x229ba4: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x229ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x229ba8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229bac: 0xac23a298  sw          $v1, -0x5D68($at)
    ctx->pc = 0x229bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A298u, _value); } while (0);
    // 0x229bb0: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x229bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x229bb4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x229bb8: 0xac23a29c  sw          $v1, -0x5D64($at)
    ctx->pc = 0x229bb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58A29Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58A29Cu, _value); } while (0);
    ctx->pc = 0x229bbcu;
}
