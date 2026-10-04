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

// Function: entry_001b3160
// Address: 0x1b3160 - 0x1b3200
void entry_001b3160_0x1b3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3160_0x1b3160");
#endif

    switch (ctx->pc) {
        case 0x1b3198u: goto label_1b3198;
        default: break;
    }

    ctx->pc = 0x1b3160u;

    // 0x1b3160: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x1b3160u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x1b3164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b3168: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b316c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b316cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b3170: 0xc420ad70  lwc1        $f0, -0x5290($at)
    ctx->pc = 0x1b3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3174: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1B3174u;
    {
        const bool branch_taken_0x1b3174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3174) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B317Cu;
    // 0x1b317c: 0x0  nop
    ctx->pc = 0x1b317cu;
    // NOP
    // 0x1b3180: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b3180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b3184: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1b3184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b3188: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B3188u;
    {
        const bool branch_taken_0x1b3188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3188) {
            ctx->pc = 0x1B31B8u;
            goto label_1b31b8;
        }
    }
    ctx->pc = 0x1B3190u;
    // 0x1b3190: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1b3190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1b3194: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b3194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1b3198:
    // 0x1b3198: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1b3198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1b319c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1b319cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1b31a0: 0x0  nop
    ctx->pc = 0x1b31a0u;
    // NOP
    // 0x1b31a4: 0x0  nop
    ctx->pc = 0x1b31a4u;
    // NOP
    // 0x1b31a8: 0x0  nop
    ctx->pc = 0x1b31a8u;
    // NOP
    // 0x1b31ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B31ACu;
    {
        const bool branch_taken_0x1b31ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31ACu;
        // 0x1b31b0: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31ac) {
            ctx->pc = 0x1B3198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3198;
        }
    }
    ctx->pc = 0x1B31B4u;
    // 0x1b31b4: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x1b31b4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_1b31b8:
    // 0x1b31b8: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B31B8u;
    {
        const bool branch_taken_0x1b31b8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31B8u;
        // 0x1b31bc: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31b8) {
            ctx->pc = 0x1B31E8u;
            goto label_1b31e8;
        }
    }
    ctx->pc = 0x1B31C0u;
    // 0x1b31c0: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x1b31c4: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1b31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1b31c8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b31cc: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1b31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1b31d0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x1b31d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b31d4: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1b31d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1b31d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b31d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b31dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B31DCu;
    {
        const bool branch_taken_0x1b31dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b31dc) {
            ctx->pc = 0x1B31F8u;
            goto label_1b31f8;
        }
    }
    ctx->pc = 0x1B31E4u;
    // 0x1b31e4: 0x0  nop
    ctx->pc = 0x1b31e4u;
    // NOP
label_1b31e8:
    // 0x1b31e8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x1b31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1b31ec: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x1b31ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b31f0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x1b31f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b31f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b31f8:
    // 0x1b31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B31F8u;
        // 0x1b31fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3200u;
}
