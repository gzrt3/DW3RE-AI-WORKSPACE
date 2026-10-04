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

// Function: FUN_00117d20
// Address: 0x117d20 - 0x117d98
void FUN_00117d20_0x117d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117d20_0x117d20");
#endif

    switch (ctx->pc) {
        case 0x117d3cu: goto label_117d3c;
        case 0x117d50u: goto label_117d50;
        case 0x117d70u: goto label_117d70;
        case 0x117d7cu: goto label_117d7c;
        default: break;
    }

    ctx->pc = 0x117d20u;

    // 0x117d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117d24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117d2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117d34: 0xc0590dc  jal         func_164370
    ctx->pc = 0x117D34u;
    SET_GPR_U32(ctx, 31, 0x117D3Cu);
    ctx->pc = 0x117D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D34u;
    // 0x117d38: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x117D34u, 0x117D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D3Cu;
label_117d3c:
    // 0x117d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d40: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117D40u;
    {
        const bool branch_taken_0x117d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D40u;
        // 0x117d44: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d40) {
            ctx->pc = 0x117D94u;
            goto label_117d94;
        }
    }
    ctx->pc = 0x117D48u;
    // 0x117d48: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117D48u;
    SET_GPR_U32(ctx, 31, 0x117D50u);
    ctx->pc = 0x117D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D48u;
    // 0x117d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117D48u, 0x117D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D50u;
label_117d50:
    // 0x117d50: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x117d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117d54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x117d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x117d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x117d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117d5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d60: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x117d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x117d64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x117d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x117d68: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117D68u;
    SET_GPR_U32(ctx, 31, 0x117D70u);
    ctx->pc = 0x117D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D68u;
    // 0x117d6c: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117D68u, 0x117D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D70u;
label_117d70:
    // 0x117d70: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x117d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x117d74: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117D74u;
    SET_GPR_U32(ctx, 31, 0x117D7Cu);
    ctx->pc = 0x117D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D74u;
    // 0x117d78: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117D74u, 0x117D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D7Cu;
label_117d7c:
    // 0x117d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x117d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117d80: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x117d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x117d84: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x117d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x117d88: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x117d8c: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x117d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x117d90: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x117d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_117d94:
    // 0x117d94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x117d98u;
}
