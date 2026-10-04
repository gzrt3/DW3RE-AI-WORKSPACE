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

// Function: FUN_0019e438
// Address: 0x19e438 - 0x19e540
void FUN_0019e438_0x19e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019e438_0x19e438");
#endif

    switch (ctx->pc) {
        case 0x19e480u: goto label_19e480;
        case 0x19e488u: goto label_19e488;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e500u: goto label_19e500;
        default: break;
    }

    ctx->pc = 0x19e438u;

    // 0x19e438: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19e43c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x19e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x19e440: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x19e440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x19e444: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e448: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x19e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x19e44c: 0x24160022  addiu       $s6, $zero, 0x22
    ctx->pc = 0x19e44cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19e450: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19e450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x19e454: 0x24150023  addiu       $s5, $zero, 0x23
    ctx->pc = 0x19e454u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x19e458: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19e458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x19e45c: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x19e45cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x19e460: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19e460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e464: 0x2413000f  addiu       $s3, $zero, 0xF
    ctx->pc = 0x19e464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19e468: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19e468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e46c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19e46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e470: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19e470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19e474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19e474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e47c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e480:
    // 0x19e480: 0xc067cf6  jal         func_19F3D8
    ctx->pc = 0x19E480u;
    SET_GPR_U32(ctx, 31, 0x19E488u);
    ctx->pc = 0x19E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E480u;
    // 0x19e484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3D8u, 0x19E480u, 0x19E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E488u;
label_19e488:
    // 0x19e488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e48c: 0x12160017  beq         $s0, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x19E48Cu;
    {
        const bool branch_taken_0x19e48c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        ctx->pc = 0x19E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E48Cu;
        // 0x19e490: 0x2e020023  sltiu       $v0, $s0, 0x23 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e48c) {
            ctx->pc = 0x19E4ECu;
            goto label_19e4ec;
        }
    }
    ctx->pc = 0x19E494u;
    // 0x19e494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E494u;
    {
        const bool branch_taken_0x19e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e494) {
            ctx->pc = 0x19E4ACu;
            goto label_19e4ac;
        }
    }
    ctx->pc = 0x19E49Cu;
    // 0x19e49c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E49Cu;
    {
        const bool branch_taken_0x19e49c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E49Cu;
        // 0x19e4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e49c) {
            ctx->pc = 0x19E4C0u;
            goto label_19e4c0;
        }
    }
    ctx->pc = 0x19E4A4u;
    // 0x19e4a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19E4A4u;
    {
        const bool branch_taken_0x19e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4a4) {
            ctx->pc = 0x19E50Cu;
            goto label_19e50c;
        }
    }
    ctx->pc = 0x19E4ACu;
label_19e4ac:
    // 0x19e4ac: 0x56150017  bnel        $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x19E4ACu;
    {
        const bool branch_taken_0x19e4ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x19e4ac) {
            ctx->pc = 0x19E4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E4ACu;
            // 0x19e4b0: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E50Cu;
            goto label_19e50c;
        }
    }
    ctx->pc = 0x19E4B4u;
    // 0x19e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e4b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19E4B8u;
    {
        const bool branch_taken_0x19e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B8u;
        // 0x19e4bc: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b8) {
            ctx->pc = 0x19E510u;
            goto label_19e510;
        }
    }
    ctx->pc = 0x19E4C0u;
label_19e4c0:
    // 0x19e4c0: 0xc067d54  jal         func_19F550
    ctx->pc = 0x19E4C0u;
    SET_GPR_U32(ctx, 31, 0x19E4C8u);
    ctx->pc = 0x19E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4C0u;
    // 0x19e4c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F550u, 0x19E4C0u, 0x19E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4C8u;
label_19e4c8:
    // 0x19e4c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19e4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4cc: 0x8e220848  lw          $v0, 0x848($s1)
    ctx->pc = 0x19e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x19e4d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E4D0u;
    {
        const bool branch_taken_0x19e4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D0u;
        // 0x19e4d4: 0x2685a068  addiu       $a1, $s4, -0x5F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d0) {
            ctx->pc = 0x19E4F4u;
            goto label_19e4f4;
        }
    }
    ctx->pc = 0x19E4D8u;
    // 0x19e4d8: 0x14730007  bne         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19E4D8u;
    {
        const bool branch_taken_0x19e4d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x19E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4D8u;
        // 0x19e4dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4d8) {
            ctx->pc = 0x19E4F8u;
            goto label_19e4f8;
        }
    }
    ctx->pc = 0x19E4E0u;
    // 0x19e4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e4e4: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19E4E4u;
    SET_GPR_U32(ctx, 31, 0x19E4ECu);
    ctx->pc = 0x19E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4E4u;
    // 0x19e4e8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19E4E4u, 0x19E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4ECu;
label_19e4ec:
    // 0x19e4ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19E4ECu;
    {
        const bool branch_taken_0x19e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ECu;
        // 0x19e4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4ec) {
            ctx->pc = 0x19E510u;
            goto label_19e510;
        }
    }
    ctx->pc = 0x19E4F4u;
label_19e4f4:
    // 0x19e4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19e4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e4f8:
    // 0x19e4f8: 0xc068d1e  jal         func_1A3478
    ctx->pc = 0x19E4F8u;
    SET_GPR_U32(ctx, 31, 0x19E500u);
    ctx->pc = 0x19E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4F8u;
    // 0x19e4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3478u, 0x19E4F8u, 0x19E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E500u;
label_19e500:
    // 0x19e500: 0xae37011c  sw          $s7, 0x11C($s1)
    ctx->pc = 0x19e500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 23));
    // 0x19e504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19E504u;
    {
        const bool branch_taken_0x19e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E504u;
        // 0x19e508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e504) {
            ctx->pc = 0x19E51Cu;
            goto label_19e51c;
        }
    }
    ctx->pc = 0x19E50Cu;
label_19e50c:
    // 0x19e50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e510:
    // 0x19e510: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x19E510u;
    {
        const bool branch_taken_0x19e510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E510u;
        // 0x19e514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e510) {
            ctx->pc = 0x19E480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e480;
        }
    }
    ctx->pc = 0x19E518u;
    // 0x19e518: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19e518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e51c:
    // 0x19e51c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19e520: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x19e520u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19e524: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x19e524u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19e528: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19e528u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e52c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e530: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19e530u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e534: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19e534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e538: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19e538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19e540u;
}
