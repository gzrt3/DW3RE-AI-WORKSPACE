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

// Function: entry_001b214c
// Address: 0x1b214c - 0x1b21c4
void entry_001b214c_0x1b214c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b214c_0x1b214c");
#endif

    switch (ctx->pc) {
        case 0x1b2160u: goto label_1b2160;
        case 0x1b21a0u: goto label_1b21a0;
        case 0x1b21c0u: goto label_1b21c0;
        default: break;
    }

    ctx->pc = 0x1b214cu;

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
    ctx->pc = 0x1b21c4u;
}
