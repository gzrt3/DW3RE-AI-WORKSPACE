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

// Function: entry_001ced50
// Address: 0x1ced50 - 0x1cf1a4
void entry_001ced50_0x1ced50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ced50_0x1ced50");
#endif

    switch (ctx->pc) {
        case 0x1cf00cu: goto label_1cf00c;
        default: break;
    }

    ctx->pc = 0x1ced50u;

    // 0x1ced50: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x1ced50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ced54: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ced54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ced58: 0x86450300  lh          $a1, 0x300($s2)
    ctx->pc = 0x1ced58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 768)));
    // 0x1ced5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ced60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced64: 0xa6430348  sh          $v1, 0x348($s2)
    ctx->pc = 0x1ced64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 840), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced68: 0xa6430318  sh          $v1, 0x318($s2)
    ctx->pc = 0x1ced68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 792), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced6c: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x1ced6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1ced70: 0x864503d0  lh          $a1, 0x3D0($s2)
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 976)));
    // 0x1ced74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ced74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ced78: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1ced78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ced7c: 0xa6430418  sh          $v1, 0x418($s2)
    ctx->pc = 0x1ced7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1048), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced80: 0xa64303e8  sh          $v1, 0x3E8($s2)
    ctx->pc = 0x1ced80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1000), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ced84: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1ced84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1ced88: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ced88u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ced8c: 0x0  nop
    ctx->pc = 0x1ced8cu;
    // NOP
    // 0x1ced90: 0x0  nop
    ctx->pc = 0x1ced90u;
    // NOP
    // 0x1ced94: 0x1810  mfhi        $v1
    ctx->pc = 0x1ced94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ced98: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x1ced98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ced9c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CED9Cu;
    {
        const bool branch_taken_0x1ced9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED9Cu;
        // 0x1ceda0: 0x26420350  addiu       $v0, $s2, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced9c) {
            ctx->pc = 0x1CEDA8u;
            goto label_1ceda8;
        }
    }
    ctx->pc = 0x1CEDA4u;
    // 0x1ceda4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ceda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ceda8:
    // 0x1ceda8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1cedac: 0x28a40014  slti        $a0, $a1, 0x14
    ctx->pc = 0x1cedacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1cedb0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEDB0u;
    {
        const bool branch_taken_0x1cedb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDB0u;
        // 0x1cedb4: 0x28a40028  slti        $a0, $a1, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedb0) {
            ctx->pc = 0x1CEDC0u;
            goto label_1cedc0;
        }
    }
    ctx->pc = 0x1CEDB8u;
    // 0x1cedb8: 0x14800068  bnez        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1CEDB8u;
    {
        const bool branch_taken_0x1cedb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cedb8) {
            ctx->pc = 0x1CEF5Cu;
            goto label_1cef5c;
        }
    }
    ctx->pc = 0x1CEDC0u;
label_1cedc0:
    // 0x1cedc0: 0x14a00019  bnez        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CEDC0u;
    {
        const bool branch_taken_0x1cedc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDC0u;
        // 0x1cedc4: 0x28a10014  slti        $at, $a1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cedc0) {
            ctx->pc = 0x1CEE28u;
            goto label_1cee28;
        }
    }
    ctx->pc = 0x1CEDC8u;
    // 0x1cedc8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x1cedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1cedcc: 0x2415007f  addiu       $s5, $zero, 0x7F
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cedd0: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cedd4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cedd8: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x1ceddc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ceddcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cede0: 0x3487aaab  ori         $a3, $a0, 0xAAAB
    ctx->pc = 0x1cede0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1cede4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x1cede4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cede8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1cede8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cedec: 0xe50018  mult        $zero, $a3, $a1
    ctx->pc = 0x1cedecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cedf0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1cedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cedf4: 0x537c2  srl         $a2, $a1, 31
    ctx->pc = 0x1cedf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1cedf8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cedfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1cedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1cee00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1cee00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cee04: 0x2810  mfhi        $a1
    ctx->pc = 0x1cee04u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1cee08: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1cee0c: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x1cee0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cee10: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1cee10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cee14: 0x24770078  addiu       $s7, $v1, 0x78
    ctx->pc = 0x1cee14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x1cee18: 0x1810  mfhi        $v1
    ctx->pc = 0x1cee18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cee1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cee20: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CEE20u;
    {
        const bool branch_taken_0x1cee20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE20u;
        // 0x1cee24: 0x24760020  addiu       $s6, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee20) {
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEE28u;
label_1cee28:
    // 0x1cee28: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CEE28u;
    {
        const bool branch_taken_0x1cee28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE28u;
        // 0x1cee2c: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee28) {
            ctx->pc = 0x1CEE7Cu;
            goto label_1cee7c;
        }
    }
    ctx->pc = 0x1CEE30u;
    // 0x1cee30: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cee30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cee34: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x1cee38: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cee38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cee3c: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cee3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1cee40: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cee40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1cee44: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cee44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cee48: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cee48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cee4c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1cee50: 0x0  nop
    ctx->pc = 0x1cee50u;
    // NOP
    // 0x1cee54: 0x1810  mfhi        $v1
    ctx->pc = 0x1cee54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cee58: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1cee58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cee5c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEE5Cu;
    {
        const bool branch_taken_0x1cee5c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1CEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE5Cu;
        // 0x1cee60: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee5c) {
            ctx->pc = 0x1CEE6Cu;
            goto label_1cee6c;
        }
    }
    ctx->pc = 0x1CEE64u;
    // 0x1cee64: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cee68: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1cee68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1cee6c:
    // 0x1cee6c: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1cee6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x1cee70: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cee70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1cee74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CEE74u;
    {
        const bool branch_taken_0x1cee74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE74u;
        // 0x1cee78: 0x24160020  addiu       $s6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee74) {
            ctx->pc = 0x1CEEB0u;
            goto label_1ceeb0;
        }
    }
    ctx->pc = 0x1CEE7Cu;
label_1cee7c:
    // 0x1cee7c: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x1cee80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cee84: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cee84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1cee88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cee88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1cee8c: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cee8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1cee90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cee90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cee94: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cee98: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cee9c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ceea0: 0x0  nop
    ctx->pc = 0x1ceea0u;
    // NOP
    // 0x1ceea4: 0x1810  mfhi        $v1
    ctx->pc = 0x1ceea4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ceea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ceea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ceeac: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1ceeacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1ceeb0:
    // 0x1ceeb0: 0xa0550070  sb          $s5, 0x70($v0)
    ctx->pc = 0x1ceeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ceeb4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1ceeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ceeb8: 0xa0570071  sb          $s7, 0x71($v0)
    ctx->pc = 0x1ceeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 23));
    // 0x1ceebc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ceebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ceec0: 0xa0560072  sb          $s6, 0x72($v0)
    ctx->pc = 0x1ceec0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 22));
    // 0x1ceec4: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x1ceec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ceec8: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1ceec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1ceecc: 0xa0550088  sb          $s5, 0x88($v0)
    ctx->pc = 0x1ceeccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ceed0: 0xa0570089  sb          $s7, 0x89($v0)
    ctx->pc = 0x1ceed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 23));
    // 0x1ceed4: 0xa056008a  sb          $s6, 0x8A($v0)
    ctx->pc = 0x1ceed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 22));
    // 0x1ceed8: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1ceed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ceedc: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x1ceedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x1ceee0: 0xa05500a0  sb          $s5, 0xA0($v0)
    ctx->pc = 0x1ceee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ceee4: 0xa05700a1  sb          $s7, 0xA1($v0)
    ctx->pc = 0x1ceee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 23));
    // 0x1ceee8: 0xa05600a2  sb          $s6, 0xA2($v0)
    ctx->pc = 0x1ceee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 162), (uint8_t)GPR_U32(ctx, 22));
    // 0x1ceeec: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1ceeecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ceef0: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x1ceef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
    // 0x1ceef4: 0xa05500b8  sb          $s5, 0xB8($v0)
    ctx->pc = 0x1ceef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 21));
    // 0x1ceef8: 0xa05700b9  sb          $s7, 0xB9($v0)
    ctx->pc = 0x1ceef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 185), (uint8_t)GPR_U32(ctx, 23));
    // 0x1ceefc: 0xa05600ba  sb          $s6, 0xBA($v0)
    ctx->pc = 0x1ceefcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 186), (uint8_t)GPR_U32(ctx, 22));
    // 0x1cef00: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1cef00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cef04: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x1cef04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    // 0x1cef08: 0xa2401340  sb          $zero, 0x1340($s2)
    ctx->pc = 0x1cef08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4928), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef0c: 0xa2401341  sb          $zero, 0x1341($s2)
    ctx->pc = 0x1cef0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4929), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef10: 0xa2401342  sb          $zero, 0x1342($s2)
    ctx->pc = 0x1cef10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4930), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef14: 0xa2401343  sb          $zero, 0x1343($s2)
    ctx->pc = 0x1cef14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4931), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef18: 0xae431344  sw          $v1, 0x1344($s2)
    ctx->pc = 0x1cef18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4932), GPR_U32(ctx, 3));
    // 0x1cef1c: 0xa2401358  sb          $zero, 0x1358($s2)
    ctx->pc = 0x1cef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef20: 0xa2401359  sb          $zero, 0x1359($s2)
    ctx->pc = 0x1cef20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4953), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef24: 0xa240135a  sb          $zero, 0x135A($s2)
    ctx->pc = 0x1cef24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4954), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef28: 0xa240135b  sb          $zero, 0x135B($s2)
    ctx->pc = 0x1cef28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4955), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef2c: 0xae43135c  sw          $v1, 0x135C($s2)
    ctx->pc = 0x1cef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4956), GPR_U32(ctx, 3));
    // 0x1cef30: 0xa2401370  sb          $zero, 0x1370($s2)
    ctx->pc = 0x1cef30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4976), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef34: 0xa2401371  sb          $zero, 0x1371($s2)
    ctx->pc = 0x1cef34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4977), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef38: 0xa2401372  sb          $zero, 0x1372($s2)
    ctx->pc = 0x1cef38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4978), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef3c: 0xa2401373  sb          $zero, 0x1373($s2)
    ctx->pc = 0x1cef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4979), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef40: 0xae431374  sw          $v1, 0x1374($s2)
    ctx->pc = 0x1cef40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4980), GPR_U32(ctx, 3));
    // 0x1cef44: 0xa2401388  sb          $zero, 0x1388($s2)
    ctx->pc = 0x1cef44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5000), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef48: 0xa2401389  sb          $zero, 0x1389($s2)
    ctx->pc = 0x1cef48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5001), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef4c: 0xa240138a  sb          $zero, 0x138A($s2)
    ctx->pc = 0x1cef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5002), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef50: 0xa240138b  sb          $zero, 0x138B($s2)
    ctx->pc = 0x1cef50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5003), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cef54: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1CEF54u;
    {
        const bool branch_taken_0x1cef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF54u;
        // 0x1cef58: 0xae43138c  sw          $v1, 0x138C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5004), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef54) {
            ctx->pc = 0x1CF16Cu;
            goto label_1cf16c;
        }
    }
    ctx->pc = 0x1CEF5Cu;
label_1cef5c:
    // 0x1cef5c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1cef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1cef60: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x1cef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
    // 0x1cef64: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1cef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cef68: 0x3484aaab  ori         $a0, $a0, 0xAAAB
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
    // 0x1cef6c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1cef70: 0x24170078  addiu       $s7, $zero, 0x78
    ctx->pc = 0x1cef70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1cef74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1cef74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cef78: 0x24160020  addiu       $s6, $zero, 0x20
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cef7c: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1cef7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cef80: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1cef84: 0x0  nop
    ctx->pc = 0x1cef84u;
    // NOP
    // 0x1cef88: 0x1810  mfhi        $v1
    ctx->pc = 0x1cef88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1cef8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cef90: 0x2475007f  addiu       $s5, $v1, 0x7F
    ctx->pc = 0x1cef90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x1cef94: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEF94u;
    {
        const bool branch_taken_0x1cef94 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x1CEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEF94u;
        // 0x1cef98: 0x153843  sra         $a3, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef94) {
            ctx->pc = 0x1CEFA4u;
            goto label_1cefa4;
        }
    }
    ctx->pc = 0x1CEF9Cu;
    // 0x1cef9c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1cefa0: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x1cefa0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_1cefa4:
    // 0x1cefa4: 0xa0470070  sb          $a3, 0x70($v0)
    ctx->pc = 0x1cefa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cefa8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1cefa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1cefac: 0xa0460071  sb          $a2, 0x71($v0)
    ctx->pc = 0x1cefacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cefb0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cefb4: 0xa0450072  sb          $a1, 0x72($v0)
    ctx->pc = 0x1cefb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cefb8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1cefb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cefbc: 0xa0440073  sb          $a0, 0x73($v0)
    ctx->pc = 0x1cefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 115), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cefc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cefc4: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1cefc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1cefc8: 0x265012d0  addiu       $s0, $s2, 0x12D0
    ctx->pc = 0x1cefc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4816));
    // 0x1cefcc: 0xa0470088  sb          $a3, 0x88($v0)
    ctx->pc = 0x1cefccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cefd0: 0xa0460089  sb          $a2, 0x89($v0)
    ctx->pc = 0x1cefd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cefd4: 0xa045008a  sb          $a1, 0x8A($v0)
    ctx->pc = 0x1cefd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cefd8: 0xa044008b  sb          $a0, 0x8B($v0)
    ctx->pc = 0x1cefd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cefdc: 0xac43008c  sw          $v1, 0x8C($v0)
    ctx->pc = 0x1cefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 3));
    // 0x1cefe0: 0xa04700a0  sb          $a3, 0xA0($v0)
    ctx->pc = 0x1cefe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 160), (uint8_t)GPR_U32(ctx, 7));
    // 0x1cefe4: 0xa04600a1  sb          $a2, 0xA1($v0)
    ctx->pc = 0x1cefe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 161), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cefe8: 0xa04500a2  sb          $a1, 0xA2($v0)
    ctx->pc = 0x1cefe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 162), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cefec: 0xa04400a3  sb          $a0, 0xA3($v0)
    ctx->pc = 0x1cefecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 163), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ceff0: 0xac4300a4  sw          $v1, 0xA4($v0)
    ctx->pc = 0x1ceff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
    // 0x1ceff4: 0xa04700b8  sb          $a3, 0xB8($v0)
    ctx->pc = 0x1ceff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 184), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ceff8: 0xa04600b9  sb          $a2, 0xB9($v0)
    ctx->pc = 0x1ceff8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 185), (uint8_t)GPR_U32(ctx, 6));
    // 0x1ceffc: 0xa04500ba  sb          $a1, 0xBA($v0)
    ctx->pc = 0x1ceffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 186), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf000: 0xa04400bb  sb          $a0, 0xBB($v0)
    ctx->pc = 0x1cf000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 187), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf004: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1CF004u;
    SET_GPR_U32(ctx, 31, 0x1CF00Cu);
    ctx->pc = 0x1CF008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF004u;
    // 0x1cf008: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1CF004u, 0x1CF00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF00Cu;
label_1cf00c:
    // 0x1cf00c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf010: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf014: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cf014u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cf018: 0xa60b0078  sh          $t3, 0x78($s0)
    ctx->pc = 0x1cf018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 11));
    // 0x1cf01c: 0x240a0608  addiu       $t2, $zero, 0x608
    ctx->pc = 0x1cf01cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
    // 0x1cf020: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1cf020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1cf024: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1cf024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cf028: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1cf028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cf02c: 0x4010  mfhi        $t0
    ctx->pc = 0x1cf02cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1cf030: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1cf030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1cf034: 0x3447000a  ori         $a3, $v0, 0xA
    ctx->pc = 0x1cf034u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x1cf038: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cf038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cf03c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf040: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1cf040u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cf044: 0x250d0060  addiu       $t5, $t0, 0x60
    ctx->pc = 0x1cf044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x1cf048: 0xd4100  sll         $t0, $t5, 4
    ctx->pc = 0x1cf048u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x1cf04c: 0x25a90008  addiu       $t1, $t5, 0x8
    ctx->pc = 0x1cf04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1cf050: 0x250c0008  addiu       $t4, $t0, 0x8
    ctx->pc = 0x1cf050u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1cf054: 0xd403c  dsll32      $t0, $t5, 0
    ctx->pc = 0x1cf054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1cf058: 0xa60c007a  sh          $t4, 0x7A($s0)
    ctx->pc = 0x1cf058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 12));
    // 0x1cf05c: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1cf05cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1cf060: 0xa60a0090  sh          $t2, 0x90($s0)
    ctx->pc = 0x1cf060u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 10));
    // 0x1cf064: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x1cf064u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x1cf068: 0xa60c0092  sh          $t4, 0x92($s0)
    ctx->pc = 0x1cf068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 12));
    // 0x1cf06c: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1cf070: 0xa60b00a8  sh          $t3, 0xA8($s0)
    ctx->pc = 0x1cf070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 11));
    // 0x1cf074: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1cf074u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1cf078: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x1cf078u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1cf07c: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x1cf07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cf080: 0xa60b00aa  sh          $t3, 0xAA($s0)
    ctx->pc = 0x1cf080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 11));
    // 0x1cf084: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1cf084u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1cf088: 0xa60a00c0  sh          $t2, 0xC0($s0)
    ctx->pc = 0x1cf088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 10));
    // 0x1cf08c: 0x738bc  dsll32      $a3, $a3, 2
    ctx->pc = 0x1cf08cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 2));
    // 0x1cf090: 0xa60b00c2  sh          $t3, 0xC2($s0)
    ctx->pc = 0x1cf090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 11));
    // 0x1cf094: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1cf094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1cf098: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x1cf098u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
    // 0x1cf09c: 0xa2060070  sb          $a2, 0x70($s0)
    ctx->pc = 0x1cf09cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cf0a0: 0xa2050071  sb          $a1, 0x71($s0)
    ctx->pc = 0x1cf0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf0a4: 0xa2040072  sb          $a0, 0x72($s0)
    ctx->pc = 0x1cf0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf0a8: 0xa2030073  sb          $v1, 0x73($s0)
    ctx->pc = 0x1cf0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf0ac: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1cf0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1cf0b0: 0xa2060088  sb          $a2, 0x88($s0)
    ctx->pc = 0x1cf0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cf0b4: 0xa2050089  sb          $a1, 0x89($s0)
    ctx->pc = 0x1cf0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 137), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf0b8: 0xa204008a  sb          $a0, 0x8A($s0)
    ctx->pc = 0x1cf0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf0bc: 0xa203008b  sb          $v1, 0x8B($s0)
    ctx->pc = 0x1cf0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf0c0: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1cf0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x1cf0c4: 0xa20600a0  sb          $a2, 0xA0($s0)
    ctx->pc = 0x1cf0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cf0c8: 0xa20500a1  sb          $a1, 0xA1($s0)
    ctx->pc = 0x1cf0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 161), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf0cc: 0xa20400a2  sb          $a0, 0xA2($s0)
    ctx->pc = 0x1cf0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 162), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf0d0: 0xa20300a3  sb          $v1, 0xA3($s0)
    ctx->pc = 0x1cf0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 163), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf0d4: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x1cf0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x1cf0d8: 0xa20600b8  sb          $a2, 0xB8($s0)
    ctx->pc = 0x1cf0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 6));
    // 0x1cf0dc: 0xa20500b9  sb          $a1, 0xB9($s0)
    ctx->pc = 0x1cf0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cf0e0: 0xa20400ba  sb          $a0, 0xBA($s0)
    ctx->pc = 0x1cf0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 186), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf0e4: 0xa20300bb  sb          $v1, 0xBB($s0)
    ctx->pc = 0x1cf0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 187), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cf0e8: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x1cf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
    // 0x1cf0ec: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1cf0f0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1cf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cf0f4: 0x2463fff2  addiu       $v1, $v1, -0xE
    ctx->pc = 0x1cf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967282));
    // 0x1cf0f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf0fc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1cf0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cf100: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF100u;
    {
        const bool branch_taken_0x1cf100 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF100u;
        // 0x1cf104: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf100) {
            ctx->pc = 0x1CF110u;
            goto label_1cf110;
        }
    }
    ctx->pc = 0x1CF108u;
    // 0x1cf108: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1cf108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1cf10c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_1cf110:
    // 0x1cf110: 0x24037140  addiu       $v1, $zero, 0x7140
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28992));
    // 0x1cf114: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x1cf114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1cf118: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x1cf118u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf11c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1cf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1cf120: 0x96040080  lhu         $a0, 0x80($s0)
    ctx->pc = 0x1cf120u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1cf124: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1cf128: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF128u;
    {
        const bool branch_taken_0x1cf128 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF128u;
        // 0x1cf12c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf128) {
            ctx->pc = 0x1CF138u;
            goto label_1cf138;
        }
    }
    ctx->pc = 0x1CF130u;
    // 0x1cf130: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cf130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cf134: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1cf134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cf138:
    // 0x1cf138: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1cf138u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cf13c: 0xa60400b0  sh          $a0, 0xB0($s0)
    ctx->pc = 0x1cf13cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cf140: 0x34038568  ori         $v1, $zero, 0x8568
    ctx->pc = 0x1cf140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34152);
    // 0x1cf144: 0xa6040080  sh          $a0, 0x80($s0)
    ctx->pc = 0x1cf144u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cf148: 0x340285b0  ori         $v0, $zero, 0x85B0
    ctx->pc = 0x1cf148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34224);
    // 0x1cf14c: 0x86040080  lh          $a0, 0x80($s0)
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1cf150: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1cf150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cf154: 0xa60400c8  sh          $a0, 0xC8($s0)
    ctx->pc = 0x1cf154u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cf158: 0xa6040098  sh          $a0, 0x98($s0)
    ctx->pc = 0x1cf158u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cf15c: 0xa603009a  sh          $v1, 0x9A($s0)
    ctx->pc = 0x1cf15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf160: 0xa6030082  sh          $v1, 0x82($s0)
    ctx->pc = 0x1cf160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf164: 0xa60200ca  sh          $v0, 0xCA($s0)
    ctx->pc = 0x1cf164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cf168: 0xa60200b2  sh          $v0, 0xB2($s0)
    ctx->pc = 0x1cf168u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 178), (uint16_t)GPR_U32(ctx, 2));
label_1cf16c:
    // 0x1cf16c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cf170: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf174: 0x2409028c  addiu       $t1, $zero, 0x28C
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
    // 0x1cf178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf17c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1cf17cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cf180: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf184: 0x34099000  ori         $t1, $zero, 0x9000
    ctx->pc = 0x1cf184u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x1cf188: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf18c: 0x95438  dsll        $t2, $t1, 16
    ctx->pc = 0x1cf18cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << 16);
    // 0x1cf190: 0x24030908  addiu       $v1, $zero, 0x908
    ctx->pc = 0x1cf190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2312));
    // 0x1cf194: 0x3c096666  lui         $t1, 0x6666
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)26214 << 16));
    // 0x1cf198: 0x14b6025  or          $t4, $t2, $t3
    ctx->pc = 0x1cf198u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1cf19c: 0x24020a48  addiu       $v0, $zero, 0xA48
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2632));
    // 0x1cf1a0: 0x352b6667  ori         $t3, $t1, 0x6667
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)26215);
    ctx->pc = 0x1cf1a4u;
}
