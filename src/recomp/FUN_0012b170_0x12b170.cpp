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

// Function: FUN_0012b170
// Address: 0x12b170 - 0x12b2cc
void FUN_0012b170_0x12b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b170_0x12b170");
#endif

    switch (ctx->pc) {
        case 0x12b1a0u: goto label_12b1a0;
        case 0x12b1c4u: goto label_12b1c4;
        case 0x12b2a0u: goto label_12b2a0;
        default: break;
    }

    ctx->pc = 0x12b170u;

    // 0x12b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b174: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12b178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b17c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b184: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x12b184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12b188: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B188u;
    {
        const bool branch_taken_0x12b188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B188u;
        // 0x12b18c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b188) {
            ctx->pc = 0x12B198u;
            goto label_12b198;
        }
    }
    ctx->pc = 0x12B190u;
    // 0x12b190: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B190u;
    {
        const bool branch_taken_0x12b190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b190) {
            ctx->pc = 0x12B1A8u;
            goto label_12b1a8;
        }
    }
    ctx->pc = 0x12B198u;
label_12b198:
    // 0x12b198: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B198u;
    SET_GPR_U32(ctx, 31, 0x12B1A0u);
    ctx->pc = 0x12B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B198u;
    // 0x12b19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B198u, 0x12B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1A0u;
label_12b1a0:
    // 0x12b1a0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x12B1A0u;
    {
        const bool branch_taken_0x12b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1A0u;
        // 0x12b1a4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1a0) {
            ctx->pc = 0x12B2CCu;
            return;
        }
    }
    ctx->pc = 0x12B1A8u;
label_12b1a8:
    // 0x12b1a8: 0x960702e6  lhu         $a3, 0x2E6($s0)
    ctx->pc = 0x12b1a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b1ac: 0x960602f8  lhu         $a2, 0x2F8($s0)
    ctx->pc = 0x12b1acu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 760)));
    // 0x12b1b0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x12b1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12b1b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B1B4u;
    {
        const bool branch_taken_0x12b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1B4u;
        // 0x12b1b8: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1b4) {
            ctx->pc = 0x12B1CCu;
            goto label_12b1cc;
        }
    }
    ctx->pc = 0x12B1BCu;
    // 0x12b1bc: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B1BCu;
    SET_GPR_U32(ctx, 31, 0x12B1C4u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B1BCu, 0x12B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1C4u;
label_12b1c4:
    // 0x12b1c4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x12B1C4u;
    {
        const bool branch_taken_0x12b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1c4) {
            ctx->pc = 0x12B2C8u;
            goto label_12b2c8;
        }
    }
    ctx->pc = 0x12B1CCu;
label_12b1cc:
    // 0x12b1cc: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B1CCu;
    {
        const bool branch_taken_0x12b1cc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x12B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1CCu;
        // 0x12b1d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1cc) {
            ctx->pc = 0x12B1E0u;
            goto label_12b1e0;
        }
    }
    ctx->pc = 0x12B1D4u;
    // 0x12b1d4: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x12b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x12b1d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x12b1dc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x12b1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_12b1e0:
    // 0x12b1e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12b1e4: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x12b1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x12b1e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B1E8u;
    {
        const bool branch_taken_0x12b1e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1E8u;
        // 0x12b1ec: 0x210bf  dsra32      $v0, $v0, 2 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1e8) {
            ctx->pc = 0x12B1F8u;
            goto label_12b1f8;
        }
    }
    ctx->pc = 0x12B1F0u;
    // 0x12b1f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12b1f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b1f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12b1f8:
    // 0x12b1f8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x12b1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b1fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x12b200: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x12b200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12b204: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B204u;
    {
        const bool branch_taken_0x12b204 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B204u;
        // 0x12b208: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b204) {
            ctx->pc = 0x12B214u;
            goto label_12b214;
        }
    }
    ctx->pc = 0x12B20Cu;
    // 0x12b20c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12b210: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x12b210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_12b214:
    // 0x12b214: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b218: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12b21c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12B21Cu;
    {
        const bool branch_taken_0x12b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B21Cu;
        // 0x12b220: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b21c) {
            ctx->pc = 0x12B250u;
            goto label_12b250;
        }
    }
    ctx->pc = 0x12B224u;
    // 0x12b224: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x12b224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b228: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12b228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12b22c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12b230: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12b230u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12b234: 0x0  nop
    ctx->pc = 0x12b234u;
    // NOP
    // 0x12b238: 0x0  nop
    ctx->pc = 0x12b238u;
    // NOP
    // 0x12b23c: 0x1012  mflo        $v0
    ctx->pc = 0x12b23cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12b240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b244: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x12b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b248: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12B248u;
    {
        const bool branch_taken_0x12b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B248u;
        // 0x12b24c: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b248) {
            ctx->pc = 0x12B290u;
            goto label_12b290;
        }
    }
    ctx->pc = 0x12B250u;
label_12b250:
    // 0x12b250: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x12b250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12b254: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B254u;
    {
        const bool branch_taken_0x12b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B254u;
        // 0x12b258: 0x671023  subu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b254) {
            ctx->pc = 0x12B268u;
            goto label_12b268;
        }
    }
    ctx->pc = 0x12B25Cu;
    // 0x12b25c: 0x920202fa  lbu         $v0, 0x2FA($s0)
    ctx->pc = 0x12b25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12b260: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12B260u;
    {
        const bool branch_taken_0x12b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B260u;
        // 0x12b264: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b260) {
            ctx->pc = 0x12B290u;
            goto label_12b290;
        }
    }
    ctx->pc = 0x12B268u;
label_12b268:
    // 0x12b268: 0x920402e3  lbu         $a0, 0x2E3($s0)
    ctx->pc = 0x12b268u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b26c: 0x960302fa  lhu         $v1, 0x2FA($s0)
    ctx->pc = 0x12b26cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x12b270: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12b270u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12b274: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12b274u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12b278: 0x0  nop
    ctx->pc = 0x12b278u;
    // NOP
    // 0x12b27c: 0x0  nop
    ctx->pc = 0x12b27cu;
    // NOP
    // 0x12b280: 0x1012  mflo        $v0
    ctx->pc = 0x12b280u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12b284: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b288: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12b28c: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x12b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
label_12b290:
    // 0x12b290: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x12b290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x12b294: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x12b294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x12b298: 0xc066e02  jal         func_19B808
    ctx->pc = 0x12B298u;
    SET_GPR_U32(ctx, 31, 0x12B2A0u);
    ctx->pc = 0x12B29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B298u;
    // 0x12b29c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x12B298u, 0x12B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B2A0u;
label_12b2a0:
    // 0x12b2a0: 0xc6010334  lwc1        $f1, 0x334($s0)
    ctx->pc = 0x12b2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b2a4: 0x3c03bb03  lui         $v1, 0xBB03
    ctx->pc = 0x12b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47875 << 16));
    // 0x12b2a8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x12b2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x12b2ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b2acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b2b0: 0x0  nop
    ctx->pc = 0x12b2b0u;
    // NOP
    // 0x12b2b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12b2b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b2b8: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x12b2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x12b2bc: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x12b2bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12b2c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12b2c4: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x12b2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_12b2c8:
    // 0x12b2c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12b2ccu;
}
