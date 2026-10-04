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

// Function: FUN_001b20d0
// Address: 0x1b20d0 - 0x1b21e0
void FUN_001b20d0_0x1b20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b20d0_0x1b20d0");
#endif

    switch (ctx->pc) {
        case 0x1b2120u: goto label_1b2120;
        case 0x1b2144u: goto label_1b2144;
        case 0x1b2160u: goto label_1b2160;
        case 0x1b21a0u: goto label_1b21a0;
        case 0x1b21c0u: goto label_1b21c0;
        default: break;
    }

    ctx->pc = 0x1b20d0u;

    // 0x1b20d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b20d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b20d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b20dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b20e0: 0x24556200  addiu       $s5, $v0, 0x6200
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b20e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b20e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b20e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b20f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b20f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b20f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b20fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b20fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2100: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b2104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2104u;
    {
        const bool branch_taken_0x1b2104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2104u;
        // 0x1b2108: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2104) {
            ctx->pc = 0x1B2114u;
            goto label_1b2114;
        }
    }
    ctx->pc = 0x1B210Cu;
    // 0x1b210c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1B210Cu;
    {
        const bool branch_taken_0x1b210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B210Cu;
        // 0x1b2110: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b210c) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B2114u;
label_1b2114:
    // 0x1b2114: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b2118: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B2118u;
    SET_GPR_U32(ctx, 31, 0x1B2120u);
    ctx->pc = 0x1B211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2118u;
    // 0x1b211c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B2118u, 0x1B2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2120u;
label_1b2120:
    // 0x1b2120: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B2120u;
    {
        const bool branch_taken_0x1b2120 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2120u;
        // 0x1b2124: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2120) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B2128u;
    // 0x1b2128: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2128u;
    {
        const bool branch_taken_0x1b2128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2128) {
            ctx->pc = 0x1B213Cu;
            goto label_1b213c;
        }
    }
    ctx->pc = 0x1B2130u;
    // 0x1b2130: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2134: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2134u;
    {
        const bool branch_taken_0x1b2134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2134u;
        // 0x1b2138: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2134) {
            ctx->pc = 0x1B214Cu;
            goto label_1b214c;
        }
    }
    ctx->pc = 0x1B213Cu;
label_1b213c:
    // 0x1b213c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B213Cu;
    SET_GPR_U32(ctx, 31, 0x1B2144u);
    ctx->pc = 0x1B2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B213Cu;
    // 0x1b2140: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B213Cu, 0x1B2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2144u;
label_1b2144:
    // 0x1b2144: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B2144u;
    {
        const bool branch_taken_0x1b2144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2144u;
        // 0x1b2148: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2144) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B214Cu;
label_1b214c:
    // 0x1b214c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b214cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2150: 0x261062c4  addiu       $s0, $s0, 0x62C4
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25284));
    // 0x1b2154: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b2154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b2158: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B2158u;
    SET_GPR_U32(ctx, 31, 0x1B2160u);
    ctx->pc = 0x1B215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2158u;
    // 0x1b215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B2158u, 0x1B2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2160u;
label_1b2160:
    // 0x1b2160: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b2164: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x1b2164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
    // 0x1b2168: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x1b2168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x1b216c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b2170: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1b2170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2174: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2178: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b2178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b217c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2180: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2184: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b2188: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b218c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2190: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b2194: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2198: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B2198u;
    SET_GPR_U32(ctx, 31, 0x1B21A0u);
    ctx->pc = 0x1B219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2198u;
    // 0x1b219c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B2198u, 0x1B21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21A0u;
label_1b21a0:
    // 0x1b21a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A4u;
        // 0x1b21a8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B21B8u;
            goto label_1b21b8;
        }
    }
    ctx->pc = 0x1B21ACu;
    // 0x1b21ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b21b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B21B0u;
    {
        const bool branch_taken_0x1b21b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21b0) {
            ctx->pc = 0x1B21C0u;
            goto label_1b21c0;
        }
    }
    ctx->pc = 0x1B21B8u;
label_1b21b8:
    // 0x1b21b8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B21B8u;
    SET_GPR_U32(ctx, 31, 0x1B21C0u);
    ctx->pc = 0x1B21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21B8u;
    // 0x1b21bc: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B21B8u, 0x1B21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B21C0u;
label_1b21c0:
    // 0x1b21c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b21c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b21c4:
    // 0x1b21c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b21c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b21c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b21c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b21cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b21ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b21d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b21d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b21d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b21d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b21d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b21dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b21dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b21e0u;
}
