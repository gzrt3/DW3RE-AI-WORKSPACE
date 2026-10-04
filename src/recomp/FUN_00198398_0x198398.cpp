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

// Function: FUN_00198398
// Address: 0x198398 - 0x198520
void FUN_00198398_0x198398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198398_0x198398");
#endif

    switch (ctx->pc) {
        case 0x19840cu: goto label_19840c;
        case 0x198444u: goto label_198444;
        case 0x19845cu: goto label_19845c;
        case 0x198468u: goto label_198468;
        case 0x1984b8u: goto label_1984b8;
        default: break;
    }

    ctx->pc = 0x198398u;

    // 0x198398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19839c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1983a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1983a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1983a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1983a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1983a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1983a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1983ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1983acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1983b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1983b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1983b4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1983b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1983b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1983bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1983c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1983c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1983c4: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x1983c4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1983c8: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x1983c8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1983cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1983ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1983d0: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1983D0u;
    {
        const bool branch_taken_0x1983d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1983D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983D0u;
        // 0x1983d4: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983d0) {
            ctx->pc = 0x198498u;
            goto label_198498;
        }
    }
    ctx->pc = 0x1983D8u;
    // 0x1983d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1983d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1983dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1983DCu;
    {
        const bool branch_taken_0x1983dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1983dc) {
            ctx->pc = 0x1983E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1983DCu;
            // 0x1983e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1983F4u;
            goto label_1983f4;
        }
    }
    ctx->pc = 0x1983E4u;
    // 0x1983e4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983E4u;
        // 0x1983e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x198404u;
            goto label_198404;
        }
    }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1983F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983ECu;
        // 0x1983f0: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x198514u;
            goto label_198514;
        }
    }
    ctx->pc = 0x1983F4u;
label_1983f4:
    // 0x1983f4: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1983F4u;
    {
        const bool branch_taken_0x1983f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1983F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983F4u;
        // 0x1983f8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983f4) {
            ctx->pc = 0x1984B0u;
            goto label_1984b0;
        }
    }
    ctx->pc = 0x1983FCu;
    // 0x1983fc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1983FCu;
    {
        const bool branch_taken_0x1983fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983FCu;
        // 0x198400: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1983fc) {
            ctx->pc = 0x198514u;
            goto label_198514;
        }
    }
    ctx->pc = 0x198404u;
label_198404:
    // 0x198404: 0xc06614a  jal         func_198528
    ctx->pc = 0x198404u;
    SET_GPR_U32(ctx, 31, 0x19840Cu);
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x198404u, 0x19840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19840Cu;
label_19840c:
    // 0x19840c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x198410: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x198414: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x198414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x198418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19841c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x19841cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x198420: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x198420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x198424: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x198424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x198428: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198428u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x19842c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x19842cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x198430: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x198430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x198434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x198438: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19843c: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x19843Cu;
    SET_GPR_U32(ctx, 31, 0x198444u);
    ctx->pc = 0x198440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19843Cu;
    // 0x198440: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x19843Cu, 0x198444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198444u;
label_198444:
    // 0x198444: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x198444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x198448: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19844c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19844Cu;
    {
        const bool branch_taken_0x19844c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19844Cu;
        // 0x198450: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19844c) {
            ctx->pc = 0x198470u;
            goto label_198470;
        }
    }
    ctx->pc = 0x198454u;
    // 0x198454: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x198454u;
    SET_GPR_U32(ctx, 31, 0x19845Cu);
    ctx->pc = 0x198458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198454u;
    // 0x198458: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x198454u, 0x19845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19845Cu;
label_19845c:
    // 0x19845c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x19845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x198460: 0xc069148  jal         func_1A4520
    ctx->pc = 0x198460u;
    SET_GPR_U32(ctx, 31, 0x198468u);
    ctx->pc = 0x198464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198460u;
    // 0x198464: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4520u, 0x198460u, 0x198468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198468u;
label_198468:
    // 0x198468: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x198468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x19846c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x19846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_198470:
    // 0x198470: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x198470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x198474: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x198474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x198478: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x198478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x19847c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198480: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198484: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198488: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198490: 0x8069108  j           func_1A4420
    ctx->pc = 0x198490u;
    ctx->pc = 0x198494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198490u;
    // 0x198494: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4420u, 0x198490u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x198498u;
label_198498:
    // 0x198498: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x19849c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1984a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1984a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1984a4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1984a4u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x1984a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1984A8u;
    {
        const bool branch_taken_0x1984a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1984A8u;
        // 0x1984ac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984a8) {
            ctx->pc = 0x198510u;
            goto label_198510;
        }
    }
    ctx->pc = 0x1984B0u;
label_1984b0:
    // 0x1984b0: 0xc06614a  jal         func_198528
    ctx->pc = 0x1984B0u;
    SET_GPR_U32(ctx, 31, 0x1984B8u);
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x1984B0u, 0x1984B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1984B8u;
label_1984b8:
    // 0x1984b8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1984b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1984bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1984bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984c0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1984c4: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1984c8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1984cc: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x1984ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1984d0: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x1984d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x1984d4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1984d8: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x1984d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x1984dc: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x1984dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1984e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1984e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1984e4: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x1984e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x1984e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1984e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1984ec: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x1984ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1984f0: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1984f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1984f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1984f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1984f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1984f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1984fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1984fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198500: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198508: 0x8069108  j           func_1A4420
    ctx->pc = 0x198508u;
    ctx->pc = 0x19850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198508u;
    // 0x19850c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4420u, 0x198508u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x198510u;
label_198510:
    // 0x198510: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x198510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198514:
    // 0x198514: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198518: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19851c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19851cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x198520u;
}
