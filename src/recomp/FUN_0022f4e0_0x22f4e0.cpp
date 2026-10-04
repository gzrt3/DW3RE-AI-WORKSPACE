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

// Function: FUN_0022f4e0
// Address: 0x22f4e0 - 0x22f9d8
void FUN_0022f4e0_0x22f4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022f4e0_0x22f4e0");
#endif

    switch (ctx->pc) {
        case 0x22f510u: goto label_22f510;
        case 0x22f570u: goto label_22f570;
        case 0x22f5d4u: goto label_22f5d4;
        case 0x22f620u: goto label_22f620;
        case 0x22f640u: goto label_22f640;
        case 0x22f688u: goto label_22f688;
        case 0x22f690u: goto label_22f690;
        case 0x22f6b0u: goto label_22f6b0;
        case 0x22f6fcu: goto label_22f6fc;
        case 0x22f704u: goto label_22f704;
        case 0x22f728u: goto label_22f728;
        case 0x22f770u: goto label_22f770;
        case 0x22f778u: goto label_22f778;
        case 0x22f79cu: goto label_22f79c;
        case 0x22f7ecu: goto label_22f7ec;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f820u: goto label_22f820;
        case 0x22f844u: goto label_22f844;
        case 0x22f890u: goto label_22f890;
        case 0x22f898u: goto label_22f898;
        case 0x22f8bcu: goto label_22f8bc;
        case 0x22f90cu: goto label_22f90c;
        case 0x22f914u: goto label_22f914;
        case 0x22f930u: goto label_22f930;
        case 0x22f93cu: goto label_22f93c;
        case 0x22f97cu: goto label_22f97c;
        case 0x22f988u: goto label_22f988;
        case 0x22f9d4u: goto label_22f9d4;
        default: break;
    }

    ctx->pc = 0x22f4e0u;

    // 0x22f4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f4e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f4ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f4f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4f4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22f4f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22f4fc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f500: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x22f504: 0x344935fc  ori         $t1, $v0, 0x35FC
    ctx->pc = 0x22f504u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13820);
    // 0x22f508: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x22f50c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f510:
    // 0x22f510: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f514: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x22f518: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x22f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x22f51c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f520: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F520u;
    {
        const bool branch_taken_0x22f520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F520u;
        // 0x22f524: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f520) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F528u;
    // 0x22f528: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f52c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F52Cu;
    {
        const bool branch_taken_0x22f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f52c) {
            ctx->pc = 0x22F538u;
            goto label_22f538;
        }
    }
    ctx->pc = 0x22F534u;
    // 0x22f534: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f538:
    // 0x22f538: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f53c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f53cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f540: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F540u;
    {
        const bool branch_taken_0x22f540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F540u;
        // 0x22f544: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f540) {
            ctx->pc = 0x22F510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f510;
        }
    }
    ctx->pc = 0x22F548u;
    // 0x22f548: 0x18c00035  blez        $a2, . + 4 + (0x35 << 2)
    ctx->pc = 0x22F548u;
    {
        const bool branch_taken_0x22f548 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F548u;
        // 0x22f54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f548) {
            ctx->pc = 0x22F620u;
            goto label_22f620;
        }
    }
    ctx->pc = 0x22F550u;
    // 0x22f550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f558: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f55c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f560: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f568: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f56c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f570:
    // 0x22f570: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f574: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f578: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f578u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f57c: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f580: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F580u;
    {
        const bool branch_taken_0x22f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F580u;
        // 0x22f584: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f580) {
            ctx->pc = 0x22F598u;
            goto label_22f598;
        }
    }
    ctx->pc = 0x22F588u;
    // 0x22f588: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f58c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F598u;
            goto label_22f598;
        }
    }
    ctx->pc = 0x22F594u;
    // 0x22f594: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f598:
    // 0x22f598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f59c: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f5a0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F5A0u;
    {
        const bool branch_taken_0x22f5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A0u;
        // 0x22f5a4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a0) {
            ctx->pc = 0x22F570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f570;
        }
    }
    ctx->pc = 0x22F5A8u;
    // 0x22f5a8: 0x18e0001e  blez        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x22F5A8u;
    {
        const bool branch_taken_0x22f5a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5A8u;
        // 0x22f5ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5a8) {
            ctx->pc = 0x22F624u;
            goto label_22f624;
        }
    }
    ctx->pc = 0x22F5B0u;
    // 0x22f5b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5bc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f5c0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f5c4: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f5cc: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f5d0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f5d4:
    // 0x22f5d4: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f5d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f5dc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f5e0: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f5e4: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F5E4u;
    {
        const bool branch_taken_0x22f5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5E4u;
        // 0x22f5e8: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5e4) {
            ctx->pc = 0x22F5FCu;
            goto label_22f5fc;
        }
    }
    ctx->pc = 0x22F5ECu;
    // 0x22f5ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f5f0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F5F0u;
    {
        const bool branch_taken_0x22f5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f5f0) {
            ctx->pc = 0x22F5FCu;
            goto label_22f5fc;
        }
    }
    ctx->pc = 0x22F5F8u;
    // 0x22f5f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f5fc:
    // 0x22f5fc: 0x0  nop
    ctx->pc = 0x22f5fcu;
    // NOP
    // 0x22f600: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f604: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f608: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F608u;
    {
        const bool branch_taken_0x22f608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F608u;
        // 0x22f60c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f608) {
            ctx->pc = 0x22F5D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f5d4;
        }
    }
    ctx->pc = 0x22F610u;
    // 0x22f610: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F610u;
    {
        const bool branch_taken_0x22f610 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x22f610) {
            ctx->pc = 0x22F620u;
            goto label_22f620;
        }
    }
    ctx->pc = 0x22F618u;
    // 0x22f618: 0xc090208  jal         func_240820
    ctx->pc = 0x22F618u;
    SET_GPR_U32(ctx, 31, 0x22F620u);
    ctx->pc = 0x240820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240820u, 0x22F618u, 0x22F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F620u;
label_22f620:
    // 0x22f620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f624:
    // 0x22f624: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f62c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22f630: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f634: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x22f638: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x22f63c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f640:
    // 0x22f640: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f644: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f648: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f648u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f64c: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f650: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F650u;
    {
        const bool branch_taken_0x22f650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f650) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F658u;
    // 0x22f658: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f65c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F65Cu;
    {
        const bool branch_taken_0x22f65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f65c) {
            ctx->pc = 0x22F668u;
            goto label_22f668;
        }
    }
    ctx->pc = 0x22F664u;
    // 0x22f664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f668:
    // 0x22f668: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f66c: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f670: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F670u;
    {
        const bool branch_taken_0x22f670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F670u;
        // 0x22f674: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f670) {
            ctx->pc = 0x22F640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f640;
        }
    }
    ctx->pc = 0x22F678u;
    // 0x22f678: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F678u;
    {
        const bool branch_taken_0x22f678 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x22F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F678u;
        // 0x22f67c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f678) {
            ctx->pc = 0x22F690u;
            goto label_22f690;
        }
    }
    ctx->pc = 0x22F680u;
    // 0x22f680: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F680u;
    SET_GPR_U32(ctx, 31, 0x22F688u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F680u, 0x22F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F688u;
label_22f688:
    // 0x22f688: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F688u;
    SET_GPR_U32(ctx, 31, 0x22F690u);
    ctx->pc = 0x22F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F688u;
    // 0x22f68c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F688u, 0x22F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F690u;
label_22f690:
    // 0x22f690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f694: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f698: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f69c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x22f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x22f6a0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22f6a4: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x22f6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x22f6a8: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x22f6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
    // 0x22f6ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f6b0:
    // 0x22f6b0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x22f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x22f6b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f6b8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f6bc: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f6c0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0x671021  addu        $v0, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F6D8u;
            goto label_22f6d8;
        }
    }
    ctx->pc = 0x22F6C8u;
    // 0x22f6c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f6cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F6D8u;
            goto label_22f6d8;
        }
    }
    ctx->pc = 0x22F6D4u;
    // 0x22f6d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22f6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_22f6d8:
    // 0x22f6d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22f6dc: 0x28e20029  slti        $v0, $a3, 0x29
    ctx->pc = 0x22f6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f6e0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F6E0u;
    {
        const bool branch_taken_0x22f6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6E0u;
        // 0x22f6e4: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e0) {
            ctx->pc = 0x22F6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f6b0;
        }
    }
    ctx->pc = 0x22F6E8u;
    // 0x22f6e8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x22f6e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f6ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F6ECu;
    {
        const bool branch_taken_0x22f6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6ECu;
        // 0x22f6f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6ec) {
            ctx->pc = 0x22F708u;
            goto label_22f708;
        }
    }
    ctx->pc = 0x22F6F4u;
    // 0x22f6f4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F6F4u;
    SET_GPR_U32(ctx, 31, 0x22F6FCu);
    ctx->pc = 0x22F6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6F4u;
    // 0x22f6f8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F6F4u, 0x22F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6FCu;
label_22f6fc:
    // 0x22f6fc: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F6FCu;
    SET_GPR_U32(ctx, 31, 0x22F704u);
    ctx->pc = 0x22F700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6FCu;
    // 0x22f700: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F6FCu, 0x22F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F704u;
label_22f704:
    // 0x22f704: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f704u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f708:
    // 0x22f708: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f708u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f70c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f70cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f710: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f714: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f714u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f718: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f720: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f724: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f728:
    // 0x22f728: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f72c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f730: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f730u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f734: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f738: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F738u;
    {
        const bool branch_taken_0x22f738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f738) {
            ctx->pc = 0x22F750u;
            goto label_22f750;
        }
    }
    ctx->pc = 0x22F740u;
    // 0x22f740: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f740u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f744: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F744u;
    {
        const bool branch_taken_0x22f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f744) {
            ctx->pc = 0x22F750u;
            goto label_22f750;
        }
    }
    ctx->pc = 0x22F74Cu;
    // 0x22f74c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f750:
    // 0x22f750: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f754: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f758: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x22F758u;
    {
        const bool branch_taken_0x22f758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F758u;
        // 0x22f75c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f758) {
            ctx->pc = 0x22F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f728;
        }
    }
    ctx->pc = 0x22F760u;
    // 0x22f760: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F760u;
    {
        const bool branch_taken_0x22f760 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F760u;
        // 0x22f764: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f760) {
            ctx->pc = 0x22F778u;
            goto label_22f778;
        }
    }
    ctx->pc = 0x22F768u;
    // 0x22f768: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F768u;
    SET_GPR_U32(ctx, 31, 0x22F770u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F768u, 0x22F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F770u;
label_22f770:
    // 0x22f770: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F770u;
    SET_GPR_U32(ctx, 31, 0x22F778u);
    ctx->pc = 0x22F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F770u;
    // 0x22f774: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F770u, 0x22F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F778u;
label_22f778:
    // 0x22f778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f784: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f788: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f78c: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f794: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f798: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f79c:
    // 0x22f79c: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f7a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f7a4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f7a8: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f7ac: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7ACu;
    {
        const bool branch_taken_0x22f7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7ACu;
        // 0x22f7b0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7ac) {
            ctx->pc = 0x22F7C4u;
            goto label_22f7c4;
        }
    }
    ctx->pc = 0x22F7B4u;
    // 0x22f7b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f7b8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F7B8u;
    {
        const bool branch_taken_0x22f7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f7b8) {
            ctx->pc = 0x22F7C4u;
            goto label_22f7c4;
        }
    }
    ctx->pc = 0x22F7C0u;
    // 0x22f7c0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f7c4:
    // 0x22f7c4: 0x0  nop
    ctx->pc = 0x22f7c4u;
    // NOP
    // 0x22f7c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f7cc: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f7ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f7d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F7D0u;
    {
        const bool branch_taken_0x22f7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7D0u;
        // 0x22f7d4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f7d0) {
            ctx->pc = 0x22F79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f79c;
        }
    }
    ctx->pc = 0x22F7D8u;
    // 0x22f7d8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f7dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F7DCu;
    {
        const bool branch_taken_0x22f7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f7dc) {
            ctx->pc = 0x22F7F4u;
            goto label_22f7f4;
        }
    }
    ctx->pc = 0x22F7E4u;
    // 0x22f7e4: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F7E4u;
    SET_GPR_U32(ctx, 31, 0x22F7ECu);
    ctx->pc = 0x22F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7E4u;
    // 0x22f7e8: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F7E4u, 0x22F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7ECu;
label_22f7ec:
    // 0x22f7ec: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F7ECu;
    SET_GPR_U32(ctx, 31, 0x22F7F4u);
    ctx->pc = 0x22F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F7ECu;
    // 0x22f7f0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F7ECu, 0x22F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7F4u;
label_22f7f4:
    // 0x22f7f4: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f7f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f7fc: 0x8c22001c  lw          $v0, 0x1C($at)
    ctx->pc = 0x22f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B001Cu));
    // 0x22f800: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F800u;
    {
        const bool branch_taken_0x22f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F800u;
        // 0x22f804: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f800) {
            ctx->pc = 0x22F818u;
            goto label_22f818;
        }
    }
    ctx->pc = 0x22F808u;
    // 0x22f808: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f80c: 0x8c220304  lw          $v0, 0x304($at)
    ctx->pc = 0x22f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B0304u));
    // 0x22f810: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F810u;
    {
        const bool branch_taken_0x22f810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F810u;
        // 0x22f814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f810) {
            ctx->pc = 0x22F824u;
            goto label_22f824;
        }
    }
    ctx->pc = 0x22F818u;
label_22f818:
    // 0x22f818: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F818u;
    SET_GPR_U32(ctx, 31, 0x22F820u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F818u, 0x22F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F820u;
label_22f820:
    // 0x22f820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22f824:
    // 0x22f824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f828: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f82c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f830: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f834: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f838: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f83c: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f840: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f844:
    // 0x22f844: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f848: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f84c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f84cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f850: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f854: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F854u;
    {
        const bool branch_taken_0x22f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F854u;
        // 0x22f858: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f854) {
            ctx->pc = 0x22F86Cu;
            goto label_22f86c;
        }
    }
    ctx->pc = 0x22F85Cu;
    // 0x22f85c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f860: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F860u;
    {
        const bool branch_taken_0x22f860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f860) {
            ctx->pc = 0x22F86Cu;
            goto label_22f86c;
        }
    }
    ctx->pc = 0x22F868u;
    // 0x22f868: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f86c:
    // 0x22f86c: 0x0  nop
    ctx->pc = 0x22f86cu;
    // NOP
    // 0x22f870: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f874: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f878: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F878u;
    {
        const bool branch_taken_0x22f878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F878u;
        // 0x22f87c: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f878) {
            ctx->pc = 0x22F844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f844;
        }
    }
    ctx->pc = 0x22F880u;
    // 0x22f880: 0x18e00005  blez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F880u;
    {
        const bool branch_taken_0x22f880 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F880u;
        // 0x22f884: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f880) {
            ctx->pc = 0x22F898u;
            goto label_22f898;
        }
    }
    ctx->pc = 0x22F888u;
    // 0x22f888: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F888u;
    SET_GPR_U32(ctx, 31, 0x22F890u);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F888u, 0x22F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F890u;
label_22f890:
    // 0x22f890: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F890u;
    SET_GPR_U32(ctx, 31, 0x22F898u);
    ctx->pc = 0x22F894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F890u;
    // 0x22f894: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F890u, 0x22F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F898u;
label_22f898:
    // 0x22f898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22f89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22f8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f8a4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x22f8a8: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22f8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22f8ac: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x22f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x22f8b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f8b4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x22f8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x22f8b8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22f8bc:
    // 0x22f8bc: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x22f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x22f8c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x22f8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x22f8c4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x22f8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x22f8c8: 0x8c2235fc  lw          $v0, 0x35FC($at)
    ctx->pc = 0x22f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13820)));
    // 0x22f8cc: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F8CCu;
    {
        const bool branch_taken_0x22f8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x22F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8CCu;
        // 0x22f8d0: 0x881021  addu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8cc) {
            ctx->pc = 0x22F8E4u;
            goto label_22f8e4;
        }
    }
    ctx->pc = 0x22F8D4u;
    // 0x22f8d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x22f8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f8d8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F8D8u;
    {
        const bool branch_taken_0x22f8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f8d8) {
            ctx->pc = 0x22F8E4u;
            goto label_22f8e4;
        }
    }
    ctx->pc = 0x22F8E0u;
    // 0x22f8e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22f8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22f8e4:
    // 0x22f8e4: 0x0  nop
    ctx->pc = 0x22f8e4u;
    // NOP
    // 0x22f8e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22f8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x22f8ec: 0x29020029  slti        $v0, $t0, 0x29
    ctx->pc = 0x22f8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x22f8f0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x22F8F0u;
    {
        const bool branch_taken_0x22f8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8F0u;
        // 0x22f8f4: 0x25290018  addiu       $t1, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8f0) {
            ctx->pc = 0x22F8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F8F8u;
    // 0x22f8f8: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x22f8f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f8fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F914u;
            goto label_22f914;
        }
    }
    ctx->pc = 0x22F904u;
    // 0x22f904: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F904u;
    SET_GPR_U32(ctx, 31, 0x22F90Cu);
    ctx->pc = 0x22F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F904u;
    // 0x22f908: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F904u, 0x22F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F90Cu;
label_22f90c:
    // 0x22f90c: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F90Cu;
    SET_GPR_U32(ctx, 31, 0x22F914u);
    ctx->pc = 0x22F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F90Cu;
    // 0x22f910: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F90Cu, 0x22F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F914u;
label_22f914:
    // 0x22f914: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f918: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x22f918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f91c: 0x8c23007c  lw          $v1, 0x7C($at)
    ctx->pc = 0x22f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B007Cu));
    // 0x22f920: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F920u;
    {
        const bool branch_taken_0x22f920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F920u;
        // 0x22f924: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f920) {
            ctx->pc = 0x22F934u;
            goto label_22f934;
        }
    }
    ctx->pc = 0x22F928u;
    // 0x22f928: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F928u;
    SET_GPR_U32(ctx, 31, 0x22F930u);
    ctx->pc = 0x22F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F928u;
    // 0x22f92c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F928u, 0x22F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F930u;
label_22f930:
    // 0x22f930: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22f930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22f934:
    // 0x22f934: 0xc0901c0  jal         func_240700
    ctx->pc = 0x22F934u;
    SET_GPR_U32(ctx, 31, 0x22F93Cu);
    ctx->pc = 0x240700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240700u, 0x22F934u, 0x22F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F93Cu;
label_22f93c:
    // 0x22f93c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x22F93Cu;
    {
        const bool branch_taken_0x22f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F93Cu;
        // 0x22f940: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f93c) {
            ctx->pc = 0x22F980u;
            goto label_22f980;
        }
    }
    ctx->pc = 0x22F944u;
    // 0x22f944: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f948: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x22f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f94c: 0x8c220094  lw          $v0, 0x94($at)
    ctx->pc = 0x22f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B0094u));
    // 0x22f950: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x22F950u;
    {
        const bool branch_taken_0x22f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F950u;
        // 0x22f954: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f950) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F958u;
    // 0x22f958: 0x8c2200f4  lw          $v0, 0xF4($at)
    ctx->pc = 0x22f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 244)));
    // 0x22f95c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F964u;
    // 0x22f964: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f968: 0x8c2200dc  lw          $v0, 0xDC($at)
    ctx->pc = 0x22f968u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x2B00DCu));
    // 0x22f96c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F96Cu;
    {
        const bool branch_taken_0x22f96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F96Cu;
        // 0x22f970: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f96c) {
            ctx->pc = 0x22F97Cu;
            goto label_22f97c;
        }
    }
    ctx->pc = 0x22F974u;
    // 0x22f974: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F974u;
    SET_GPR_U32(ctx, 31, 0x22F97Cu);
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F974u, 0x22F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F97Cu;
label_22f97c:
    // 0x22f97c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x22f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22f980:
    // 0x22f980: 0xc0901c0  jal         func_240700
    ctx->pc = 0x22F980u;
    SET_GPR_U32(ctx, 31, 0x22F988u);
    ctx->pc = 0x240700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240700u, 0x22F980u, 0x22F988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F988u;
label_22f988:
    // 0x22f988: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x22F988u;
    {
        const bool branch_taken_0x22f988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F988u;
        // 0x22f98c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f988) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F990u;
    // 0x22f990: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22f994: 0x8c23025c  lw          $v1, 0x25C($at)
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 604)));
    // 0x22f998: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22F998u;
    {
        const bool branch_taken_0x22f998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f998) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9A0u;
    // 0x22f9a0: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f9a4: 0x8c2300c4  lw          $v1, 0xC4($at)
    ctx->pc = 0x22f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B00C4u));
    // 0x22f9a8: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22F9A8u;
    {
        const bool branch_taken_0x22f9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x22F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9A8u;
        // 0x22f9ac: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f9a8) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9B0u;
    // 0x22f9b0: 0x8c230304  lw          $v1, 0x304($at)
    ctx->pc = 0x22f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 772)));
    // 0x22f9b4: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F9B4u;
    {
        const bool branch_taken_0x22f9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9b4) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9BCu;
    // 0x22f9bc: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x22f9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x22f9c0: 0x8c23031c  lw          $v1, 0x31C($at)
    ctx->pc = 0x22f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B031Cu));
    // 0x22f9c4: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F9C4u;
    {
        const bool branch_taken_0x22f9c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22f9c4) {
            ctx->pc = 0x22F9D4u;
            goto label_22f9d4;
        }
    }
    ctx->pc = 0x22F9CCu;
    // 0x22f9cc: 0xc09018c  jal         func_240630
    ctx->pc = 0x22F9CCu;
    SET_GPR_U32(ctx, 31, 0x22F9D4u);
    ctx->pc = 0x22F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9CCu;
    // 0x22f9d0: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240630u, 0x22F9CCu, 0x22F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9D4u;
label_22f9d4:
    // 0x22f9d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f9d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x22f9d8u;
}
