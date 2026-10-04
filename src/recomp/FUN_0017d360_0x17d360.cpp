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

// Function: FUN_0017d360
// Address: 0x17d360 - 0x17d3f8
void FUN_0017d360_0x17d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017d360_0x17d360");
#endif

    switch (ctx->pc) {
        case 0x17d3d4u: goto label_17d3d4;
        case 0x17d3f4u: goto label_17d3f4;
        default: break;
    }

    ctx->pc = 0x17d360u;

    // 0x17d360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d364: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17d364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17d368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d36c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17d370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d374: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x17d374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
    // 0x17d378: 0xaf828780  sw          $v0, -0x7880($gp)
    ctx->pc = 0x17d378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 2));
    // 0x17d37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d380: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17d384: 0xaf80877c  sw          $zero, -0x7884($gp)
    ctx->pc = 0x17d384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936444), GPR_U32(ctx, 0));
    // 0x17d388: 0xaf808778  sw          $zero, -0x7888($gp)
    ctx->pc = 0x17d388u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936440), GPR_U32(ctx, 0));
    // 0x17d38c: 0x244293c0  addiu       $v0, $v0, -0x6C40
    ctx->pc = 0x17d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939584));
    // 0x17d390: 0xaf808770  sw          $zero, -0x7890($gp)
    ctx->pc = 0x17d390u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936432), GPR_U32(ctx, 0));
    // 0x17d394: 0xaf808774  sw          $zero, -0x788C($gp)
    ctx->pc = 0x17d394u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936436), GPR_U32(ctx, 0));
    // 0x17d398: 0xaf808790  sw          $zero, -0x7870($gp)
    ctx->pc = 0x17d398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 0));
    // 0x17d39c: 0xaf80878c  sw          $zero, -0x7874($gp)
    ctx->pc = 0x17d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 0));
    // 0x17d3a0: 0xaf808788  sw          $zero, -0x7878($gp)
    ctx->pc = 0x17d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
    // 0x17d3a4: 0xaf808784  sw          $zero, -0x787C($gp)
    ctx->pc = 0x17d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 0));
    // 0x17d3a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d3a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x369400u));
    // 0x17d3ac: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d3acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x369410u));
    // 0x17d3b0: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d3b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x369420u));
    // 0x17d3b4: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d3b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x369430u));
    // 0x17d3b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x17d3b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x3693C0u));
    // 0x17d3bc: 0xd8460010  lqc2        $vf6, 0x10($v0)
    ctx->pc = 0x17d3bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3693D0u));
    // 0x17d3c0: 0xd8470020  lqc2        $vf7, 0x20($v0)
    ctx->pc = 0x17d3c0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x3693E0u));
    // 0x17d3c4: 0xd8480030  lqc2        $vf8, 0x30($v0)
    ctx->pc = 0x17d3c4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(FAST_READ128(0x3693F0u));
    // 0x17d3c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d3cc: 0xc05fa10  jal         func_17E840
    ctx->pc = 0x17D3CCu;
    SET_GPR_U32(ctx, 31, 0x17D3D4u);
    ctx->pc = 0x17D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3CCu;
    // 0x17d3d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E840u, 0x17D3CCu, 0x17D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D4u;
label_17d3d4:
    // 0x17d3d4: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x17d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x17d3d8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x17d3dc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D3DCu;
    {
        const bool branch_taken_0x17d3dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17d3dc) {
            ctx->pc = 0x17D3F4u;
            goto label_17d3f4;
        }
    }
    ctx->pc = 0x17D3E4u;
    // 0x17d3e4: 0x8f848770  lw          $a0, -0x7890($gp)
    ctx->pc = 0x17d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936432)));
    // 0x17d3e8: 0x8f858774  lw          $a1, -0x788C($gp)
    ctx->pc = 0x17d3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x17d3ec: 0xc05e75c  jal         func_179D70
    ctx->pc = 0x17D3ECu;
    SET_GPR_U32(ctx, 31, 0x17D3F4u);
    ctx->pc = 0x17D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3ECu;
    // 0x17d3f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D70u, 0x17D3ECu, 0x17D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3F4u;
label_17d3f4:
    // 0x17d3f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x17d3f8u;
}
