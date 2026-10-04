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

// Function: FUN_00117db0
// Address: 0x117db0 - 0x117e28
void FUN_00117db0_0x117db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117db0_0x117db0");
#endif

    switch (ctx->pc) {
        case 0x117dccu: goto label_117dcc;
        case 0x117de0u: goto label_117de0;
        case 0x117e00u: goto label_117e00;
        case 0x117e0cu: goto label_117e0c;
        default: break;
    }

    ctx->pc = 0x117db0u;

    // 0x117db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117dc4: 0xc0590dc  jal         func_164370
    ctx->pc = 0x117DC4u;
    SET_GPR_U32(ctx, 31, 0x117DCCu);
    ctx->pc = 0x117DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DC4u;
    // 0x117dc8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x117DC4u, 0x117DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DCCu;
label_117dcc:
    // 0x117dcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x117DD0u;
    {
        const bool branch_taken_0x117dd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DD0u;
        // 0x117dd4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117dd0) {
            ctx->pc = 0x117E24u;
            goto label_117e24;
        }
    }
    ctx->pc = 0x117DD8u;
    // 0x117dd8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117DD8u;
    SET_GPR_U32(ctx, 31, 0x117DE0u);
    ctx->pc = 0x117DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DD8u;
    // 0x117ddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117DD8u, 0x117DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DE0u;
label_117de0:
    // 0x117de0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x117de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x117de4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x117de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x117de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x117de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x117dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117df0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x117df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x117df4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x117df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x117df8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117DF8u;
    SET_GPR_U32(ctx, 31, 0x117E00u);
    ctx->pc = 0x117DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DF8u;
    // 0x117dfc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117DF8u, 0x117E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E00u;
label_117e00:
    // 0x117e00: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x117e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x117e04: 0xc066e26  jal         func_19B898
    ctx->pc = 0x117E04u;
    SET_GPR_U32(ctx, 31, 0x117E0Cu);
    ctx->pc = 0x117E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E04u;
    // 0x117e08: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x117E04u, 0x117E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E0Cu;
label_117e0c:
    // 0x117e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e10: 0x3c030011  lui         $v1, 0x11
    ctx->pc = 0x117e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17 << 16));
    // 0x117e14: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x117e14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x117e18: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x117e1c: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x117e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x117e20: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x117e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_117e24:
    // 0x117e24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x117e28u;
}
