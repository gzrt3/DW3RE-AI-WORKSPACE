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

// Function: FUN_00155af0
// Address: 0x155af0 - 0x155d84
void FUN_00155af0_0x155af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155af0_0x155af0");
#endif

    switch (ctx->pc) {
        case 0x155b20u: goto label_155b20;
        case 0x155bb0u: goto label_155bb0;
        case 0x155bc0u: goto label_155bc0;
        case 0x155bd8u: goto label_155bd8;
        case 0x155bfcu: goto label_155bfc;
        case 0x155c64u: goto label_155c64;
        case 0x155cb0u: goto label_155cb0;
        case 0x155cd8u: goto label_155cd8;
        case 0x155d14u: goto label_155d14;
        case 0x155d1cu: goto label_155d1c;
        case 0x155d68u: goto label_155d68;
        default: break;
    }

    ctx->pc = 0x155af0u;

    // 0x155af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x155af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x155af4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x155af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x155af8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x155af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x155afc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x155b00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x155b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x155b04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x155b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x155b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x155b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x155b0c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x155b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x155b10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155B10u;
    {
        const bool branch_taken_0x155b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B10u;
        // 0x155b14: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b10) {
            ctx->pc = 0x155B28u;
            goto label_155b28;
        }
    }
    ctx->pc = 0x155B18u;
    // 0x155b18: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x155B18u;
    SET_GPR_U32(ctx, 31, 0x155B20u);
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x155B18u, 0x155B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B20u;
label_155b20:
    // 0x155b20: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x155B20u;
    {
        const bool branch_taken_0x155b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B20u;
        // 0x155b24: 0x24440017  addiu       $a0, $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b20) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B28u;
label_155b28:
    // 0x155b28: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x155b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x155b2c: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x155b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x155b30: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x155b34: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x155b34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155b38: 0x0  nop
    ctx->pc = 0x155b38u;
    // NOP
    // 0x155b3c: 0x0  nop
    ctx->pc = 0x155b3cu;
    // NOP
    // 0x155b40: 0x2010  mfhi        $a0
    ctx->pc = 0x155b40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x155b44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x155B44u;
    {
        const bool branch_taken_0x155b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B44u;
        // 0x155b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b44) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B4Cu;
    // 0x155b4c: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x155B4Cu;
    {
        const bool branch_taken_0x155b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b4c) {
            ctx->pc = 0x155BA4u;
            goto label_155ba4;
        }
    }
    ctx->pc = 0x155B54u;
    // 0x155b54: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x155b58: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x155B58u;
    {
        const bool branch_taken_0x155b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x155B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B58u;
        // 0x155b5c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b58) {
            ctx->pc = 0x155B9Cu;
            goto label_155b9c;
        }
    }
    ctx->pc = 0x155B60u;
    // 0x155b60: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x155B60u;
    {
        const bool branch_taken_0x155b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b60) {
            ctx->pc = 0x155B94u;
            goto label_155b94;
        }
    }
    ctx->pc = 0x155B68u;
    // 0x155b68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155b6c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155B6Cu;
    {
        const bool branch_taken_0x155b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b6c) {
            ctx->pc = 0x155B8Cu;
            goto label_155b8c;
        }
    }
    ctx->pc = 0x155B74u;
    // 0x155b74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155B74u;
    {
        const bool branch_taken_0x155b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b74) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155B7Cu;
    // 0x155b7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155B7Cu;
    {
        const bool branch_taken_0x155b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b7c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155B84u;
    {
        const bool branch_taken_0x155b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B84u;
        // 0x155b88: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b84) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B8Cu;
label_155b8c:
    // 0x155b8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155B8Cu;
    {
        const bool branch_taken_0x155b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b8c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155B94u;
    {
        const bool branch_taken_0x155b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B94u;
        // 0x155b98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b94) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155B9Cu;
label_155b9c:
    // 0x155b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155B9Cu;
    {
        const bool branch_taken_0x155b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B9Cu;
        // 0x155ba0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b9c) {
            ctx->pc = 0x155BA8u;
            goto label_155ba8;
        }
    }
    ctx->pc = 0x155BA4u;
label_155ba4:
    // 0x155ba4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_155ba8:
    // 0x155ba8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x155BA8u;
    SET_GPR_U32(ctx, 31, 0x155BB0u);
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x155BA8u, 0x155BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BB0u;
label_155bb0:
    // 0x155bb0: 0xaf808638  sw          $zero, -0x79C8($gp)
    ctx->pc = 0x155bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 0));
    // 0x155bb4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x155bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bb8: 0xaf808634  sw          $zero, -0x79CC($gp)
    ctx->pc = 0x155bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 0));
    // 0x155bbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155bc0:
    // 0x155bc0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x155bc4: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x155bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x155bc8: 0x2442baa0  addiu       $v0, $v0, -0x4560
    ctx->pc = 0x155bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949536));
    // 0x155bcc: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x155bccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x155bd0: 0xc05e234  jal         func_1788D0
    ctx->pc = 0x155BD0u;
    SET_GPR_U32(ctx, 31, 0x155BD8u);
    ctx->pc = 0x155BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BD0u;
    // 0x155bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x155BD0u, 0x155BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BD8u;
label_155bd8:
    // 0x155bd8: 0x3407fffe  ori         $a3, $zero, 0xFFFE
    ctx->pc = 0x155bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x155bdc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x155bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x155be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155be8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x155be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x155bec: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x155bf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155bf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155bf4: 0xc05e060  jal         func_178180
    ctx->pc = 0x155BF4u;
    SET_GPR_U32(ctx, 31, 0x155BFCu);
    ctx->pc = 0x155BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155BF4u;
    // 0x155bf8: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x155BF4u, 0x155BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155BFCu;
label_155bfc:
    // 0x155bfc: 0xa2200078  sb          $zero, 0x78($s1)
    ctx->pc = 0x155bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x155c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x155c04: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x155c04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x155c0c: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x155c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c10: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x155c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x155c14: 0xa225007b  sb          $a1, 0x7B($s1)
    ctx->pc = 0x155c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x155c18: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155c1c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x155c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x155c20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c24: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x155c24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c28: 0xa2200089  sb          $zero, 0x89($s1)
    ctx->pc = 0x155c28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c2c: 0xa220008a  sb          $zero, 0x8A($s1)
    ctx->pc = 0x155c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c30: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x155c30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x155c34: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x155c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x155c38: 0xa2200098  sb          $zero, 0x98($s1)
    ctx->pc = 0x155c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 152), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c3c: 0xa2200099  sb          $zero, 0x99($s1)
    ctx->pc = 0x155c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 153), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c40: 0xa220009a  sb          $zero, 0x9A($s1)
    ctx->pc = 0x155c40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 154), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c44: 0xa225009b  sb          $a1, 0x9B($s1)
    ctx->pc = 0x155c44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 155), (uint8_t)GPR_U32(ctx, 5));
    // 0x155c48: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x155c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
    // 0x155c4c: 0xa22000a8  sb          $zero, 0xA8($s1)
    ctx->pc = 0x155c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c50: 0xa22000a9  sb          $zero, 0xA9($s1)
    ctx->pc = 0x155c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c54: 0xa22000aa  sb          $zero, 0xAA($s1)
    ctx->pc = 0x155c54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
    // 0x155c58: 0xa22500ab  sb          $a1, 0xAB($s1)
    ctx->pc = 0x155c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 171), (uint8_t)GPR_U32(ctx, 5));
    // 0x155c5c: 0xc070924  jal         func_1C2490
    ctx->pc = 0x155C5Cu;
    SET_GPR_U32(ctx, 31, 0x155C64u);
    ctx->pc = 0x155C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155C5Cu;
    // 0x155c60: 0xae2200ac  sw          $v0, 0xAC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x155C5Cu, 0x155C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155C64u;
label_155c64:
    // 0x155c64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155c68: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x155c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x155c6c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x155c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x155c70: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x155c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x155c74: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x155c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x155c78: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x155c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x155c7c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x155c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x155c80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x155c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155c88: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x155c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x155c8c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x155c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x155c90: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x155c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x155c94: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x155c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x155c98: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x155c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x155c9c: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155c9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x155ca0: 0x24090140  addiu       $t1, $zero, 0x140
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x155ca4: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x155ca8: 0xc05dd88  jal         func_177620
    ctx->pc = 0x155CA8u;
    SET_GPR_U32(ctx, 31, 0x155CB0u);
    ctx->pc = 0x155CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CA8u;
    // 0x155cac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x155CA8u, 0x155CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CB0u;
label_155cb0:
    // 0x155cb0: 0x240300bc  addiu       $v1, $zero, 0xBC
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x155cb4: 0x24020ffb  addiu       $v0, $zero, 0xFFB
    ctx->pc = 0x155cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4091));
    // 0x155cb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155cbc: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x155cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x155cc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x155cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x155cc4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x155cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x155cc8: 0xfe220100  sd          $v0, 0x100($s1)
    ctx->pc = 0x155cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 256), GPR_U64(ctx, 2));
    // 0x155ccc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155cd0: 0xc070924  jal         func_1C2490
    ctx->pc = 0x155CD0u;
    SET_GPR_U32(ctx, 31, 0x155CD8u);
    ctx->pc = 0x155CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155CD0u;
    // 0x155cd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x155CD0u, 0x155CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155CD8u;
label_155cd8:
    // 0x155cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155cdc: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x155ce0: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x155ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
    // 0x155ce4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155ce8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x155ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x155cec: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x155cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155cf4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x155cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x155cf8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x155cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x155cfc: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x155d00: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x155d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x155d04: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155d04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x155d08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155d08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d0c: 0xc05de30  jal         func_1778C0
    ctx->pc = 0x155D0Cu;
    SET_GPR_U32(ctx, 31, 0x155D14u);
    ctx->pc = 0x155D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D0Cu;
    // 0x155d10: 0x240b0140  addiu       $t3, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x155D0Cu, 0x155D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D14u;
label_155d14:
    // 0x155d14: 0xc070834  jal         func_1C20D0
    ctx->pc = 0x155D14u;
    SET_GPR_U32(ctx, 31, 0x155D1Cu);
    ctx->pc = 0x155D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D14u;
    // 0x155d18: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x155D14u, 0x155D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D1Cu;
label_155d1c:
    // 0x155d1c: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x155d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x155d20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x155d24: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x155d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x155d28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x155d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x155d2c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x155d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x155d30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x155d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155d34: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x155d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
    // 0x155d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x155d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155d3c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x155d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x155d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x155d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d44: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x155d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x155d48: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x155d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x155d4c: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x155d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
    // 0x155d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d54: 0x24070198  addiu       $a3, $zero, 0x198
    ctx->pc = 0x155d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x155d58: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x155d58u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x155d5c: 0x24090280  addiu       $t1, $zero, 0x280
    ctx->pc = 0x155d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x155d60: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x155D60u;
    SET_GPR_U32(ctx, 31, 0x155D68u);
    ctx->pc = 0x155D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D60u;
    // 0x155d64: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x155D60u, 0x155D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D68u;
label_155d68:
    // 0x155d68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x155d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x155d6c: 0xa22002a3  sb          $zero, 0x2A3($s1)
    ctx->pc = 0x155d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 675), (uint8_t)GPR_U32(ctx, 0));
    // 0x155d70: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x155d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x155d74: 0x265202d0  addiu       $s2, $s2, 0x2D0
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x155d78: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x155D78u;
    {
        const bool branch_taken_0x155d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x155D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D78u;
        // 0x155d7c: 0xa2200273  sb          $zero, 0x273($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 627), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d78) {
            ctx->pc = 0x155BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155bc0;
        }
    }
    ctx->pc = 0x155D80u;
    // 0x155d80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x155d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->pc = 0x155d84u;
}
