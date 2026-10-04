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

// Function: entry_0010fc3c
// Address: 0x10fc3c - 0x10fdc4
void entry_0010fc3c_0x10fc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc3c_0x10fc3c");
#endif

    ctx->pc = 0x10fc3cu;

label_10fc3c:
    // 0x10fc3c: 0x0  nop
    ctx->pc = 0x10fc3cu;
    // NOP
label_10fc40:
    // 0x10fc40: 0x908f0013  lbu         $t7, 0x13($a0)
    ctx->pc = 0x10fc40u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
label_10fc44:
    // 0x10fc44: 0x11e3005f  beq         $t7, $v1, . + 4 + (0x5F << 2)
label_10fc48:
    if (ctx->pc == 0x10FC48u) {
        ctx->pc = 0x10FC4Cu;
        goto label_10fc4c;
    }
    ctx->pc = 0x10FC44u;
    {
        const bool branch_taken_0x10fc44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 3));
        if (branch_taken_0x10fc44) {
            ctx->pc = 0x10FDC4u;
            return;
        }
    }
    ctx->pc = 0x10FC4Cu;
label_10fc4c:
    // 0x10fc4c: 0x908f000e  lbu         $t7, 0xE($a0)
    ctx->pc = 0x10fc4cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
label_10fc50:
    // 0x10fc50: 0x1ebc818  mult        $t9, $t7, $t3
    ctx->pc = 0x10fc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_10fc54:
    // 0x10fc54: 0x32e001a  div         $zero, $t9, $t6
    ctx->pc = 0x10fc54u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10fc58:
    // 0x10fc58: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
label_10fc5c:
    // 0x10fc5c: 0x0  nop
    ctx->pc = 0x10fc5cu;
    // NOP
label_10fc60:
    // 0x10fc60: 0xc812  mflo        $t9
    ctx->pc = 0x10fc60u;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_10fc64:
    // 0x10fc64: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x10fc64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_10fc68:
    // 0x10fc68: 0x29e100fb  slti        $at, $t7, 0xFB
    ctx->pc = 0x10fc68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)251) ? 1 : 0);
label_10fc6c:
    // 0x10fc6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fc70:
    if (ctx->pc == 0x10FC70u) {
        ctx->pc = 0x10FC74u;
        goto label_10fc74;
    }
    ctx->pc = 0x10FC6Cu;
    {
        const bool branch_taken_0x10fc6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc6c) {
            ctx->pc = 0x10FC78u;
            goto label_10fc78;
        }
    }
    ctx->pc = 0x10FC74u;
label_10fc74:
    // 0x10fc74: 0x240f00fa  addiu       $t7, $zero, 0xFA
    ctx->pc = 0x10fc74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10fc78:
    // 0x10fc78: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fc7c:
    if (ctx->pc == 0x10FC7Cu) {
        ctx->pc = 0x10FC80u;
        goto label_10fc80;
    }
    ctx->pc = 0x10FC78u;
    {
        const bool branch_taken_0x10fc78 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fc78) {
            ctx->pc = 0x10FC84u;
            goto label_10fc84;
        }
    }
    ctx->pc = 0x10FC80u;
label_10fc80:
    // 0x10fc80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fc80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fc84:
    // 0x10fc84: 0xa08f000e  sb          $t7, 0xE($a0)
    ctx->pc = 0x10fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 15));
label_10fc88:
    // 0x10fc88: 0x908f000f  lbu         $t7, 0xF($a0)
    ctx->pc = 0x10fc88u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
label_10fc8c:
    // 0x10fc8c: 0x1eac818  mult        $t9, $t7, $t2
    ctx->pc = 0x10fc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_10fc90:
    // 0x10fc90: 0x32e001a  div         $zero, $t9, $t6
    ctx->pc = 0x10fc90u;
    { int32_t divisor = GPR_S32(ctx, 14);    int32_t dividend = GPR_S32(ctx, 25);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_10fc94:
    // 0x10fc94: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x10fc94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
label_10fc98:
    // 0x10fc98: 0x0  nop
    ctx->pc = 0x10fc98u;
    // NOP
label_10fc9c:
    // 0x10fc9c: 0xc812  mflo        $t9
    ctx->pc = 0x10fc9cu;
    SET_GPR_U64(ctx, 25, ctx->lo);
label_10fca0:
    // 0x10fca0: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x10fca0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_10fca4:
    // 0x10fca4: 0x29e100fb  slti        $at, $t7, 0xFB
    ctx->pc = 0x10fca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)251) ? 1 : 0);
label_10fca8:
    // 0x10fca8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fcac:
    if (ctx->pc == 0x10FCACu) {
        ctx->pc = 0x10FCB0u;
        goto label_10fcb0;
    }
    ctx->pc = 0x10FCA8u;
    {
        const bool branch_taken_0x10fca8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fca8) {
            ctx->pc = 0x10FCB4u;
            goto label_10fcb4;
        }
    }
    ctx->pc = 0x10FCB0u;
label_10fcb0:
    // 0x10fcb0: 0x240f00fa  addiu       $t7, $zero, 0xFA
    ctx->pc = 0x10fcb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_10fcb4:
    // 0x10fcb4: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fcb8:
    if (ctx->pc == 0x10FCB8u) {
        ctx->pc = 0x10FCBCu;
        goto label_10fcbc;
    }
    ctx->pc = 0x10FCB4u;
    {
        const bool branch_taken_0x10fcb4 = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fcb4) {
            ctx->pc = 0x10FCC0u;
            goto label_10fcc0;
        }
    }
    ctx->pc = 0x10FCBCu;
label_10fcbc:
    // 0x10fcbc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fcc0:
    // 0x10fcc0: 0xa08f000f  sb          $t7, 0xF($a0)
    ctx->pc = 0x10fcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 15));
label_10fcc4:
    // 0x10fcc4: 0x848f0008  lh          $t7, 0x8($a0)
    ctx->pc = 0x10fcc4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_10fcc8:
    // 0x10fcc8: 0x1e97821  addu        $t7, $t7, $t1
    ctx->pc = 0x10fcc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
label_10fccc:
    // 0x10fccc: 0x29e10191  slti        $at, $t7, 0x191
    ctx->pc = 0x10fcccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)401) ? 1 : 0);
label_10fcd0:
    // 0x10fcd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_10fcd4:
    if (ctx->pc == 0x10FCD4u) {
        ctx->pc = 0x10FCD8u;
        goto label_10fcd8;
    }
    ctx->pc = 0x10FCD0u;
    {
        const bool branch_taken_0x10fcd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fcd0) {
            ctx->pc = 0x10FCDCu;
            goto label_10fcdc;
        }
    }
    ctx->pc = 0x10FCD8u;
label_10fcd8:
    // 0x10fcd8: 0x240f0190  addiu       $t7, $zero, 0x190
    ctx->pc = 0x10fcd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_10fcdc:
    // 0x10fcdc: 0x1de00002  bgtz        $t7, . + 4 + (0x2 << 2)
label_10fce0:
    if (ctx->pc == 0x10FCE0u) {
        ctx->pc = 0x10FCE4u;
        goto label_10fce4;
    }
    ctx->pc = 0x10FCDCu;
    {
        const bool branch_taken_0x10fcdc = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x10fcdc) {
            ctx->pc = 0x10FCE8u;
            goto label_10fce8;
        }
    }
    ctx->pc = 0x10FCE4u;
label_10fce4:
    // 0x10fce4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x10fce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10fce8:
    // 0x10fce8: 0x11a00036  beqz        $t5, . + 4 + (0x36 << 2)
label_10fcec:
    if (ctx->pc == 0x10FCECu) {
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0xa48f0008  sh          $t7, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FCF0u;
        goto label_10fcf0;
    }
    ctx->pc = 0x10FCE8u;
    {
        const bool branch_taken_0x10fce8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCE8u;
        // 0x10fcec: 0xa48f0008  sh          $t7, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fce8) {
            ctx->pc = 0x10FDC4u;
            return;
        }
    }
    ctx->pc = 0x10FCF0u;
label_10fcf0:
    // 0x10fcf0: 0x90990017  lbu         $t9, 0x17($a0)
    ctx->pc = 0x10fcf0u;
    SET_GPR_ZE32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_10fcf4:
    // 0x10fcf4: 0x2f210010  sltiu       $at, $t9, 0x10
    ctx->pc = 0x10fcf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_10fcf8:
    // 0x10fcf8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
label_10fcfc:
    if (ctx->pc == 0x10FCFCu) {
        ctx->pc = 0x10FD00u;
        goto label_10fd00;
    }
    ctx->pc = 0x10FCF8u;
    {
        const bool branch_taken_0x10fcf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fcf8) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD00u;
label_10fd00:
    // 0x10fd00: 0x197880  sll         $t7, $t9, 2
    ctx->pc = 0x10fd00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
label_10fd04:
    // 0x10fd04: 0x1f87821  addu        $t7, $t7, $t8
    ctx->pc = 0x10fd04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
label_10fd08:
    // 0x10fd08: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x10fd08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_10fd0c:
    // 0x10fd0c: 0x1e00008  jr          $t7
label_10fd10:
    if (ctx->pc == 0x10FD10u) {
        ctx->pc = 0x10FD14u;
        goto label_10fd14;
    }
    ctx->pc = 0x10FD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FD0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10FD14u;
label_10fd14:
    // 0x10fd14: 0x0  nop
    ctx->pc = 0x10fd14u;
    // NOP
label_10fd18:
    // 0x10fd18: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd1c:
    // 0x10fd1c: 0xf082a  slt         $at, $zero, $t7
    ctx->pc = 0x10fd1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_10fd20:
    // 0x10fd20: 0x1780a  movz        $t7, $zero, $at
    ctx->pc = 0x10fd20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_10fd24:
    // 0x10fd24: 0x1000001e  b           . + 4 + (0x1E << 2)
label_10fd28:
    if (ctx->pc == 0x10FD28u) {
        ctx->pc = 0x10FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD24u;
        // 0x10fd28: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD2Cu;
        goto label_10fd2c;
    }
    ctx->pc = 0x10FD24u;
    {
        const bool branch_taken_0x10fd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD24u;
        // 0x10fd28: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd24) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD2Cu;
label_10fd2c:
    // 0x10fd2c: 0x0  nop
    ctx->pc = 0x10fd2cu;
    // NOP
label_10fd30:
    // 0x10fd30: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd30u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd34:
    // 0x10fd34: 0x29e10005  slti        $at, $t7, 0x5
    ctx->pc = 0x10fd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)5) ? 1 : 0);
label_10fd38:
    // 0x10fd38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd3c:
    if (ctx->pc == 0x10FD3Cu) {
        ctx->pc = 0x10FD40u;
        goto label_10fd40;
    }
    ctx->pc = 0x10FD38u;
    {
        const bool branch_taken_0x10fd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd38) {
            ctx->pc = 0x10FD48u;
            goto label_10fd48;
        }
    }
    ctx->pc = 0x10FD40u;
label_10fd40:
    // 0x10fd40: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd44:
    if (ctx->pc == 0x10FD44u) {
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD48u;
        goto label_10fd48;
    }
    ctx->pc = 0x10FD40u;
    {
        const bool branch_taken_0x10fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd40) {
            ctx->pc = 0x10FD50u;
            goto label_10fd50;
        }
    }
    ctx->pc = 0x10FD48u;
label_10fd48:
    // 0x10fd48: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x10fd48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10fd4c:
    // 0x10fd4c: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fd50:
    // 0x10fd50: 0x10000013  b           . + 4 + (0x13 << 2)
label_10fd54:
    if (ctx->pc == 0x10FD54u) {
        ctx->pc = 0x10FD58u;
        goto label_10fd58;
    }
    ctx->pc = 0x10FD50u;
    {
        const bool branch_taken_0x10fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd50) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD58u;
label_10fd58:
    // 0x10fd58: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd5c:
    // 0x10fd5c: 0x29e10009  slti        $at, $t7, 0x9
    ctx->pc = 0x10fd5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
label_10fd60:
    // 0x10fd60: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd64:
    if (ctx->pc == 0x10FD64u) {
        ctx->pc = 0x10FD68u;
        goto label_10fd68;
    }
    ctx->pc = 0x10FD60u;
    {
        const bool branch_taken_0x10fd60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd60) {
            ctx->pc = 0x10FD70u;
            goto label_10fd70;
        }
    }
    ctx->pc = 0x10FD68u;
label_10fd68:
    // 0x10fd68: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd6c:
    if (ctx->pc == 0x10FD6Cu) {
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD70u;
        goto label_10fd70;
    }
    ctx->pc = 0x10FD68u;
    {
        const bool branch_taken_0x10fd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD68u;
        // 0x10fd6c: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd68) {
            ctx->pc = 0x10FD78u;
            goto label_10fd78;
        }
    }
    ctx->pc = 0x10FD70u;
label_10fd70:
    // 0x10fd70: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x10fd70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_10fd74:
    // 0x10fd74: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fd78:
    // 0x10fd78: 0x10000009  b           . + 4 + (0x9 << 2)
label_10fd7c:
    if (ctx->pc == 0x10FD7Cu) {
        ctx->pc = 0x10FD80u;
        goto label_10fd80;
    }
    ctx->pc = 0x10FD78u;
    {
        const bool branch_taken_0x10fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fd78) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD80u;
label_10fd80:
    // 0x10fd80: 0x32c7823  subu        $t7, $t9, $t4
    ctx->pc = 0x10fd80u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_10fd84:
    // 0x10fd84: 0x29e1000d  slti        $at, $t7, 0xD
    ctx->pc = 0x10fd84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)13) ? 1 : 0);
label_10fd88:
    // 0x10fd88: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_10fd8c:
    if (ctx->pc == 0x10FD8Cu) {
        ctx->pc = 0x10FD90u;
        goto label_10fd90;
    }
    ctx->pc = 0x10FD88u;
    {
        const bool branch_taken_0x10fd88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fd88) {
            ctx->pc = 0x10FD98u;
            goto label_10fd98;
        }
    }
    ctx->pc = 0x10FD90u;
label_10fd90:
    // 0x10fd90: 0x10000003  b           . + 4 + (0x3 << 2)
label_10fd94:
    if (ctx->pc == 0x10FD94u) {
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FD98u;
        goto label_10fd98;
    }
    ctx->pc = 0x10FD90u;
    {
        const bool branch_taken_0x10fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD90u;
        // 0x10fd94: 0xa08f0017  sb          $t7, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd90) {
            ctx->pc = 0x10FDA0u;
            goto label_10fda0;
        }
    }
    ctx->pc = 0x10FD98u;
label_10fd98:
    // 0x10fd98: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x10fd98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10fd9c:
    // 0x10fd9c: 0xa08f0017  sb          $t7, 0x17($a0)
    ctx->pc = 0x10fd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 15));
label_10fda0:
    // 0x10fda0: 0x908f0018  lbu         $t7, 0x18($a0)
    ctx->pc = 0x10fda0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_10fda4:
    // 0x10fda4: 0x31f9000f  andi        $t9, $t7, 0xF
    ctx->pc = 0x10fda4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)15);
label_10fda8:
    // 0x10fda8: 0xf7903  sra         $t7, $t7, 4
    ctx->pc = 0x10fda8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 4));
label_10fdac:
    // 0x10fdac: 0x1ec7823  subu        $t7, $t7, $t4
    ctx->pc = 0x10fdacu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_10fdb0:
    // 0x10fdb0: 0xf082a  slt         $at, $zero, $t7
    ctx->pc = 0x10fdb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_10fdb4:
    // 0x10fdb4: 0x1780a  movz        $t7, $zero, $at
    ctx->pc = 0x10fdb4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
label_10fdb8:
    // 0x10fdb8: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x10fdb8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_10fdbc:
    // 0x10fdbc: 0x1f97825  or          $t7, $t7, $t9
    ctx->pc = 0x10fdbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 25));
label_10fdc0:
    // 0x10fdc0: 0xa08f0018  sb          $t7, 0x18($a0)
    ctx->pc = 0x10fdc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 15));
    ctx->pc = 0x10fdc4u;
}
