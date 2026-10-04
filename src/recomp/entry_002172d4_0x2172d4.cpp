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

// Function: entry_002172d4
// Address: 0x2172d4 - 0x2173d0
void entry_002172d4_0x2172d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002172d4_0x2172d4");
#endif

    ctx->pc = 0x2172d4u;

    // 0x2172d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2172d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2172dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2172DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172DCu;
        // 0x2172e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172E4u;
    // 0x2172e4: 0x0  nop
    ctx->pc = 0x2172e4u;
    // NOP
    // 0x2172e8: 0x0  nop
    ctx->pc = 0x2172e8u;
    // NOP
    // 0x2172ec: 0x0  nop
    ctx->pc = 0x2172ecu;
    // NOP
    // 0x2172f0: 0xe78c921c  swc1        $f12, -0x6DE4($gp)
    ctx->pc = 0x2172f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939164), bits); }
    // 0x2172f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2172F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2172F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172F4u;
        // 0x2172f8: 0xe78d9218  swc1        $f13, -0x6DE8($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2172F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2172FCu;
    // 0x2172fc: 0x0  nop
    ctx->pc = 0x2172fcu;
    // NOP
    // 0x217300: 0xe78c9228  swc1        $f12, -0x6DD8($gp)
    ctx->pc = 0x217300u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939176), bits); }
    // 0x217304: 0x3e00008  jr          $ra
    ctx->pc = 0x217304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217304u;
        // 0x217308: 0xe78d9224  swc1        $f13, -0x6DDC($gp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939172), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21730Cu;
    // 0x21730c: 0x0  nop
    ctx->pc = 0x21730cu;
    // NOP
    // 0x217310: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217310u;
    {
        const bool branch_taken_0x217310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x217314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217310u;
        // 0x217314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217310) {
            ctx->pc = 0x217334u;
            goto label_217334;
        }
    }
    ctx->pc = 0x217318u;
    // 0x217318: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21731c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217320: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217324: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x217328: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21732c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x21732Cu;
    {
        const bool branch_taken_0x21732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21732Cu;
        // 0x217330: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21732c) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x217334u;
label_217334:
    // 0x217334: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x217334u;
    {
        const bool branch_taken_0x217334 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217334) {
            ctx->pc = 0x21735Cu;
            goto label_21735c;
        }
    }
    ctx->pc = 0x21733Cu;
    // 0x21733c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21733cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x217340: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217344: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217348: 0x24638680  addiu       $v1, $v1, -0x7980
    ctx->pc = 0x217348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936192));
    // 0x21734c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x217350: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x217354: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x217354u;
    {
        const bool branch_taken_0x217354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217354u;
        // 0x217358: 0x246501e0  addiu       $a1, $v1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217354) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x21735Cu;
label_21735c:
    // 0x21735c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217360: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217360u;
    {
        const bool branch_taken_0x217360 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x217364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217360u;
        // 0x217364: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217360) {
            ctx->pc = 0x217384u;
            goto label_217384;
        }
    }
    ctx->pc = 0x217368u;
    // 0x217368: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x217368u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x21736c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217370: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217374: 0x24638620  addiu       $v1, $v1, -0x79E0
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936096));
    // 0x217378: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x217378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21737c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21737Cu;
    {
        const bool branch_taken_0x21737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21737Cu;
        // 0x217380: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21737c) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x217384u;
label_217384:
    // 0x217384: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x217384u;
    {
        const bool branch_taken_0x217384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x217384) {
            ctx->pc = 0x2173A8u;
            goto label_2173a8;
        }
    }
    ctx->pc = 0x21738Cu;
    // 0x21738c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x217390: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x217390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x217394: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x217394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217398: 0x24638320  addiu       $v1, $v1, -0x7CE0
    ctx->pc = 0x217398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935328));
    // 0x21739c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21739cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2173a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2173A0u;
    {
        const bool branch_taken_0x2173a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173A0u;
        // 0x2173a4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173a0) {
            ctx->pc = 0x2173B0u;
            goto label_2173b0;
        }
    }
    ctx->pc = 0x2173A8u;
label_2173a8:
    // 0x2173a8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x2173ac: 0x24a582f0  addiu       $a1, $a1, -0x7D10
    ctx->pc = 0x2173acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
label_2173b0:
    // 0x2173b0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x2173b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2173b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2173B4u;
    {
        const bool branch_taken_0x2173b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2173b4) {
            ctx->pc = 0x2173C0u;
            goto label_2173c0;
        }
    }
    ctx->pc = 0x2173BCu;
    // 0x2173bc: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x2173bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
label_2173c0:
    // 0x2173c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2173C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2173C8u;
    // 0x2173c8: 0x0  nop
    ctx->pc = 0x2173c8u;
    // NOP
    // 0x2173cc: 0x0  nop
    ctx->pc = 0x2173ccu;
    // NOP
    ctx->pc = 0x2173d0u;
}
