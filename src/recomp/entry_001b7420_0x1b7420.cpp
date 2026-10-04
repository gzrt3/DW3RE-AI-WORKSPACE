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

// Function: entry_001b7420
// Address: 0x1b7420 - 0x1b75d0
void entry_001b7420_0x1b7420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7420_0x1b7420");
#endif

    switch (ctx->pc) {
        case 0x1b7468u: goto label_1b7468;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b7540u: goto label_1b7540;
        default: break;
    }

    ctx->pc = 0x1b7420u;

    // 0x1b7420: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1B7420u;
    {
        const bool branch_taken_0x1b7420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7420u;
        // 0x1b7424: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7420) {
            ctx->pc = 0x1B75C4u;
            goto label_1b75c4;
        }
    }
    ctx->pc = 0x1B7428u;
    // 0x1b7428: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x1b7428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1b742c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1b742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b7430: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1b7430u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1b7434: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1b7434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b7438: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1b7438u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b743c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b743cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b7440: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b7440u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b7444: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1b7444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1b7448: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B7448u;
    {
        const bool branch_taken_0x1b7448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7448u;
        // 0x1b744c: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7448) {
            ctx->pc = 0x1B74C0u;
            goto label_1b74c0;
        }
    }
    ctx->pc = 0x1B7450u;
    // 0x1b7450: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b7450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b7454: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7454u;
    {
        const bool branch_taken_0x1b7454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7454u;
        // 0x1b7458: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7454) {
            ctx->pc = 0x1B748Cu;
            goto label_1b748c;
        }
    }
    ctx->pc = 0x1B745Cu;
    // 0x1b745c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b745cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7460: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1b7460u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1b7464: 0x0  nop
    ctx->pc = 0x1b7464u;
    // NOP
label_1b7468:
    // 0x1b7468: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x1b7468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x1b746c: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x1b746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1b7470: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b7470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b7474: 0x0  nop
    ctx->pc = 0x1b7474u;
    // NOP
    // 0x1b7478: 0x0  nop
    ctx->pc = 0x1b7478u;
    // NOP
    // 0x1b747c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B747Cu;
    {
        const bool branch_taken_0x1b747c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B747Cu;
        // 0x1b7480: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b747c) {
            ctx->pc = 0x1B7468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7468;
        }
    }
    ctx->pc = 0x1B7484u;
    // 0x1b7484: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7488: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1b7488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1b748c:
    // 0x1b748c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B748Cu;
    {
        const bool branch_taken_0x1b748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b748c) {
            ctx->pc = 0x1B7490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B748Cu;
            // 0x1b7490: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74E0u;
            goto label_1b74e0;
        }
    }
    ctx->pc = 0x1B7494u;
    // 0x1b7494: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1b7494u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7498:
    // 0x1b7498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1b7498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1b749c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x1b749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x1b74a0: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x1b74a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x1b74a4: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x1b74a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1b74a8: 0x0  nop
    ctx->pc = 0x1b74a8u;
    // NOP
    // 0x1b74ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B74ACu;
    {
        const bool branch_taken_0x1b74ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74ACu;
        // 0x1b74b0: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74ac) {
            ctx->pc = 0x1B7498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7498;
        }
    }
    ctx->pc = 0x1B74B4u;
    // 0x1b74b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B74B4u;
    {
        const bool branch_taken_0x1b74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74B4u;
        // 0x1b74b8: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74b4) {
            ctx->pc = 0x1B74E0u;
            goto label_1b74e0;
        }
    }
    ctx->pc = 0x1B74BCu;
    // 0x1b74bc: 0x0  nop
    ctx->pc = 0x1b74bcu;
    // NOP
label_1b74c0:
    // 0x1b74c0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b74c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b74c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B74C4u;
    {
        const bool branch_taken_0x1b74c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b74c4) {
            ctx->pc = 0x1B74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74C4u;
            // 0x1b74c8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74D8u;
            goto label_1b74d8;
        }
    }
    ctx->pc = 0x1B74CCu;
    // 0x1b74cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B74CCu;
    {
        const bool branch_taken_0x1b74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74CCu;
        // 0x1b74d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74cc) {
            ctx->pc = 0x1B74DCu;
            goto label_1b74dc;
        }
    }
    ctx->pc = 0x1B74D4u;
    // 0x1b74d4: 0x0  nop
    ctx->pc = 0x1b74d4u;
    // NOP
label_1b74d8:
    // 0x1b74d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b74d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b74dc:
    // 0x1b74dc: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1b74e0:
    // 0x1b74e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b74e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b74e4: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B74E4u;
    {
        const bool branch_taken_0x1b74e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E4u;
        // 0x1b74e8: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74e4) {
            ctx->pc = 0x1B7578u;
            goto label_1b7578;
        }
    }
    ctx->pc = 0x1B74ECu;
    // 0x1b74ec: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x1b74ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x1b74f0: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1b74f0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1b74f4: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B74F4u;
    {
        const bool branch_taken_0x1b74f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1b74f4) {
            ctx->pc = 0x1B74F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74F4u;
            // 0x1b74f8: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7510u;
            goto label_1b7510;
        }
    }
    ctx->pc = 0x1B74FCu;
    // 0x1b74fc: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1b7500: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b7500u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1b7504: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7504u;
    {
        const bool branch_taken_0x1b7504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7504u;
        // 0x1b7508: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7504) {
            ctx->pc = 0x1B7520u;
            goto label_1b7520;
        }
    }
    ctx->pc = 0x1B750Cu;
    // 0x1b750c: 0x0  nop
    ctx->pc = 0x1b750cu;
    // NOP
label_1b7510:
    // 0x1b7510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7514: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1b7514u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1b7518: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b7518u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1b751c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b751cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_1b7520:
    // 0x1b7520: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x1b7520u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1b7524: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7528: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x1b7528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x1b752c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1b752cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1b7530: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x1b7530u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x1b7534: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b7534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7538: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B7538u;
    {
        const bool branch_taken_0x1b7538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7538) {
            ctx->pc = 0x1B758Cu;
            goto label_1b758c;
        }
    }
    ctx->pc = 0x1B7540u;
label_1b7540:
    // 0x1b7540: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x1b7540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x1b7544: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b7544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b7548: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1b7548u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1b754c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7550: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1b7550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1b7554: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x1b7554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x1b7558: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b755c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7560: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1b7560u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1b7564: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b7564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7568: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B7568u;
    {
        const bool branch_taken_0x1b7568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7568u;
        // 0x1b756c: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7568) {
            ctx->pc = 0x1B7540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7540;
        }
    }
    ctx->pc = 0x1B7570u;
    // 0x1b7570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7570u;
    {
        const bool branch_taken_0x1b7570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7570) {
            ctx->pc = 0x1B758Cu;
            goto label_1b758c;
        }
    }
    ctx->pc = 0x1B7578u;
label_1b7578:
    // 0x1b7578: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1b7578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1b757c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1b757cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1b7580: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1b7580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1b7584: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b7584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7588: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1b7588u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1b758c:
    // 0x1b758c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7590: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1b7590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1b7594: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7598: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x1b7598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b759c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B759Cu;
    {
        const bool branch_taken_0x1b759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B759Cu;
        // 0x1b75a0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b759c) {
            ctx->pc = 0x1B75C0u;
            goto label_1b75c0;
        }
    }
    ctx->pc = 0x1B75A4u;
    // 0x1b75a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b75a8: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x1b75a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x1b75ac: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1b75acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1b75b0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b75b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b75b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b75b8: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x1b75b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x1b75bc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1b75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1b75c0:
    // 0x1b75c0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1b75c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b75c4:
    // 0x1b75c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B75C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B75CCu;
    // 0x1b75cc: 0x0  nop
    ctx->pc = 0x1b75ccu;
    // NOP
    ctx->pc = 0x1b75d0u;
}
