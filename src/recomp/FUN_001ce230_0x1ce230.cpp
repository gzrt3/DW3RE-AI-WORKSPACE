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

// Function: FUN_001ce230
// Address: 0x1ce230 - 0x1ce610
void FUN_001ce230_0x1ce230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce230_0x1ce230");
#endif

    switch (ctx->pc) {
        case 0x1ce260u: goto label_1ce260;
        case 0x1ce268u: goto label_1ce268;
        case 0x1ce27cu: goto label_1ce27c;
        case 0x1ce29cu: goto label_1ce29c;
        case 0x1ce2a8u: goto label_1ce2a8;
        case 0x1ce2b0u: goto label_1ce2b0;
        case 0x1ce2ecu: goto label_1ce2ec;
        case 0x1ce304u: goto label_1ce304;
        case 0x1ce30cu: goto label_1ce30c;
        case 0x1ce348u: goto label_1ce348;
        case 0x1ce358u: goto label_1ce358;
        case 0x1ce368u: goto label_1ce368;
        case 0x1ce370u: goto label_1ce370;
        case 0x1ce3a8u: goto label_1ce3a8;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce418u: goto label_1ce418;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce428u: goto label_1ce428;
        case 0x1ce4a0u: goto label_1ce4a0;
        case 0x1ce4b4u: goto label_1ce4b4;
        case 0x1ce558u: goto label_1ce558;
        case 0x1ce580u: goto label_1ce580;
        case 0x1ce5a0u: goto label_1ce5a0;
        case 0x1ce5a8u: goto label_1ce5a8;
        case 0x1ce5e8u: goto label_1ce5e8;
        case 0x1ce600u: goto label_1ce600;
        default: break;
    }

    ctx->pc = 0x1ce230u;

    // 0x1ce230: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ce234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce240: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ce240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1ce244: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x1ce244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1ce248: 0x146000f0  bnez        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x1CE248u;
    {
        const bool branch_taken_0x1ce248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE248u;
        // 0x1ce24c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce248) {
            ctx->pc = 0x1CE60Cu;
            goto label_1ce60c;
        }
    }
    ctx->pc = 0x1CE250u;
    // 0x1ce250: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1ce254: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1ce254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1ce258: 0xc04f310  jal         func_13CC40
    ctx->pc = 0x1CE258u;
    SET_GPR_U32(ctx, 31, 0x1CE260u);
    ctx->pc = 0x1CE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE258u;
    // 0x1ce25c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x1CE258u, 0x1CE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE260u;
label_1ce260:
    // 0x1ce260: 0xc0590dc  jal         func_164370
    ctx->pc = 0x1CE260u;
    SET_GPR_U32(ctx, 31, 0x1CE268u);
    ctx->pc = 0x1CE264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE260u;
    // 0x1ce264: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x1CE260u, 0x1CE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE268u;
label_1ce268:
    // 0x1ce268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce26c: 0x120000e7  beqz        $s0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x1CE26Cu;
    {
        const bool branch_taken_0x1ce26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE26Cu;
        // 0x1ce270: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce26c) {
            ctx->pc = 0x1CE60Cu;
            goto label_1ce60c;
        }
    }
    ctx->pc = 0x1CE274u;
    // 0x1ce274: 0xc0646d4  jal         func_191B50
    ctx->pc = 0x1CE274u;
    SET_GPR_U32(ctx, 31, 0x1CE27Cu);
    ctx->pc = 0x1CE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE274u;
    // 0x1ce278: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191B50u, 0x1CE274u, 0x1CE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE27Cu;
label_1ce27c:
    // 0x1ce27c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1ce27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1ce280: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce284: 0x244290d0  addiu       $v0, $v0, -0x6F30
    ctx->pc = 0x1ce284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938832));
    // 0x1ce288: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce28c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ce28cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x2890D0u));
    // 0x1ce290: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1ce290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce294: 0xc066d98  jal         func_19B660
    ctx->pc = 0x1CE294u;
    SET_GPR_U32(ctx, 31, 0x1CE29Cu);
    ctx->pc = 0x1CE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE294u;
    // 0x1ce298: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B660u, 0x1CE294u, 0x1CE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE29Cu;
label_1ce29c:
    // 0x1ce29c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce2a0: 0xc066daa  jal         func_19B6A8
    ctx->pc = 0x1CE2A0u;
    SET_GPR_U32(ctx, 31, 0x1CE2A8u);
    ctx->pc = 0x1CE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2A0u;
    // 0x1ce2a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B6A8u, 0x1CE2A0u, 0x1CE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2A8u;
label_1ce2a8:
    // 0x1ce2a8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE2A8u;
    SET_GPR_U32(ctx, 31, 0x1CE2B0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE2A8u, 0x1CE2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2B0u;
label_1ce2b0:
    // 0x1ce2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce2b4: 0x0  nop
    ctx->pc = 0x1ce2b4u;
    // NOP
    // 0x1ce2b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ce2b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ce2bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ce2c0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ce2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce2c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce2c8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ce2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce2cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce2d0: 0x0  nop
    ctx->pc = 0x1ce2d0u;
    // NOP
    // 0x1ce2d4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ce2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ce2d8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1ce2d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x1ce2dc: 0x0  nop
    ctx->pc = 0x1ce2dcu;
    // NOP
    // 0x1ce2e0: 0x0  nop
    ctx->pc = 0x1ce2e0u;
    // NOP
    // 0x1ce2e4: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x1CE2E4u;
    SET_GPR_U32(ctx, 31, 0x1CE2ECu);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1CE2E4u, 0x1CE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE2ECu;
label_1ce2ec:
    // 0x1ce2ec: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1ce2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1ce2f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce2f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce2f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ce2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce2fc: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CE2FCu;
    SET_GPR_U32(ctx, 31, 0x1CE304u);
    ctx->pc = 0x1CE300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE2FCu;
    // 0x1ce300: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CE2FCu, 0x1CE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE304u;
label_1ce304:
    // 0x1ce304: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE304u;
    SET_GPR_U32(ctx, 31, 0x1CE30Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE304u, 0x1CE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE30Cu;
label_1ce30c:
    // 0x1ce30c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce310: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce314: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ce314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce318: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce31c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce324: 0x0  nop
    ctx->pc = 0x1ce324u;
    // NOP
    // 0x1ce328: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ce328u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ce32c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1ce330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce334: 0x0  nop
    ctx->pc = 0x1ce334u;
    // NOP
    // 0x1ce338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ce338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ce33c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ce33cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce340: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CE340u;
    SET_GPR_U32(ctx, 31, 0x1CE348u);
    ctx->pc = 0x1CE344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE340u;
    // 0x1ce344: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CE340u, 0x1CE348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE348u;
label_1ce348:
    // 0x1ce348: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce34c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1ce34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce350: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CE350u;
    SET_GPR_U32(ctx, 31, 0x1CE358u);
    ctx->pc = 0x1CE354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE350u;
    // 0x1ce354: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CE350u, 0x1CE358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE358u;
label_1ce358:
    // 0x1ce358: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ce358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce35c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1ce35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce360: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CE360u;
    SET_GPR_U32(ctx, 31, 0x1CE368u);
    ctx->pc = 0x1CE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE360u;
    // 0x1ce364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CE360u, 0x1CE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE368u;
label_1ce368:
    // 0x1ce368: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE368u;
    SET_GPR_U32(ctx, 31, 0x1CE370u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE368u, 0x1CE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE370u;
label_1ce370:
    // 0x1ce370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce374: 0x0  nop
    ctx->pc = 0x1ce374u;
    // NOP
    // 0x1ce378: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ce378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ce37c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce380: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce384: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1ce384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce388: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1ce388u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x1ce38c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ce38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ce390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce394: 0x0  nop
    ctx->pc = 0x1ce394u;
    // NOP
    // 0x1ce398: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ce398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ce39c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce3a0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE3A0u;
    SET_GPR_U32(ctx, 31, 0x1CE3A8u);
    ctx->pc = 0x1CE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3A0u;
    // 0x1ce3a4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE3A0u, 0x1CE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3A8u;
label_1ce3a8:
    // 0x1ce3a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce3a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce3ac: 0x0  nop
    ctx->pc = 0x1ce3acu;
    // NOP
    // 0x1ce3b0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ce3b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ce3b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ce3b8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ce3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce3bc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce3c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ce3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce3c8: 0x0  nop
    ctx->pc = 0x1ce3c8u;
    // NOP
    // 0x1ce3cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ce3ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ce3d0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ce3d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ce3d4: 0x0  nop
    ctx->pc = 0x1ce3d4u;
    // NOP
    // 0x1ce3d8: 0x0  nop
    ctx->pc = 0x1ce3d8u;
    // NOP
    // 0x1ce3dc: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x1CE3DCu;
    SET_GPR_U32(ctx, 31, 0x1CE3E4u);
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x1CE3DCu, 0x1CE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1ce3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1ce3e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ce3ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ce3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce3f0: 0xdf868ae8  ld          $a2, -0x7518($gp)
    ctx->pc = 0x1ce3f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937320)));
    // 0x1ce3f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce3fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ce3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ce400: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ce400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce404: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ce408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ce408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce40c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ce40cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce410: 0xc0717e8  jal         func_1C5FA0
    ctx->pc = 0x1CE410u;
    SET_GPR_U32(ctx, 31, 0x1CE418u);
    ctx->pc = 0x1CE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE410u;
    // 0x1ce414: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5FA0u, 0x1CE410u, 0x1CE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE418u;
label_1ce418:
    // 0x1ce418: 0xc0717c8  jal         func_1C5F20
    ctx->pc = 0x1CE418u;
    SET_GPR_U32(ctx, 31, 0x1CE420u);
    ctx->pc = 0x1CE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE418u;
    // 0x1ce41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F20u, 0x1CE418u, 0x1CE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE420u;
label_1ce420:
    // 0x1ce420: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE420u;
    SET_GPR_U32(ctx, 31, 0x1CE428u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE420u, 0x1CE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE428u;
label_1ce428:
    // 0x1ce428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce42c: 0x0  nop
    ctx->pc = 0x1ce42cu;
    // NOP
    // 0x1ce430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce434: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1ce438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce43c: 0x0  nop
    ctx->pc = 0x1ce43cu;
    // NOP
    // 0x1ce440: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce444: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce448: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce44c: 0x0  nop
    ctx->pc = 0x1ce44cu;
    // NOP
    // 0x1ce450: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ce450u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1ce454: 0x0  nop
    ctx->pc = 0x1ce454u;
    // NOP
    // 0x1ce458: 0x0  nop
    ctx->pc = 0x1ce458u;
    // NOP
    // 0x1ce45c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ce45cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce460: 0x0  nop
    ctx->pc = 0x1ce460u;
    // NOP
    // 0x1ce464: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE464u;
    {
        const bool branch_taken_0x1ce464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce464) {
            ctx->pc = 0x1CE47Cu;
            goto label_1ce47c;
        }
    }
    ctx->pc = 0x1CE46Cu;
    // 0x1ce46c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce46cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ce470: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE474u;
    {
        const bool branch_taken_0x1ce474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE474u;
        // 0x1ce478: 0xa20302e8  sb          $v1, 0x2E8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce474) {
            ctx->pc = 0x1CE498u;
            goto label_1ce498;
        }
    }
    ctx->pc = 0x1CE47Cu;
label_1ce47c:
    // 0x1ce47c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ce47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ce480: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ce480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ce484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ce488: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ce488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ce48c: 0x0  nop
    ctx->pc = 0x1ce48cu;
    // NOP
    // 0x1ce490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ce490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ce494: 0xa20302e8  sb          $v1, 0x2E8($s0)
    ctx->pc = 0x1ce494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 3));
label_1ce498:
    // 0x1ce498: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x1CE498u;
    SET_GPR_U32(ctx, 31, 0x1CE4A0u);
    ctx->pc = 0x1CE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE498u;
    // 0x1ce49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x1CE498u, 0x1CE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4A0u;
label_1ce4a0:
    // 0x1ce4a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce4a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce4a8: 0xa20202e1  sb          $v0, 0x2E1($s0)
    ctx->pc = 0x1ce4a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 737), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce4ac: 0xc07e7cc  jal         func_1F9F30
    ctx->pc = 0x1CE4ACu;
    SET_GPR_U32(ctx, 31, 0x1CE4B4u);
    ctx->pc = 0x1CE4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE4ACu;
    // 0x1ce4b0: 0xa21102e4  sb          $s1, 0x2E4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 740), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9F30u, 0x1CE4ACu, 0x1CE4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE4B4u;
label_1ce4b4:
    // 0x1ce4b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ce4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ce4b8: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ce4bc: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CE4BCu;
    {
        const bool branch_taken_0x1ce4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4bc) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4C4u;
    // 0x1ce4c4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1ce4c8: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CE4C8u;
    {
        const bool branch_taken_0x1ce4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c8) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4D0u;
    // 0x1ce4d0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4D8u;
    // 0x1ce4d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1ce4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ce4dc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CE4DCu;
    {
        const bool branch_taken_0x1ce4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4DCu;
        // 0x1ce4e0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4dc) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4E4u;
    // 0x1ce4e4: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CE4E4u;
    {
        const bool branch_taken_0x1ce4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4e4) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4ECu;
    // 0x1ce4ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce4f0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE4F0u;
    {
        const bool branch_taken_0x1ce4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4F0u;
        // 0x1ce4f4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4f0) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE4F8u;
    // 0x1ce4f8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CE4F8u;
    {
        const bool branch_taken_0x1ce4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce4f8) {
            ctx->pc = 0x1CE560u;
            goto label_1ce560;
        }
    }
    ctx->pc = 0x1CE500u;
    // 0x1ce500: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1ce500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ce504: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE504u;
    {
        const bool branch_taken_0x1ce504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE504u;
        // 0x1ce508: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce504) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE50Cu;
    // 0x1ce50c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE50Cu;
    {
        const bool branch_taken_0x1ce50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce50c) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE514u;
    // 0x1ce514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce518: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE518u;
    {
        const bool branch_taken_0x1ce518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce518) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE520u;
    // 0x1ce520: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE520u;
    {
        const bool branch_taken_0x1ce520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE520u;
        // 0x1ce524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce520) {
            ctx->pc = 0x1CE58Cu;
            goto label_1ce58c;
        }
    }
    ctx->pc = 0x1CE528u;
label_1ce528:
    // 0x1ce528: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1ce52c: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1ce530: 0xae0302d0  sw          $v1, 0x2D0($s0)
    ctx->pc = 0x1ce530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
    // 0x1ce534: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce538: 0xae0302d4  sw          $v1, 0x2D4($s0)
    ctx->pc = 0x1ce538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 3));
    // 0x1ce53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce540: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1ce540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1ce544: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ce544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce548: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x1ce548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
    // 0x1ce54c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1ce54cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce550: 0xc071400  jal         func_1C5000
    ctx->pc = 0x1CE550u;
    SET_GPR_U32(ctx, 31, 0x1CE558u);
    ctx->pc = 0x1CE554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE550u;
    // 0x1ce554: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x1CE550u, 0x1CE558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE558u;
label_1ce558:
    // 0x1ce558: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE558u;
    {
        const bool branch_taken_0x1ce558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce558) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE560u;
label_1ce560:
    // 0x1ce560: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x1ce564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE564u;
    {
        const bool branch_taken_0x1ce564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE564u;
        // 0x1ce568: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce564) {
            ctx->pc = 0x1CE588u;
            goto label_1ce588;
        }
    }
    ctx->pc = 0x1CE56Cu;
    // 0x1ce56c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1ce56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ce570: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x1ce570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1ce574: 0x24070069  addiu       $a3, $zero, 0x69
    ctx->pc = 0x1ce574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1ce578: 0xc071400  jal         func_1C5000
    ctx->pc = 0x1CE578u;
    SET_GPR_U32(ctx, 31, 0x1CE580u);
    ctx->pc = 0x1CE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE578u;
    // 0x1ce57c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x1CE578u, 0x1CE580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE580u;
label_1ce580:
    // 0x1ce580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE580u;
    {
        const bool branch_taken_0x1ce580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce580) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE588u;
label_1ce588:
    // 0x1ce588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce58c:
    // 0x1ce58c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x1ce58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1ce590: 0x24060099  addiu       $a2, $zero, 0x99
    ctx->pc = 0x1ce590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1ce594: 0x24070086  addiu       $a3, $zero, 0x86
    ctx->pc = 0x1ce594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1ce598: 0xc071400  jal         func_1C5000
    ctx->pc = 0x1CE598u;
    SET_GPR_U32(ctx, 31, 0x1CE5A0u);
    ctx->pc = 0x1CE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE598u;
    // 0x1ce59c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5000u, 0x1CE598u, 0x1CE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5A0u;
label_1ce5a0:
    // 0x1ce5a0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CE5A0u;
    SET_GPR_U32(ctx, 31, 0x1CE5A8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CE5A0u, 0x1CE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5A8u;
label_1ce5a8:
    // 0x1ce5a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ce5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce5ac: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1ce5b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ce5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce5b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce5b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1ce5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1ce5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce5c0: 0x0  nop
    ctx->pc = 0x1ce5c0u;
    // NOP
    // 0x1ce5c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ce5c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1ce5c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ce5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ce5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ce5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce5d4: 0x0  nop
    ctx->pc = 0x1ce5d4u;
    // NOP
    // 0x1ce5d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ce5d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ce5dc: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1ce5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x1ce5e0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1CE5E0u;
    SET_GPR_U32(ctx, 31, 0x1CE5E8u);
    ctx->pc = 0x1CE5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5E0u;
    // 0x1ce5e4: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1CE5E0u, 0x1CE5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5E8u;
label_1ce5e8:
    // 0x1ce5e8: 0x3c023fac  lui         $v0, 0x3FAC
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16300 << 16));
    // 0x1ce5ec: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x1ce5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1ce5f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ce5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ce5f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ce5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce5f8: 0xc066e14  jal         func_19B850
    ctx->pc = 0x1CE5F8u;
    SET_GPR_U32(ctx, 31, 0x1CE600u);
    ctx->pc = 0x1CE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE5F8u;
    // 0x1ce5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1CE5F8u, 0x1CE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE600u;
label_1ce600:
    // 0x1ce600: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1ce600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1ce604: 0x2463e620  addiu       $v1, $v1, -0x19E0
    ctx->pc = 0x1ce604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960672));
    // 0x1ce608: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x1ce608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
label_1ce60c:
    // 0x1ce60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1ce610u;
}
