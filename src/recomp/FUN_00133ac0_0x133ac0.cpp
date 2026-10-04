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

// Function: FUN_00133ac0
// Address: 0x133ac0 - 0x133b9c
void FUN_00133ac0_0x133ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133ac0_0x133ac0");
#endif

    switch (ctx->pc) {
        case 0x133b74u: goto label_133b74;
        case 0x133b88u: goto label_133b88;
        default: break;
    }

    ctx->pc = 0x133ac0u;

    // 0x133ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133ac4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x133ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x133ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133acc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x133accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x133ad0: 0x84890002  lh          $t1, 0x2($a0)
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133ad4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x133ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x133ad8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x133adc: 0x90274910  lbu         $a3, 0x4910($at)
    ctx->pc = 0x133adcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x334910u));
    // 0x133ae0: 0x2508fe30  addiu       $t0, $t0, -0x1D0
    ctx->pc = 0x133ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966832));
    // 0x133ae4: 0x24a5fe34  addiu       $a1, $a1, -0x1CC
    ctx->pc = 0x133ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966836));
    // 0x133ae8: 0x2463fe38  addiu       $v1, $v1, -0x1C8
    ctx->pc = 0x133ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966840));
    // 0x133aec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x133aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x133af0: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x133af4: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x133af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x133af8: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x133af8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x133afc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x133afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x133b00: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x133b00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x133b04: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x133b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x133b08: 0x64080  sll         $t0, $a2, 2
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133b0c: 0x24e60000  addiu       $a2, $a3, 0x0
    ctx->pc = 0x133b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x133b10: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x133b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x133b14: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x133b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b18: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x133b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x133b1c: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x133b1cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133b20: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x133b24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x133b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x133b28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x133b28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x133b2c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x133b30: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x133b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x133b34: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x133b38: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x133b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b3c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x133b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x133b40: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133b44: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x133b48: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133b4c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x133b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x133b50: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x133b54: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x133b58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x133b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x133b5c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x133b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x133b60: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x133b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x133b64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x133b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133b68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x133b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x133b6c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x133B6Cu;
    SET_GPR_U32(ctx, 31, 0x133B74u);
    ctx->pc = 0x133B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B6Cu;
    // 0x133b70: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x133B6Cu, 0x133B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B74u;
label_133b74:
    // 0x133b74: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133b78: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x133b7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133b80: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x133B80u;
    SET_GPR_U32(ctx, 31, 0x133B88u);
    ctx->pc = 0x133B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B80u;
    // 0x133b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x133B80u, 0x133B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B88u;
label_133b88:
    // 0x133b88: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x133b8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x133b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x133b90: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x133b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x133b94: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x133B94u;
    SET_GPR_U32(ctx, 31, 0x133B9Cu);
    ctx->pc = 0x133B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B94u;
    // 0x133b98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x133B94u, 0x133B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B9Cu;
}
