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

// Function: FUN_0023b590
// Address: 0x23b590 - 0x23b70c
void FUN_0023b590_0x23b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b590_0x23b590");
#endif

    switch (ctx->pc) {
        case 0x23b5c4u: goto label_23b5c4;
        case 0x23b62cu: goto label_23b62c;
        case 0x23b694u: goto label_23b694;
        case 0x23b6e0u: goto label_23b6e0;
        default: break;
    }

    ctx->pc = 0x23b590u;

    // 0x23b590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23b598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23b598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b59c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b5a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23b5a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23b5a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23b5ac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23b5b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23b5b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5b4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23b5b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23b5bc: 0xc08ea10  jal         func_23A840
    ctx->pc = 0x23B5BCu;
    SET_GPR_U32(ctx, 31, 0x23B5C4u);
    ctx->pc = 0x23B5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B5BCu;
    // 0x23b5c0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A840u, 0x23B5BCu, 0x23B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5C4u;
label_23b5c4:
    // 0x23b5c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23b5c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b5c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x23b5cc: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x23b5ccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x23b5d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b5d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x23b5d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b5dc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23b5e0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x23b5e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x23b5e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x23b5e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b5ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23b5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23b5f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x23b5f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x23b5f4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x23b5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23b5f8: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x23b5f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x23b5fc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x23b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x23b600: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B600u;
    {
        const bool branch_taken_0x23b600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B600u;
        // 0x23b604: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b600) {
            ctx->pc = 0x23B614u;
            goto label_23b614;
        }
    }
    ctx->pc = 0x23B608u;
    // 0x23b608: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x23b608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x23b60c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x23b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23b610: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23b610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23b614:
    // 0x23b614: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x23b614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x23b618: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x23b618u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x23b61c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23B61Cu;
    {
        const bool branch_taken_0x23b61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B61Cu;
        // 0x23b620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b61c) {
            ctx->pc = 0x23B688u;
            goto label_23b688;
        }
    }
    ctx->pc = 0x23B624u;
    // 0x23b624: 0xc08eaf4  jal         func_23ABD0
    ctx->pc = 0x23B624u;
    SET_GPR_U32(ctx, 31, 0x23B62Cu);
    ctx->pc = 0x23B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B624u;
    // 0x23b628: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABD0u, 0x23B624u, 0x23B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B62Cu;
label_23b62c:
    // 0x23b62c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b630: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x23B630u;
    {
        const bool branch_taken_0x23b630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B630u;
        // 0x23b634: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b630) {
            ctx->pc = 0x23B660u;
            goto label_23b660;
        }
    }
    ctx->pc = 0x23B638u;
    // 0x23b638: 0x52023  negu        $a0, $a1
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x23b63c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b640: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x23b640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x23b644: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23b648: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x23b64c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b650: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x23b650u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x23b654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23B654u;
    {
        const bool branch_taken_0x23b654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B654u;
        // 0x23b658: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b654) {
            ctx->pc = 0x23B668u;
            goto label_23b668;
        }
    }
    ctx->pc = 0x23B65Cu;
    // 0x23b65c: 0x0  nop
    ctx->pc = 0x23b65cu;
    // NOP
label_23b660:
    // 0x23b660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23b664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23b668:
    // 0x23b668: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b674: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x23b674u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x23b678: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x23b678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x23b67c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b67cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23B680u;
    {
        const bool branch_taken_0x23b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B680u;
        // 0x23b684: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b680) {
            ctx->pc = 0x23B6A8u;
            goto label_23b6a8;
        }
    }
    ctx->pc = 0x23B688u;
label_23b688:
    // 0x23b688: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x23b688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x23b68c: 0xc08eaf4  jal         func_23ABD0
    ctx->pc = 0x23B68Cu;
    SET_GPR_U32(ctx, 31, 0x23B694u);
    ctx->pc = 0x23B690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B68Cu;
    // 0x23b690: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABD0u, 0x23B68Cu, 0x23B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B694u;
label_23b694:
    // 0x23b694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b698: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23b69c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x23b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x23b6a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x23b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x23b6a4: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x23b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_23b6a8:
    // 0x23b6a8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B6A8u;
    {
        const bool branch_taken_0x23b6a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6A8u;
        // 0x23b6ac: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6a8) {
            ctx->pc = 0x23B6C8u;
            goto label_23b6c8;
        }
    }
    ctx->pc = 0x23B6B0u;
    // 0x23b6b0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x23b6b4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x23b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x23b6b8: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x23b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x23b6bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23B6BCu;
    {
        const bool branch_taken_0x23b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B6BCu;
        // 0x23b6c0: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6bc) {
            ctx->pc = 0x23B6E8u;
            goto label_23b6e8;
        }
    }
    ctx->pc = 0x23B6C4u;
    // 0x23b6c4: 0x0  nop
    ctx->pc = 0x23b6c4u;
    // NOP
label_23b6c8:
    // 0x23b6c8: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x23b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x23b6cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23b6d0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x23b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x23b6d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23b6d8: 0xc08ead4  jal         func_23AB50
    ctx->pc = 0x23B6D8u;
    SET_GPR_U32(ctx, 31, 0x23B6E0u);
    ctx->pc = 0x23B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B6D8u;
    // 0x23b6dc: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AB50u, 0x23B6D8u, 0x23B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6E0u;
label_23b6e0:
    // 0x23b6e0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x23b6e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b6e8:
    // 0x23b6e8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x23b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x23b6ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23b6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23b6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b6f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23b6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23b6f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23b6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b6fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x23b6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23b700: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x23b700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b704: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23b704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23b708: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23b708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x23b70cu;
}
