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

// Function: FUN_0021f500
// Address: 0x21f500 - 0x21f650
void FUN_0021f500_0x21f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021f500_0x21f500");
#endif

    switch (ctx->pc) {
        case 0x21f51cu: goto label_21f51c;
        case 0x21f528u: goto label_21f528;
        case 0x21f59cu: goto label_21f59c;
        case 0x21f5a8u: goto label_21f5a8;
        default: break;
    }

    ctx->pc = 0x21f500u;

    // 0x21f500: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x21f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x21f504: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21f504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f508: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21f50c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21f50cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x21f510: 0x90284910  lbu         $t0, 0x4910($at)
    ctx->pc = 0x21f510u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x334910u));
    // 0x21f514: 0x24e7dab0  addiu       $a3, $a3, -0x2550
    ctx->pc = 0x21f514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957744));
    // 0x21f518: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x21f518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f51c:
    // 0x21f51c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F51Cu;
    {
        const bool branch_taken_0x21f51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F51Cu;
        // 0x21f520: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f51c) {
            ctx->pc = 0x21F570u;
            goto label_21f570;
        }
    }
    ctx->pc = 0x21F524u;
    // 0x21f524: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f528:
    // 0x21f528: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F528u;
    {
        const bool branch_taken_0x21f528 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F528u;
        // 0x21f52c: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f528) {
            ctx->pc = 0x21F53Cu;
            goto label_21f53c;
        }
    }
    ctx->pc = 0x21F530u;
    // 0x21f530: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F530u;
    {
        const bool branch_taken_0x21f530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F530u;
        // 0x21f534: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f530) {
            ctx->pc = 0x21F540u;
            goto label_21f540;
        }
    }
    ctx->pc = 0x21F538u;
    // 0x21f538: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21f53c:
    // 0x21f53c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x21f53cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21f540:
    // 0x21f540: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21f544: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x21f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x21f548: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x21f54c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f550: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x21f554: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f554u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f558: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F558u;
    {
        const bool branch_taken_0x21f558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f558) {
            ctx->pc = 0x21F570u;
            goto label_21f570;
        }
    }
    ctx->pc = 0x21F560u;
    // 0x21f560: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21f560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21f564: 0x144182a  slt         $v1, $t2, $a0
    ctx->pc = 0x21f564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21f568: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21F568u;
    {
        const bool branch_taken_0x21f568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F568u;
        // 0x21f56c: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f568) {
            ctx->pc = 0x21F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f528;
        }
    }
    ctx->pc = 0x21F570u;
label_21f570:
    // 0x21f570: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21f570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21f574: 0x29230008  slti        $v1, $t1, 0x8
    ctx->pc = 0x21f574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21f578: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x21F578u;
    {
        const bool branch_taken_0x21f578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F578u;
        // 0x21f57c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f578) {
            ctx->pc = 0x21F51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f51c;
        }
    }
    ctx->pc = 0x21F580u;
    // 0x21f580: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21f580u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f584: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21f584u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f588: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x21f58c: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x21f58cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
    // 0x21f590: 0x90284910  lbu         $t0, 0x4910($at)
    ctx->pc = 0x21f590u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x334910u));
    // 0x21f594: 0x24e7dab0  addiu       $a3, $a3, -0x2550
    ctx->pc = 0x21f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957744));
    // 0x21f598: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x21f598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_21f59c:
    // 0x21f59c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x21F59Cu;
    {
        const bool branch_taken_0x21f59c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F59Cu;
        // 0x21f5a0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f59c) {
            ctx->pc = 0x21F5F0u;
            goto label_21f5f0;
        }
    }
    ctx->pc = 0x21F5A4u;
    // 0x21f5a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21f5a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21f5a8:
    // 0x21f5a8: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F5A8u;
    {
        const bool branch_taken_0x21f5a8 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x21F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5A8u;
        // 0x21f5ac: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5a8) {
            ctx->pc = 0x21F5BCu;
            goto label_21f5bc;
        }
    }
    ctx->pc = 0x21F5B0u;
    // 0x21f5b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F5B0u;
    {
        const bool branch_taken_0x21f5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x330c0  sll         $a2, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5b0) {
            ctx->pc = 0x21F5C0u;
            goto label_21f5c0;
        }
    }
    ctx->pc = 0x21F5B8u;
    // 0x21f5b8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21f5bc:
    // 0x21f5bc: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x21f5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_21f5c0:
    // 0x21f5c0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x21f5c4: 0xaa1821  addu        $v1, $a1, $t2
    ctx->pc = 0x21f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x21f5c8: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x21f5cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21f5d0: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x21f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x21f5d4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x21f5d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21f5d8: 0x10c30005  beq         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F5D8u;
    {
        const bool branch_taken_0x21f5d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f5d8) {
            ctx->pc = 0x21F5F0u;
            goto label_21f5f0;
        }
    }
    ctx->pc = 0x21F5E0u;
    // 0x21f5e0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x21f5e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x21f5e4: 0x184182a  slt         $v1, $t4, $a0
    ctx->pc = 0x21f5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21f5e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21F5E8u;
    {
        const bool branch_taken_0x21f5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E8u;
        // 0x21f5ec: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e8) {
            ctx->pc = 0x21F5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f5a8;
        }
    }
    ctx->pc = 0x21F5F0u;
label_21f5f0:
    // 0x21f5f0: 0x15840012  bne         $t4, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21F5F0u;
    {
        const bool branch_taken_0x21f5f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        if (branch_taken_0x21f5f0) {
            ctx->pc = 0x21F63Cu;
            goto label_21f63c;
        }
    }
    ctx->pc = 0x21F5F8u;
    // 0x21f5f8: 0x1520000f  bnez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x21F5F8u;
    {
        const bool branch_taken_0x21f5f8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5F8u;
        // 0x21f5fc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5f8) {
            ctx->pc = 0x21F638u;
            goto label_21f638;
        }
    }
    ctx->pc = 0x21F600u;
    // 0x21f600: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x21f600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
    // 0x21f604: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F604u;
    {
        const bool branch_taken_0x21f604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F604u;
        // 0x21f608: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f604) {
            ctx->pc = 0x21F618u;
            goto label_21f618;
        }
    }
    ctx->pc = 0x21F60Cu;
    // 0x21f60c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F60Cu;
    {
        const bool branch_taken_0x21f60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F60Cu;
        // 0x21f610: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f60c) {
            ctx->pc = 0x21F61Cu;
            goto label_21f61c;
        }
    }
    ctx->pc = 0x21F614u;
    // 0x21f614: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x21f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_21f618:
    // 0x21f618: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x21f618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_21f61c:
    // 0x21f61c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x21f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x21f620: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x21f624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21f628: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x21f62c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x21f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x21f630: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21F630u;
    {
        const bool branch_taken_0x21f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F630u;
        // 0x21f634: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f630) {
            ctx->pc = 0x21F650u;
            return;
        }
    }
    ctx->pc = 0x21F638u;
label_21f638:
    // 0x21f638: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x21f638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21f63c:
    // 0x21f63c: 0x0  nop
    ctx->pc = 0x21f63cu;
    // NOP
    // 0x21f640: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x21f640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x21f644: 0x29630008  slti        $v1, $t3, 0x8
    ctx->pc = 0x21f644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x21f648: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x21F648u;
    {
        const bool branch_taken_0x21f648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F648u;
        // 0x21f64c: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f648) {
            ctx->pc = 0x21F59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21f59c;
        }
    }
    ctx->pc = 0x21F650u;
}
