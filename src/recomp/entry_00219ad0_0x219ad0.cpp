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

// Function: entry_00219ad0
// Address: 0x219ad0 - 0x219e80
void entry_00219ad0_0x219ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219ad0_0x219ad0");
#endif

    switch (ctx->pc) {
        case 0x219b40u: goto label_219b40;
        case 0x219b64u: goto label_219b64;
        case 0x219b80u: goto label_219b80;
        default: break;
    }

    ctx->pc = 0x219ad0u;

    // 0x219ad0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x219ad4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x219ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x219ad8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x219AD8u;
    {
        const bool branch_taken_0x219ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x250800a0  addiu       $t0, $t0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ad8) {
            ctx->pc = 0x219AB4u;
            return;
        }
    }
    ctx->pc = 0x219AE0u;
    // 0x219ae0: 0x8f889254  lw          $t0, -0x6DAC($gp)
    ctx->pc = 0x219ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939220)));
    // 0x219ae4: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x219ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x219ae8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x219aec: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x219aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x219af0: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x219af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x219af4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x219af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x219af8: 0x24a5e0f8  addiu       $a1, $a1, -0x1F08
    ctx->pc = 0x219af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959352));
    // 0x219afc: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219afcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219b00: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
    // 0x219b08: 0x1010  mfhi        $v0
    ctx->pc = 0x219b08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x219b0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x219b10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x219b14: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x219b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219b18: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x219b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219b1c: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x219b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x219b20: 0x0  nop
    ctx->pc = 0x219b20u;
    // NOP
    // 0x219b24: 0x1010  mfhi        $v0
    ctx->pc = 0x219b24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x219b28: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x219b28u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x219b2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x219b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x219b30: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x219b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x219b34: 0x3810  mfhi        $a3
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x219b38: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x219B38u;
    SET_GPR_U32(ctx, 31, 0x219B40u);
    ctx->pc = 0x219B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B38u;
    // 0x219b3c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x219B38u, 0x219B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B40u;
label_219b40:
    // 0x219b40: 0x26042490  addiu       $a0, $s0, 0x2490
    ctx->pc = 0x219b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
    // 0x219b44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x219b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x219b48: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x219b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x219b4c: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x219b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x219b50: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x219b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x219b54: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x219b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x219b58: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x219b58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x219b5c: 0xc0708ac  jal         func_1C22B0
    ctx->pc = 0x219B5Cu;
    SET_GPR_U32(ctx, 31, 0x219B64u);
    ctx->pc = 0x219B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B5Cu;
    // 0x219b60: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C22B0u, 0x219B5Cu, 0x219B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B64u;
label_219b64:
    // 0x219b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x219b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x219b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b6c: 0x2406027b  addiu       $a2, $zero, 0x27B
    ctx->pc = 0x219b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 635));
    // 0x219b70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x219b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x219b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b78: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x219B78u;
    SET_GPR_U32(ctx, 31, 0x219B80u);
    ctx->pc = 0x219B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B78u;
    // 0x219b7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x219B78u, 0x219B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B80u;
label_219b80:
    // 0x219b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x219B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B8Cu;
        // 0x219b90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B94u;
    // 0x219b94: 0x0  nop
    ctx->pc = 0x219b94u;
    // NOP
    // 0x219b98: 0x0  nop
    ctx->pc = 0x219b98u;
    // NOP
    // 0x219b9c: 0x0  nop
    ctx->pc = 0x219b9cu;
    // NOP
    // 0x219ba0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x219BA0u;
    {
        const bool branch_taken_0x219ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x219BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BA0u;
        // 0x219ba4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ba0) {
            ctx->pc = 0x219BC8u;
            goto label_219bc8;
        }
    }
    ctx->pc = 0x219BA8u;
    // 0x219ba8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219BA8u;
    {
        const bool branch_taken_0x219ba8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x219ba8) {
            ctx->pc = 0x219BB8u;
            goto label_219bb8;
        }
    }
    ctx->pc = 0x219BB0u;
    // 0x219bb0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x219BB0u;
    {
        const bool branch_taken_0x219bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB0u;
        // 0x219bb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bb0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BB8u;
label_219bb8:
    // 0x219bb8: 0x481006a  bgez        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x219BB8u;
    {
        const bool branch_taken_0x219bb8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x219bb8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC0u;
    // 0x219bc0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x219BC0u;
    {
        const bool branch_taken_0x219bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BC0u;
        // 0x219bc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bc0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BC8u;
label_219bc8:
    // 0x219bc8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x219BC8u;
    {
        const bool branch_taken_0x219bc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x219bc8) {
            ctx->pc = 0x219BF0u;
            goto label_219bf0;
        }
    }
    ctx->pc = 0x219BD0u;
    // 0x219bd0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x219BD0u;
    {
        const bool branch_taken_0x219bd0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bd0) {
            ctx->pc = 0x219BE0u;
            goto label_219be0;
        }
    }
    ctx->pc = 0x219BD8u;
    // 0x219bd8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x219BD8u;
    {
        const bool branch_taken_0x219bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BD8u;
        // 0x219bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219bd8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE0u;
label_219be0:
    // 0x219be0: 0x4a10060  bgez        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x219BE0u;
    {
        const bool branch_taken_0x219be0 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x219be0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BE8u;
    // 0x219be8: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x219BE8u;
    {
        const bool branch_taken_0x219be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BE8u;
        // 0x219bec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219be8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219BF0u;
label_219bf0:
    // 0x219bf0: 0x18a0002f  blez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x219BF0u;
    {
        const bool branch_taken_0x219bf0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x219bf0) {
            ctx->pc = 0x219CB0u;
            goto label_219cb0;
        }
    }
    ctx->pc = 0x219BF8u;
    // 0x219bf8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219bf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219bfc: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
    // 0x219c00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219c00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c04: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
    // 0x219c08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219c08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219c0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219c0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219c10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219c10u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x219c14: 0x0  nop
    ctx->pc = 0x219c14u;
    // NOP
    // 0x219c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c1c: 0x0  nop
    ctx->pc = 0x219c1cu;
    // NOP
    // 0x219c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c24: 0x0  nop
    ctx->pc = 0x219c24u;
    // NOP
    // 0x219c28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219C28u;
    {
        const bool branch_taken_0x219c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C28u;
        // 0x219c2c: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c28) {
            ctx->pc = 0x219C38u;
            goto label_219c38;
        }
    }
    ctx->pc = 0x219C30u;
    // 0x219c30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x219C30u;
    {
        const bool branch_taken_0x219c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C30u;
        // 0x219c34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c30) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C38u;
label_219c38:
    // 0x219c38: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
    // 0x219c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c40: 0x0  nop
    ctx->pc = 0x219c40u;
    // NOP
    // 0x219c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c48: 0x0  nop
    ctx->pc = 0x219c48u;
    // NOP
    // 0x219c4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219C4Cu;
    {
        const bool branch_taken_0x219c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c4c) {
            ctx->pc = 0x219C5Cu;
            goto label_219c5c;
        }
    }
    ctx->pc = 0x219C54u;
    // 0x219c54: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x219C54u;
    {
        const bool branch_taken_0x219c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C54u;
        // 0x219c58: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c54) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C5Cu;
label_219c5c:
    // 0x219c5c: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
    // 0x219c60: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
    // 0x219c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c68: 0x0  nop
    ctx->pc = 0x219c68u;
    // NOP
    // 0x219c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c70: 0x0  nop
    ctx->pc = 0x219c70u;
    // NOP
    // 0x219c74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219C74u;
    {
        const bool branch_taken_0x219c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C74u;
        // 0x219c78: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c74) {
            ctx->pc = 0x219C84u;
            goto label_219c84;
        }
    }
    ctx->pc = 0x219C7Cu;
    // 0x219c7c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x219C7Cu;
    {
        const bool branch_taken_0x219c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219C7Cu;
        // 0x219c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c7c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219C84u;
label_219c84:
    // 0x219c84: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
    // 0x219c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219c8c: 0x0  nop
    ctx->pc = 0x219c8cu;
    // NOP
    // 0x219c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219c94: 0x0  nop
    ctx->pc = 0x219c94u;
    // NOP
    // 0x219c98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219CA8u;
            goto label_219ca8;
        }
    }
    ctx->pc = 0x219CA0u;
    // 0x219ca0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x219CA0u;
    {
        const bool branch_taken_0x219ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA0u;
        // 0x219ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca0) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CA8u;
label_219ca8:
    // 0x219ca8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x219CA8u;
    {
        const bool branch_taken_0x219ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CA8u;
        // 0x219cac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CB0u;
label_219cb0:
    // 0x219cb0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x219cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x219cb4: 0x3c02c01a  lui         $v0, 0xC01A
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49178 << 16));
    // 0x219cb8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x219cb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219cbc: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
    // 0x219cc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x219cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x219cc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x219cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x219cc8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x219cc8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x219ccc: 0x0  nop
    ctx->pc = 0x219cccu;
    // NOP
    // 0x219cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219cd4: 0x0  nop
    ctx->pc = 0x219cd4u;
    // NOP
    // 0x219cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219cdc: 0x0  nop
    ctx->pc = 0x219cdcu;
    // NOP
    // 0x219ce0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219CE0u;
    {
        const bool branch_taken_0x219ce0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE0u;
        // 0x219ce4: 0x3c02bed4  lui         $v0, 0xBED4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48852 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce0) {
            ctx->pc = 0x219CF0u;
            goto label_219cf0;
        }
    }
    ctx->pc = 0x219CE8u;
    // 0x219ce8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x219CE8u;
    {
        const bool branch_taken_0x219ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219CE8u;
        // 0x219cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ce8) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219CF0u;
label_219cf0:
    // 0x219cf0: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
    // 0x219cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219cf8: 0x0  nop
    ctx->pc = 0x219cf8u;
    // NOP
    // 0x219cfc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219d00: 0x0  nop
    ctx->pc = 0x219d00u;
    // NOP
    // 0x219d04: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219D04u;
    {
        const bool branch_taken_0x219d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d04) {
            ctx->pc = 0x219D14u;
            goto label_219d14;
        }
    }
    ctx->pc = 0x219D0Cu;
    // 0x219d0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x219D0Cu;
    {
        const bool branch_taken_0x219d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D0Cu;
        // 0x219d10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d0c) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D14u;
label_219d14:
    // 0x219d14: 0x3c023ed4  lui         $v0, 0x3ED4
    ctx->pc = 0x219d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16084 << 16));
    // 0x219d18: 0x34421206  ori         $v0, $v0, 0x1206
    ctx->pc = 0x219d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4614);
    // 0x219d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219d20: 0x0  nop
    ctx->pc = 0x219d20u;
    // NOP
    // 0x219d24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219d28: 0x0  nop
    ctx->pc = 0x219d28u;
    // NOP
    // 0x219d2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219D2Cu;
    {
        const bool branch_taken_0x219d2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x219D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D2Cu;
        // 0x219d30: 0x3c02401a  lui         $v0, 0x401A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16410 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d2c) {
            ctx->pc = 0x219D3Cu;
            goto label_219d3c;
        }
    }
    ctx->pc = 0x219D34u;
    // 0x219d34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x219D34u;
    {
        const bool branch_taken_0x219d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D34u;
        // 0x219d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d34) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D3Cu;
label_219d3c:
    // 0x219d3c: 0x34428241  ori         $v0, $v0, 0x8241
    ctx->pc = 0x219d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33345);
    // 0x219d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x219d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219d44: 0x0  nop
    ctx->pc = 0x219d44u;
    // NOP
    // 0x219d48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x219d48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x219d4c: 0x0  nop
    ctx->pc = 0x219d4cu;
    // NOP
    // 0x219d50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x219D50u;
    {
        const bool branch_taken_0x219d50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x219d50) {
            ctx->pc = 0x219D60u;
            goto label_219d60;
        }
    }
    ctx->pc = 0x219D58u;
    // 0x219d58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x219D58u;
    {
        const bool branch_taken_0x219d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D58u;
        // 0x219d5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d58) {
            ctx->pc = 0x219D64u;
            goto label_219d64;
        }
    }
    ctx->pc = 0x219D60u;
label_219d60:
    // 0x219d60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_219d64:
    // 0x219d64: 0x3e00008  jr          $ra
    ctx->pc = 0x219D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219D6Cu;
    // 0x219d6c: 0x0  nop
    ctx->pc = 0x219d6cu;
    // NOP
    // 0x219d70: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x219d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x219d74: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x219d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x219d78: 0x653821  addu        $a3, $v1, $a1
    ctx->pc = 0x219d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x219d7c: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
    // 0x219d80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x219d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x219d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x219d8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x219d90: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x219d94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x219d98: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x219d9c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x219d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x219da0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x219da4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x219da8: 0x346b8889  ori         $t3, $v1, 0x8889
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x219dac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x219db0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x219db4: 0x8ccc022c  lw          $t4, 0x22C($a2)
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 556)));
    // 0x219db8: 0x8cc90228  lw          $t1, 0x228($a2)
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 552)));
    // 0x219dbc: 0x90c80220  lbu         $t0, 0x220($a2)
    ctx->pc = 0x219dbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 544)));
    // 0x219dc0: 0x16c0018  mult        $zero, $t3, $t4
    ctx->pc = 0x219dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219dc4: 0xc57c2  srl         $t2, $t4, 31
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x219dc8: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x219dcc: 0x3010  mfhi        $a2
    ctx->pc = 0x219dccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x219dd0: 0x1690018  mult        $zero, $t3, $t1
    ctx->pc = 0x219dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x219dd4: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x219dd8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x219ddc: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x219de0: 0x3010  mfhi        $a2
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x219de4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x219de8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x219dec: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x219DECu;
    {
        const bool branch_taken_0x219dec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x219DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DECu;
        // 0x219df0: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dec) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219DF4u;
    // 0x219df4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x219DF4u;
    {
        const bool branch_taken_0x219df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219df4) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219DFCu;
label_219dfc:
    // 0x219dfc: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x219DFCu;
    {
        const bool branch_taken_0x219dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DFCu;
        // 0x219e00: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dfc) {
            ctx->pc = 0x219E0Cu;
            goto label_219e0c;
        }
    }
    ctx->pc = 0x219E04u;
    // 0x219e04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x219E04u;
    {
        const bool branch_taken_0x219e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e04) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E0Cu;
label_219e0c:
    // 0x219e0c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x219e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x219e10: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x219e14: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
    // 0x219e18: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x219e1c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x219e20: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x219e24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x219e28: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x219e2c: 0x8a082a  slt         $at, $a0, $t2
    ctx->pc = 0x219e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x219e30: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x219e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x219e34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x219e38: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x219e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x219e3c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x219E3Cu;
    {
        const bool branch_taken_0x219e3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e3c) {
            ctx->pc = 0x219E68u;
            goto label_219e68;
        }
    }
    ctx->pc = 0x219E44u;
    // 0x219e44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x219e48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x219e4c: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x219e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
    // 0x219e50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219E50u;
    {
        const bool branch_taken_0x219e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e50) {
            ctx->pc = 0x219E60u;
            goto label_219e60;
        }
    }
    ctx->pc = 0x219E58u;
    // 0x219e58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x219E60u;
    {
        const bool branch_taken_0x219e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e60) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E68u;
label_219e68:
    // 0x219e68: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x219e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x219e6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x219E6Cu;
    {
        const bool branch_taken_0x219e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e6c) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E74u;
    // 0x219e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219e78:
    // 0x219e78: 0x3e00008  jr          $ra
    ctx->pc = 0x219E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E80u;
}
