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

// Function: FUN_0019bc20
// Address: 0x19bc20 - 0x19bca4
void FUN_0019bc20_0x19bc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019bc20_0x19bc20");
#endif

    switch (ctx->pc) {
        case 0x19bc54u: goto label_19bc54;
        case 0x19bc68u: goto label_19bc68;
        case 0x19bc74u: goto label_19bc74;
        case 0x19bc84u: goto label_19bc84;
        case 0x19bc94u: goto label_19bc94;
        default: break;
    }

    ctx->pc = 0x19bc20u;

    // 0x19bc20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x19bc24: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x19bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x19bc28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19bc28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc2c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x19bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x19bc30: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x19bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x19bc34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19bc34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc38: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x19bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x19bc3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x19bc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19bc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc44: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x19bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x19bc48: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19bc4c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x19BC4Cu;
    SET_GPR_U32(ctx, 31, 0x19BC54u);
    ctx->pc = 0x19BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC4Cu;
    // 0x19bc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x19BC4Cu, 0x19BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC54u;
label_19bc54:
    // 0x19bc54: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19bc58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc60: 0xc066d98  jal         func_19B660
    ctx->pc = 0x19BC60u;
    SET_GPR_U32(ctx, 31, 0x19BC68u);
    ctx->pc = 0x19BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC60u;
    // 0x19bc64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x19BC60u, 0x19BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC68u;
label_19bc68:
    // 0x19bc68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc6c: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x19BC6Cu;
    SET_GPR_U32(ctx, 31, 0x19BC74u);
    ctx->pc = 0x19BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC6Cu;
    // 0x19bc70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BC6Cu, 0x19BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC74u;
label_19bc74:
    // 0x19bc74: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19bc78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc7c: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x19BC7Cu;
    SET_GPR_U32(ctx, 31, 0x19BC84u);
    ctx->pc = 0x19BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC7Cu;
    // 0x19bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x19BC7Cu, 0x19BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC84u;
label_19bc84:
    // 0x19bc84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19bc8c: 0xc066d98  jal         func_19B660
    ctx->pc = 0x19BC8Cu;
    SET_GPR_U32(ctx, 31, 0x19BC94u);
    ctx->pc = 0x19BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC8Cu;
    // 0x19bc90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x19BC8Cu, 0x19BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BC94u;
label_19bc94:
    // 0x19bc94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19bc94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc9c: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x19BC9Cu;
    SET_GPR_U32(ctx, 31, 0x19BCA4u);
    ctx->pc = 0x19BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC9Cu;
    // 0x19bca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x19BC9Cu, 0x19BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BCA4u;
}
