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

// Function: FUN_002173d0
// Address: 0x2173d0 - 0x2174bc
void FUN_002173d0_0x2173d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002173d0_0x2173d0");
#endif

    switch (ctx->pc) {
        case 0x2174b4u: goto label_2174b4;
        default: break;
    }

    ctx->pc = 0x2173d0u;

    // 0x2173d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2173d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2173d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2173d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2173d8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2173D8u;
    {
        const bool branch_taken_0x2173d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2173DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173D8u;
        // 0x2173dc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173d8) {
            ctx->pc = 0x2173FCu;
            goto label_2173fc;
        }
    }
    ctx->pc = 0x2173E0u;
    // 0x2173e0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2173e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2173e4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x2173e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x2173e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2173e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2173ec: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x2173ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x2173f0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2173f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2173f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2173F4u;
    {
        const bool branch_taken_0x2173f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173F4u;
        // 0x2173f8: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173f4) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x2173FCu;
label_2173fc:
    // 0x2173fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217400: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217400u;
    {
        const bool branch_taken_0x217400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217400u;
        // 0x217404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217400) {
            ctx->pc = 0x217428u;
            goto label_217428;
        }
    }
    ctx->pc = 0x217408u;
    // 0x217408: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21740c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21740cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217410: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217414: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x217418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21741c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x217420: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x217420u;
    {
        const bool branch_taken_0x217420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217420u;
        // 0x217424: 0x247001e0  addiu       $s0, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217420) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x217428u;
label_217428:
    // 0x217428: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217428u;
    {
        const bool branch_taken_0x217428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x217428) {
            ctx->pc = 0x21744Cu;
            goto label_21744c;
        }
    }
    ctx->pc = 0x217430u;
    // 0x217430: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x217434: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217438: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21743c: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x21743cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
    // 0x217440: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x217444: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x217444u;
    {
        const bool branch_taken_0x217444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217444u;
        // 0x217448: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217444) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x21744Cu;
label_21744c:
    // 0x21744c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217450: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217450u;
    {
        const bool branch_taken_0x217450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x217454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217450u;
        // 0x217454: 0x3c100059  lui         $s0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217450) {
            ctx->pc = 0x217474u;
            goto label_217474;
        }
    }
    ctx->pc = 0x217458u;
    // 0x217458: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x217458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21745c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21745cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217460: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x217460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x217464: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
    // 0x217468: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x217468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21746c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21746Cu;
    {
        const bool branch_taken_0x21746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21746Cu;
        // 0x217470: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21746c) {
            ctx->pc = 0x217478u;
            goto label_217478;
        }
    }
    ctx->pc = 0x217474u;
label_217474:
    // 0x217474: 0x261082f0  addiu       $s0, $s0, -0x7D10
    ctx->pc = 0x217474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935280));
label_217478:
    // 0x217478: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x217478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21747c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x21747Cu;
    {
        const bool branch_taken_0x21747c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21747c) {
            ctx->pc = 0x2174B8u;
            goto label_2174b8;
        }
    }
    ctx->pc = 0x217484u;
    // 0x217484: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x217488: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x217488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21748c: 0xe60c0004  swc1        $f12, 0x4($s0)
    ctx->pc = 0x21748cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217490: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x217490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x217494: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x217494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x217498: 0xe60d0010  swc1        $f13, 0x10($s0)
    ctx->pc = 0x217498u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x21749c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x21749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2174a0: 0xe60e0018  swc1        $f14, 0x18($s0)
    ctx->pc = 0x2174a0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2174a4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2174a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2174a8: 0x8f859248  lw          $a1, -0x6DB8($gp)
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939208)));
    // 0x2174ac: 0xc05eff8  jal         func_17BFE0
    ctx->pc = 0x2174ACu;
    SET_GPR_U32(ctx, 31, 0x2174B4u);
    ctx->pc = 0x2174B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2174ACu;
    // 0x2174b0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFE0u, 0x2174ACu, 0x2174B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2174B4u;
label_2174b4:
    // 0x2174b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2174b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2174b8:
    // 0x2174b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2174b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2174bcu;
}
