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

// Function: entry_001533d0
// Address: 0x1533d0 - 0x1535b0
void entry_001533d0_0x1533d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001533d0_0x1533d0");
#endif

    switch (ctx->pc) {
        case 0x153468u: goto label_153468;
        case 0x153508u: goto label_153508;
        default: break;
    }

    ctx->pc = 0x1533d0u;

    // 0x1533d0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1533d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1533d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1533d8: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1533d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1533dc: 0x105001a  div         $zero, $t0, $a1
    ctx->pc = 0x1533dcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1533e0: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1533e4: 0x0  nop
    ctx->pc = 0x1533e4u;
    // NOP
    // 0x1533e8: 0x3010  mfhi        $a2
    ctx->pc = 0x1533e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1533ec: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1533ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x1533f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1533f4: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x1533f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1533f8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1533fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153400: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153404: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153408: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15340c: 0x2810  mfhi        $a1
    ctx->pc = 0x15340cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x153410: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x153414: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x153418: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x15341c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x153420: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x153424: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x153424u;
    {
        const bool branch_taken_0x153424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x153428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153424u;
        // 0x153428: 0x24a70180  addiu       $a3, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153424) {
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x15342Cu;
    // 0x15342c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15342Cu;
    {
        const bool branch_taken_0x15342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15342c) {
            ctx->pc = 0x15343Cu;
            goto label_15343c;
        }
    }
    ctx->pc = 0x153434u;
    // 0x153434: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x153434u;
    {
        const bool branch_taken_0x153434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153434) {
            ctx->pc = 0x153704u;
            return;
        }
    }
    ctx->pc = 0x15343Cu;
label_15343c:
    // 0x15343c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x153440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153444: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x153448: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x153448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15344c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x153450: 0x2408005e  addiu       $t0, $zero, 0x5E
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x153454: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153458: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15345c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15345cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153460: 0xc054dc8  jal         func_153720
    ctx->pc = 0x153460u;
    SET_GPR_U32(ctx, 31, 0x153468u);
    ctx->pc = 0x153464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153460u;
    // 0x153464: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x153460u, 0x153468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x153470u;
label_153470:
    // 0x153470: 0x24c2005e  addiu       $v0, $a2, 0x5E
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 94));
    // 0x153474: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153478: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15347c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15347Cu;
    {
        const bool branch_taken_0x15347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15347Cu;
        // 0x153480: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15347c) {
            ctx->pc = 0x15348Cu;
            goto label_15348c;
        }
    }
    ctx->pc = 0x153484u;
    // 0x153484: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x153488: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15348c:
    // 0x15348c: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x15348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x153490: 0x28420280  slti        $v0, $v0, 0x280
    ctx->pc = 0x153490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x153494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153494u;
    {
        const bool branch_taken_0x153494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153494u;
        // 0x153498: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153494) {
            ctx->pc = 0x1534A8u;
            goto label_1534a8;
        }
    }
    ctx->pc = 0x15349Cu;
    // 0x15349c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x15349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1534a0: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1534a4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1534a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1534a8:
    // 0x1534a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1534a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1534ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1534acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1534b0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1534b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x1534b4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1534b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1534b8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1534b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1534bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1534c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1534c4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1534c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1534c8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1534c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1534cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1534CCu;
    {
        const bool branch_taken_0x1534cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534CCu;
        // 0x1534d0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534cc) {
            ctx->pc = 0x1534DCu;
            goto label_1534dc;
        }
    }
    ctx->pc = 0x1534D4u;
    // 0x1534d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D4u;
        // 0x1534d8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1534E4u;
            goto label_1534e4;
        }
    }
    ctx->pc = 0x1534DCu;
label_1534dc:
    // 0x1534dc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1534dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1534e0: 0x0  nop
    ctx->pc = 0x1534e0u;
    // NOP
label_1534e4:
    // 0x1534e4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1534e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1534ec: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1534ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f4: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1534f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1534fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153500: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153500u;
    SET_GPR_U32(ctx, 31, 0x153508u);
    ctx->pc = 0x153504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153500u;
    // 0x153504: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153500u, 0x153508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153508u;
label_153508:
    // 0x153508: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x15350c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153510: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153514: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x153518: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x15351c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153520: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153524: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x153528: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15352c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15352cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153530: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153534: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x153538: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x15353c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153540: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153544: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153548: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x15354c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x153550: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x153554: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153558: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x15355c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153560: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153564: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x153568: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153570: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x153574: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153578: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x15357c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15357cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153580: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x153580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x153584: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x153584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x153588: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x153588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x15358c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x15358cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153590: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x153590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x153594: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153598: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x153598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x15359c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1535a0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1535a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1535a4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1535a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1535a8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x1535B0u;
}
