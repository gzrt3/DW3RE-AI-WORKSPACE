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

// Function: FUN_002148d0
// Address: 0x2148d0 - 0x2149d0
void FUN_002148d0_0x2148d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002148d0_0x2148d0");
#endif

    switch (ctx->pc) {
        case 0x2148fcu: goto label_2148fc;
        case 0x21495cu: goto label_21495c;
        case 0x2149a8u: goto label_2149a8;
        default: break;
    }

    ctx->pc = 0x2148d0u;

    // 0x2148d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2148d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2148d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2148d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2148d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2148d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2148dc: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2148dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x2148e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2148e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148e4: 0x8f8591cc  lw          $a1, -0x6E34($gp)
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
    // 0x2148e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2148ec: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2148ECu;
    {
        const bool branch_taken_0x2148ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148ECu;
        // 0x2148f0: 0xaf8291d0  sw          $v0, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148ec) {
            ctx->pc = 0x214920u;
            goto label_214920;
        }
    }
    ctx->pc = 0x2148F4u;
    // 0x2148f4: 0xc0853c0  jal         func_214F00
    ctx->pc = 0x2148F4u;
    SET_GPR_U32(ctx, 31, 0x2148FCu);
    ctx->pc = 0x214F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214F00u, 0x2148F4u, 0x2148FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148FCu;
label_2148fc:
    // 0x2148fc: 0x8f8291e0  lw          $v0, -0x6E20($gp)
    ctx->pc = 0x2148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939104)));
    // 0x214900: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214900u;
    {
        const bool branch_taken_0x214900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214900u;
        // 0x214904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214900) {
            ctx->pc = 0x214914u;
            goto label_214914;
        }
    }
    ctx->pc = 0x214908u;
    // 0x214908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21490c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21490Cu;
    {
        const bool branch_taken_0x21490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21490Cu;
        // 0x214910: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21490c) {
            ctx->pc = 0x214918u;
            goto label_214918;
        }
    }
    ctx->pc = 0x214914u;
label_214914:
    // 0x214914: 0xaf8291cc  sw          $v0, -0x6E34($gp)
    ctx->pc = 0x214914u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
label_214918:
    // 0x214918: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x214918u;
    {
        const bool branch_taken_0x214918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214918u;
        // 0x21491c: 0xaf8091d0  sw          $zero, -0x6E30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214918) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214920u;
label_214920:
    // 0x214920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x214920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214924: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214924u;
    {
        const bool branch_taken_0x214924 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x214928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214924u;
        // 0x214928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214924) {
            ctx->pc = 0x21494Cu;
            goto label_21494c;
        }
    }
    ctx->pc = 0x21492Cu;
    // 0x21492c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x214930: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x214930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x214934: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x214934u;
    {
        const bool branch_taken_0x214934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214934u;
        // 0x214938: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214934) {
            ctx->pc = 0x2149CCu;
            goto label_2149cc;
        }
    }
    ctx->pc = 0x21493Cu;
    // 0x21493c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214940: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x214940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214944: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x214944u;
    {
        const bool branch_taken_0x214944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214944u;
        // 0x214948: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214944) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21494Cu;
label_21494c:
    // 0x21494c: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21494Cu;
    {
        const bool branch_taken_0x21494c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21494c) {
            ctx->pc = 0x214978u;
            goto label_214978;
        }
    }
    ctx->pc = 0x214954u;
    // 0x214954: 0xc0855ac  jal         func_2156B0
    ctx->pc = 0x214954u;
    SET_GPR_U32(ctx, 31, 0x21495Cu);
    ctx->pc = 0x2156B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2156B0u, 0x214954u, 0x21495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21495Cu;
label_21495c:
    // 0x21495c: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x21495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x214960: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x214960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x214964: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x214964u;
    {
        const bool branch_taken_0x214964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214964u;
        // 0x214968: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214964) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21496Cu;
    // 0x21496c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21496cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214970: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x214970u;
    {
        const bool branch_taken_0x214970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214970u;
        // 0x214974: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214970) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214978u;
label_214978:
    // 0x214978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21497c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21497Cu;
    {
        const bool branch_taken_0x21497c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x214980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21497Cu;
        // 0x214980: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21497c) {
            ctx->pc = 0x214998u;
            goto label_214998;
        }
    }
    ctx->pc = 0x214984u;
    // 0x214984: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214984u;
    {
        const bool branch_taken_0x214984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214984u;
        // 0x214988: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214984) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x21498Cu;
    // 0x21498c: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x21498cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x214990: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x214990u;
    {
        const bool branch_taken_0x214990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214990u;
        // 0x214994: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214990) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x214998u;
label_214998:
    // 0x214998: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x214998u;
    {
        const bool branch_taken_0x214998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x214998) {
            ctx->pc = 0x2149C4u;
            goto label_2149c4;
        }
    }
    ctx->pc = 0x2149A0u;
    // 0x2149a0: 0xc0854bc  jal         func_2152F0
    ctx->pc = 0x2149A0u;
    SET_GPR_U32(ctx, 31, 0x2149A8u);
    ctx->pc = 0x2152F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2152F0u, 0x2149A0u, 0x2149A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2149A8u;
label_2149a8:
    // 0x2149a8: 0x8f8291d0  lw          $v0, -0x6E30($gp)
    ctx->pc = 0x2149a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x2149ac: 0x28420060  slti        $v0, $v0, 0x60
    ctx->pc = 0x2149acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x2149b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2149B0u;
    {
        const bool branch_taken_0x2149b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149B0u;
        // 0x2149b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149b0) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x2149B8u;
    // 0x2149b8: 0xaf8091d0  sw          $zero, -0x6E30($gp)
    ctx->pc = 0x2149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939088), GPR_U32(ctx, 0));
    // 0x2149bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2149BCu;
    {
        const bool branch_taken_0x2149bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149BCu;
        // 0x2149c0: 0xaf8291cc  sw          $v0, -0x6E34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149bc) {
            ctx->pc = 0x2149C8u;
            goto label_2149c8;
        }
    }
    ctx->pc = 0x2149C4u;
label_2149c4:
    // 0x2149c4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2149c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2149c8:
    // 0x2149c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2149c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2149cc:
    // 0x2149cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2149ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x2149d0u;
}
