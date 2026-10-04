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

// Function: entry_0015958c
// Address: 0x15958c - 0x159830
void entry_0015958c_0x15958c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015958c_0x15958c");
#endif

    switch (ctx->pc) {
        case 0x1596a4u: goto label_1596a4;
        case 0x159708u: goto label_159708;
        default: break;
    }

    ctx->pc = 0x15958cu;

    // 0x15958c: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15958Cu;
    {
        const bool branch_taken_0x15958c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x15958c) {
            ctx->pc = 0x159598u;
            goto label_159598;
        }
    }
    ctx->pc = 0x159594u;
    // 0x159594: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x159594u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_159598:
    // 0x159598: 0x3e00008  jr          $ra
    ctx->pc = 0x159598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595A0u;
    // 0x1595a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1595a4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1595a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1595a8: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1595a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1595ac: 0x25291300  addiu       $t1, $t1, 0x1300
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4864));
    // 0x1595b0: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x1595b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1595b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1595b8: 0x10a4023  subu        $t0, $t0, $t2
    ctx->pc = 0x1595b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1595bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1595bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1595c0: 0x82a00  sll         $a1, $t0, 8
    ctx->pc = 0x1595c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1595c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1595c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1595c8: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x1595c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1595cc: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x1595ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1595d0: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1595d4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1595d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1595d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1595dc: 0xa4670232  sh          $a3, 0x232($v1)
    ctx->pc = 0x1595dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 7));
    // 0x1595e0: 0x84274af4  lh          $a3, 0x4AF4($at)
    ctx->pc = 0x1595e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x1595e4: 0x10e5002b  beq         $a3, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1595E4u;
    {
        const bool branch_taken_0x1595e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x1595e4) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x1595ECu;
    // 0x1595ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1595f0: 0x10e50028  beq         $a3, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1595F0u;
    {
        const bool branch_taken_0x1595f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1595F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F0u;
        // 0x1595f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595f0) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x1595F8u;
    // 0x1595f8: 0x1485001b  bne         $a0, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1595F8u;
    {
        const bool branch_taken_0x1595f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1595FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595F8u;
        // 0x1595fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595f8) {
            ctx->pc = 0x159668u;
            goto label_159668;
        }
    }
    ctx->pc = 0x159600u;
    // 0x159600: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x159604: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x159604u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x334AFCu));
    // 0x159608: 0x14e50006  bne         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x159608u;
    {
        const bool branch_taken_0x159608 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x159608) {
            ctx->pc = 0x159624u;
            goto label_159624;
        }
    }
    ctx->pc = 0x159610u;
    // 0x159610: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x159614: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159614u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x159618: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x159618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x15961c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15961Cu;
    {
        const bool branch_taken_0x15961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15961Cu;
        // 0x159620: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15961c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159624u;
label_159624:
    // 0x159624: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x159624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159628: 0x14e50007  bne         $a3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159628u;
    {
        const bool branch_taken_0x159628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x15962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159628u;
        // 0x15962c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159628) {
            ctx->pc = 0x159648u;
            goto label_159648;
        }
    }
    ctx->pc = 0x159630u;
    // 0x159630: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x159634: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159634u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x159638: 0x24e70064  addiu       $a3, $a3, 0x64
    ctx->pc = 0x159638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
    // 0x15963c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x159640: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x159640u;
    {
        const bool branch_taken_0x159640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159640u;
        // 0x159644: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159640) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159648u;
label_159648:
    // 0x159648: 0x14e50012  bne         $a3, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159648u;
    {
        const bool branch_taken_0x159648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x159648) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159650u;
    // 0x159650: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159650u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x159654: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159654u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x159658: 0x24e700c8  addiu       $a3, $a3, 0xC8
    ctx->pc = 0x159658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 200));
    // 0x15965c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x159660: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159660u;
        // 0x159664: 0xa4650232  sh          $a1, 0x232($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159660) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159668u;
label_159668:
    // 0x159668: 0x8c254afc  lw          $a1, 0x4AFC($at)
    ctx->pc = 0x159668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x15966c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15966Cu;
    {
        const bool branch_taken_0x15966c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15966c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159674u;
    // 0x159674: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x159678: 0x8c254af8  lw          $a1, 0x4AF8($at)
    ctx->pc = 0x159678u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334AF8u));
    // 0x15967c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15967Cu;
    {
        const bool branch_taken_0x15967c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15967c) {
            ctx->pc = 0x159694u;
            goto label_159694;
        }
    }
    ctx->pc = 0x159684u;
    // 0x159684: 0x8467023c  lh          $a3, 0x23C($v1)
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x159688: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159688u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x15968c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x159690: 0xa4650232  sh          $a1, 0x232($v1)
    ctx->pc = 0x159690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 562), (uint16_t)GPR_U32(ctx, 5));
label_159694:
    // 0x159694: 0x84650232  lh          $a1, 0x232($v1)
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
    // 0x159698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x159698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15969c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15969cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1596a0: 0xa4650230  sh          $a1, 0x230($v1)
    ctx->pc = 0x1596a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 560), (uint16_t)GPR_U32(ctx, 5));
label_1596a4:
    // 0x1596a4: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x1596a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1596a8: 0x695021  addu        $t2, $v1, $t1
    ctx->pc = 0x1596a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1596ac: 0xa0e0016a  sb          $zero, 0x16A($a3)
    ctx->pc = 0x1596acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 362), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596b0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1596b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1596b4: 0xa5400000  sh          $zero, 0x0($t2)
    ctx->pc = 0x1596b4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596b8: 0x290500ad  slti        $a1, $t0, 0xAD
    ctx->pc = 0x1596b8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)173) ? 1 : 0);
    // 0x1596bc: 0xa0e0016b  sb          $zero, 0x16B($a3)
    ctx->pc = 0x1596bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 363), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596c0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1596c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1596c4: 0xa5400002  sh          $zero, 0x2($t2)
    ctx->pc = 0x1596c4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596c8: 0xa0e0016c  sb          $zero, 0x16C($a3)
    ctx->pc = 0x1596c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 364), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596cc: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x1596ccu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596d0: 0xa0e0016d  sb          $zero, 0x16D($a3)
    ctx->pc = 0x1596d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 365), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596d4: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x1596d4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596d8: 0xa0e0016e  sb          $zero, 0x16E($a3)
    ctx->pc = 0x1596d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 366), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596dc: 0xa5400008  sh          $zero, 0x8($t2)
    ctx->pc = 0x1596dcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596e0: 0xa0e0016f  sb          $zero, 0x16F($a3)
    ctx->pc = 0x1596e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 367), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596e4: 0xa540000a  sh          $zero, 0xA($t2)
    ctx->pc = 0x1596e4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596e8: 0xa0e00170  sb          $zero, 0x170($a3)
    ctx->pc = 0x1596e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 368), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596ec: 0xa540000c  sh          $zero, 0xC($t2)
    ctx->pc = 0x1596ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x1596f0: 0xa0e00171  sb          $zero, 0x171($a3)
    ctx->pc = 0x1596f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 369), (uint8_t)GPR_U32(ctx, 0));
    // 0x1596f4: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1596F4u;
    {
        const bool branch_taken_0x1596f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1596F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1596F4u;
        // 0x1596f8: 0xa540000e  sh          $zero, 0xE($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1596f4) {
            ctx->pc = 0x1596A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1596a4;
        }
    }
    ctx->pc = 0x1596FCu;
    // 0x1596fc: 0x290100b5  slti        $at, $t0, 0xB5
    ctx->pc = 0x1596fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x159700: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x159700u;
    {
        const bool branch_taken_0x159700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159700u;
        // 0x159704: 0x84840  sll         $t1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159700) {
            ctx->pc = 0x159728u;
            goto label_159728;
        }
    }
    ctx->pc = 0x159708u;
label_159708:
    // 0x159708: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x159708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15970c: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x15970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x159710: 0xa0e0016a  sb          $zero, 0x16A($a3)
    ctx->pc = 0x159710u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 362), (uint8_t)GPR_U32(ctx, 0));
    // 0x159714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x159714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x159718: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x159718u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x15971c: 0x290500b5  slti        $a1, $t0, 0xB5
    ctx->pc = 0x15971cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x159720: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x159720u;
    {
        const bool branch_taken_0x159720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x159724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159720u;
        // 0x159724: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159720) {
            ctx->pc = 0x159708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159708;
        }
    }
    ctx->pc = 0x159728u;
label_159728:
    // 0x159728: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x159728u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x15972c: 0x34a77e40  ori         $a3, $a1, 0x7E40
    ctx->pc = 0x15972cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32320);
    // 0x159730: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x159730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x159734: 0xac67022c  sw          $a3, 0x22C($v1)
    ctx->pc = 0x159734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 7));
    // 0x159738: 0xa44023  subu        $t0, $a1, $a0
    ctx->pc = 0x159738u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15973c: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x15973cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x159740: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x159740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x159744: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x159744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
    // 0x159748: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x159748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x15974c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x15974cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x159750: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x159750u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x159754: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x159754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x159758: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x159758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15975c: 0x540c0  sll         $t0, $a1, 3
    ctx->pc = 0x15975cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x159760: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x159760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x159764: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x159764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x159768: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15976c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x15976cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x159770: 0x90e70015  lbu         $a3, 0x15($a3)
    ctx->pc = 0x159770u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 21)));
    // 0x159774: 0x10e50007  beq         $a3, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x159774u;
    {
        const bool branch_taken_0x159774 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x159774) {
            ctx->pc = 0x159794u;
            goto label_159794;
        }
    }
    ctx->pc = 0x15977Cu;
    // 0x15977c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15977cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x159780: 0x10e50004  beq         $a3, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x159780u;
    {
        const bool branch_taken_0x159780 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x159780) {
            ctx->pc = 0x159794u;
            goto label_159794;
        }
    }
    ctx->pc = 0x159788u;
    // 0x159788: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x159788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15978c: 0x14e50018  bne         $a3, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15978Cu;
    {
        const bool branch_taken_0x15978c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x15978c) {
            ctx->pc = 0x1597F0u;
            goto label_1597f0;
        }
    }
    ctx->pc = 0x159794u;
label_159794:
    // 0x159794: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x159794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x159798: 0x9025497c  lbu         $a1, 0x497C($at)
    ctx->pc = 0x159798u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x15979c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15979Cu;
    {
        const bool branch_taken_0x15979c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15979c) {
            ctx->pc = 0x1597C4u;
            goto label_1597c4;
        }
    }
    ctx->pc = 0x1597A4u;
    // 0x1597a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1597a8: 0x8c254974  lw          $a1, 0x4974($at)
    ctx->pc = 0x1597a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334974u));
    // 0x1597ac: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1597ACu;
    {
        const bool branch_taken_0x1597ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1597ac) {
            ctx->pc = 0x1597C4u;
            goto label_1597c4;
        }
    }
    ctx->pc = 0x1597B4u;
    // 0x1597b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1597b8: 0x8c25496c  lw          $a1, 0x496C($at)
    ctx->pc = 0x1597b8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33496Cu));
    // 0x1597bc: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1597BCu;
    {
        const bool branch_taken_0x1597bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1597bc) {
            ctx->pc = 0x1597F0u;
            goto label_1597f0;
        }
    }
    ctx->pc = 0x1597C4u;
label_1597c4:
    // 0x1597c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1597c8: 0x90254a0c  lbu         $a1, 0x4A0C($at)
    ctx->pc = 0x1597c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x1597cc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1597CCu;
    {
        const bool branch_taken_0x1597cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597CCu;
        // 0x1597d0: 0x3c050005  lui         $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597cc) {
            ctx->pc = 0x1597FCu;
            goto label_1597fc;
        }
    }
    ctx->pc = 0x1597D4u;
    // 0x1597d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1597d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1597d8: 0x8c254a04  lw          $a1, 0x4A04($at)
    ctx->pc = 0x1597d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x334A04u));
    // 0x1597dc: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1597DCu;
    {
        const bool branch_taken_0x1597dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1597E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597DCu;
        // 0x1597e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597dc) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597E4u;
    // 0x1597e4: 0x8c2549fc  lw          $a1, 0x49FC($at)
    ctx->pc = 0x1597e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
    // 0x1597e8: 0x14a60003  bne         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1597E8u;
    {
        const bool branch_taken_0x1597e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1597e8) {
            ctx->pc = 0x1597F8u;
            goto label_1597f8;
        }
    }
    ctx->pc = 0x1597F0u;
label_1597f0:
    // 0x1597f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1597F0u;
    {
        const bool branch_taken_0x1597f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1597F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1597F0u;
        // 0x1597f4: 0xac600228  sw          $zero, 0x228($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1597f0) {
            ctx->pc = 0x159804u;
            goto label_159804;
        }
    }
    ctx->pc = 0x1597F8u;
label_1597f8:
    // 0x1597f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1597f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_1597fc:
    // 0x1597fc: 0x34a57e40  ori         $a1, $a1, 0x7E40
    ctx->pc = 0x1597fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32320);
    // 0x159800: 0xac650228  sw          $a1, 0x228($v1)
    ctx->pc = 0x159800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 5));
label_159804:
    // 0x159804: 0xa0600222  sb          $zero, 0x222($v1)
    ctx->pc = 0x159804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 546), (uint8_t)GPR_U32(ctx, 0));
    // 0x159808: 0xa0660220  sb          $a2, 0x220($v1)
    ctx->pc = 0x159808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 6));
    // 0x15980c: 0xa064021f  sb          $a0, 0x21F($v1)
    ctx->pc = 0x15980cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 543), (uint8_t)GPR_U32(ctx, 4));
    // 0x159810: 0xa0600224  sb          $zero, 0x224($v1)
    ctx->pc = 0x159810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 548), (uint8_t)GPR_U32(ctx, 0));
    // 0x159814: 0xa0600223  sb          $zero, 0x223($v1)
    ctx->pc = 0x159814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 547), (uint8_t)GPR_U32(ctx, 0));
    // 0x159818: 0xa4600226  sh          $zero, 0x226($v1)
    ctx->pc = 0x159818u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 550), (uint16_t)GPR_U32(ctx, 0));
    // 0x15981c: 0xac600234  sw          $zero, 0x234($v1)
    ctx->pc = 0x15981cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 0));
    // 0x159820: 0x3e00008  jr          $ra
    ctx->pc = 0x159820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159820u;
        // 0x159824: 0xac600238  sw          $zero, 0x238($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159828u;
    // 0x159828: 0x0  nop
    ctx->pc = 0x159828u;
    // NOP
    // 0x15982c: 0x0  nop
    ctx->pc = 0x15982cu;
    // NOP
    ctx->pc = 0x159830u;
}
