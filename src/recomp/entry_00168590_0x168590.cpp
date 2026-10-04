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

// Function: entry_00168590
// Address: 0x168590 - 0x1685fc
void entry_00168590_0x168590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168590_0x168590");
#endif

    ctx->pc = 0x168590u;

label_168590:
    // 0x168590: 0xe50c0  sll         $t2, $t6, 3
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_168594:
    // 0x168594: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_168598:
    // 0x168598: 0x2f010006  sltiu       $at, $t8, 0x6
    ctx->pc = 0x168598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16859c:
    // 0x16859c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1685a0:
    // 0x1685a0: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1685a4:
    // 0x1685a4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1685a8:
    if (ctx->pc == 0x1685A8u) {
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685ACu;
        goto label_1685ac;
    }
    ctx->pc = 0x1685A4u;
    {
        const bool branch_taken_0x1685a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a4) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685ACu;
label_1685ac:
    // 0x1685ac: 0x185080  sll         $t2, $t8, 2
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1685b0:
    // 0x1685b0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1685b4:
    // 0x1685b4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1685b8:
    // 0x1685b8: 0x1400008  jr          $t2
label_1685bc:
    if (ctx->pc == 0x1685BCu) {
        ctx->pc = 0x1685C0u;
        goto label_1685c0;
    }
    ctx->pc = 0x1685B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1685B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1685C0u;
label_1685c0:
    // 0x1685c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1685c4:
    if (ctx->pc == 0x1685C4u) {
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685C8u;
        goto label_1685c8;
    }
    ctx->pc = 0x1685C0u;
    {
        const bool branch_taken_0x1685c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c0) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1685cc:
    if (ctx->pc == 0x1685CCu) {
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D0u;
        goto label_1685d0;
    }
    ctx->pc = 0x1685C8u;
    {
        const bool branch_taken_0x1685c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c8) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685D0u;
label_1685d0:
    // 0x1685d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1685d4:
    if (ctx->pc == 0x1685D4u) {
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D8u;
        goto label_1685d8;
    }
    ctx->pc = 0x1685D0u;
    {
        const bool branch_taken_0x1685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d0) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685D8u;
label_1685d8:
    // 0x1685d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1685dc:
    if (ctx->pc == 0x1685DCu) {
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E0u;
        goto label_1685e0;
    }
    ctx->pc = 0x1685D8u;
    {
        const bool branch_taken_0x1685d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d8) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685E0u;
label_1685e0:
    // 0x1685e0: 0x15c00006  bnez        $t6, . + 4 + (0x6 << 2)
label_1685e4:
    if (ctx->pc == 0x1685E4u) {
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E8u;
        goto label_1685e8;
    }
    ctx->pc = 0x1685E0u;
    {
        const bool branch_taken_0x1685e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685e0) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685E8u;
label_1685e8:
    // 0x1685e8: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1685e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1685ec:
    // 0x1685ec: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1685ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1685f0:
    // 0x1685f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1685f4:
    if (ctx->pc == 0x1685F4u) {
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685F8u;
        goto label_1685f8;
    }
    ctx->pc = 0x1685F0u;
    {
        const bool branch_taken_0x1685f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685f0) {
            ctx->pc = 0x1685FCu;
            return;
        }
    }
    ctx->pc = 0x1685F8u;
label_1685f8:
    // 0x1685f8: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x1685f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
    ctx->pc = 0x1685fcu;
}
