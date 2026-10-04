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

// Function: entry_0019a468
// Address: 0x19a468 - 0x19a5c8
void entry_0019a468_0x19a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a468_0x19a468");
#endif

    switch (ctx->pc) {
        case 0x19a510u: goto label_19a510;
        default: break;
    }

    ctx->pc = 0x19a468u;

    // 0x19a468: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x19a468u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a46c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x19a470: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x19a470u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x19a474: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x19a474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x19a478: 0x7e4201c0  sq          $v0, 0x1C0($s2)
    ctx->pc = 0x19a478u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 2));
    // 0x19a47c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a480: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x19a480u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x19a484: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a488: 0xde4501c0  ld          $a1, 0x1C0($s2)
    ctx->pc = 0x19a488u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x19a48c: 0xf7100b  movn        $v0, $a3, $s7
    ctx->pc = 0x19a48cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x19a490: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x19a490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x19a494: 0xf7180b  movn        $v1, $a3, $s7
    ctx->pc = 0x19a494u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x19a498: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x19a498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x19a49c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19a4a0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19a4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19a4a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19a4a8: 0xde460058  ld          $a2, 0x58($s2)
    ctx->pc = 0x19a4a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x19a4ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19a4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x19a4b0: 0xde4701c8  ld          $a3, 0x1C8($s2)
    ctx->pc = 0x19a4b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 456)));
    // 0x19a4b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19a4b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a4bc: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x19a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x19a4c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19a4c4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x19a4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19a4c8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x19a4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x19a4cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19a4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19a4d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x19a4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x19a4d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19a4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19a4d8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x19a4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x19a4dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x19a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19a4e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19a4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19a4e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x19a4e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19a4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x19a4ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19a4ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19a4f0: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x19a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x19a4f4: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x19a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x19a4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a4fc: 0xfe4501c0  sd          $a1, 0x1C0($s2)
    ctx->pc = 0x19a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 448), GPR_U64(ctx, 5));
    // 0x19a500: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x19a500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a504: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a508: 0xc066234  jal         func_1988D0
    ctx->pc = 0x19A508u;
    SET_GPR_U32(ctx, 31, 0x19A510u);
    ctx->pc = 0x19A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A508u;
    // 0x19a50c: 0xfe4701c8  sd          $a3, 0x1C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x19A508u, 0x19A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A510u;
label_19a510:
    // 0x19a510: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a51c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19a520: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x19a524: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x19a524u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a528: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x19a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19a52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x19a530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19a534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19a538: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A538u;
    {
        const bool branch_taken_0x19a538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x19A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A538u;
        // 0x19a53c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a538) {
            ctx->pc = 0x19A54Cu;
            goto label_19a54c;
        }
    }
    ctx->pc = 0x19A540u;
    // 0x19a540: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a544: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19A544u;
    {
        const bool branch_taken_0x19a544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A544u;
        // 0x19a548: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a544) {
            ctx->pc = 0x19A598u;
            goto label_19a598;
        }
    }
    ctx->pc = 0x19A54Cu;
label_19a54c:
    // 0x19a54c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x19a550: 0xde460038  ld          $a2, 0x38($s2)
    ctx->pc = 0x19a550u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x19a554: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x19a554u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x19a558: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x19a55c: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x19a55cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x19a560: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x19a564: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x19a564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x19a568: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x19a568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x19a56c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x19a56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19a570: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x19a570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x19a574: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x19a574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x19a578: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x19a578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x19a57c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19a57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x19a580: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x19a580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x19a584: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x19a584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x19a588: 0xfe4400e0  sd          $a0, 0xE0($s2)
    ctx->pc = 0x19a588u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 4));
    // 0x19a58c: 0xfe460038  sd          $a2, 0x38($s2)
    ctx->pc = 0x19a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 6));
    // 0x19a590: 0xfe470060  sd          $a3, 0x60($s2)
    ctx->pc = 0x19a590u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 7));
    // 0x19a594: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19a598:
    // 0x19a598: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x19a598u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19a59c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x19a59cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19a5a0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x19a5a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19a5a4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19a5a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x19a5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a5ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19a5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a5b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19a5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a5b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19a5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a5b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19a5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5BCu;
        // 0x19a5c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A5C4u;
    // 0x19a5c4: 0x0  nop
    ctx->pc = 0x19a5c4u;
    // NOP
    ctx->pc = 0x19a5c8u;
}
