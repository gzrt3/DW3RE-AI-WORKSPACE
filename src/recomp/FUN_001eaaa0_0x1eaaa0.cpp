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

// Function: FUN_001eaaa0
// Address: 0x1eaaa0 - 0x1eac0c
void FUN_001eaaa0_0x1eaaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eaaa0_0x1eaaa0");
#endif

    switch (ctx->pc) {
        case 0x1eaaf4u: goto label_1eaaf4;
        case 0x1eab78u: goto label_1eab78;
        case 0x1eabf0u: goto label_1eabf0;
        default: break;
    }

    ctx->pc = 0x1eaaa0u;

    // 0x1eaaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eaaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eaaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eaaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eaaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eaaac: 0x8f828ef0  lw          $v0, -0x7110($gp)
    ctx->pc = 0x1eaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1eaab0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAAB0u;
    {
        const bool branch_taken_0x1eaab0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAAB0u;
        // 0x1eaab4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaab0) {
            ctx->pc = 0x1EAABCu;
            goto label_1eaabc;
        }
    }
    ctx->pc = 0x1EAAB8u;
    // 0x1eaab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eaabc:
    // 0x1eaabc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1eaabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eaac0: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eaac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eaac4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eaac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eaac8: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1eaac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1eaacc: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eaad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaad4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1eaad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eaad8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1eaad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eaadc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1eaadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1eaae0: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x1eaae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1eaae4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eaae4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1eaae8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1eaae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1eaaec: 0xc055148  jal         func_154520
    ctx->pc = 0x1EAAECu;
    SET_GPR_U32(ctx, 31, 0x1EAAF4u);
    ctx->pc = 0x1EAAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAAECu;
    // 0x1eaaf0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1EAAECu, 0x1EAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAAF4u;
label_1eaaf4:
    // 0x1eaaf4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1eaaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1eaaf8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EAAF8u;
    {
        const bool branch_taken_0x1eaaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eaaf8) {
            ctx->pc = 0x1EAB80u;
            goto label_1eab80;
        }
    }
    ctx->pc = 0x1EAB00u;
    // 0x1eab00: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1eab04: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAB04u;
    {
        const bool branch_taken_0x1eab04 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB04u;
        // 0x1eab08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab04) {
            ctx->pc = 0x1EAB10u;
            goto label_1eab10;
        }
    }
    ctx->pc = 0x1EAB0Cu;
    // 0x1eab0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eab10:
    // 0x1eab10: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1eab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1eab14: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eab18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eab1c: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eab20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eab20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eab24: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eab28: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eab28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eab2c: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eab2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1eab30: 0x8f8b8ecc  lw          $t3, -0x7134($gp)
    ctx->pc = 0x1eab30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
    // 0x1eab34: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
    // 0x1eab38: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eab38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
    // 0x1eab3c: 0x4810  mfhi        $t1
    ctx->pc = 0x1eab3cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1eab40: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eab40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eab44: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1eab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eab48: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x1eab4c: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1eab50: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1eab50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1eab54: 0x94883  sra         $t1, $t1, 2
    ctx->pc = 0x1eab54u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 2));
    // 0x1eab58: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eab58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x1eab5c: 0x12c2021  addu        $a0, $t1, $t4
    ctx->pc = 0x1eab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1eab60: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x1eab60u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1eab64: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eab64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1eab68: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1eab68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1eab6c: 0x938c0  sll         $a3, $t1, 3
    ctx->pc = 0x1eab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x1eab70: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1EAB70u;
    SET_GPR_U32(ctx, 31, 0x1EAB78u);
    ctx->pc = 0x1EAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAB70u;
    // 0x1eab74: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EAB70u, 0x1EAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAB78u;
label_1eab78:
    // 0x1eab78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EAB78u;
    {
        const bool branch_taken_0x1eab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eab78) {
            ctx->pc = 0x1EABF0u;
            goto label_1eabf0;
        }
    }
    ctx->pc = 0x1EAB80u;
label_1eab80:
    // 0x1eab80: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1eab84: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAB84u;
    {
        const bool branch_taken_0x1eab84 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab84) {
            ctx->pc = 0x1EAB90u;
            goto label_1eab90;
        }
    }
    ctx->pc = 0x1EAB8Cu;
    // 0x1eab8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eab90:
    // 0x1eab90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1eab94: 0x8f868ed0  lw          $a2, -0x7130($gp)
    ctx->pc = 0x1eab94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938320)));
    // 0x1eab98: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1eab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x1eab9c: 0x8f888eec  lw          $t0, -0x7114($gp)
    ctx->pc = 0x1eab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938348)));
    // 0x1eaba0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1eaba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x1eaba4: 0x8f878ed8  lw          $a3, -0x7128($gp)
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938328)));
    // 0x1eaba8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1eaba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1eabac: 0x367c2  srl         $t4, $v1, 31
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1eabb0: 0x8f898ecc  lw          $t1, -0x7134($gp)
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938316)));
    // 0x1eabb4: 0x8f8a8ee4  lw          $t2, -0x711C($gp)
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938340)));
    // 0x1eabb8: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1eabbc: 0x8f838ee8  lw          $v1, -0x7118($gp)
    ctx->pc = 0x1eabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938344)));
    // 0x1eabc0: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eabc4: 0x8f828ed4  lw          $v0, -0x712C($gp)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938324)));
    // 0x1eabc8: 0x5810  mfhi        $t3
    ctx->pc = 0x1eabc8u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x1eabcc: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1eabd0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1eabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1eabd4: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x1eabd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1eabd8: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1eabd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1eabdc: 0xb2083  sra         $a0, $t3, 2
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 11), 2));
    // 0x1eabe0: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1eabe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1eabe4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1eabe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1eabe8: 0xc054e5c  jal         func_153970
    ctx->pc = 0x1EABE8u;
    SET_GPR_U32(ctx, 31, 0x1EABF0u);
    ctx->pc = 0x1EABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EABE8u;
    // 0x1eabec: 0x624821  addu        $t1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1EABE8u, 0x1EABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EABF0u;
label_1eabf0:
    // 0x1eabf0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1eabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x1eabf4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1eabf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eabf8: 0x24845770  addiu       $a0, $a0, 0x5770
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22384));
    // 0x1eabfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eabfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac00: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1eac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1eac04: 0xc054e74  jal         func_1539D0
    ctx->pc = 0x1EAC04u;
    SET_GPR_U32(ctx, 31, 0x1EAC0Cu);
    ctx->pc = 0x1EAC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC04u;
    // 0x1eac08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1EAC04u, 0x1EAC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC0Cu;
}
