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

// Function: FUN_0019f3d8
// Address: 0x19f3d8 - 0x19f548
void FUN_0019f3d8_0x19f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019f3d8_0x19f3d8");
#endif

    switch (ctx->pc) {
        case 0x19f428u: goto label_19f428;
        case 0x19f440u: goto label_19f440;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4d0u: goto label_19f4d0;
        default: break;
    }

    ctx->pc = 0x19f3d8u;

    // 0x19f3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f3dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f3e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19f3e4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x19f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x19f3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f3ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x19f3f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f3f4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x19f3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x19f3f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19f3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f408: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f40c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x19f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f410: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19f414: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x19f414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x19f418: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19F418u;
    {
        const bool branch_taken_0x19f418 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x58680  sll         $s0, $a1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f418) {
            ctx->pc = 0x19F470u;
            goto label_19f470;
        }
    }
    ctx->pc = 0x19F420u;
    // 0x19f420: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    // 0x19f424: 0x0  nop
    ctx->pc = 0x19f424u;
    // NOP
label_19f428:
    // 0x19f428: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x19f428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f42c: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f430: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F430u;
    {
        const bool branch_taken_0x19f430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F430u;
        // 0x19f434: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f430) {
            ctx->pc = 0x19F444u;
            goto label_19f444;
        }
    }
    ctx->pc = 0x19F438u;
    // 0x19f438: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F438u;
    SET_GPR_U32(ctx, 31, 0x19F440u);
    ctx->pc = 0x19F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F438u;
    // 0x19f43c: 0x8e240858  lw          $a0, 0x858($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F438u, 0x19F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F440u;
label_19f440:
    // 0x19f440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19f440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f444:
    // 0x19f444: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19f444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19f448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19f448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19f44c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x19f44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x19f450: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x19f450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x19f454: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x19f458: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19f45c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x19f460: 0x1045fff1  beq         $v0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x19F460u;
    {
        const bool branch_taken_0x19f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F460u;
        // 0x19f464: 0x3c033000  lui         $v1, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f460) {
            ctx->pc = 0x19F428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f428;
        }
    }
    ctx->pc = 0x19F468u;
    // 0x19f468: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F468u;
    {
        const bool branch_taken_0x19f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f468) {
            ctx->pc = 0x19F47Cu;
            goto label_19f47c;
        }
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x19f470u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
    // 0x19f474: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x19f474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x19f478: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19f47c:
    // 0x19f47c: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x19f480: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x19f480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x19f484: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x19f484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x19f488: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x19f488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x19f48c: 0x26655910  addiu       $a1, $s3, 0x5910
    ctx->pc = 0x19f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22800));
    // 0x19f490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f498: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19f49c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f4a0: 0x4c1000e  bgez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19F4A0u;
    {
        const bool branch_taken_0x19f4a0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x19F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4A0u;
        // 0x19f4a4: 0xae230818  sw          $v1, 0x818($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4a0) {
            ctx->pc = 0x19F4DCu;
            goto label_19f4dc;
        }
    }
    ctx->pc = 0x19F4A8u;
    // 0x19f4a8: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x19f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4ac: 0x36102000  ori         $s0, $s0, 0x2000
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8192);
    // 0x19f4b0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f4b4: 0x0  nop
    ctx->pc = 0x19f4b4u;
    // NOP
label_19f4b8:
    // 0x19f4b8: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x19f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x19f4bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F4BCu;
    {
        const bool branch_taken_0x19f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4BCu;
        // 0x19f4c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4bc) {
            ctx->pc = 0x19F4D0u;
            goto label_19f4d0;
        }
    }
    ctx->pc = 0x19F4C4u;
    // 0x19f4c4: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x19f4c8: 0xc068b26  jal         func_1A2C98
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2C98u, 0x19F4C8u, 0x19F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D0u;
label_19f4d0:
    // 0x19f4d0: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x19f4d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f4d4: 0x4c0fff8  bltz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19F4D4u;
    {
        const bool branch_taken_0x19f4d4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x19F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4D4u;
        // 0x19f4d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4d4) {
            ctx->pc = 0x19F4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f4b8;
        }
    }
    ctx->pc = 0x19F4DCu;
label_19f4dc:
    // 0x19f4dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x19f4e4: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x19f4e4u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x19f4e8: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x19f4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x19f4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x19f4f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x19f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19f4f4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f4f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f4f8: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F4F8u;
    {
        const bool branch_taken_0x19f4f8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4F8u;
        // 0x19f4fc: 0xae230838  sw          $v1, 0x838($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4f8) {
            ctx->pc = 0x19F510u;
            goto label_19f510;
        }
    }
    ctx->pc = 0x19F500u;
    // 0x19f500: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x19f500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19f504: 0x21023  negu        $v0, $v0
    ctx->pc = 0x19f504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19f508: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F508u;
    {
        const bool branch_taken_0x19f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F508u;
        // 0x19f50c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f508) {
            ctx->pc = 0x19F514u;
            goto label_19f514;
        }
    }
    ctx->pc = 0x19F510u;
label_19f510:
    // 0x19f510: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x19f510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_19f514:
    // 0x19f514: 0xae22083c  sw          $v0, 0x83C($s1)
    ctx->pc = 0x19f514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2108), GPR_U32(ctx, 2));
    // 0x19f518: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x19f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x19f51c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19f51cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19f520: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x19f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x19f524: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x19f524u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19f528: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19f528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x19f52c: 0xae23011c  sw          $v1, 0x11C($s1)
    ctx->pc = 0x19f52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 3));
    // 0x19f530: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x19f534: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19f534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f538: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19f538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f53c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f540: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19f540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19f548u;
}
