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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part656(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        default: return;
    }

label_2bf7d0:
    // 0x2bf7d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf7d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf7d4:
    // 0x2bf7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf7d8:
    // 0x2bf7d8: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2bf7dc:
    if (ctx->pc == 0x2BF7DCu) {
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E0u;
        goto label_2bf7e0;
    }
    ctx->pc = 0x2BF7D8u;
    {
        const bool branch_taken_0x2bf7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7D8u;
        // 0x2bf7dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7d8) {
            ctx->pc = 0x2BFBDCu;
            return;
        }
    }
    ctx->pc = 0x2BF7E0u;
label_2bf7e0:
    // 0x2bf7e0: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2bf7e4:
    if (ctx->pc == 0x2BF7E4u) {
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7E8u;
        goto label_2bf7e8;
    }
    ctx->pc = 0x2BF7E0u;
    {
        const bool branch_taken_0x2bf7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2BF7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E0u;
        // 0x2bf7e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e0) {
            ctx->pc = 0x2BF7F4u;
            goto label_2bf7f4;
        }
    }
    ctx->pc = 0x2BF7E8u;
label_2bf7e8:
    // 0x2bf7e8: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2bf7ec:
    if (ctx->pc == 0x2BF7ECu) {
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F0u;
        goto label_2bf7f0;
    }
    ctx->pc = 0x2BF7E8u;
    {
        const bool branch_taken_0x2bf7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7E8u;
        // 0x2bf7ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7e8) {
            ctx->pc = 0x2BF7F0u;
            goto label_2bf7f0;
        }
    }
    ctx->pc = 0x2BF7F0u;
label_2bf7f0:
    // 0x2bf7f0: 0x10081800  beq         $zero, $t0, . + 4 + (0x1800 << 2)
label_2bf7f4:
    if (ctx->pc == 0x2BF7F4u) {
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF7F8u;
        goto label_2bf7f8;
    }
    ctx->pc = 0x2BF7F0u;
    {
        const bool branch_taken_0x2bf7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F0u;
        // 0x2bf7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f0) {
            ctx->pc = 0x2C57F4u;
            return;
        }
    }
    ctx->pc = 0x2BF7F8u;
label_2bf7f8:
    // 0x2bf7f8: 0x10091818  beq         $zero, $t1, . + 4 + (0x1818 << 2)
label_2bf7fc:
    if (ctx->pc == 0x2BF7FCu) {
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF800u;
        goto label_2bf800;
    }
    ctx->pc = 0x2BF7F8u;
    {
        const bool branch_taken_0x2bf7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2BF7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF7F8u;
        // 0x2bf7fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf7f8) {
            ctx->pc = 0x2C585Cu;
            return;
        }
    }
    ctx->pc = 0x2BF800u;
label_2bf800:
    // 0x2bf800: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf800u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf804:
    // 0x2bf804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf808:
    // 0x2bf808: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf80c:
    if (ctx->pc == 0x2BF80Cu) {
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF810u;
        goto label_2bf810;
    }
    ctx->pc = 0x2BF808u;
    {
        const bool branch_taken_0x2bf808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF808u;
        // 0x2bf80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf808) {
            ctx->pc = 0x2BF80Cu;
            goto label_2bf80c;
        }
    }
    ctx->pc = 0x2BF810u;
label_2bf810:
    // 0x2bf810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf814:
    // 0x2bf814: 0x1000703  .word       0x01000703                   # sra         $zero, $zero, 28 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf814u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 28));
label_2bf818:
    // 0x2bf818: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf818u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf81c:
    // 0x2bf81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf820:
    // 0x2bf820: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf820u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf824:
    // 0x2bf824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf828:
    // 0x2bf828: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf82c:
    // 0x2bf82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf830:
    // 0x2bf830: 0x4202002b  .word       0x4202002B                   # INVALID     $s0, $v0, 0x2B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf830u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2B at 0x2BF830 raw=0x4202002B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf834:
    // 0x2bf834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf838:
    // 0x2bf838: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf83c:
    // 0x2bf83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf840:
    // 0x2bf840: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2bf844:
    if (ctx->pc == 0x2BF844u) {
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF848u;
        goto label_2bf848;
    }
    ctx->pc = 0x2BF840u;
    {
        const bool branch_taken_0x2bf840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2BF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF840u;
        // 0x2bf844: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf840) {
            ctx->pc = 0x2D3848u;
            return;
        }
    }
    ctx->pc = 0x2BF848u;
label_2bf848:
    // 0x2bf848: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf848u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf84c:
    // 0x2bf84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf850:
    // 0x2bf850: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2bf854:
    if (ctx->pc == 0x2BF854u) {
        ctx->pc = 0x2BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF850u;
        // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF858u;
        goto label_2bf858;
    }
    ctx->pc = 0x2BF850u;
    {
        const bool branch_taken_0x2bf850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2bf850) {
            ctx->pc = 0x2BF854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF850u;
            // 0x2bf854: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1840u;
            return;
        }
    }
    ctx->pc = 0x2BF858u;
label_2bf858:
    // 0x2bf858: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf85c:
    // 0x2bf85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf860:
    // 0x2bf860: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf864:
    if (ctx->pc == 0x2BF864u) {
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF868u;
        goto label_2bf868;
    }
    ctx->pc = 0x2BF860u;
    {
        const bool branch_taken_0x2bf860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF860u;
        // 0x2bf864: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf860) {
            ctx->pc = 0x2C58C4u;
            return;
        }
    }
    ctx->pc = 0x2BF868u;
label_2bf868:
    // 0x2bf868: 0x4202001b  .word       0x4202001B                   # INVALID     $s0, $v0, 0x1B # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf868u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1B at 0x2BF868 raw=0x4202001B"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf86c:
    // 0x2bf86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf870:
    // 0x2bf870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf874:
    // 0x2bf874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf878:
    // 0x2bf878: 0x500b0017  beql        $zero, $t3, . + 4 + (0x17 << 2)
label_2bf87c:
    if (ctx->pc == 0x2BF87Cu) {
        ctx->pc = 0x2BF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF878u;
        // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF880u;
        goto label_2bf880;
    }
    ctx->pc = 0x2BF878u;
    {
        const bool branch_taken_0x2bf878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2bf878) {
            ctx->pc = 0x2BF87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF878u;
            // 0x2bf87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BF8D8u;
            goto label_2bf8d8;
        }
    }
    ctx->pc = 0x2BF880u;
label_2bf880:
    // 0x2bf880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf884:
    // 0x2bf884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf888:
    // 0x2bf888: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2bf888u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2bf88c:
    // 0x2bf88c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf88cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf890:
    // 0x2bf890: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2bf894:
    if (ctx->pc == 0x2BF894u) {
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF898u;
        goto label_2bf898;
    }
    ctx->pc = 0x2BF890u;
    {
        const bool branch_taken_0x2bf890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF890u;
        // 0x2bf894: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf890) {
            ctx->pc = 0x2BF894u;
            goto label_2bf894;
        }
    }
    ctx->pc = 0x2BF898u;
label_2bf898:
    // 0x2bf898: 0x10010066  beq         $zero, $at, . + 4 + (0x66 << 2)
label_2bf89c:
    if (ctx->pc == 0x2BF89Cu) {
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8A0u;
        goto label_2bf8a0;
    }
    ctx->pc = 0x2BF898u;
    {
        const bool branch_taken_0x2bf898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF898u;
        // 0x2bf89c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf898) {
            ctx->pc = 0x2BFA34u;
            goto label_2bfa34;
        }
    }
    ctx->pc = 0x2BF8A0u;
label_2bf8a0:
    // 0x2bf8a0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8A0 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf8a4:
    // 0x2bf8a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8a8:
    // 0x2bf8a8: 0x52030811  beql        $s0, $v1, . + 4 + (0x811 << 2)
label_2bf8ac:
    if (ctx->pc == 0x2BF8ACu) {
        ctx->pc = 0x2BF8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8A8u;
        // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B0u;
        goto label_2bf8b0;
    }
    ctx->pc = 0x2BF8A8u;
    {
        const bool branch_taken_0x2bf8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf8a8) {
            ctx->pc = 0x2BF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8A8u;
            // 0x2bf8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C18F0u;
            return;
        }
    }
    ctx->pc = 0x2BF8B0u;
label_2bf8b0:
    // 0x2bf8b0: 0x10021830  beq         $zero, $v0, . + 4 + (0x1830 << 2)
label_2bf8b4:
    if (ctx->pc == 0x2BF8B4u) {
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8B8u;
        goto label_2bf8b8;
    }
    ctx->pc = 0x2BF8B0u;
    {
        const bool branch_taken_0x2bf8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B0u;
        // 0x2bf8b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b0) {
            ctx->pc = 0x2C5974u;
            return;
        }
    }
    ctx->pc = 0x2BF8B8u;
label_2bf8b8:
    // 0x2bf8b8: 0x12015007  beq         $s0, $at, . + 4 + (0x5007 << 2)
label_2bf8bc:
    if (ctx->pc == 0x2BF8BCu) {
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8C0u;
        goto label_2bf8c0;
    }
    ctx->pc = 0x2BF8B8u;
    {
        const bool branch_taken_0x2bf8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x2BF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8B8u;
        // 0x2bf8bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8b8) {
            ctx->pc = 0x2D38D8u;
            return;
        }
    }
    ctx->pc = 0x2BF8C0u;
label_2bf8c0:
    // 0x2bf8c0: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8c0u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf8c4:
    // 0x2bf8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8c8:
    // 0x2bf8c8: 0x5a00080d  blezl       $s0, . + 4 + (0x80D << 2)
label_2bf8cc:
    if (ctx->pc == 0x2BF8CCu) {
        ctx->pc = 0x2BF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8C8u;
        // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8D0u;
        goto label_2bf8d0;
    }
    ctx->pc = 0x2BF8C8u;
    {
        const bool branch_taken_0x2bf8c8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2bf8c8) {
            ctx->pc = 0x2BF8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF8C8u;
            // 0x2bf8cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1900u;
            return;
        }
    }
    ctx->pc = 0x2BF8D0u;
label_2bf8d0:
    // 0x2bf8d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8d4:
    // 0x2bf8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8d8:
    // 0x2bf8d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf8d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf8dc:
    // 0x2bf8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e0:
    // 0x2bf8e0: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf8e4:
    // 0x2bf8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8e8:
    // 0x2bf8e8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf8e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2BF8E8 raw=0x01FA0005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf8ec:
    // 0x2bf8ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf8ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf8f0:
    // 0x2bf8f0: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
label_2bf8f4:
    if (ctx->pc == 0x2BF8F4u) {
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF8F8u;
        goto label_2bf8f8;
    }
    ctx->pc = 0x2BF8F0u;
    {
        const bool branch_taken_0x2bf8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F0u;
        // 0x2bf8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f0) {
            ctx->pc = 0x2C38F8u;
            return;
        }
    }
    ctx->pc = 0x2BF8F8u;
label_2bf8f8:
    // 0x2bf8f8: 0x10081818  beq         $zero, $t0, . + 4 + (0x1818 << 2)
label_2bf8fc:
    if (ctx->pc == 0x2BF8FCu) {
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF900u;
        goto label_2bf900;
    }
    ctx->pc = 0x2BF8F8u;
    {
        const bool branch_taken_0x2bf8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF8F8u;
        // 0x2bf8fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8f8) {
            ctx->pc = 0x2C595Cu;
            return;
        }
    }
    ctx->pc = 0x2BF900u;
label_2bf900:
    // 0x2bf900: 0x11eb57ff  beq         $t7, $t3, . + 4 + (0x57FF << 2)
label_2bf904:
    if (ctx->pc == 0x2BF904u) {
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF908u;
        goto label_2bf908;
    }
    ctx->pc = 0x2BF900u;
    {
        const bool branch_taken_0x2bf900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF900u;
        // 0x2bf904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf900) {
            ctx->pc = 0x2D5900u;
            return;
        }
    }
    ctx->pc = 0x2BF908u;
label_2bf908:
    // 0x2bf908: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bf90c:
    if (ctx->pc == 0x2BF90Cu) {
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF910u;
        goto label_2bf910;
    }
    ctx->pc = 0x2BF908u;
    {
        const bool branch_taken_0x2bf908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF908u;
        // 0x2bf90c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf908) {
            ctx->pc = 0x2D5910u;
            return;
        }
    }
    ctx->pc = 0x2BF910u;
label_2bf910:
    // 0x2bf910: 0x3e2d000  .word       0x03E2D000                   # sll         $k0, $v0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf910u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2bf914:
    // 0x2bf914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf918:
    // 0x2bf918: 0xb0b1000  j           func_C2C4000
label_2bf91c:
    if (ctx->pc == 0x2BF91Cu) {
        ctx->pc = 0x2BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF918u;
        // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF920u;
        goto label_2bf920;
    }
    ctx->pc = 0x2BF918u;
    ctx->pc = 0x2BF91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF918u;
    // 0x2bf91c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC2C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC2C4000u, 0x2BF918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2BF920u;
label_2bf920:
    // 0x2bf920: 0x42010061  .word       0x42010061                   # INVALID     $s0, $at, 0x61 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bf920u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x21 at 0x2BF920 raw=0x42010061"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf924:
    // 0x2bf924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf928:
    // 0x2bf928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf92c:
    // 0x2bf92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf930:
    // 0x2bf930: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2bf934:
    // 0x2bf934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf938:
    // 0x2bf938: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf938u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF938 raw=0x48007800");
 /* MITIGATED */
label_2bf93c:
    // 0x2bf93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf940:
    // 0x2bf940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf944:
    // 0x2bf944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf948:
    // 0x2bf948: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf948u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2bf94c:
    // 0x2bf94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf950:
    // 0x2bf950: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2BF950 raw=0x01F64001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bf954:
    // 0x2bf954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf958:
    // 0x2bf958: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2bf95c:
    // 0x2bf95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf960:
    // 0x2bf960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf964:
    // 0x2bf964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf968:
    // 0x2bf968: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2bf96c:
    // 0x2bf96c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf96cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf970:
    // 0x2bf970: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2bf970u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2bf974:
    // 0x2bf974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf978:
    // 0x2bf978: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2bf978u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2bf97c:
    // 0x2bf97c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf97cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf980:
    // 0x2bf980: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bf980u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BF980 raw=0x48001000");
 /* MITIGATED */
label_2bf984:
    // 0x2bf984: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf984u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf988:
    // 0x2bf988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf98c:
    // 0x2bf98c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf98cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf990:
    // 0x2bf990: 0x81f5437c  lb          $s5, 0x437C($t7)
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf994:
    // 0x2bf994: 0x1f5fc68  .word       0x01F5FC68                   # mfsa        $ra # 01F50440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf994u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf998:
    // 0x2bf998: 0x81f6437c  lb          $s6, 0x437C($t7)
    ctx->pc = 0x2bf998u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf99c:
    // 0x2bf99c: 0x1f6fca8  .word       0x01F6FCA8                   # mfsa        $ra # 01F60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf99cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a0:
    // 0x2bf9a0: 0x81f7437c  lb          $s7, 0x437C($t7)
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2bf9a4:
    // 0x2bf9a4: 0x1f7fce8  .word       0x01F7FCE8                   # mfsa        $ra # 01F704C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2bf9a4u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2bf9a8:
    // 0x2bf9a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ac:
    // 0x2bf9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9b0:
    // 0x2bf9b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9b4:
    // 0x2bf9b4: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2bf9b8:
    // 0x2bf9b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9bc:
    // 0x2bf9bc: 0x1d5a9ff  .word       0x01D5A9FF                   # dsra32      $s5, $s5, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2bf9bcu;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 7));
label_2bf9c0:
    // 0x2bf9c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9c4:
    // 0x2bf9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9c8:
    // 0x2bf9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9cc:
    // 0x2bf9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d0:
    // 0x2bf9d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9d4:
    // 0x2bf9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9d8:
    // 0x2bf9d8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2bf9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2bf9dc:
    // 0x2bf9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e0:
    // 0x2bf9e0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2bf9e0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2bf9e4:
    // 0x2bf9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9e8:
    // 0x2bf9e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9ec:
    // 0x2bf9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bf9f0:
    // 0x2bf9f0: 0x5004000f  beql        $zero, $a0, . + 4 + (0xF << 2)
label_2bf9f4:
    if (ctx->pc == 0x2BF9F4u) {
        ctx->pc = 0x2BF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF9F0u;
        // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BF9F8u;
        goto label_2bf9f8;
    }
    ctx->pc = 0x2BF9F0u;
    {
        const bool branch_taken_0x2bf9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bf9f0) {
            ctx->pc = 0x2BF9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BF9F0u;
            // 0x2bf9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA30u;
            goto label_2bfa30;
        }
    }
    ctx->pc = 0x2BF9F8u;
label_2bf9f8:
    // 0x2bf9f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bf9fc:
    // 0x2bf9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa00:
    // 0x2bfa00: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa04:
    // 0x2bfa04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa08:
    // 0x2bfa08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa0c:
    // 0x2bfa0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa10:
    // 0x2bfa10: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2bfa14:
    if (ctx->pc == 0x2BFA14u) {
        ctx->pc = 0x2BFA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA10u;
        // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA18u;
        goto label_2bfa18;
    }
    ctx->pc = 0x2BFA10u;
    {
        const bool branch_taken_0x2bfa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa10) {
            ctx->pc = 0x2BFA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA10u;
            // 0x2bfa14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA20u;
            goto label_2bfa20;
        }
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa1c:
    // 0x2bfa1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa20:
    // 0x2bfa20: 0x4000001c  .word       0x4000001C                   # mfc0        $zero, Index # 0000001C <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa24:
    // 0x2bfa24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa28:
    // 0x2bfa28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa2c:
    // 0x2bfa2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa30:
    // 0x2bfa30: 0x4201001c  .word       0x4201001C                   # INVALID     $s0, $at, 0x1C # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa30u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1C at 0x2BFA30 raw=0x4201001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bfa34:
    // 0x2bfa34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa38:
    // 0x2bfa38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa3c:
    // 0x2bfa3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa40:
    // 0x2bfa40: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bfa40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bfa44:
    // 0x2bfa44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa48:
    // 0x2bfa48: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bfa48u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bfa4c:
    // 0x2bfa4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa50:
    // 0x2bfa50: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bfa50u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bfa54:
    // 0x2bfa54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa58:
    // 0x2bfa58: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfa5c:
    if (ctx->pc == 0x2BFA5Cu) {
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA60u;
        goto label_2bfa60;
    }
    ctx->pc = 0x2BFA58u;
    {
        const bool branch_taken_0x2bfa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA58u;
        // 0x2bfa5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfa58) {
            ctx->pc = 0x2D5A60u;
            return;
        }
    }
    ctx->pc = 0x2BFA60u;
label_2bfa60:
    // 0x2bfa60: 0x40000014  .word       0x40000014                   # mfc0        $zero, Index # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfa60u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfa64:
    // 0x2bfa64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa68:
    // 0x2bfa68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa6c:
    // 0x2bfa6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa70:
    // 0x2bfa70: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2bfa70u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2bfa74:
    // 0x2bfa74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa78:
    // 0x2bfa78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa7c:
    // 0x2bfa7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa80:
    // 0x2bfa80: 0x5004000c  beql        $zero, $a0, . + 4 + (0xC << 2)
label_2bfa84:
    if (ctx->pc == 0x2BFA84u) {
        ctx->pc = 0x2BFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA80u;
        // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFA88u;
        goto label_2bfa88;
    }
    ctx->pc = 0x2BFA80u;
    {
        const bool branch_taken_0x2bfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfa80) {
            ctx->pc = 0x2BFA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFA80u;
            // 0x2bfa84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFAB4u;
            goto label_2bfab4;
        }
    }
    ctx->pc = 0x2BFA88u;
label_2bfa88:
    // 0x2bfa88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa8c:
    // 0x2bfa8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa90:
    // 0x2bfa90: 0x42010010  .word       0x42010010                   # rfe # 00010000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2bfa90u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x10 at 0x2BFA90 raw=0x42010010"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2bfa94:
    // 0x2bfa94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfa98:
    // 0x2bfa98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfa98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfa9c:
    // 0x2bfa9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfa9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa0:
    // 0x2bfaa0: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bfaa0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bfaa4:
    // 0x2bfaa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaa8:
    // 0x2bfaa8: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bfaa8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bfaac:
    // 0x2bfaac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfab0:
    // 0x2bfab0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bfab4:
    // 0x2bfab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfab8:
    // 0x2bfab8: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2bfabc:
    // 0x2bfabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfac0:
    // 0x2bfac0: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2bfac4:
    // 0x2bfac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfac8:
    // 0x2bfac8: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2bfac8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2bfacc:
    // 0x2bfacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfad0:
    // 0x2bfad0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2bfad4:
    if (ctx->pc == 0x2BFAD4u) {
        ctx->pc = 0x2BFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD0u;
        // 0x2bfad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFAD8u;
        goto label_2bfad8;
    }
    ctx->pc = 0x2BFAD0u;
    {
        const bool branch_taken_0x2bfad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFAD0u;
        // 0x2bfad4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfad0) {
            ctx->pc = 0x2D5ADCu;
            return;
        }
    }
    ctx->pc = 0x2BFAD8u;
label_2bfad8:
    // 0x2bfad8: 0x40000005  .word       0x40000005                   # mfc0        $zero, Index # 00000005 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2bfad8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2bfadc:
    // 0x2bfadc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfadcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfae0:
    // 0x2bfae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfae4:
    // 0x2bfae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfae8:
    // 0x2bfae8: 0x81e98b7d  lb          $t1, -0x7483($t7)
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2bfaec:
    // 0x2bfaec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaf0:
    // 0x2bfaf0: 0x81e9937d  lb          $t1, -0x6C83($t7)
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2bfaf4:
    // 0x2bfaf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfaf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfaf8:
    // 0x2bfaf8: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2bfafc:
    // 0x2bfafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb00:
    // 0x2bfb00: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2bfb04:
    if (ctx->pc == 0x2BFB04u) {
        ctx->pc = 0x2BFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB00u;
        // 0x2bfb04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BFB08u;
        goto label_2bfb08;
    }
    ctx->pc = 0x2BFB00u;
    {
        const bool branch_taken_0x2bfb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2BFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB00u;
        // 0x2bfb04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfb00) {
            ctx->pc = 0x2D5B08u;
            return;
        }
    }
    ctx->pc = 0x2BFB08u;
label_2bfb08:
    // 0x2bfb08: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2bfb08u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2BFB08 raw=0x48001000");
 /* MITIGATED */
label_2bfb0c:
    // 0x2bfb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb10:
    // 0x2bfb10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2bfb14:
    // 0x2bfb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2bfb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2bfb18:
    // 0x2bfb18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2bfb18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    ctx->pc = 0x2bfb1cu;
}
