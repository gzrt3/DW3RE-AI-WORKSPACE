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

// Function: entry_00198144
// Address: 0x198144 - 0x1981cc
void entry_00198144_0x198144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198144_0x198144");
#endif

    switch (ctx->pc) {
        case 0x19816cu: goto label_19816c;
        default: break;
    }

    ctx->pc = 0x198144u;

    // 0x198144: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x198144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x198148: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198148u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x19814c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198150: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x198154: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x198154u;
    {
        const bool branch_taken_0x198154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198154) {
            ctx->pc = 0x198204u;
            return;
        }
    }
    ctx->pc = 0x19815Cu;
    // 0x19815c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x198160: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981CCu;
            return;
        }
    }
    ctx->pc = 0x198168u;
    // 0x198168: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x198168u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19816c:
    // 0x19816c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x19816cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x198170: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x198174: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x198178: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x19817c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x19817cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x198180: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198180u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x198184: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x198188: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x198188u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
    // 0x19818c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x19818cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x198190: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x198190u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
    // 0x198194: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x198194u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x198198: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x198198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
    // 0x19819c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x19819cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1981a0: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1981a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
    // 0x1981a4: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1981a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1981a8: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
    // 0x1981ac: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1981acu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1981b0: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
    // 0x1981b4: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1981b4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1981b8: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1981b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
    // 0x1981bc: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1981bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1981c0: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x1981c0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
    // 0x1981c4: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1981C4u;
    {
        const bool branch_taken_0x1981c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c4) {
            ctx->pc = 0x19816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19816c;
        }
    }
    ctx->pc = 0x1981CCu;
}
