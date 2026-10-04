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

// Function: FUN_00128b00
// Address: 0x128b00 - 0x128bb4
void FUN_00128b00_0x128b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00128b00_0x128b00");
#endif

    switch (ctx->pc) {
        case 0x128b4cu: goto label_128b4c;
        case 0x128b78u: goto label_128b78;
        default: break;
    }

    ctx->pc = 0x128b00u;

    // 0x128b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x128b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x128b04: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x128b04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x128b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x128b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x128b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x128b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x128b10: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x128B10u;
    {
        const bool branch_taken_0x128b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x128B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B10u;
        // 0x128b14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128b10) {
            ctx->pc = 0x128BB0u;
            goto label_128bb0;
        }
    }
    ctx->pc = 0x128B18u;
    // 0x128b18: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x128b18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x128b1c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x128b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x128b20: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x128b20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x128b24: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x128b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x128b28: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x128b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x128b2c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x128b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x128b30: 0x48940  sll         $s1, $a0, 5
    ctx->pc = 0x128b30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x128b34: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x128b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x128b38: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x128b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x128b3c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x128B3Cu;
    {
        const bool branch_taken_0x128b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b3c) {
            ctx->pc = 0x128BB0u;
            goto label_128bb0;
        }
    }
    ctx->pc = 0x128B44u;
    // 0x128b44: 0xc0590dc  jal         func_164370
    ctx->pc = 0x128B44u;
    SET_GPR_U32(ctx, 31, 0x128B4Cu);
    ctx->pc = 0x128B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B44u;
    // 0x128b48: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x128B44u, 0x128B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B4Cu;
label_128b4c:
    // 0x128b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b50: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x128B50u;
    {
        const bool branch_taken_0x128b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b50) {
            ctx->pc = 0x128BB0u;
            goto label_128bb0;
        }
    }
    ctx->pc = 0x128B58u;
    // 0x128b58: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x128b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x128b5c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x128b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x128b60: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x128b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x128b64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b68: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x128b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x128b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x128b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128b70: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x128B70u;
    SET_GPR_U32(ctx, 31, 0x128B78u);
    ctx->pc = 0x128B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B70u;
    // 0x128b74: 0x26240150  addiu       $a0, $s1, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x128B70u, 0x128B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B78u;
label_128b78:
    // 0x128b78: 0xc6220150  lwc1        $f2, 0x150($s1)
    ctx->pc = 0x128b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x128b7c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x128b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x128b80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128b84: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x128b88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x128b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x128b8c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x128b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x128b90: 0x24638bd0  addiu       $v1, $v1, -0x7430
    ctx->pc = 0x128b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937552));
    // 0x128b94: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x128b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x128b98: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x128b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x128b9c: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x128b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ba0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x128ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x128ba4: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x128ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x128ba8: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x128ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x128bac: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x128bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_128bb0:
    // 0x128bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x128bb4u;
}
