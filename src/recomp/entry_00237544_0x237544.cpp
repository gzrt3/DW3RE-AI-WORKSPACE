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

// Function: entry_00237544
// Address: 0x237544 - 0x238738
void entry_00237544_0x237544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00237544_0x237544");
#endif

    switch (ctx->pc) {
        case 0x237600u: goto label_237600;
        case 0x237648u: goto label_237648;
        case 0x2376fcu: goto label_2376fc;
        case 0x237718u: goto label_237718;
        case 0x23775cu: goto label_23775c;
        case 0x237770u: goto label_237770;
        case 0x237784u: goto label_237784;
        case 0x237790u: goto label_237790;
        case 0x2377a4u: goto label_2377a4;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377c4u: goto label_2377c4;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377e4u: goto label_2377e4;
        case 0x2377f4u: goto label_2377f4;
        case 0x237828u: goto label_237828;
        case 0x237968u: goto label_237968;
        case 0x237994u: goto label_237994;
        case 0x237a04u: goto label_237a04;
        case 0x237a18u: goto label_237a18;
        case 0x237a34u: goto label_237a34;
        case 0x237a54u: goto label_237a54;
        case 0x237a88u: goto label_237a88;
        case 0x237a98u: goto label_237a98;
        case 0x237ab4u: goto label_237ab4;
        case 0x237ae4u: goto label_237ae4;
        case 0x237b1cu: goto label_237b1c;
        case 0x237b28u: goto label_237b28;
        case 0x237b38u: goto label_237b38;
        case 0x237b4cu: goto label_237b4c;
        case 0x237b94u: goto label_237b94;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bc0u: goto label_237bc0;
        case 0x237bd0u: goto label_237bd0;
        case 0x237c08u: goto label_237c08;
        case 0x237c18u: goto label_237c18;
        case 0x237c20u: goto label_237c20;
        case 0x237c34u: goto label_237c34;
        case 0x237c48u: goto label_237c48;
        case 0x237c58u: goto label_237c58;
        case 0x237c64u: goto label_237c64;
        case 0x237c74u: goto label_237c74;
        case 0x237c90u: goto label_237c90;
        case 0x237cacu: goto label_237cac;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d18u: goto label_237d18;
        case 0x237d28u: goto label_237d28;
        case 0x237d54u: goto label_237d54;
        case 0x237d64u: goto label_237d64;
        case 0x237d80u: goto label_237d80;
        case 0x237d90u: goto label_237d90;
        case 0x237da0u: goto label_237da0;
        case 0x237ddcu: goto label_237ddc;
        case 0x237e54u: goto label_237e54;
        case 0x237e64u: goto label_237e64;
        case 0x237e78u: goto label_237e78;
        case 0x237e88u: goto label_237e88;
        case 0x237e94u: goto label_237e94;
        case 0x237ea0u: goto label_237ea0;
        case 0x237eb0u: goto label_237eb0;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237f10u: goto label_237f10;
        case 0x237f30u: goto label_237f30;
        case 0x237f80u: goto label_237f80;
        case 0x237f94u: goto label_237f94;
        case 0x238054u: goto label_238054;
        case 0x2380c8u: goto label_2380c8;
        case 0x2380dcu: goto label_2380dc;
        case 0x2380ecu: goto label_2380ec;
        case 0x238110u: goto label_238110;
        case 0x238124u: goto label_238124;
        case 0x238134u: goto label_238134;
        case 0x238150u: goto label_238150;
        case 0x2381bcu: goto label_2381bc;
        case 0x238254u: goto label_238254;
        case 0x238274u: goto label_238274;
        case 0x23828cu: goto label_23828c;
        case 0x2382a8u: goto label_2382a8;
        case 0x2382ccu: goto label_2382cc;
        case 0x238310u: goto label_238310;
        case 0x238320u: goto label_238320;
        case 0x238370u: goto label_238370;
        case 0x23838cu: goto label_23838c;
        case 0x2383acu: goto label_2383ac;
        case 0x2383bcu: goto label_2383bc;
        case 0x2383d8u: goto label_2383d8;
        case 0x2383ecu: goto label_2383ec;
        case 0x238414u: goto label_238414;
        case 0x238430u: goto label_238430;
        case 0x238448u: goto label_238448;
        case 0x23845cu: goto label_23845c;
        case 0x23846cu: goto label_23846c;
        case 0x238480u: goto label_238480;
        case 0x23849cu: goto label_23849c;
        case 0x2384acu: goto label_2384ac;
        case 0x238510u: goto label_238510;
        case 0x238520u: goto label_238520;
        case 0x2385a0u: goto label_2385a0;
        case 0x2385b4u: goto label_2385b4;
        case 0x2385c8u: goto label_2385c8;
        case 0x2385f0u: goto label_2385f0;
        case 0x238600u: goto label_238600;
        case 0x238630u: goto label_238630;
        case 0x23867cu: goto label_23867c;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386e4u: goto label_2386e4;
        default: break;
    }

    ctx->pc = 0x237544u;

    // 0x237544: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x237544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x237548: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x237548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23754c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23754cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x237550: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x237550u;
    {
        const bool branch_taken_0x237550 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x237550) {
            ctx->pc = 0x237554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237550u;
            // 0x237554: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237584u;
            goto label_237584;
        }
    }
    ctx->pc = 0x237558u;
    // 0x237558: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x23755c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x237560: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x237560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x237564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x237568: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x237568u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x23756c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x237570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237574: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x237578: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x237578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x23757c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x23757cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x237580: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x237580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_237584:
    // 0x237584: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x237584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x237588: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x237588u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x23758c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x23758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x237590: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x237590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x237594: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x237594u;
    {
        const bool branch_taken_0x237594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237594u;
        // 0x237598: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237594) {
            ctx->pc = 0x2375F0u;
            goto label_2375f0;
        }
    }
    ctx->pc = 0x23759Cu;
    // 0x23759c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2375a0: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2375a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2375a4: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x2375a8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2375a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2375ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2375ACu;
    {
        const bool branch_taken_0x2375ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375ACu;
        // 0x2375b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375ac) {
            ctx->pc = 0x2375C0u;
            goto label_2375c0;
        }
    }
    ctx->pc = 0x2375B4u;
    // 0x2375b4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x2375b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2375B8u;
    {
        const bool branch_taken_0x2375b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375B8u;
        // 0x2375bc: 0x2455e300  addiu       $s5, $v0, -0x1D00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375b8) {
            ctx->pc = 0x2375C8u;
            goto label_2375c8;
        }
    }
    ctx->pc = 0x2375C0u;
label_2375c0:
    // 0x2375c0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x2375c4: 0x2455e310  addiu       $s5, $v0, -0x1CF0
    ctx->pc = 0x2375c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959888));
label_2375c8:
    // 0x2375c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2375cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2375CCu;
    {
        const bool branch_taken_0x2375cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375CCu;
        // 0x2375d0: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375cc) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x2375D4u;
    // 0x2375d4: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x2375d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x2375d8: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x2375d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x2375dc: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2375dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2375e0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2375e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2375E4u;
    {
        const bool branch_taken_0x2375e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375E4u;
        // 0x2375e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375e4) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x2375ECu;
    // 0x2375ec: 0x0  nop
    ctx->pc = 0x2375ecu;
    // NOP
label_2375f0:
    // 0x2375f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2375f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375f8: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x2375F8u;
    SET_GPR_U32(ctx, 31, 0x237600u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x2375F8u, 0x237600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237600u;
label_237600:
    // 0x237600: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x237600u;
    {
        const bool branch_taken_0x237600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237600u;
        // 0x237604: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237600) {
            ctx->pc = 0x237638u;
            goto label_237638;
        }
    }
    ctx->pc = 0x237608u;
    // 0x237608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237610: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x237614: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x237614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x237618: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x237618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x23761c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23761Cu;
    {
        const bool branch_taken_0x23761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23761Cu;
        // 0x237620: 0x2475e318  addiu       $s5, $v1, -0x1CE8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23761c) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x237624u;
    // 0x237624: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x237624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x237628: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x237628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x23762c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_237630:
    // 0x237630: 0x10000434  b           . + 4 + (0x434 << 2)
    ctx->pc = 0x237630u;
    {
        const bool branch_taken_0x237630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237630u;
        // 0x237634: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237630) {
            ctx->pc = 0x238704u;
            goto label_238704;
        }
    }
    ctx->pc = 0x237638u;
label_237638:
    // 0x237638: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23763c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23763cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237640: 0xc08ed64  jal         func_23B590
    ctx->pc = 0x237640u;
    SET_GPR_U32(ctx, 31, 0x237648u);
    ctx->pc = 0x237644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237640u;
    // 0x237644: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B590u, 0x237640u, 0x237648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237648u;
label_237648:
    // 0x237648: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x237648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x23764c: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x23764cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x237650: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x237650u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x237654: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x237654u;
    {
        const bool branch_taken_0x237654 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237654) {
            ctx->pc = 0x2376A8u;
            goto label_2376a8;
        }
    }
    ctx->pc = 0x23765Cu;
    // 0x23765c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x23765cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237660: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x237660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x237664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x237668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x237668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23766c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23766cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x237670: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x237670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x237674: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x237674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x237678: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x237678u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x23767c: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x23767cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x237680: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x237680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x237684: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x237684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x237688: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x237688u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
    // 0x23768c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x237690: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
    // 0x237694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x237698: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x237698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x23769c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x23769cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x2376a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2376A0u;
    {
        const bool branch_taken_0x2376a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376A0u;
        // 0x2376a4: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376a0) {
            ctx->pc = 0x237748u;
            goto label_237748;
        }
    }
    ctx->pc = 0x2376A8u;
label_2376a8:
    // 0x2376a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2376a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2376ac: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2376acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2376b0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2376b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2376b4: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x2376b8: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x2376b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2376bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2376BCu;
    {
        const bool branch_taken_0x2376bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2376C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376BCu;
        // 0x2376c0: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376bc) {
            ctx->pc = 0x2376E8u;
            goto label_2376e8;
        }
    }
    ctx->pc = 0x2376C4u;
    // 0x2376c4: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x2376c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x2376c8: 0x131823  negu        $v1, $s3
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x2376cc: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2376ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2376d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2376d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2376d4: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x2376d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x2376d8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2376dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2376DCu;
    {
        const bool branch_taken_0x2376dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376DCu;
        // 0x2376e0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376dc) {
            ctx->pc = 0x2376F4u;
            goto label_2376f4;
        }
    }
    ctx->pc = 0x2376E4u;
    // 0x2376e4: 0x0  nop
    ctx->pc = 0x2376e4u;
    // NOP
label_2376e8:
    // 0x2376e8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x2376e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2376ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2376ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2376f0: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x2376f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2376f4:
    // 0x2376f4: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x2376F4u;
    SET_GPR_U32(ctx, 31, 0x2376FCu);
    ctx->pc = 0x2376F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376F4u;
    // 0x2376f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x2376F4u, 0x2376FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2376FCu;
label_2376fc:
    // 0x2376fc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2376FCu;
    {
        const bool branch_taken_0x2376fc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2376fc) {
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x237704u;
    // 0x237704: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x237704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x237708: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x23770c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237710: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x237710u;
    SET_GPR_U32(ctx, 31, 0x237718u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x237710u, 0x237718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237718u;
label_237718:
    // 0x237718: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x237718u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23771c: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x23771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x237720: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x237720u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x237724: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x237724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x237728: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x237728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x23772c: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x23772cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x237730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237738: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x237738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x23773c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x237740: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
    // 0x237744: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x237744u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_237748:
    // 0x237748: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x237748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x23774c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x23774cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x237750: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x237750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237754: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237754u;
    SET_GPR_U32(ctx, 31, 0x23775Cu);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237754u, 0x23775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23775Cu;
label_23775c:
    // 0x23775c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x23775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x237760: 0xdc25e320  ld          $a1, -0x1CE0($at)
    ctx->pc = 0x237760u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CE320u));
    // 0x237764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237768: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237768u;
    SET_GPR_U32(ctx, 31, 0x237770u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237768u, 0x237770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237770u;
label_237770:
    // 0x237770: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x237774: 0xdc25e328  ld          $a1, -0x1CD8($at)
    ctx->pc = 0x237774u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CE328u));
    // 0x237778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23777c: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x23777Cu;
    SET_GPR_U32(ctx, 31, 0x237784u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x23777Cu, 0x237784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237784u;
label_237784:
    // 0x237784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237788: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x237788u;
    SET_GPR_U32(ctx, 31, 0x237790u);
    ctx->pc = 0x23778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237788u;
    // 0x23778c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x237788u, 0x237790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237790u;
label_237790:
    // 0x237790: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x237790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x237794: 0xdc25e330  ld          $a1, -0x1CD0($at)
    ctx->pc = 0x237794u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x2CE330u));
    // 0x237798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23779c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x23779Cu;
    SET_GPR_U32(ctx, 31, 0x2377A4u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x23779Cu, 0x2377A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377A4u;
label_2377a4:
    // 0x2377a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2377a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2377a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377ac: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x2377ACu;
    SET_GPR_U32(ctx, 31, 0x2377B4u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x2377ACu, 0x2377B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377B4u;
label_2377b4:
    // 0x2377b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2377b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377bc: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x2377BCu;
    SET_GPR_U32(ctx, 31, 0x2377C4u);
    ctx->pc = 0x1B7CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7CE0u, 0x2377BCu, 0x2377C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377C4u;
label_2377c4:
    // 0x2377c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2377c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377cc: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x2377CCu;
    SET_GPR_U32(ctx, 31, 0x2377D4u);
    ctx->pc = 0x2377D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377CCu;
    // 0x2377d0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x2377CCu, 0x2377D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377D4u;
label_2377d4:
    // 0x2377d4: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2377D4u;
    {
        const bool branch_taken_0x2377d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2377D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D4u;
        // 0x2377d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d4) {
            ctx->pc = 0x237800u;
            goto label_237800;
        }
    }
    ctx->pc = 0x2377DCu;
    // 0x2377dc: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x2377DCu;
    SET_GPR_U32(ctx, 31, 0x2377E4u);
    ctx->pc = 0x2377E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377DCu;
    // 0x2377e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x2377DCu, 0x2377E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377E4u;
label_2377e4:
    // 0x2377e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2377e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2377ec: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x2377ECu;
    SET_GPR_U32(ctx, 31, 0x2377F4u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x2377ECu, 0x2377F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2377F4u;
label_2377f4:
    // 0x2377f4: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2377f8: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x2377f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x2377fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2377fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237800:
    // 0x237800: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x237800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x237804: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x237804u;
    {
        const bool branch_taken_0x237804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237804u;
        // 0x237808: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237804) {
            ctx->pc = 0x237834u;
            goto label_237834;
        }
    }
    ctx->pc = 0x23780Cu;
    // 0x23780c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x237810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237814: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x237818: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23781c: 0xdca5e3b8  ld          $a1, -0x1C48($a1)
    ctx->pc = 0x23781cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294960056)));
    // 0x237820: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237820u;
    SET_GPR_U32(ctx, 31, 0x237828u);
    ctx->pc = 0x237824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237820u;
    // 0x237824: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237820u, 0x237828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237828u;
label_237828:
    // 0x237828: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x237828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x23782c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23782cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x237830: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x237830u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_237834:
    // 0x237834: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x237834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x237838: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x237838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23783c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23783Cu;
    {
        const bool branch_taken_0x23783c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x23783c) {
            ctx->pc = 0x237840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23783Cu;
            // 0x237840: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237850u;
            goto label_237850;
        }
    }
    ctx->pc = 0x237844u;
    // 0x237844: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x237844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x237848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x237848u;
    {
        const bool branch_taken_0x237848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237848u;
        // 0x23784c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237848) {
            ctx->pc = 0x237858u;
            goto label_237858;
        }
    }
    ctx->pc = 0x237850u;
label_237850:
    // 0x237850: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x237850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x237854: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x237854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_237858:
    // 0x237858: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x237858u;
    {
        const bool branch_taken_0x237858 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x23785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237858u;
        // 0x23785c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237858) {
            ctx->pc = 0x237878u;
            goto label_237878;
        }
    }
    ctx->pc = 0x237860u;
    // 0x237860: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x237860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x237864: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x237868: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x237868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
    // 0x23786c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23786Cu;
    {
        const bool branch_taken_0x23786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23786Cu;
        // 0x237870: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23786c) {
            ctx->pc = 0x237890u;
            goto label_237890;
        }
    }
    ctx->pc = 0x237874u;
    // 0x237874: 0x0  nop
    ctx->pc = 0x237874u;
    // NOP
label_237878:
    // 0x237878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23787c: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x237880: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x237880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x237884: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x237884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x237888: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x237888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x23788c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_237890:
    // 0x237890: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237894: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237898: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x237898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x23789c: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x23789cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x2378a0: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x2378a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2378a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A4u;
        // 0x2378a8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2378B8u;
            goto label_2378b8;
        }
    }
    ctx->pc = 0x2378ACu;
    // 0x2378ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2378acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2378b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2378b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2378b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2378b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2378b8:
    // 0x2378b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2378bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2378c0: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x2378c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x2378c4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2378c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2378c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2378cc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2378ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2378d0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2378D0u;
    {
        const bool branch_taken_0x2378d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378D0u;
        // 0x2378d4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378d0) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x2378D8u;
    // 0x2378d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2378dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2378e0: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x2378e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2378e8: 0x8c63e340  lw          $v1, -0x1CC0($v1)
    ctx->pc = 0x2378e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959936)));
    // 0x2378ec: 0x600008  jr          $v1
    ctx->pc = 0x2378ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2378F8u: goto label_2378f8;
            case 0x237908u: goto label_237908;
            case 0x23790Cu: goto label_23790c;
            case 0x237930u: goto label_237930;
            case 0x237934u: goto label_237934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2378ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2378F4u;
    // 0x2378f4: 0x0  nop
    ctx->pc = 0x2378f4u;
    // NOP
label_2378f8:
    // 0x2378f8: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2378fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2378FCu;
    {
        const bool branch_taken_0x2378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378FCu;
        // 0x237900: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378fc) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x237904u;
    // 0x237904: 0x0  nop
    ctx->pc = 0x237904u;
    // NOP
label_237908:
    // 0x237908: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x237908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_23790c:
    // 0x23790c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x237910: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237914: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x237914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x237918: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x237918u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x23791c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x23791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x237920: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x237920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
    // 0x237924: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x237924u;
    {
        const bool branch_taken_0x237924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237924u;
        // 0x237928: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237924) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x23792Cu;
    // 0x23792c: 0x0  nop
    ctx->pc = 0x23792cu;
    // NOP
label_237930:
    // 0x237930: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x237930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_237934:
    // 0x237934: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x237934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x237938: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x23793c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x237940: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x237940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x237944: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x237944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x237948: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x237948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x23794c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x23794cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x237950: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x237950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_237954:
    // 0x237954: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x237958: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x237958u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
    // 0x23795c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23795Cu;
    {
        const bool branch_taken_0x23795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23795Cu;
        // 0x237960: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23795c) {
            ctx->pc = 0x237988u;
            goto label_237988;
        }
    }
    ctx->pc = 0x237964u;
    // 0x237964: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x237964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237968:
    // 0x237968: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x23796c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x23796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x237970: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x237970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x237974: 0x0  nop
    ctx->pc = 0x237974u;
    // NOP
    // 0x237978: 0x0  nop
    ctx->pc = 0x237978u;
    // NOP
    // 0x23797c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23797Cu;
    {
        const bool branch_taken_0x23797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23797Cu;
        // 0x237980: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23797c) {
            ctx->pc = 0x237968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237968;
        }
    }
    ctx->pc = 0x237984u;
    // 0x237984: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x237984u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_237988:
    // 0x237988: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x237988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
    // 0x23798c: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23798Cu;
    SET_GPR_U32(ctx, 31, 0x237994u);
    ctx->pc = 0x237990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23798Cu;
    // 0x237990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23798Cu, 0x237994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237994u;
label_237994:
    // 0x237994: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x237994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x237998: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x237998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23799c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x23799cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2379a0: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2379a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2379a4: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x2379a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
    // 0x2379a8: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x2379A8u;
    {
        const bool branch_taken_0x2379a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379A8u;
        // 0x2379ac: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379a8) {
            ctx->pc = 0x237DF8u;
            goto label_237df8;
        }
    }
    ctx->pc = 0x2379B0u;
    // 0x2379b0: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
    ctx->pc = 0x2379B0u;
    {
        const bool branch_taken_0x2379b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379b0) {
            ctx->pc = 0x2379B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379B0u;
            // 0x2379b4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DFCu;
            goto label_237dfc;
        }
    }
    ctx->pc = 0x2379B8u;
    // 0x2379b8: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2379b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379bc: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x2379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
    // 0x2379c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2379c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2379c4: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
    ctx->pc = 0x2379C4u;
    {
        const bool branch_taken_0x2379c4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x2379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C4u;
        // 0x2379c8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c4) {
            ctx->pc = 0x237A60u;
            goto label_237a60;
        }
    }
    ctx->pc = 0x2379CCu;
    // 0x2379cc: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x2379ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
    // 0x2379d0: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x2379d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
    // 0x2379d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2379d8: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x2379d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x2379dc: 0x3c11002d  lui         $s1, 0x2D
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
    // 0x2379e0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2379e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2379e4: 0xde31e3b8  ld          $s1, -0x1C48($s1)
    ctx->pc = 0x2379e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294960056)));
    // 0x2379e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2379E8u;
    {
        const bool branch_taken_0x2379e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379E8u;
        // 0x2379ec: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379e8) {
            ctx->pc = 0x237A08u;
            goto label_237a08;
        }
    }
    ctx->pc = 0x2379F0u;
    // 0x2379f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2379f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2379f4: 0xdc45e4a0  ld          $a1, -0x1B60($v0)
    ctx->pc = 0x2379f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960288)));
    // 0x2379f8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2379f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x2379fc: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x2379FCu;
    SET_GPR_U32(ctx, 31, 0x237A04u);
    ctx->pc = 0x237A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379FCu;
    // 0x237a00: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x2379FCu, 0x237A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A04u;
label_237a04:
    // 0x237a04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237a08:
    // 0x237a08: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x237A08u;
    {
        const bool branch_taken_0x237a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a08) {
            ctx->pc = 0x237A44u;
            goto label_237a44;
        }
    }
    ctx->pc = 0x237A10u;
    // 0x237a10: 0x2452e480  addiu       $s2, $v0, -0x1B80
    ctx->pc = 0x237a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x237a14: 0x0  nop
    ctx->pc = 0x237a14u;
    // NOP
label_237a18:
    // 0x237a18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x237a1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237A1Cu;
    {
        const bool branch_taken_0x237a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a1c) {
            ctx->pc = 0x237A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A1Cu;
            // 0x237a20: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A3Cu;
            goto label_237a3c;
        }
    }
    ctx->pc = 0x237A24u;
    // 0x237a24: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x237a24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x237a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a2c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237A2Cu;
    SET_GPR_U32(ctx, 31, 0x237A34u);
    ctx->pc = 0x237A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A2Cu;
    // 0x237a30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237A2Cu, 0x237A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A34u;
label_237a34:
    // 0x237a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a38: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_237a3c:
    // 0x237a3c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x237A3Cu;
    {
        const bool branch_taken_0x237a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x237A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A3Cu;
        // 0x237a40: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a3c) {
            ctx->pc = 0x237A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a18;
        }
    }
    ctx->pc = 0x237A44u;
label_237a44:
    // 0x237a44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a4c: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x237A4Cu;
    SET_GPR_U32(ctx, 31, 0x237A54u);
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x237A4Cu, 0x237A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A54u;
label_237a54:
    // 0x237a54: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x237A54u;
    {
        const bool branch_taken_0x237a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A54u;
        // 0x237a58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a54) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237A5Cu;
    // 0x237a5c: 0x0  nop
    ctx->pc = 0x237a5cu;
    // NOP
label_237a60:
    // 0x237a60: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x237a64: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x237A64u;
    {
        const bool branch_taken_0x237a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A64u;
        // 0x237a68: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a64) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237A6Cu;
    // 0x237a6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237a70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x237a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x237a74: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x237a78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237a7c: 0xdc84e3b8  ld          $a0, -0x1C48($a0)
    ctx->pc = 0x237a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294960056)));
    // 0x237a80: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237A80u;
    SET_GPR_U32(ctx, 31, 0x237A88u);
    ctx->pc = 0x237A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A80u;
    // 0x237a84: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237A80u, 0x237A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237A88u;
label_237a88:
    // 0x237a88: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x237A88u;
    {
        const bool branch_taken_0x237a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A88u;
        // 0x237a8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a88) {
            ctx->pc = 0x237AC4u;
            goto label_237ac4;
        }
    }
    ctx->pc = 0x237A90u;
    // 0x237a90: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x237a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x237a94: 0x2451e480  addiu       $s1, $v0, -0x1B80
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_237a98:
    // 0x237a98: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x237a9c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237A9Cu;
    {
        const bool branch_taken_0x237a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a9c) {
            ctx->pc = 0x237AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A9Cu;
            // 0x237aa0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237ABCu;
            goto label_237abc;
        }
    }
    ctx->pc = 0x237AA4u;
    // 0x237aa4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x237aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x237aa8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237aac: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237AACu;
    SET_GPR_U32(ctx, 31, 0x237AB4u);
    ctx->pc = 0x237AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237AACu;
    // 0x237ab0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237AACu, 0x237AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AB4u;
label_237ab4:
    // 0x237ab4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237ab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ab8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x237ab8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_237abc:
    // 0x237abc: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x237ABCu;
    {
        const bool branch_taken_0x237abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x237AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ABCu;
        // 0x237ac0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237abc) {
            ctx->pc = 0x237A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a98;
        }
    }
    ctx->pc = 0x237AC4u;
label_237ac4:
    // 0x237ac4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x237ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x237ac8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x237AC8u;
    {
        const bool branch_taken_0x237ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237ac8) {
            ctx->pc = 0x237B20u;
            goto label_237b20;
        }
    }
    ctx->pc = 0x237AD0u;
    // 0x237ad0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x237ad4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x237ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x237ad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237adc: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237ADCu;
    SET_GPR_U32(ctx, 31, 0x237AE4u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237ADCu, 0x237AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x237AE4u;
    {
        const bool branch_taken_0x237ae4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x237AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AE4u;
        // 0x237ae8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ae4) {
            ctx->pc = 0x237B20u;
            goto label_237b20;
        }
    }
    ctx->pc = 0x237AECu;
    // 0x237aec: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x237AECu;
    {
        const bool branch_taken_0x237aec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x237AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AECu;
        // 0x237af0: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237aec) {
            ctx->pc = 0x237B20u;
            goto label_237b20;
        }
    }
    ctx->pc = 0x237AF4u;
    // 0x237af4: 0x188000bc  blez        $a0, . + 4 + (0xBC << 2)
    ctx->pc = 0x237AF4u;
    {
        const bool branch_taken_0x237af4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x237AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237AF4u;
        // 0x237af8: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237af4) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237AFCu;
    // 0x237afc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x237afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237b00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b04: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x237b08: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x237b0c: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x237b0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x237b10: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x237b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x237b14: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237B14u;
    SET_GPR_U32(ctx, 31, 0x237B1Cu);
    ctx->pc = 0x237B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B14u;
    // 0x237b18: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237B14u, 0x237B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B1Cu;
label_237b1c:
    // 0x237b1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237b1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237b20:
    // 0x237b20: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x237B20u;
    SET_GPR_U32(ctx, 31, 0x237B28u);
    ctx->pc = 0x237B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B20u;
    // 0x237b24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x237B20u, 0x237B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B28u;
label_237b28:
    // 0x237b28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b30: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237B30u;
    SET_GPR_U32(ctx, 31, 0x237B38u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237B30u, 0x237B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B38u;
label_237b38:
    // 0x237b38: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x237b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x237b3c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x237b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b44: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x237B44u;
    SET_GPR_U32(ctx, 31, 0x237B4Cu);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x237B44u, 0x237B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B4Cu;
label_237b4c:
    // 0x237b4c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x237b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x237b50: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x237b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x237b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b58: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x237b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x237b5c: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x237b5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x237b60: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x237b60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x237b64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x237b68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x237b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x237b6c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x237b6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x237b70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x237b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237b74: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x237B74u;
    {
        const bool branch_taken_0x237b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237B74u;
        // 0x237b78: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b74) {
            ctx->pc = 0x237BE0u;
            goto label_237be0;
        }
    }
    ctx->pc = 0x237B7Cu;
    // 0x237b7c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x237b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x237b80: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x237b84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b88: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x237b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x237b8c: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237B8Cu;
    SET_GPR_U32(ctx, 31, 0x237B94u);
    ctx->pc = 0x237B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237B8Cu;
    // 0x237b90: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237B8Cu, 0x237B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237B94u;
label_237b94:
    // 0x237b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ba0: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237BA0u;
    SET_GPR_U32(ctx, 31, 0x237BA8u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237BA0u, 0x237BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BA8u;
label_237ba8:
    // 0x237ba8: 0x1c4001e3  bgtz        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x237BA8u;
    {
        const bool branch_taken_0x237ba8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x237BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BA8u;
        // 0x237bac: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ba8) {
            ctx->pc = 0x238338u;
            goto label_238338;
        }
    }
    ctx->pc = 0x237BB0u;
    // 0x237bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x237bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bb8: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237BB8u;
    SET_GPR_U32(ctx, 31, 0x237BC0u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237BB8u, 0x237BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BC0u;
label_237bc0:
    // 0x237bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237bc8: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237BC8u;
    SET_GPR_U32(ctx, 31, 0x237BD0u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237BC8u, 0x237BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237BD0u;
label_237bd0:
    // 0x237bd0: 0x44001d5  bltz        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x237BD0u;
    {
        const bool branch_taken_0x237bd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x237BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BD0u;
        // 0x237bd4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bd0) {
            ctx->pc = 0x238328u;
            goto label_238328;
        }
    }
    ctx->pc = 0x237BD8u;
    // 0x237bd8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x237BD8u;
    {
        const bool branch_taken_0x237bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237bd8) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237BE0u;
label_237be0:
    // 0x237be0: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x237BE0u;
    {
        const bool branch_taken_0x237be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237BE0u;
        // 0x237be4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237be0) {
            ctx->pc = 0x237CE0u;
            goto label_237ce0;
        }
    }
    ctx->pc = 0x237BE8u;
    // 0x237be8: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x237be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x237bec: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x237bf0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x237bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x237bf4: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x237bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x237bf8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x237bfc: 0xdca5e3b0  ld          $a1, -0x1C50($a1)
    ctx->pc = 0x237bfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294960048)));
    // 0x237c00: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x237C00u;
    SET_GPR_U32(ctx, 31, 0x237C08u);
    ctx->pc = 0x237C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C00u;
    // 0x237c04: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x237C00u, 0x237C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c10: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237C10u;
    SET_GPR_U32(ctx, 31, 0x237C18u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237C10u, 0x237C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C18u;
label_237c18:
    // 0x237c18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x237C18u;
    {
        const bool branch_taken_0x237c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C18u;
        // 0x237c1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c18) {
            ctx->pc = 0x237C4Cu;
            goto label_237c4c;
        }
    }
    ctx->pc = 0x237C20u;
label_237c20:
    // 0x237c20: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x237c24: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x237c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c2c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237C2Cu;
    SET_GPR_U32(ctx, 31, 0x237C34u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237C2Cu, 0x237C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C34u;
label_237c34:
    // 0x237c34: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x237c38: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x237c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c40: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237C40u;
    SET_GPR_U32(ctx, 31, 0x237C48u);
    ctx->pc = 0x237C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C40u;
    // 0x237c44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237C40u, 0x237C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C48u;
label_237c48:
    // 0x237c48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237c48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c4c:
    // 0x237c4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c50: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x237C50u;
    SET_GPR_U32(ctx, 31, 0x237C58u);
    ctx->pc = 0x1B7CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7CE0u, 0x237C50u, 0x237C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C58u;
label_237c58:
    // 0x237c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c5c: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x237C5Cu;
    SET_GPR_U32(ctx, 31, 0x237C64u);
    ctx->pc = 0x237C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C5Cu;
    // 0x237c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x237C5Cu, 0x237C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C64u;
label_237c64:
    // 0x237c64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c6c: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237C6Cu;
    SET_GPR_U32(ctx, 31, 0x237C74u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237C6Cu, 0x237C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C74u;
label_237c74:
    // 0x237c74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c7c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x237c80: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237c80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x237c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237c88: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237C88u;
    SET_GPR_U32(ctx, 31, 0x237C90u);
    ctx->pc = 0x237C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237C88u;
    // 0x237c8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237C88u, 0x237C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237C90u;
label_237c90:
    // 0x237c90: 0x4400292  bltz        $v0, . + 4 + (0x292 << 2)
    ctx->pc = 0x237C90u;
    {
        const bool branch_taken_0x237c90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x237C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237C90u;
        // 0x237c94: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c90) {
            ctx->pc = 0x2386DCu;
            goto label_2386dc;
        }
    }
    ctx->pc = 0x237C98u;
    // 0x237c98: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x237c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x237c9c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x237ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ca4: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237CA4u;
    SET_GPR_U32(ctx, 31, 0x237CACu);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237CA4u, 0x237CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CACu;
label_237cac:
    // 0x237cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cb4: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237CB4u;
    SET_GPR_U32(ctx, 31, 0x237CBCu);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237CB4u, 0x237CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CBCu;
label_237cbc:
    // 0x237cbc: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x237CBCu;
    {
        const bool branch_taken_0x237cbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x237CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CBCu;
        // 0x237cc0: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cbc) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237CC4u;
    // 0x237cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237cc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x237cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x237ccc: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x237cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x237cd0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x237CD0u;
    {
        const bool branch_taken_0x237cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CD0u;
        // 0x237cd4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cd0) {
            ctx->pc = 0x237C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237c20;
        }
    }
    ctx->pc = 0x237CD8u;
    // 0x237cd8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x237CD8u;
    {
        const bool branch_taken_0x237cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cd8) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237CE0u;
label_237ce0:
    // 0x237ce0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ce4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x237ce8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x237ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x237cec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x237cf0: 0xdc84e3b0  ld          $a0, -0x1C50($a0)
    ctx->pc = 0x237cf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294960048)));
    // 0x237cf4: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237CF4u;
    SET_GPR_U32(ctx, 31, 0x237CFCu);
    ctx->pc = 0x237CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CF4u;
    // 0x237cf8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237CF4u, 0x237CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CFCu;
label_237cfc:
    // 0x237cfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237d00:
    // 0x237d00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d04: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x237D04u;
    SET_GPR_U32(ctx, 31, 0x237D0Cu);
    ctx->pc = 0x1B7CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7CE0u, 0x237D04u, 0x237D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D0Cu;
label_237d0c:
    // 0x237d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d10: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x237D10u;
    SET_GPR_U32(ctx, 31, 0x237D18u);
    ctx->pc = 0x237D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D10u;
    // 0x237d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x237D10u, 0x237D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D18u;
label_237d18:
    // 0x237d18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d20: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237D20u;
    SET_GPR_U32(ctx, 31, 0x237D28u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237D20u, 0x237D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D28u;
label_237d28:
    // 0x237d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d2c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x237d30: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237d30u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x237d34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237d38: 0x16640023  bne         $s3, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x237D38u;
    {
        const bool branch_taken_0x237d38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x237D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D38u;
        // 0x237d3c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d38) {
            ctx->pc = 0x237DC8u;
            goto label_237dc8;
        }
    }
    ctx->pc = 0x237D40u;
    // 0x237d40: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x237d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x237d44: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x237d48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d4c: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x237D4Cu;
    SET_GPR_U32(ctx, 31, 0x237D54u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x237D4Cu, 0x237D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D54u;
label_237d54:
    // 0x237d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d5c: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237D5Cu;
    SET_GPR_U32(ctx, 31, 0x237D64u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237D5Cu, 0x237D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D64u;
label_237d64:
    // 0x237d64: 0x1c40006f  bgtz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x237D64u;
    {
        const bool branch_taken_0x237d64 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x237D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D64u;
        // 0x237d68: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d64) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237D6Cu;
    // 0x237d6c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x237d70: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x237d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x237d74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d78: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237D78u;
    SET_GPR_U32(ctx, 31, 0x237D80u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237D78u, 0x237D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D80u;
label_237d80:
    // 0x237d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d88: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237D88u;
    SET_GPR_U32(ctx, 31, 0x237D90u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237D88u, 0x237D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237D90u;
label_237d90:
    // 0x237d90: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x237D90u;
    {
        const bool branch_taken_0x237d90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x237D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D90u;
        // 0x237d94: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d90) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237D98u;
    // 0x237d98: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x237d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x237d9c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_237da0:
    // 0x237da0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x237da4: 0x0  nop
    ctx->pc = 0x237da4u;
    // NOP
    // 0x237da8: 0x0  nop
    ctx->pc = 0x237da8u;
    // NOP
    // 0x237dac: 0x0  nop
    ctx->pc = 0x237dacu;
    // NOP
    // 0x237db0: 0x0  nop
    ctx->pc = 0x237db0u;
    // NOP
    // 0x237db4: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x237DB4u;
    {
        const bool branch_taken_0x237db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237db4) {
            ctx->pc = 0x237DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237DB4u;
            // 0x237db8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237da0;
        }
    }
    ctx->pc = 0x237DBCu;
    // 0x237dbc: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x237DBCu;
    {
        const bool branch_taken_0x237dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DBCu;
        // 0x237dc0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dbc) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x237DC4u;
    // 0x237dc4: 0x0  nop
    ctx->pc = 0x237dc4u;
    // NOP
label_237dc8:
    // 0x237dc8: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x237dcc: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x237dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dd4: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237DD4u;
    SET_GPR_U32(ctx, 31, 0x237DDCu);
    ctx->pc = 0x237DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DD4u;
    // 0x237dd8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237DD4u, 0x237DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237DDCu;
label_237ddc:
    // 0x237ddc: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x237DDCu;
    {
        const bool branch_taken_0x237ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DDCu;
        // 0x237de0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ddc) {
            ctx->pc = 0x237D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237d00;
        }
    }
    ctx->pc = 0x237DE4u;
    // 0x237de4: 0x0  nop
    ctx->pc = 0x237de4u;
    // NOP
label_237de8:
    // 0x237de8: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x237de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dec: 0x8fbe002c  lw          $fp, 0x2C($sp)
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x237df0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x237df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x237df4: 0x8fb50054  lw          $s5, 0x54($sp)
    ctx->pc = 0x237df4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_237df8:
    // 0x237df8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x237df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_237dfc:
    // 0x237dfc: 0x460006a  bltz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x237DFCu;
    {
        const bool branch_taken_0x237dfc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x237E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DFCu;
        // 0x237e00: 0x2bc2000f  slti        $v0, $fp, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237dfc) {
            ctx->pc = 0x237FA8u;
            goto label_237fa8;
        }
    }
    ctx->pc = 0x237E04u;
    // 0x237e04: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x237E04u;
    {
        const bool branch_taken_0x237e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E04u;
        // 0x237e08: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e04) {
            ctx->pc = 0x237FACu;
            goto label_237fac;
        }
    }
    ctx->pc = 0x237E0Cu;
    // 0x237e0c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x237e10: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x237e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x237e14: 0x3c11002d  lui         $s1, 0x2D
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
    // 0x237e18: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x237e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x237e1c: 0xde31e3b8  ld          $s1, -0x1C48($s1)
    ctx->pc = 0x237e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294960056)));
    // 0x237e20: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x237E20u;
    {
        const bool branch_taken_0x237e20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x237E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E20u;
        // 0x237e24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e20) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237E28u;
    // 0x237e28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x237e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237e2c: 0x1c800012  bgtz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x237E2Cu;
    {
        const bool branch_taken_0x237e2c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x237e2c) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237E34u;
    // 0x237e34: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x237e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x237e38: 0x480013b  bltz        $a0, . + 4 + (0x13B << 2)
    ctx->pc = 0x237E38u;
    {
        const bool branch_taken_0x237e38 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x237E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E38u;
        // 0x237e3c: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e38) {
            ctx->pc = 0x238328u;
            goto label_238328;
        }
    }
    ctx->pc = 0x237E40u;
    // 0x237e40: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x237e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x237e44: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x237e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e4c: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237E4Cu;
    SET_GPR_U32(ctx, 31, 0x237E54u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237E4Cu, 0x237E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E54u;
label_237e54:
    // 0x237e54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e5c: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237E5Cu;
    SET_GPR_U32(ctx, 31, 0x237E64u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237E5Cu, 0x237E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E64u;
label_237e64:
    // 0x237e64: 0x18400131  blez        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x237E64u;
    {
        const bool branch_taken_0x237e64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E64u;
        // 0x237e68: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e64) {
            ctx->pc = 0x23832Cu;
            goto label_23832c;
        }
    }
    ctx->pc = 0x237E6Cu;
    // 0x237e6c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x237E6Cu;
    {
        const bool branch_taken_0x237e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E6Cu;
        // 0x237e70: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e6c) {
            ctx->pc = 0x238338u;
            goto label_238338;
        }
    }
    ctx->pc = 0x237E74u;
    // 0x237e74: 0x0  nop
    ctx->pc = 0x237e74u;
    // NOP
label_237e78:
    // 0x237e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e80: 0xc06de50  jal         func_1B7940
    ctx->pc = 0x237E80u;
    SET_GPR_U32(ctx, 31, 0x237E88u);
    ctx->pc = 0x1B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7940u, 0x237E80u, 0x237E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E88u;
label_237e88:
    // 0x237e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e8c: 0xc06df38  jal         func_1B7CE0
    ctx->pc = 0x237E8Cu;
    SET_GPR_U32(ctx, 31, 0x237E94u);
    ctx->pc = 0x1B7CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7CE0u, 0x237E8Cu, 0x237E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E94u;
label_237e94:
    // 0x237e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e98: 0xc06df0a  jal         func_1B7C28
    ctx->pc = 0x237E98u;
    SET_GPR_U32(ctx, 31, 0x237EA0u);
    ctx->pc = 0x237E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E98u;
    // 0x237e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C28u, 0x237E98u, 0x237EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EA0u;
label_237ea0:
    // 0x237ea0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea8: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237EA8u;
    SET_GPR_U32(ctx, 31, 0x237EB0u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237EA8u, 0x237EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EB0u;
label_237eb0:
    // 0x237eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237eb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237eb8: 0xc06dd8a  jal         func_1B7628
    ctx->pc = 0x237EB8u;
    SET_GPR_U32(ctx, 31, 0x237EC0u);
    ctx->pc = 0x1B7628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7628u, 0x237EB8u, 0x237EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EC0u;
label_237ec0:
    // 0x237ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x237ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ec4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x237ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x237ec8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x237ecc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x237eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237ed0: 0x16620027  bne         $s3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x237ED0u;
    {
        const bool branch_taken_0x237ed0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x237ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237ED0u;
        // 0x237ed4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ed0) {
            ctx->pc = 0x237F70u;
            goto label_237f70;
        }
    }
    ctx->pc = 0x237ED8u;
    // 0x237ed8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237edc: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x237EDCu;
    SET_GPR_U32(ctx, 31, 0x237EE4u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x237EDCu, 0x237EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EE4u;
label_237ee4:
    // 0x237ee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x237ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ef0: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237EF0u;
    SET_GPR_U32(ctx, 31, 0x237EF8u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237EF0u, 0x237EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237EF8u;
label_237ef8:
    // 0x237ef8: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x237EF8u;
    {
        const bool branch_taken_0x237ef8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x237EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EF8u;
        // 0x237efc: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ef8) {
            ctx->pc = 0x237F24u;
            goto label_237f24;
        }
    }
    ctx->pc = 0x237F00u;
    // 0x237f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x237f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f08: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237F08u;
    SET_GPR_U32(ctx, 31, 0x237F10u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237F08u, 0x237F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F10u;
label_237f10:
    // 0x237f10: 0x144001f2  bnez        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x237F10u;
    {
        const bool branch_taken_0x237f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F10u;
        // 0x237f14: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f10) {
            ctx->pc = 0x2386DCu;
            goto label_2386dc;
        }
    }
    ctx->pc = 0x237F18u;
    // 0x237f18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x237f1c: 0x104001ef  beqz        $v0, . + 4 + (0x1EF << 2)
    ctx->pc = 0x237F1Cu;
    {
        const bool branch_taken_0x237f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F1Cu;
        // 0x237f20: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f1c) {
            ctx->pc = 0x2386DCu;
            goto label_2386dc;
        }
    }
    ctx->pc = 0x237F24u;
label_237f24:
    // 0x237f24: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x237f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x237f28: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x237f28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x237f2c: 0x0  nop
    ctx->pc = 0x237f2cu;
    // NOP
label_237f30:
    // 0x237f30: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x237f30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x237f34: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x237F34u;
    {
        const bool branch_taken_0x237f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F34u;
        // 0x237f38: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f34) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237F3Cu;
    // 0x237f3c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x237f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x237f40: 0x0  nop
    ctx->pc = 0x237f40u;
    // NOP
    // 0x237f44: 0x0  nop
    ctx->pc = 0x237f44u;
    // NOP
    // 0x237f48: 0x0  nop
    ctx->pc = 0x237f48u;
    // NOP
    // 0x237f4c: 0x56a4fff8  bnel        $s5, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x237F4Cu;
    {
        const bool branch_taken_0x237f4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x237f4c) {
            ctx->pc = 0x237F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F4Cu;
            // 0x237f50: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237f30;
        }
    }
    ctx->pc = 0x237F54u;
    // 0x237f54: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x237f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x237f58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f5c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x237f5cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_237f60:
    // 0x237f60: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x237f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x237f64: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x237f64u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x237f68: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x237F68u;
    {
        const bool branch_taken_0x237f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f68) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x237F70u;
label_237f70:
    // 0x237f70: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x237f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x237f74: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x237f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x237f78: 0xc06dda4  jal         func_1B7690
    ctx->pc = 0x237F78u;
    SET_GPR_U32(ctx, 31, 0x237F80u);
    ctx->pc = 0x1B7690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7690u, 0x237F78u, 0x237F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F80u;
label_237f80:
    // 0x237f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f88: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237f88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f8c: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x237F8Cu;
    SET_GPR_U32(ctx, 31, 0x237F94u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x237F8Cu, 0x237F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F94u;
label_237f94:
    // 0x237f94: 0x104001d0  beqz        $v0, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x237F94u;
    {
        const bool branch_taken_0x237f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F94u;
        // 0x237f98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f94) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x237F9Cu;
    // 0x237f9c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x237F9Cu;
    {
        const bool branch_taken_0x237f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f9c) {
            ctx->pc = 0x237E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237e78;
        }
    }
    ctx->pc = 0x237FA4u;
    // 0x237fa4: 0x0  nop
    ctx->pc = 0x237fa4u;
    // NOP
label_237fa8:
    // 0x237fa8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x237fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_237fac:
    // 0x237fac: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x237facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x237fb0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237fb4: 0x28560002  slti        $s6, $v0, 0x2
    ctx->pc = 0x237fb4u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x237fb8: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x237fbc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x237fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x237fc0: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x237FC0u;
    {
        const bool branch_taken_0x237fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FC0u;
        // 0x237fc4: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fc0) {
            ctx->pc = 0x238064u;
            goto label_238064;
        }
    }
    ctx->pc = 0x237FC8u;
    // 0x237fc8: 0x52c00009  beql        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x237FC8u;
    {
        const bool branch_taken_0x237fc8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x237fc8) {
            ctx->pc = 0x237FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FC8u;
            // 0x237fcc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FF0u;
            goto label_237ff0;
        }
    }
    ctx->pc = 0x237FD0u;
    // 0x237fd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x237fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x237fd4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x237FD4u;
    {
        const bool branch_taken_0x237fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD4u;
        // 0x237fd8: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fd4) {
            ctx->pc = 0x23803Cu;
            goto label_23803c;
        }
    }
    ctx->pc = 0x237FDCu;
    // 0x237fdc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x237fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x237fe0: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x237fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x237fe4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x237FE4u;
    {
        const bool branch_taken_0x237fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FE4u;
        // 0x237fe8: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fe4) {
            ctx->pc = 0x23803Cu;
            goto label_23803c;
        }
    }
    ctx->pc = 0x237FECu;
    // 0x237fec: 0x0  nop
    ctx->pc = 0x237fecu;
    // NOP
label_237ff0:
    // 0x237ff0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x237ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x237ff4: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x237ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x237ff8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x237ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x237ffc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x237FFCu;
    {
        const bool branch_taken_0x237ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FFCu;
        // 0x238000: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ffc) {
            ctx->pc = 0x238024u;
            goto label_238024;
        }
    }
    ctx->pc = 0x238004u;
    // 0x238004: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x238004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x238008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x238008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23800c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x238010: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x238010u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x238014: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x238014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x238018: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x238018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23801c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x23801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x238020: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x238020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_238024:
    // 0x238024: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x238024u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238028: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x238028u;
    {
        const bool branch_taken_0x238028 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238028u;
        // 0x23802c: 0x8fa20038  lw          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238028) {
            ctx->pc = 0x238040u;
            goto label_238040;
        }
    }
    ctx->pc = 0x238030u;
    // 0x238030: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x238030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238034: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x238034u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x238038: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x238038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23803c:
    // 0x23803c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x23803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_238040:
    // 0x238040: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238044: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238048: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x238048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23804c: 0xc08eb24  jal         func_23AC90
    ctx->pc = 0x23804Cu;
    SET_GPR_U32(ctx, 31, 0x238054u);
    ctx->pc = 0x238050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23804Cu;
    // 0x238050: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC90u, 0x23804Cu, 0x238054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238058: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x23805c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x238060: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x238060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_238064:
    // 0x238064: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x238068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238064u;
        // 0x238068: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238064) {
            ctx->pc = 0x23809Cu;
            goto label_23809c;
        }
    }
    ctx->pc = 0x23806Cu;
    // 0x23806c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x23806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238070: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x238070u;
    {
        const bool branch_taken_0x238070 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x238074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238070u;
        // 0x238074: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238070) {
            ctx->pc = 0x23809Cu;
            goto label_23809c;
        }
    }
    ctx->pc = 0x238078u;
    // 0x238078: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x238078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x23807c: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x23807cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x238080: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238084: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x238084u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x238088: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x238088u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x23808c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x23808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x238090: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x238090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x238094: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x238094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x238098: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x238098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_23809c:
    // 0x23809c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x23809Cu;
    {
        const bool branch_taken_0x23809c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2380A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23809Cu;
        // 0x2380a0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23809c) {
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x2380A4u;
    // 0x2380a4: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2380a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2380a8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2380A8u;
    {
        const bool branch_taken_0x2380a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380A8u;
        // 0x2380ac: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380a8) {
            ctx->pc = 0x238118u;
            goto label_238118;
        }
    }
    ctx->pc = 0x2380B0u;
    // 0x2380b0: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2380B0u;
    {
        const bool branch_taken_0x2380b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380B0u;
        // 0x2380b4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380b0) {
            ctx->pc = 0x2380F4u;
            goto label_2380f4;
        }
    }
    ctx->pc = 0x2380B8u;
    // 0x2380b8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2380b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2380bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380c0: 0xc08ebb6  jal         func_23AED8
    ctx->pc = 0x2380C0u;
    SET_GPR_U32(ctx, 31, 0x2380C8u);
    ctx->pc = 0x2380C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380C0u;
    // 0x2380c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AED8u, 0x2380C0u, 0x2380C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380C8u;
label_2380c8:
    // 0x2380c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380cc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2380ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2380d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2380d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380d4: 0xc08eb32  jal         func_23ACC8
    ctx->pc = 0x2380D4u;
    SET_GPR_U32(ctx, 31, 0x2380DCu);
    ctx->pc = 0x2380D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380D4u;
    // 0x2380d8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ACC8u, 0x2380D4u, 0x2380DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380DCu;
label_2380dc:
    // 0x2380dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2380dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380e0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2380e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2380e4: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2380E4u;
    SET_GPR_U32(ctx, 31, 0x2380ECu);
    ctx->pc = 0x2380E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380E4u;
    // 0x2380e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2380E4u, 0x2380ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380ECu;
label_2380ec:
    // 0x2380ec: 0xafb00044  sw          $s0, 0x44($sp)
    ctx->pc = 0x2380ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 16));
    // 0x2380f0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2380f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2380f4:
    // 0x2380f4: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2380f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2380f8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2380F8u;
    {
        const bool branch_taken_0x2380f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2380f8) {
            ctx->pc = 0x2380FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2380F8u;
            // 0x2380fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23812Cu;
            goto label_23812c;
        }
    }
    ctx->pc = 0x238100u;
    // 0x238100: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238104: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x238104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238108: 0xc08ebb6  jal         func_23AED8
    ctx->pc = 0x238108u;
    SET_GPR_U32(ctx, 31, 0x238110u);
    ctx->pc = 0x23810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238108u;
    // 0x23810c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AED8u, 0x238108u, 0x238110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238110u;
label_238110:
    // 0x238110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238110u;
    {
        const bool branch_taken_0x238110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238110u;
        // 0x238114: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238110) {
            ctx->pc = 0x238128u;
            goto label_238128;
        }
    }
    ctx->pc = 0x238118u;
label_238118:
    // 0x238118: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23811c: 0xc08ebb6  jal         func_23AED8
    ctx->pc = 0x23811Cu;
    SET_GPR_U32(ctx, 31, 0x238124u);
    ctx->pc = 0x238120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23811Cu;
    // 0x238120: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AED8u, 0x23811Cu, 0x238124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238124u;
label_238124:
    // 0x238124: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x238124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_238128:
    // 0x238128: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23812c:
    // 0x23812c: 0xc08eb24  jal         func_23AC90
    ctx->pc = 0x23812Cu;
    SET_GPR_U32(ctx, 31, 0x238134u);
    ctx->pc = 0x238130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23812Cu;
    // 0x238130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC90u, 0x23812Cu, 0x238134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238134u;
label_238134:
    // 0x238134: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x238134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x238138: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x238138u;
    {
        const bool branch_taken_0x238138 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238138u;
        // 0x23813c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238138) {
            ctx->pc = 0x238154u;
            goto label_238154;
        }
    }
    ctx->pc = 0x238140u;
    // 0x238140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238144: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238148: 0xc08ebb6  jal         func_23AED8
    ctx->pc = 0x238148u;
    SET_GPR_U32(ctx, 31, 0x238150u);
    ctx->pc = 0x23814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238148u;
    // 0x23814c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AED8u, 0x238148u, 0x238150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238150u;
label_238150:
    // 0x238150: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x238150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_238154:
    // 0x238154: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x238154u;
    {
        const bool branch_taken_0x238154 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x238158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238154u;
        // 0x238158: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238154) {
            ctx->pc = 0x23819Cu;
            goto label_23819c;
        }
    }
    ctx->pc = 0x23815Cu;
    // 0x23815c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x238160: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x238160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x238164: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x238164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x238168: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x238168u;
    {
        const bool branch_taken_0x238168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238168u;
        // 0x23816c: 0x8fa3003c  lw          $v1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238168) {
            ctx->pc = 0x2381A0u;
            goto label_2381a0;
        }
    }
    ctx->pc = 0x238170u;
    // 0x238170: 0x14103f  dsra32      $v0, $s4, 0
    ctx->pc = 0x238170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 20) >> (32 + 0));
    // 0x238174: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x238174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x238178: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23817c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23817Cu;
    {
        const bool branch_taken_0x23817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23817Cu;
        // 0x238180: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23817c) {
            ctx->pc = 0x23819Cu;
            goto label_23819c;
        }
    }
    ctx->pc = 0x238184u;
    // 0x238184: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x238184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238188: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23818c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23818cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x238190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x238194: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x238194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x238198: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x238198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_23819c:
    // 0x23819c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x23819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_2381a0:
    // 0x2381a0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2381A0u;
    {
        const bool branch_taken_0x2381a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381A0u;
        // 0x2381a4: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381a0) {
            ctx->pc = 0x2381C8u;
            goto label_2381c8;
        }
    }
    ctx->pc = 0x2381A8u;
    // 0x2381a8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2381ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2381acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2381b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2381b4: 0xc08ead4  jal         func_23AB50
    ctx->pc = 0x2381B4u;
    SET_GPR_U32(ctx, 31, 0x2381BCu);
    ctx->pc = 0x2381B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381B4u;
    // 0x2381b8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB50u, 0x2381B4u, 0x2381BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381BCu;
label_2381bc:
    // 0x2381bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2381bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2381c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2381C0u;
    {
        const bool branch_taken_0x2381c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381C0u;
        // 0x2381c4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381c0) {
            ctx->pc = 0x2381D0u;
            goto label_2381d0;
        }
    }
    ctx->pc = 0x2381C8u;
label_2381c8:
    // 0x2381c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2381cc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2381ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2381d0:
    // 0x2381d0: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x2381d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2381d4: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2381D4u;
    {
        const bool branch_taken_0x2381d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381D4u;
        // 0x2381d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381d4) {
            ctx->pc = 0x2381E0u;
            goto label_2381e0;
        }
    }
    ctx->pc = 0x2381DCu;
    // 0x2381dc: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x2381dcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2381e0:
    // 0x2381e0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x2381e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2381e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2381E4u;
    {
        const bool branch_taken_0x2381e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2381E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381E4u;
        // 0x2381e8: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381e4) {
            ctx->pc = 0x238210u;
            goto label_238210;
        }
    }
    ctx->pc = 0x2381ECu;
    // 0x2381ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2381ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2381f0: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x2381f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2381f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2381f8: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2381f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2381fc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x238200: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x238200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x238204: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x238204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x238208: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x238208u;
    {
        const bool branch_taken_0x238208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238208u;
        // 0x23820c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238208) {
            ctx->pc = 0x238238u;
            goto label_238238;
        }
    }
    ctx->pc = 0x238210u;
label_238210:
    // 0x238210: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238210u;
    {
        const bool branch_taken_0x238210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238210u;
        // 0x238214: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238210) {
            ctx->pc = 0x23823Cu;
            goto label_23823c;
        }
    }
    ctx->pc = 0x238218u;
    // 0x238218: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23821c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x23821cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x238220: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x238220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238224: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x238228: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x23822c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x238230: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x238230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x238234: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x238234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_238238:
    // 0x238238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x238238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23823c:
    // 0x23823c: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23823Cu;
    {
        const bool branch_taken_0x23823c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x23823c) {
            ctx->pc = 0x238240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23823Cu;
            // 0x238240: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23825Cu;
            goto label_23825c;
        }
    }
    ctx->pc = 0x238244u;
    // 0x238244: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238248: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x238248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23824c: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x23824Cu;
    SET_GPR_U32(ctx, 31, 0x238254u);
    ctx->pc = 0x238250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23824Cu;
    // 0x238250: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x23824Cu, 0x238254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238254u;
label_238254:
    // 0x238254: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x238254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x238258: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_23825c:
    // 0x23825c: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23825Cu;
    {
        const bool branch_taken_0x23825c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x238260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23825Cu;
        // 0x238260: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23825c) {
            ctx->pc = 0x23827Cu;
            goto label_23827c;
        }
    }
    ctx->pc = 0x238264u;
    // 0x238264: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238268: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23826c: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x23826Cu;
    SET_GPR_U32(ctx, 31, 0x238274u);
    ctx->pc = 0x238270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23826Cu;
    // 0x238270: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x23826Cu, 0x238274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238274u;
label_238274:
    // 0x238274: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x238274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x238278: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x238278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_23827c:
    // 0x23827c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23827Cu;
    {
        const bool branch_taken_0x23827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23827Cu;
        // 0x238280: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23827c) {
            ctx->pc = 0x2382D8u;
            goto label_2382d8;
        }
    }
    ctx->pc = 0x238284u;
    // 0x238284: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x238284u;
    SET_GPR_U32(ctx, 31, 0x23828Cu);
    ctx->pc = 0x238288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238284u;
    // 0x238288: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x238284u, 0x23828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23828Cu;
label_23828c:
    // 0x23828c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23828Cu;
    {
        const bool branch_taken_0x23828c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23828c) {
            ctx->pc = 0x238290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23828Cu;
            // 0x238290: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2382DCu;
            goto label_2382dc;
        }
    }
    ctx->pc = 0x238294u;
    // 0x238294: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238298: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23829c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2382a0: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x2382A0u;
    SET_GPR_U32(ctx, 31, 0x2382A8u);
    ctx->pc = 0x2382A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382A0u;
    // 0x2382a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x2382A0u, 0x2382A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382A8u;
label_2382a8:
    // 0x2382a8: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x2382a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x2382ac: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2382acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2382b0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2382B0u;
    {
        const bool branch_taken_0x2382b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B0u;
        // 0x2382b4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382b0) {
            ctx->pc = 0x2382D0u;
            goto label_2382d0;
        }
    }
    ctx->pc = 0x2382B8u;
    // 0x2382b8: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2382b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2382bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2382bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2382c4: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x2382C4u;
    SET_GPR_U32(ctx, 31, 0x2382CCu);
    ctx->pc = 0x2382C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382C4u;
    // 0x2382c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x2382C4u, 0x2382CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382CCu;
label_2382cc:
    // 0x2382cc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2382ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2382d0:
    // 0x2382d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2382d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2382d4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2382d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2382d8:
    // 0x2382d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2382d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2382dc:
    // 0x2382dc: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2382DCu;
    {
        const bool branch_taken_0x2382dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382DCu;
        // 0x2382e0: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382dc) {
            ctx->pc = 0x238350u;
            goto label_238350;
        }
    }
    ctx->pc = 0x2382E4u;
    // 0x2382e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2382e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2382e8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2382e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2382ec: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2382ECu;
    {
        const bool branch_taken_0x2382ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2382ec) {
            ctx->pc = 0x238350u;
            goto label_238350;
        }
    }
    ctx->pc = 0x2382F4u;
    // 0x2382f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2382f8: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2382F8u;
    {
        const bool branch_taken_0x2382f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f8) {
            ctx->pc = 0x238328u;
            goto label_238328;
        }
    }
    ctx->pc = 0x238300u;
    // 0x238300: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238304: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x238304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x238308: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x238308u;
    SET_GPR_U32(ctx, 31, 0x238310u);
    ctx->pc = 0x23830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238308u;
    // 0x23830c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x238308u, 0x238310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238310u;
label_238310:
    // 0x238310: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238314: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238318: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x238318u;
    SET_GPR_U32(ctx, 31, 0x238320u);
    ctx->pc = 0x23831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238318u;
    // 0x23831c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x238318u, 0x238320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238320u;
label_238320:
    // 0x238320: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238320u;
    {
        const bool branch_taken_0x238320 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x238320) {
            ctx->pc = 0x238324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238320u;
            // 0x238324: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238338u;
            goto label_238338;
        }
    }
    ctx->pc = 0x238328u;
label_238328:
    // 0x238328: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x238328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23832c:
    // 0x23832c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x23832Cu;
    {
        const bool branch_taken_0x23832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23832Cu;
        // 0x238330: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23832c) {
            ctx->pc = 0x23869Cu;
            goto label_23869c;
        }
    }
    ctx->pc = 0x238334u;
    // 0x238334: 0x0  nop
    ctx->pc = 0x238334u;
    // NOP
label_238338:
    // 0x238338: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x23833c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x23833cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x238340: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x238340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x238344: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x238344u;
    {
        const bool branch_taken_0x238344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238344u;
        // 0x238348: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238344) {
            ctx->pc = 0x23869Cu;
            goto label_23869c;
        }
    }
    ctx->pc = 0x23834Cu;
    // 0x23834c: 0x0  nop
    ctx->pc = 0x23834cu;
    // NOP
label_238350:
    // 0x238350: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x238350u;
    {
        const bool branch_taken_0x238350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238350u;
        // 0x238354: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238350) {
            ctx->pc = 0x2385BCu;
            goto label_2385bc;
        }
    }
    ctx->pc = 0x238358u;
    // 0x238358: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x238358u;
    {
        const bool branch_taken_0x238358 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238358u;
        // 0x23835c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238358) {
            ctx->pc = 0x238378u;
            goto label_238378;
        }
    }
    ctx->pc = 0x238360u;
    // 0x238360: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x238360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x238364: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x238364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238368: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x238368u;
    SET_GPR_U32(ctx, 31, 0x238370u);
    ctx->pc = 0x23836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238368u;
    // 0x23836c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x238368u, 0x238370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238370u;
label_238370:
    // 0x238370: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x238374: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x238374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_238378:
    // 0x238378: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238378u;
    {
        const bool branch_taken_0x238378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238378u;
        // 0x23837c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238378) {
            ctx->pc = 0x2383C0u;
            goto label_2383c0;
        }
    }
    ctx->pc = 0x238380u;
    // 0x238380: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x238380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x238384: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x238384u;
    SET_GPR_U32(ctx, 31, 0x23838Cu);
    ctx->pc = 0x238388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238384u;
    // 0x238388: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x238384u, 0x23838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23838Cu;
label_23838c:
    // 0x23838c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x238390: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x238390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x238394: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x238398: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x238398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x23839c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x23839cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2383a0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2383a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2383a4: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x2383A4u;
    SET_GPR_U32(ctx, 31, 0x2383ACu);
    ctx->pc = 0x2383A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383A4u;
    // 0x2383a8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x2383A4u, 0x2383ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383ACu;
label_2383ac:
    // 0x2383ac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2383acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383b0: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2383b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2383b4: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x2383B4u;
    SET_GPR_U32(ctx, 31, 0x2383BCu);
    ctx->pc = 0x2383B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383B4u;
    // 0x2383b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x2383B4u, 0x2383BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383BCu;
label_2383bc:
    // 0x2383bc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2383bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_2383c0:
    // 0x2383c0: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2383c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2383c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2383c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2383c8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2383c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2383cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2383CCu;
    {
        const bool branch_taken_0x2383cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383CCu;
        // 0x2383d0: 0x30560001  andi        $s6, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383cc) {
            ctx->pc = 0x238450u;
            goto label_238450;
        }
    }
    ctx->pc = 0x2383D4u;
    // 0x2383d4: 0x0  nop
    ctx->pc = 0x2383d4u;
    // NOP
label_2383d8:
    // 0x2383d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2383d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2383dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2383dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2383e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2383e4: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x2383E4u;
    SET_GPR_U32(ctx, 31, 0x2383ECu);
    ctx->pc = 0x2383E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383E4u;
    // 0x2383e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x2383E4u, 0x2383ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383ECu;
label_2383ec:
    // 0x2383ec: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x2383f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2383f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2383f4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2383f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2383f8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2383F8u;
    {
        const bool branch_taken_0x2383f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2383FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383F8u;
        // 0x2383fc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383f8) {
            ctx->pc = 0x238420u;
            goto label_238420;
        }
    }
    ctx->pc = 0x238400u;
    // 0x238400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x238400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238404: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238408: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23840c: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x23840Cu;
    SET_GPR_U32(ctx, 31, 0x238414u);
    ctx->pc = 0x238410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23840Cu;
    // 0x238410: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x23840Cu, 0x238414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238414u;
label_238414:
    // 0x238414: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x238418: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x238418u;
    {
        const bool branch_taken_0x238418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238418u;
        // 0x23841c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238418) {
            ctx->pc = 0x23844Cu;
            goto label_23844c;
        }
    }
    ctx->pc = 0x238420u;
label_238420:
    // 0x238420: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x238424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x238424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238428: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x238428u;
    SET_GPR_U32(ctx, 31, 0x238430u);
    ctx->pc = 0x23842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238428u;
    // 0x23842c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x238428u, 0x238430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238430u;
label_238430:
    // 0x238430: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x238430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238434: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x238434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x238438: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x238438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23843c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23843cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238440: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x238440u;
    SET_GPR_U32(ctx, 31, 0x238448u);
    ctx->pc = 0x238444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238440u;
    // 0x238444: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x238440u, 0x238448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238448u;
label_238448:
    // 0x238448: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x238448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_23844c:
    // 0x23844c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23844cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_238450:
    // 0x238450: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238454: 0xc08dca8  jal         func_2372A0
    ctx->pc = 0x238454u;
    SET_GPR_U32(ctx, 31, 0x23845Cu);
    ctx->pc = 0x238458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238454u;
    // 0x238458: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2372A0u, 0x238454u, 0x23845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23845Cu;
label_23845c:
    // 0x23845c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x23845cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238460: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x238460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x238464: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x238464u;
    SET_GPR_U32(ctx, 31, 0x23846Cu);
    ctx->pc = 0x238468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238464u;
    // 0x238468: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x238464u, 0x23846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23846Cu;
label_23846c:
    // 0x23846c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238470: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238478: 0xc08ec66  jal         func_23B198
    ctx->pc = 0x238478u;
    SET_GPR_U32(ctx, 31, 0x238480u);
    ctx->pc = 0x23847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238478u;
    // 0x23847c: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B198u, 0x238478u, 0x238480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238480u;
label_238480:
    // 0x238480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238484: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x238484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x238488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238488u;
    {
        const bool branch_taken_0x238488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238488u;
        // 0x23848c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238488) {
            ctx->pc = 0x2384A0u;
            goto label_2384a0;
        }
    }
    ctx->pc = 0x238490u;
    // 0x238490: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x238490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238494: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x238494u;
    SET_GPR_U32(ctx, 31, 0x23849Cu);
    ctx->pc = 0x238498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238494u;
    // 0x238498: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x238494u, 0x23849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23849Cu;
label_23849c:
    // 0x23849c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23849cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2384a0:
    // 0x2384a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2384a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2384a4: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2384A4u;
    SET_GPR_U32(ctx, 31, 0x2384ACu);
    ctx->pc = 0x2384A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2384A4u;
    // 0x2384a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2384A4u, 0x2384ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2384ACu;
label_2384ac:
    // 0x2384ac: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2384ACu;
    {
        const bool branch_taken_0x2384ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384ACu;
        // 0x2384b0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384ac) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384B4u;
    // 0x2384b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2384B4u;
    {
        const bool branch_taken_0x2384b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384b4) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384BCu;
    // 0x2384bc: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2384BCu;
    {
        const bool branch_taken_0x2384bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384BCu;
        // 0x2384c0: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384bc) {
            ctx->pc = 0x2384D8u;
            goto label_2384d8;
        }
    }
    ctx->pc = 0x2384C4u;
    // 0x2384c4: 0x12840029  beq         $s4, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2384C4u;
    {
        const bool branch_taken_0x2384c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384C4u;
        // 0x2384c8: 0x230102a  slt         $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384c4) {
            ctx->pc = 0x23856Cu;
            goto label_23856c;
        }
    }
    ctx->pc = 0x2384CCu;
    // 0x2384cc: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x2384ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2384d0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2384D0u;
    {
        const bool branch_taken_0x2384d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384D0u;
        // 0x2384d4: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384d0) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x2384D8u;
label_2384d8:
    // 0x2384d8: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2384D8u;
    {
        const bool branch_taken_0x2384d8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2384d8) {
            ctx->pc = 0x2384F8u;
            goto label_2384f8;
        }
    }
    ctx->pc = 0x2384E0u;
    // 0x2384e0: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2384E0u;
    {
        const bool branch_taken_0x2384e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2384E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2384E0u;
        // 0x2384e4: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2384e0) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384E8u;
    // 0x2384e8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2384E8u;
    {
        const bool branch_taken_0x2384e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384e8) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384F0u;
    // 0x2384f0: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x2384F0u;
    {
        const bool branch_taken_0x2384f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2384f0) {
            ctx->pc = 0x238558u;
            goto label_238558;
        }
    }
    ctx->pc = 0x2384F8u;
label_2384f8:
    // 0x2384f8: 0x5a200067  blezl       $s1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2384F8u;
    {
        const bool branch_taken_0x2384f8 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2384f8) {
            ctx->pc = 0x2384FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2384F8u;
            // 0x2384fc: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238500u;
    // 0x238500: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x238500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x238504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x238504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238508: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x238508u;
    SET_GPR_U32(ctx, 31, 0x238510u);
    ctx->pc = 0x23850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238508u;
    // 0x23850c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x238508u, 0x238510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238510u;
label_238510:
    // 0x238510: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x238510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x238514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238518: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x238518u;
    SET_GPR_U32(ctx, 31, 0x238520u);
    ctx->pc = 0x23851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238518u;
    // 0x23851c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x238518u, 0x238520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238520u;
label_238520:
    // 0x238520: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x238520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238524: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x238524u;
    {
        const bool branch_taken_0x238524 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x238524) {
            ctx->pc = 0x238528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238524u;
            // 0x238528: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238544u;
            goto label_238544;
        }
    }
    ctx->pc = 0x23852Cu;
    // 0x23852c: 0x5620005a  bnel        $s1, $zero, . + 4 + (0x5A << 2)
    ctx->pc = 0x23852Cu;
    {
        const bool branch_taken_0x23852c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23852c) {
            ctx->pc = 0x238530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23852Cu;
            // 0x238530: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238534u;
    // 0x238534: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x238534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x238538: 0x50400057  beql        $v0, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x238538u;
    {
        const bool branch_taken_0x238538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238538) {
            ctx->pc = 0x23853Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238538u;
            // 0x23853c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238540u;
    // 0x238540: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x238540u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_238544:
    // 0x238544: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x238544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x238548: 0x52820009  beql        $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x238548u;
    {
        const bool branch_taken_0x238548 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x238548) {
            ctx->pc = 0x23854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238548u;
            // 0x23854c: 0x24040039  addiu       $a0, $zero, 0x39 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238570u;
            goto label_238570;
        }
    }
    ctx->pc = 0x238550u;
    // 0x238550: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x238550u;
    {
        const bool branch_taken_0x238550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238550u;
        // 0x238554: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238550) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238558u;
label_238558:
    // 0x238558: 0x5a20000b  blezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x238558u;
    {
        const bool branch_taken_0x238558 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x238558) {
            ctx->pc = 0x23855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238558u;
            // 0x23855c: 0xa2b40000  sb          $s4, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238588u;
            goto label_238588;
        }
    }
    ctx->pc = 0x238560u;
    // 0x238560: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x238560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x238564: 0x16830006  bne         $s4, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x238564u;
    {
        const bool branch_taken_0x238564 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x238568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238564u;
        // 0x238568: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238564) {
            ctx->pc = 0x238580u;
            goto label_238580;
        }
    }
    ctx->pc = 0x23856Cu;
label_23856c:
    // 0x23856c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x23856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_238570:
    // 0x238570: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x238570u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238574: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x238574u;
    {
        const bool branch_taken_0x238574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238574u;
        // 0x238578: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238574) {
            ctx->pc = 0x238620u;
            goto label_238620;
        }
    }
    ctx->pc = 0x23857Cu;
    // 0x23857c: 0x0  nop
    ctx->pc = 0x23857cu;
    // NOP
label_238580:
    // 0x238580: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x238580u;
    {
        const bool branch_taken_0x238580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238580u;
        // 0x238584: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238580) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238588u;
label_238588:
    // 0x238588: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x238588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23858c: 0x1662ff92  bne         $s3, $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x23858Cu;
    {
        const bool branch_taken_0x23858c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x238590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23858Cu;
        // 0x238590: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23858c) {
            ctx->pc = 0x2383D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2383d8;
        }
    }
    ctx->pc = 0x238594u;
    // 0x238594: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x238594u;
    {
        const bool branch_taken_0x238594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238594u;
        // 0x238598: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238594) {
            ctx->pc = 0x2385E4u;
            goto label_2385e4;
        }
    }
    ctx->pc = 0x23859Cu;
    // 0x23859c: 0x0  nop
    ctx->pc = 0x23859cu;
    // NOP
label_2385a0:
    // 0x2385a0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2385a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2385a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2385a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385a8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2385a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2385ac: 0xc08ea46  jal         func_23A918
    ctx->pc = 0x2385ACu;
    SET_GPR_U32(ctx, 31, 0x2385B4u);
    ctx->pc = 0x2385B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385ACu;
    // 0x2385b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A918u, 0x2385ACu, 0x2385B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385B4u;
label_2385b4:
    // 0x2385b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2385b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2385b8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x2385b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_2385bc:
    // 0x2385bc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2385bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2385c0: 0xc08dca8  jal         func_2372A0
    ctx->pc = 0x2385C0u;
    SET_GPR_U32(ctx, 31, 0x2385C8u);
    ctx->pc = 0x2385C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385C0u;
    // 0x2385c4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2372A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2372A0u, 0x2385C0u, 0x2385C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385C8u;
label_2385c8:
    // 0x2385c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2385c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2385cc: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x2385ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2385d0: 0xa2b40000  sb          $s4, 0x0($s5)
    ctx->pc = 0x2385d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 20));
    // 0x2385d4: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x2385d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2385d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2385D8u;
    {
        const bool branch_taken_0x2385d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2385DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2385D8u;
        // 0x2385dc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2385d8) {
            ctx->pc = 0x2385A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2385a0;
        }
    }
    ctx->pc = 0x2385E0u;
    // 0x2385e0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2385e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2385e4:
    // 0x2385e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2385e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2385e8: 0xc08ebf6  jal         func_23AFD8
    ctx->pc = 0x2385E8u;
    SET_GPR_U32(ctx, 31, 0x2385F0u);
    ctx->pc = 0x2385ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385E8u;
    // 0x2385ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AFD8u, 0x2385E8u, 0x2385F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385F0u;
label_2385f0:
    // 0x2385f0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2385f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2385f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2385f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2385f8: 0xc08ec4c  jal         func_23B130
    ctx->pc = 0x2385F8u;
    SET_GPR_U32(ctx, 31, 0x238600u);
    ctx->pc = 0x2385FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2385F8u;
    // 0x2385fc: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B130u, 0x2385F8u, 0x238600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238600u;
label_238600:
    // 0x238600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x238600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238604: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x238604u;
    {
        const bool branch_taken_0x238604 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x238604) {
            ctx->pc = 0x238608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238604u;
            // 0x238608: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238624u;
            goto label_238624;
        }
    }
    ctx->pc = 0x23860Cu;
    // 0x23860c: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23860Cu;
    {
        const bool branch_taken_0x23860c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x238610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23860Cu;
        // 0x238610: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23860c) {
            ctx->pc = 0x238678u;
            goto label_238678;
        }
    }
    ctx->pc = 0x238614u;
    // 0x238614: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x238614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x238618: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x238618u;
    {
        const bool branch_taken_0x238618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238618) {
            ctx->pc = 0x23861Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238618u;
            // 0x23861c: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23867Cu;
            goto label_23867c;
        }
    }
    ctx->pc = 0x238620u;
label_238620:
    // 0x238620: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x238620u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_238624:
    // 0x238624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238624u;
    {
        const bool branch_taken_0x238624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238624u;
        // 0x238628: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238624) {
            ctx->pc = 0x238640u;
            goto label_238640;
        }
    }
    ctx->pc = 0x23862Cu;
    // 0x23862c: 0x0  nop
    ctx->pc = 0x23862cu;
    // NOP
label_238630:
    // 0x238630: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x238634: 0x52a2000a  beql        $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238634u;
    {
        const bool branch_taken_0x238634 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x238634) {
            ctx->pc = 0x238638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238634u;
            // 0x238638: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238660u;
            goto label_238660;
        }
    }
    ctx->pc = 0x23863Cu;
    // 0x23863c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x23863cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_238640:
    // 0x238640: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x238640u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x238644: 0x0  nop
    ctx->pc = 0x238644u;
    // NOP
    // 0x238648: 0x0  nop
    ctx->pc = 0x238648u;
    // NOP
    // 0x23864c: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23864Cu;
    {
        const bool branch_taken_0x23864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x238650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23864Cu;
        // 0x238650: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23864c) {
            ctx->pc = 0x238630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238630;
        }
    }
    ctx->pc = 0x238654u;
    // 0x238654: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x238654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x238658: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x238658u;
    {
        const bool branch_taken_0x238658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238658u;
        // 0x23865c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238658) {
            ctx->pc = 0x238698u;
            goto label_238698;
        }
    }
    ctx->pc = 0x238660u;
label_238660:
    // 0x238660: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x238660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x238664: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x238668: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x238668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23866c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23866Cu;
    {
        const bool branch_taken_0x23866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23866Cu;
        // 0x238670: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23866c) {
            ctx->pc = 0x23869Cu;
            goto label_23869c;
        }
    }
    ctx->pc = 0x238674u;
    // 0x238674: 0x0  nop
    ctx->pc = 0x238674u;
    // NOP
label_238678:
    // 0x238678: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x238678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_23867c:
    // 0x23867c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x23867cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x238680: 0x0  nop
    ctx->pc = 0x238680u;
    // NOP
    // 0x238684: 0x0  nop
    ctx->pc = 0x238684u;
    // NOP
    // 0x238688: 0x0  nop
    ctx->pc = 0x238688u;
    // NOP
    // 0x23868c: 0x0  nop
    ctx->pc = 0x23868cu;
    // NOP
    // 0x238690: 0x5043fffa  beql        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x238690u;
    {
        const bool branch_taken_0x238690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x238690) {
            ctx->pc = 0x238694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238690u;
            // 0x238694: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23867Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23867c;
        }
    }
    ctx->pc = 0x238698u;
label_238698:
    // 0x238698: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x238698u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23869c:
    // 0x23869c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23869cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2386a0: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2386A0u;
    SET_GPR_U32(ctx, 31, 0x2386A8u);
    ctx->pc = 0x2386A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386A0u;
    // 0x2386a4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2386A0u, 0x2386A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386A8u;
label_2386a8:
    // 0x2386a8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2386a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2386ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2386ACu;
    {
        const bool branch_taken_0x2386ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386ACu;
        // 0x2386b0: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386ac) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x2386B4u;
    // 0x2386b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2386B4u;
    {
        const bool branch_taken_0x2386b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2386B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386B4u;
        // 0x2386b8: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386b4) {
            ctx->pc = 0x2386D0u;
            goto label_2386d0;
        }
    }
    ctx->pc = 0x2386BCu;
    // 0x2386bc: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2386BCu;
    {
        const bool branch_taken_0x2386bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2386C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2386BCu;
        // 0x2386c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2386bc) {
            ctx->pc = 0x2386CCu;
            goto label_2386cc;
        }
    }
    ctx->pc = 0x2386C4u;
    // 0x2386c4: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2386C4u;
    SET_GPR_U32(ctx, 31, 0x2386CCu);
    ctx->pc = 0x2386C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386C4u;
    // 0x2386c8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2386C4u, 0x2386CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386CCu;
label_2386cc:
    // 0x2386cc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2386ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2386d0:
    // 0x2386d0: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2386D0u;
    SET_GPR_U32(ctx, 31, 0x2386D8u);
    ctx->pc = 0x2386D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386D0u;
    // 0x2386d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2386D0u, 0x2386D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386D8u;
label_2386d8:
    // 0x2386d8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2386d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2386dc:
    // 0x2386dc: 0xc08ea3a  jal         func_23A8E8
    ctx->pc = 0x2386DCu;
    SET_GPR_U32(ctx, 31, 0x2386E4u);
    ctx->pc = 0x2386E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2386DCu;
    // 0x2386e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A8E8u, 0x2386DCu, 0x2386E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2386E4u;
label_2386e4:
    // 0x2386e4: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x2386e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2386e8: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2386ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2386ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2386f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2386f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2386f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2386f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2386f8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2386F8u;
    {
        const bool branch_taken_0x2386f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2386f8) {
            ctx->pc = 0x2386FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2386F8u;
            // 0x2386fc: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238700u;
            goto label_238700;
        }
    }
    ctx->pc = 0x238700u;
label_238700:
    // 0x238700: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x238700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_238704:
    // 0x238704: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x238704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238708: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x238708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23870c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23870cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238710: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x238710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x238714: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x238718: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x238718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23871c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23871cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x238720: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x238720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x238724: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x238724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x238728: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x238728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23872c: 0x3e00008  jr          $ra
    ctx->pc = 0x23872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23872Cu;
        // 0x238730: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238734u;
    // 0x238734: 0x0  nop
    ctx->pc = 0x238734u;
    // NOP
    ctx->pc = 0x238738u;
}
