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

// Function: FUN_00286bb8
// Address: 0x286bb8 - 0x286cec
void FUN_00286bb8_0x286bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286bb8_0x286bb8");
#endif

    switch (ctx->pc) {
        case 0x286c14u: goto label_286c14;
        case 0x286c38u: goto label_286c38;
        case 0x286c70u: goto label_286c70;
        case 0x286cc4u: goto label_286cc4;
        default: break;
    }

    ctx->pc = 0x286bb8u;

    // 0x286bb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x286bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x286bbc: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x286bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x286bc0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x286bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x286bc4: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x286bc8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x286bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x286bcc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x286bccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bd0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x286bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x286bd4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x286bd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bd8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x286bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x286bdc: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
    // 0x286be0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x286be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x286be4: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x286be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x286be8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x286bec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x286becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286bf4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x286bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x286bf8: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x286bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80076700u));
    // 0x286bfc: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x286bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)runtime->Load32(rdram, ctx, 0xB0001800u));
    // 0x286c00: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x286c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x286c04: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x286C04u;
    {
        const bool branch_taken_0x286c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C04u;
        // 0x286c08: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c04) {
            ctx->pc = 0x286C28u;
            goto label_286c28;
        }
    }
    ctx->pc = 0x286C0Cu;
    // 0x286c0c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x286C0Cu;
    {
        const bool branch_taken_0x286c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C0Cu;
        // 0x286c10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c0c) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C14u;
label_286c14:
    // 0x286c14: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x286c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c18: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x286c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x286c1c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x286c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x286c20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x286C20u;
    {
        const bool branch_taken_0x286c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C20u;
        // 0x286c24: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c20) {
            ctx->pc = 0x286C58u;
            goto label_286c58;
        }
    }
    ctx->pc = 0x286C28u;
label_286c28:
    // 0x286c28: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x286c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
    // 0x286c2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x286c2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c30: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x286c30u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x80076708u));
    // 0x286c34: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x286c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_286c38:
    // 0x286c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286c3c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x286C3Cu;
    {
        const bool branch_taken_0x286c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c3c) {
            ctx->pc = 0x286C14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c14;
        }
    }
    ctx->pc = 0x286C44u;
    // 0x286c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286c48: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x286c4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c38;
        }
    }
    ctx->pc = 0x286C54u;
    // 0x286c54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_286c58:
    // 0x286c58: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x286C58u;
    {
        const bool branch_taken_0x286c58 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x286C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C58u;
        // 0x286c5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c58) {
            ctx->pc = 0x286CC8u;
            goto label_286cc8;
        }
    }
    ctx->pc = 0x286C60u;
    // 0x286c60: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x286c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c64: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x286c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286c68: 0xc01d816  jal         func_076058
    ctx->pc = 0x286C68u;
    SET_GPR_U32(ctx, 31, 0x286C70u);
    ctx->pc = 0x286C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286C68u;
    // 0x286c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76058u, 0x286C68u, 0x286C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286C70u;
label_286c70:
    // 0x286c70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x286c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x286c74: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x286c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
    // 0x286c78: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x286c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x286c7c: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x286c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
    // 0x286c80: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x286c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
    // 0x286c84: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x286c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x286c88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x286c8c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x286c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x286c90: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x286c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286c94: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x286c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x286c98: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x286c98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
    // 0x286c9c: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x286c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x286ca0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x286ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286ca4: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x286ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x286ca8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x286ca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286cac: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x286cacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
    // 0x286cb0: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x286cb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
    // 0x286cb4: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x286cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
    // 0x286cb8: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x286cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
    // 0x286cbc: 0xc01d918  jal         func_076460
    ctx->pc = 0x286CBCu;
    SET_GPR_U32(ctx, 31, 0x286CC4u);
    ctx->pc = 0x286CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286CBCu;
    // 0x286cc0: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x286CBCu, 0x286CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286CC4u;
label_286cc4:
    // 0x286cc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x286cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286cc8:
    // 0x286cc8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x286cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286ccc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x286cccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286cd0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x286cd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286cd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x286cd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286cd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x286cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286cdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x286cdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x286cecu;
}
