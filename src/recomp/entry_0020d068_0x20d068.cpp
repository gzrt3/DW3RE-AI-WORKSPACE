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

// Function: entry_0020d068
// Address: 0x20d068 - 0x20d218
void entry_0020d068_0x20d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d068_0x20d068");
#endif

    switch (ctx->pc) {
        case 0x20d070u: goto label_20d070;
        case 0x20d078u: goto label_20d078;
        case 0x20d080u: goto label_20d080;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d194u: goto label_20d194;
        case 0x20d1d4u: goto label_20d1d4;
        case 0x20d1dcu: goto label_20d1dc;
        case 0x20d1e4u: goto label_20d1e4;
        case 0x20d1ecu: goto label_20d1ec;
        case 0x20d1f4u: goto label_20d1f4;
        case 0x20d1fcu: goto label_20d1fc;
        default: break;
    }

    ctx->pc = 0x20d068u;

    // 0x20d068: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x20D068u;
    SET_GPR_U32(ctx, 31, 0x20D070u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x20D068u, 0x20D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D070u;
label_20d070:
    // 0x20d070: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x20D070u;
    SET_GPR_U32(ctx, 31, 0x20D078u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x20D070u, 0x20D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D078u;
label_20d078:
    // 0x20d078: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x20d084: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d088: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x20d088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x20d08c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d090: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d094: 0x27829150  addiu       $v0, $gp, -0x6EB0
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938960));
    // 0x20d098: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d09c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d09cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d0a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0a4: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d0a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d0ac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d0b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d0b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d0b8: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x20D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0B8u;
    // 0x20d0bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D0B8u, 0x20D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0xc08372c  jal         func_20DCB0
    ctx->pc = 0x20D0C0u;
    SET_GPR_U32(ctx, 31, 0x20D0C8u);
    ctx->pc = 0x20DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCB0u, 0x20D0C0u, 0x20D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C8u;
label_20d0c8:
    // 0x20d0c8: 0x8f829138  lw          $v0, -0x6EC8($gp)
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938936)));
    // 0x20d0cc: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20D0CCu;
    {
        const bool branch_taken_0x20d0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0cc) {
            ctx->pc = 0x20D194u;
            goto label_20d194;
        }
    }
    ctx->pc = 0x20D0D4u;
    // 0x20d0d4: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d0d8: 0x8c2c3ffc  lw          $t4, 0x3FFC($at)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x20d0dc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x20d0e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d0e4: 0x27859140  addiu       $a1, $gp, -0x6EC0
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938944));
    // 0x20d0e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20d0ec: 0x240a0f88  addiu       $t2, $zero, 0xF88
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
    // 0x20d0f0: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x20d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x20d0f4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d0f8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d0fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d100: 0x256bff08  addiu       $t3, $t3, -0xF8
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967048));
    // 0x20d104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d108: 0xc6940  sll         $t5, $t4, 5
    ctx->pc = 0x20d108u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x20d10c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d10cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d110: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x20d110u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x20d114: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d118: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x20d118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x20d11c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d11cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d120: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d124: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x20d124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x20d128: 0xa4ab0090  sh          $t3, 0x90($a1)
    ctx->pc = 0x20d128u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d12c: 0x878b9134  lh          $t3, -0x6ECC($gp)
    ctx->pc = 0x20d12cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938932)));
    // 0x20d130: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20d134: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x20d134u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x20d138: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x20d138u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d13c: 0x8f8b916c  lw          $t3, -0x6E94($gp)
    ctx->pc = 0x20d13cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938988)));
    // 0x20d140: 0xa4a30088  sh          $v1, 0x88($a1)
    ctx->pc = 0x20d140u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d144: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x20d144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x20d148: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x20d148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x20d14c: 0x360c0  sll         $t4, $v1, 3
    ctx->pc = 0x20d14cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d150: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x20d150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x20d154: 0x246b0008  addiu       $t3, $v1, 0x8
    ctx->pc = 0x20d154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d158: 0x25830038  addiu       $v1, $t4, 0x38
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 56));
    // 0x20d15c: 0xa4ab008a  sh          $t3, 0x8A($a1)
    ctx->pc = 0x20d15cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 11));
    // 0x20d160: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20d160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20d164: 0xa4aa0098  sh          $t2, 0x98($a1)
    ctx->pc = 0x20d164u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 10));
    // 0x20d168: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20d16c: 0xa4a3009a  sh          $v1, 0x9A($a1)
    ctx->pc = 0x20d16cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d170: 0xc1e38  dsll        $v1, $t4, 24
    ctx->pc = 0x20d170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 24);
    // 0x20d174: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d178: 0x25820037  addiu       $v0, $t4, 0x37
    ctx->pc = 0x20d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 55));
    // 0x20d17c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x20d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20d180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x20d180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x20d184: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x20d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x20d188: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d18c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D18Cu;
    SET_GPR_U32(ctx, 31, 0x20D194u);
    ctx->pc = 0x20D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D18Cu;
    // 0x20d190: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D18Cu, 0x20D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D194u;
label_20d194:
    // 0x20d194: 0x0  nop
    ctx->pc = 0x20d194u;
    // NOP
    // 0x20d198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20d198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x20d19c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x20d1a0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x20d1a4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x20d1a8: 0x27829148  addiu       $v0, $gp, -0x6EB8
    ctx->pc = 0x20d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938952));
    // 0x20d1ac: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20d1b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20d1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d1b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1b8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x20d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x20d1bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d1c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20d1c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d1c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d1cc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x20D1CCu;
    SET_GPR_U32(ctx, 31, 0x20D1D4u);
    ctx->pc = 0x20D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1CCu;
    // 0x20d1d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20D1CCu, 0x20D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1D4u;
label_20d1d4:
    // 0x20d1d4: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x20D1D4u;
    SET_GPR_U32(ctx, 31, 0x20D1DCu);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x20D1D4u, 0x20D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1DCu;
label_20d1dc:
    // 0x20d1dc: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x20D1DCu;
    SET_GPR_U32(ctx, 31, 0x20D1E4u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x20D1DCu, 0x20D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1E4u;
label_20d1e4:
    // 0x20d1e4: 0xc04e120  jal         func_138480
    ctx->pc = 0x20D1E4u;
    SET_GPR_U32(ctx, 31, 0x20D1ECu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x20D1E4u, 0x20D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1ECu;
label_20d1ec:
    // 0x20d1ec: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x20D1ECu;
    SET_GPR_U32(ctx, 31, 0x20D1F4u);
    ctx->pc = 0x20D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D1ECu;
    // 0x20d1f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x20D1ECu, 0x20D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1F4u;
label_20d1f4:
    // 0x20d1f4: 0xc060258  jal         func_180960
    ctx->pc = 0x20D1F4u;
    SET_GPR_U32(ctx, 31, 0x20D1FCu);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20D1F4u, 0x20D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D1FCu;
label_20d1fc:
    // 0x20d1fc: 0x8f829164  lw          $v0, -0x6E9C($gp)
    ctx->pc = 0x20d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938980)));
    // 0x20d200: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D200u;
    {
        const bool branch_taken_0x20d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d200) {
            ctx->pc = 0x20D218u;
            return;
        }
    }
    ctx->pc = 0x20D208u;
    // 0x20d208: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x20d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x20d20c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D20Cu;
    {
        const bool branch_taken_0x20d20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D20Cu;
        // 0x20d210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d20c) {
            ctx->pc = 0x20D218u;
            return;
        }
    }
    ctx->pc = 0x20D214u;
    // 0x20d214: 0xaf829168  sw          $v0, -0x6E98($gp)
    ctx->pc = 0x20d214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938984), GPR_U32(ctx, 2));
    ctx->pc = 0x20d218u;
}
