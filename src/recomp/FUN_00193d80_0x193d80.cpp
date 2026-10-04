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

// Function: FUN_00193d80
// Address: 0x193d80 - 0x193de4
void FUN_00193d80_0x193d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193d80_0x193d80");
#endif

    switch (ctx->pc) {
        case 0x193da4u: goto label_193da4;
        case 0x193db8u: goto label_193db8;
        case 0x193dccu: goto label_193dcc;
        case 0x193de0u: goto label_193de0;
        default: break;
    }

    ctx->pc = 0x193d80u;

    // 0x193d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x193d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x193d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x193d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193d9c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x193D9Cu;
    SET_GPR_U32(ctx, 31, 0x193DA4u);
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x193D9Cu, 0x193DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DA4u;
label_193da4:
    // 0x193da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193da8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193dac: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x193dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193db0: 0xc066e6c  jal         func_19B9B0
    ctx->pc = 0x193DB0u;
    SET_GPR_U32(ctx, 31, 0x193DB8u);
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x193DB0u, 0x193DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DB8u;
label_193db8:
    // 0x193db8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dc0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x193dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193dc4: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x193DC4u;
    SET_GPR_U32(ctx, 31, 0x193DCCu);
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x193DC4u, 0x193DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DCCu;
label_193dcc:
    // 0x193dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193dd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193dd4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x193dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193dd8: 0xc066e96  jal         func_19BA58
    ctx->pc = 0x193DD8u;
    SET_GPR_U32(ctx, 31, 0x193DE0u);
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x193DD8u, 0x193DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DE0u;
label_193de0:
    // 0x193de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x193de4u;
}
