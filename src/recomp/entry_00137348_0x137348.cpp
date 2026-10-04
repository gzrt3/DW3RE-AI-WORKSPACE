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

// Function: entry_00137348
// Address: 0x137348 - 0x1373e4
void entry_00137348_0x137348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137348_0x137348");
#endif

    switch (ctx->pc) {
        case 0x137388u: goto label_137388;
        case 0x1373acu: goto label_1373ac;
        case 0x1373c4u: goto label_1373c4;
        case 0x1373ccu: goto label_1373cc;
        case 0x1373d4u: goto label_1373d4;
        case 0x1373dcu: goto label_1373dc;
        default: break;
    }

    ctx->pc = 0x137348u;

    // 0x137348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x137348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13734c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x137350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x137350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137354: 0x0  nop
    ctx->pc = 0x137354u;
    // NOP
    // 0x137358: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x137358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x13735c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x13735cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x137360: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x137360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137364: 0x0  nop
    ctx->pc = 0x137364u;
    // NOP
    // 0x137368: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x137368u;
    {
        const bool branch_taken_0x137368 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137368u;
        // 0x13736c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137368) {
            ctx->pc = 0x137380u;
            goto label_137380;
        }
    }
    ctx->pc = 0x137370u;
    // 0x137370: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x137374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x137374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137378: 0x0  nop
    ctx->pc = 0x137378u;
    // NOP
    // 0x13737c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x13737cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_137380:
    // 0x137380: 0xc04dd00  jal         func_137400
    ctx->pc = 0x137380u;
    SET_GPR_U32(ctx, 31, 0x137388u);
    ctx->pc = 0x137400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137400u, 0x137380u, 0x137388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137388u;
label_137388:
    // 0x137388: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x137388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13738c: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x13738cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137390: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x137394: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x137394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x137398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13739c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x13739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1373a0: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x1373a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x1373a4: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x1373A4u;
    SET_GPR_U32(ctx, 31, 0x1373ACu);
    ctx->pc = 0x1373A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373A4u;
    // 0x1373a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1373A4u, 0x1373ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373ACu;
label_1373ac:
    // 0x1373ac: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x1373acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1373b0: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x1373b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x1373b4: 0x24a5a460  addiu       $a1, $a1, -0x5BA0
    ctx->pc = 0x1373b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943840));
    // 0x1373b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1373b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1373bc: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x1373BCu;
    SET_GPR_U32(ctx, 31, 0x1373C4u);
    ctx->pc = 0x1373C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373BCu;
    // 0x1373c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1373BCu, 0x1373C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373C4u;
label_1373c4:
    // 0x1373c4: 0xc064580  jal         func_191600
    ctx->pc = 0x1373C4u;
    SET_GPR_U32(ctx, 31, 0x1373CCu);
    ctx->pc = 0x1373C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373C4u;
    // 0x1373c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191600u, 0x1373C4u, 0x1373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0xc064534  jal         func_1914D0
    ctx->pc = 0x1373CCu;
    SET_GPR_U32(ctx, 31, 0x1373D4u);
    ctx->pc = 0x1373D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373CCu;
    // 0x1373d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914D0u, 0x1373CCu, 0x1373D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373D4u;
label_1373d4:
    // 0x1373d4: 0xc064528  jal         func_1914A0
    ctx->pc = 0x1373D4u;
    SET_GPR_U32(ctx, 31, 0x1373DCu);
    ctx->pc = 0x1373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373D4u;
    // 0x1373d8: 0xc7ac00c8  lwc1        $f12, 0xC8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1914A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1914A0u, 0x1373D4u, 0x1373DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373DCu;
label_1373dc:
    // 0x1373dc: 0xc064524  jal         func_191490
    ctx->pc = 0x1373DCu;
    SET_GPR_U32(ctx, 31, 0x1373E4u);
    ctx->pc = 0x1373E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1373DCu;
    // 0x1373e0: 0xc7ac0058  lwc1        $f12, 0x58($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x191490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191490u, 0x1373DCu, 0x1373E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373E4u;
}
