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

// Function: entry_0023d06c
// Address: 0x23d06c - 0x23d3f8
void entry_0023d06c_0x23d06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d06c_0x23d06c");
#endif

    switch (ctx->pc) {
        case 0x23d110u: goto label_23d110;
        case 0x23d188u: goto label_23d188;
        case 0x23d1b8u: goto label_23d1b8;
        case 0x23d208u: goto label_23d208;
        case 0x23d248u: goto label_23d248;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d360u: goto label_23d360;
        case 0x23d3c0u: goto label_23d3c0;
        default: break;
    }

    ctx->pc = 0x23d06cu;

label_23d06c:
    // 0x23d06c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d070: 0x0  nop
    ctx->pc = 0x23d070u;
    // NOP
    // 0x23d074: 0x0  nop
    ctx->pc = 0x23d074u;
    // NOP
    // 0x23d078: 0x0  nop
    ctx->pc = 0x23d078u;
    // NOP
    // 0x23d07c: 0x0  nop
    ctx->pc = 0x23d07cu;
    // NOP
    // 0x23d080: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D080u;
    {
        const bool branch_taken_0x23d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d080) {
            ctx->pc = 0x23D084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D080u;
            // 0x23d084: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23D088u;
    // 0x23d088: 0x3e00008  jr          $ra
    ctx->pc = 0x23D088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D088u;
        // 0x23d08c: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D090u;
    // 0x23d090: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23d090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d094: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x23d094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x23d098: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x23D098u;
    {
        const bool branch_taken_0x23d098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d098) {
            ctx->pc = 0x23D09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D098u;
            // 0x23d09c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1ACu;
            goto label_23d1ac;
        }
    }
    ctx->pc = 0x23D0A0u;
    // 0x23d0a0: 0x3103000f  andi        $v1, $t0, 0xF
    ctx->pc = 0x23d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x23d0a4: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x23D0A4u;
    {
        const bool branch_taken_0x23d0a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d0a4) {
            ctx->pc = 0x23D0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D0A4u;
            // 0x23d0a8: 0xdd020000  ld          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D13Cu;
            goto label_23d13c;
        }
    }
    ctx->pc = 0x23D0ACu;
    // 0x23d0ac: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x23d0b0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d0b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d0b4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x23d0b8: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d0b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d0bc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x23d0c0: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d0c4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x23d0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23d0c8: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x23d0c8u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x23d0cc: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23d0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23d0d0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d0d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d0d8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d0dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d0e0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d0e4: 0x70491a48  psubb       $v1, $v0, $t1
    ctx->pc = 0x23d0e4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23d0e8: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x23d0e8u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23d0ec: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x23d0ecu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x23d0f0: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x23d0f0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23d0f4: 0x706a1c89  pand        $v1, $v1, $t2
    ctx->pc = 0x23d0f4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x23d0f8: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d0f8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23d0fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23d0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23d100: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x23D100u;
    {
        const bool branch_taken_0x23d100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D100u;
        // 0x23d104: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d100) {
            ctx->pc = 0x23D1A4u;
            goto label_23d1a4;
        }
    }
    ctx->pc = 0x23D108u;
    // 0x23d108: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23d108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x23d10c: 0x0  nop
    ctx->pc = 0x23d10cu;
    // NOP
label_23d110:
    // 0x23d110: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x23d110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d114: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23d114u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23d118: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x23d118u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23d11c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d11cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23d120: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23d120u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x23d124: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23d124u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x23d128: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d12c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D12Cu;
    {
        const bool branch_taken_0x23d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D12Cu;
        // 0x23d130: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d12c) {
            ctx->pc = 0x23D110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d110;
        }
    }
    ctx->pc = 0x23D134u;
    // 0x23d134: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23D134u;
    {
        const bool branch_taken_0x23d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D134u;
        // 0x23d138: 0x24e7fff0  addiu       $a3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d134) {
            ctx->pc = 0x23D1A4u;
            goto label_23d1a4;
        }
    }
    ctx->pc = 0x23D13Cu;
label_23d13c:
    // 0x23d13c: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23d13cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x23d140: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d144: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d148: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d14c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d14cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d150: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d154: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23d158: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d15c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d160: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d164: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d168: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d16c: 0x49182f  dsubu       $v1, $v0, $t1
    ctx->pc = 0x23d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23d170: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23d170u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23d174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23d178: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23d17c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D17Cu;
    {
        const bool branch_taken_0x23d17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D17Cu;
        // 0x23d180: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d17c) {
            ctx->pc = 0x23D1A4u;
            goto label_23d1a4;
        }
    }
    ctx->pc = 0x23D184u;
    // 0x23d184: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23d184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23d188:
    // 0x23d188: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x23d188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d18c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d18cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d190: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23d194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d198: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23d19c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D19Cu;
    {
        const bool branch_taken_0x23d19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d19c) {
            ctx->pc = 0x23D1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D19Cu;
            // 0x23d1a0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d188;
        }
    }
    ctx->pc = 0x23D1A4u;
label_23d1a4:
    // 0x23d1a4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1a8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23d1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23d1ac:
    // 0x23d1ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D1ACu;
    {
        const bool branch_taken_0x23d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1ACu;
        // 0x23d1b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1ac) {
            ctx->pc = 0x23D1D4u;
            goto label_23d1d4;
        }
    }
    ctx->pc = 0x23D1B4u;
    // 0x23d1b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23d1b8:
    // 0x23d1b8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23d1b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d1bc: 0x0  nop
    ctx->pc = 0x23d1bcu;
    // NOP
    // 0x23d1c0: 0x0  nop
    ctx->pc = 0x23d1c0u;
    // NOP
    // 0x23d1c4: 0x0  nop
    ctx->pc = 0x23d1c4u;
    // NOP
    // 0x23d1c8: 0x0  nop
    ctx->pc = 0x23d1c8u;
    // NOP
    // 0x23d1cc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D1CCu;
    {
        const bool branch_taken_0x23d1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1cc) {
            ctx->pc = 0x23D1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1CCu;
            // 0x23d1d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d1b8;
        }
    }
    ctx->pc = 0x23D1D4u;
label_23d1d4:
    // 0x23d1d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23d1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d1dc: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23D1DCu;
    {
        const bool branch_taken_0x23d1dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d1dc) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D1E4u;
    // 0x23d1e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d1e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23d1ec: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d1f0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23d1f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23D1F4u;
    {
        const bool branch_taken_0x23d1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F4u;
        // 0x23d1f8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1f4) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D1FCu;
    // 0x23d1fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23d200: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23d200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23d204: 0x0  nop
    ctx->pc = 0x23d204u;
    // NOP
label_23d208:
    // 0x23d208: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D208u;
    {
        const bool branch_taken_0x23d208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d208) {
            ctx->pc = 0x23D20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D208u;
            // 0x23d20c: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D210u;
            goto label_23d210;
        }
    }
    ctx->pc = 0x23D210u;
label_23d210:
    // 0x23d210: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d214: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D214u;
    {
        const bool branch_taken_0x23d214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23d214) {
            ctx->pc = 0x23D234u;
            goto label_23d234;
        }
    }
    ctx->pc = 0x23D21Cu;
    // 0x23d21c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d21cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23d224: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d224u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d228: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23d22c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23D22Cu;
    {
        const bool branch_taken_0x23d22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D22Cu;
        // 0x23d230: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d22c) {
            ctx->pc = 0x23D208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D234u;
label_23d234:
    // 0x23d234: 0x3e00008  jr          $ra
    ctx->pc = 0x23D234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D234u;
        // 0x23d238: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D23Cu;
    // 0x23d23c: 0x0  nop
    ctx->pc = 0x23d23cu;
    // NOP
    // 0x23d240: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D240u;
    {
        const bool branch_taken_0x23d240 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D240u;
        // 0x23d244: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d240) {
            ctx->pc = 0x23D250u;
            goto label_23d250;
        }
    }
    ctx->pc = 0x23D248u;
label_23d248:
    // 0x23d248: 0x3e00008  jr          $ra
    ctx->pc = 0x23D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x23d250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23d254: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23D254u;
    {
        const bool branch_taken_0x23d254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D254u;
        // 0x23d258: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d254) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D25Cu;
    // 0x23d25c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x23d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23d260: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23d264: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23d264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x23d268: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d268u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d26c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d270: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d274: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d278: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d278u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d27c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x23d27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x23d280: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23D280u;
    {
        const bool branch_taken_0x23d280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d280) {
            ctx->pc = 0x23D328u;
            goto label_23d328;
        }
    }
    ctx->pc = 0x23D288u;
    // 0x23d288: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x23d288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d28c: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x23d28cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x23d290: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23d290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d294: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23d294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x23d298: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d298u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23d29c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23d29cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23d2a0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d2a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23d2a4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23d2a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23d2a8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23d2a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23d2ac: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x23d2acu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23d2b0: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x23d2b0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x23d2b4: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d2b4u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23d2b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x23d2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d2c0: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x23D2C0u;
    {
        const bool branch_taken_0x23d2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2C0u;
        // 0x23d2c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2c0) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D2C8u;
    // 0x23d2c8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x23d2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_23d2cc:
    // 0x23d2cc: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x23D2CCu;
    {
        const bool branch_taken_0x23d2cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2cc) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D2D4u;
    // 0x23d2d4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x23d2d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d2d8: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23d2d8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23d2dc: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x23d2dcu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x23d2e0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d2e0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23d2e4: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x23d2e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23d2e8: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d2e8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23d2ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d2f0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x23D2F0u;
    {
        const bool branch_taken_0x23d2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2F0u;
        // 0x23d2f4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2f0) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D2F8u;
    // 0x23d2f8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23d2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23d2fc: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x23d2fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d300: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x23D300u;
    {
        const bool branch_taken_0x23d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D300u;
        // 0x23d304: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d300) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D308u;
    // 0x23d308: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x23d308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23d30c: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x23d30cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23d310: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x23d310u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x23d314: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d318: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D318u;
            // 0x23d31c: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d2cc;
        }
    }
    ctx->pc = 0x23D320u;
    // 0x23d320: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23D320u;
    {
        const bool branch_taken_0x23d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D320u;
        // 0x23d324: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d320) {
            ctx->pc = 0x23D3A4u;
            goto label_23d3a4;
        }
    }
    ctx->pc = 0x23D328u;
label_23d328:
    // 0x23d328: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d32c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23D32Cu;
    {
        const bool branch_taken_0x23d32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D32Cu;
        // 0x23d330: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d32c) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D334u;
    // 0x23d334: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23d334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d338: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d338u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d33c: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23D33Cu;
    {
        const bool branch_taken_0x23d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D33Cu;
        // 0x23d340: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d33c) {
            ctx->pc = 0x23D3ACu;
            goto label_23d3ac;
        }
    }
    ctx->pc = 0x23D344u;
    // 0x23d344: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23d348: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x23d348u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x23d34c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d34cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d350: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d350u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d354: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d354u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d358: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d358u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d35c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d35cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
label_23d360:
    // 0x23d360: 0x10c0ffb9  beqz        $a2, . + 4 + (-0x47 << 2)
    ctx->pc = 0x23D360u;
    {
        const bool branch_taken_0x23d360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d360) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D368u;
    // 0x23d368: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x23d368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d36c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d36cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d370: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23d374: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d378: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x23d37c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x23D37Cu;
    {
        const bool branch_taken_0x23d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D37Cu;
        // 0x23d380: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d37c) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D384u;
    // 0x23d384: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d388: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D388u;
    {
        const bool branch_taken_0x23d388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D388u;
        // 0x23d38c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d388) {
            ctx->pc = 0x23D3A0u;
            goto label_23d3a0;
        }
    }
    ctx->pc = 0x23D390u;
    // 0x23d390: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x23d390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23d394: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x23d394u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x23d398: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x23D398u;
    {
        const bool branch_taken_0x23d398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d398) {
            ctx->pc = 0x23D39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D398u;
            // 0x23d39c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d360;
        }
    }
    ctx->pc = 0x23D3A0u;
label_23d3a0:
    // 0x23d3a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d3a4:
    // 0x23d3a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x23d3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d3a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23d3ac:
    // 0x23d3ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D3ACu;
    {
        const bool branch_taken_0x23d3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3ACu;
        // 0x23d3b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3ac) {
            ctx->pc = 0x23D3E8u;
            goto label_23d3e8;
        }
    }
    ctx->pc = 0x23D3B4u;
    // 0x23d3b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23D3B4u;
    {
        const bool branch_taken_0x23d3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3B4u;
        // 0x23d3b8: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3b4) {
            ctx->pc = 0x23D3DCu;
            goto label_23d3dc;
        }
    }
    ctx->pc = 0x23D3BCu;
    // 0x23d3bc: 0x0  nop
    ctx->pc = 0x23d3bcu;
    // NOP
label_23d3c0:
    // 0x23d3c0: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
    ctx->pc = 0x23D3C0u;
    {
        const bool branch_taken_0x23d3c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d3c0) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D3C8u;
    // 0x23d3c8: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x23D3C8u;
    {
        const bool branch_taken_0x23d3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3C8u;
        // 0x23d3cc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3c8) {
            ctx->pc = 0x23D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d248;
        }
    }
    ctx->pc = 0x23D3D0u;
    // 0x23d3d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23d3d4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d3d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23d3dc:
    // 0x23d3dc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x23d3dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d3e0: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x23D3E0u;
    {
        const bool branch_taken_0x23d3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3E0u;
        // 0x23d3e4: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3e0) {
            ctx->pc = 0x23D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d3c0;
        }
    }
    ctx->pc = 0x23D3E8u;
label_23d3e8:
    // 0x23d3e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d3ec: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23d3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3F0u;
        // 0x23d3f4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D3F8u;
}
