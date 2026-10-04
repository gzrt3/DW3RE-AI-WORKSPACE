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

// Function: FUN_00153180
// Address: 0x153180 - 0x15370c
void FUN_00153180_0x153180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00153180_0x153180");
#endif

    switch (ctx->pc) {
        case 0x153288u: goto label_153288;
        case 0x153328u: goto label_153328;
        case 0x153468u: goto label_153468;
        case 0x153508u: goto label_153508;
        case 0x153600u: goto label_153600;
        case 0x15365cu: goto label_15365c;
        default: break;
    }

    ctx->pc = 0x153180u;

    // 0x153180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153188: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15318c: 0xe0682d  daddu       $t5, $a3, $zero
    ctx->pc = 0x15318cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153190: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x153190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x153194: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x153194u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x153198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15319c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x15319cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1531a0: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1531A0u;
    {
        const bool branch_taken_0x1531a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1531A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A0u;
        // 0x1531a4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531a0) {
            ctx->pc = 0x1531CCu;
            goto label_1531cc;
        }
    }
    ctx->pc = 0x1531A8u;
    // 0x1531a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1531A8u;
    {
        const bool branch_taken_0x1531a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531A8u;
        // 0x1531ac: 0x2ca20100  sltiu       $v0, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531a8) {
            ctx->pc = 0x1531B8u;
            goto label_1531b8;
        }
    }
    ctx->pc = 0x1531B0u;
    // 0x1531b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1531B0u;
    {
        const bool branch_taken_0x1531b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531B0u;
        // 0x1531b4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531b0) {
            ctx->pc = 0x1531E4u;
            goto label_1531e4;
        }
    }
    ctx->pc = 0x1531B8u;
label_1531b8:
    // 0x1531b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531C0u;
    // 0x1531c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1531c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1531C4u;
    {
        const bool branch_taken_0x1531c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1531C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531C4u;
        // 0x1531c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531c4) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531CCu;
label_1531cc:
    // 0x1531cc: 0x2ca20019  sltiu       $v0, $a1, 0x19
    ctx->pc = 0x1531ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1531d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1531D0u;
    {
        const bool branch_taken_0x1531d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531d0) {
            ctx->pc = 0x1531E0u;
            goto label_1531e0;
        }
    }
    ctx->pc = 0x1531D8u;
    // 0x1531d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1531d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1531dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1531dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1531e0:
    // 0x1531e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1531e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1531e4:
    // 0x1531e4: 0x108600f2  beq         $a0, $a2, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1531E4u;
    {
        const bool branch_taken_0x1531e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1531E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531E4u;
        // 0x1531e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531e4) {
            ctx->pc = 0x1535B0u;
            goto label_1535b0;
        }
    }
    ctx->pc = 0x1531ECu;
    // 0x1531ec: 0x10820078  beq         $a0, $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1531ECu;
    {
        const bool branch_taken_0x1531ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1531F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531ECu;
        // 0x1531f0: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531ec) {
            ctx->pc = 0x1533D0u;
            goto label_1533d0;
        }
    }
    ctx->pc = 0x1531F4u;
    // 0x1531f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1531F4u;
    {
        const bool branch_taken_0x1531f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1531f4) {
            ctx->pc = 0x153204u;
            goto label_153204;
        }
    }
    ctx->pc = 0x1531FCu;
    // 0x1531fc: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1531FCu;
    {
        const bool branch_taken_0x1531fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531FCu;
        // 0x153200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531fc) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153204u;
label_153204:
    // 0x153204: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x153204u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x153208: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x153208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x15320c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15320Cu;
    {
        const bool branch_taken_0x15320c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15320Cu;
        // 0x153210: 0x30830007  andi        $v1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15320c) {
            ctx->pc = 0x153220u;
            goto label_153220;
        }
    }
    ctx->pc = 0x153214u;
    // 0x153214: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153214u;
    {
        const bool branch_taken_0x153214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153214u;
        // 0x153218: 0x331c0  sll         $a2, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153214) {
            ctx->pc = 0x153224u;
            goto label_153224;
        }
    }
    ctx->pc = 0x15321Cu;
    // 0x15321c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x15321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_153220:
    // 0x153220: 0x331c0  sll         $a2, $v1, 7
    ctx->pc = 0x153220u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_153224:
    // 0x153224: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153224u;
    {
        const bool branch_taken_0x153224 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153224u;
        // 0x153228: 0x428c3  sra         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153224) {
            ctx->pc = 0x153234u;
            goto label_153234;
        }
    }
    ctx->pc = 0x15322Cu;
    // 0x15322c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x15322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x153230: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
label_153234:
    // 0x153234: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x153234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x153238: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x153238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15323c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15323cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x153240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153244: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x153244u;
    {
        const bool branch_taken_0x153244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x153248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153244u;
        // 0x153248: 0x538c0  sll         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153244) {
            ctx->pc = 0x153290u;
            goto label_153290;
        }
    }
    ctx->pc = 0x15324Cu;
    // 0x15324c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15324Cu;
    {
        const bool branch_taken_0x15324c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15324c) {
            ctx->pc = 0x15325Cu;
            goto label_15325c;
        }
    }
    ctx->pc = 0x153254u;
    // 0x153254: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x153254u;
    {
        const bool branch_taken_0x153254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153254) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x15325Cu;
label_15325c:
    // 0x15325c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x153260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153264: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x153268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x153268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15326c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x153270: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x153270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153274: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153278: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153278u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15327c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15327cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153280: 0xc054dc8  jal         func_153720
    ctx->pc = 0x153280u;
    SET_GPR_U32(ctx, 31, 0x153288u);
    ctx->pc = 0x153284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153280u;
    // 0x153284: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x153280u, 0x153288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153288u;
label_153288:
    // 0x153288: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x153288u;
    {
        const bool branch_taken_0x153288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153288u;
        // 0x15328c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153288) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153290u;
label_153290:
    // 0x153290: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x153290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x153294: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153298: 0x28630400  slti        $v1, $v1, 0x400
    ctx->pc = 0x153298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15329c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15329Cu;
    {
        const bool branch_taken_0x15329c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15329Cu;
        // 0x1532a0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15329c) {
            ctx->pc = 0x1532ACu;
            goto label_1532ac;
        }
    }
    ctx->pc = 0x1532A4u;
    // 0x1532a4: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1532a8: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x1532a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1532ac:
    // 0x1532ac: 0x24e30018  addiu       $v1, $a3, 0x18
    ctx->pc = 0x1532acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x1532b0: 0x28630280  slti        $v1, $v1, 0x280
    ctx->pc = 0x1532b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x1532b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1532B4u;
    {
        const bool branch_taken_0x1532b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1532B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532B4u;
        // 0x1532b8: 0x30e3ffff  andi        $v1, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532b4) {
            ctx->pc = 0x1532C8u;
            goto label_1532c8;
        }
    }
    ctx->pc = 0x1532BCu;
    // 0x1532bc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1532bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1532c0: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x1532c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1532c4: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1532c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1532c8:
    // 0x1532c8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1532c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1532cc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1532ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x1532d0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1532d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x1532d4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1532d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1532d8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1532d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1532dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1532dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1532e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1532e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1532e4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1532e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1532e8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1532e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x1532ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1532ECu;
    {
        const bool branch_taken_0x1532ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532ECu;
        // 0x1532f0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532ec) {
            ctx->pc = 0x1532FCu;
            goto label_1532fc;
        }
    }
    ctx->pc = 0x1532F4u;
    // 0x1532f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1532F4u;
    {
        const bool branch_taken_0x1532f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1532F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F4u;
        // 0x1532f8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f4) {
            ctx->pc = 0x153304u;
            goto label_153304;
        }
    }
    ctx->pc = 0x1532FCu;
label_1532fc:
    // 0x1532fc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1532fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x153300: 0x0  nop
    ctx->pc = 0x153300u;
    // NOP
label_153304:
    // 0x153304: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x153304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153308: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x153308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x15330c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153310: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153314: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x153314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153318: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153320: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153320u;
    SET_GPR_U32(ctx, 31, 0x153328u);
    ctx->pc = 0x153324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153320u;
    // 0x153324: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153320u, 0x153328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153328u;
label_153328:
    // 0x153328: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x15332c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153330: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153334: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x153338: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x15333c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153340: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153344: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x153348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15334c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15334cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153350: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153354: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x153358: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x15335c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153360: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153364: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153368: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x15336c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x153370: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x153374: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153378: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x15337c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153380: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153384: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x153388: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15338c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153390: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x153394: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153398: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x15339c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1533a0: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1533a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533a4: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1533a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x1533a8: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1533a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x1533ac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1533acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1533b0: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1533b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1533b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1533b8: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1533b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533bc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1533bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1533c0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1533c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533c4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1533c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1533c8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1533C8u;
    {
        const bool branch_taken_0x1533c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533C8u;
        // 0x1533cc: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533c8) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x1533D0u;
label_1533d0:
    // 0x1533d0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1533d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1533d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1533d8: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1533d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1533dc: 0x105001a  div         $zero, $t0, $a1
    ctx->pc = 0x1533dcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1533e0: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x1533e4: 0x0  nop
    ctx->pc = 0x1533e4u;
    // NOP
    // 0x1533e8: 0x3010  mfhi        $a2
    ctx->pc = 0x1533e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1533ec: 0x34856667  ori         $a1, $a0, 0x6667
    ctx->pc = 0x1533ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x1533f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1533f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1533f4: 0xa80018  mult        $zero, $a1, $t0
    ctx->pc = 0x1533f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1533f8: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1533fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153400: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x153404: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x153408: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15340c: 0x2810  mfhi        $a1
    ctx->pc = 0x15340cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x153410: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x153414: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x153418: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x15341c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x15341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x153420: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x153420u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x153424: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x153424u;
    {
        const bool branch_taken_0x153424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x153428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153424u;
        // 0x153428: 0x24a70180  addiu       $a3, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153424) {
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x15342Cu;
    // 0x15342c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15342Cu;
    {
        const bool branch_taken_0x15342c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15342c) {
            ctx->pc = 0x15343Cu;
            goto label_15343c;
        }
    }
    ctx->pc = 0x153434u;
    // 0x153434: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x153434u;
    {
        const bool branch_taken_0x153434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153434) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x15343Cu;
label_15343c:
    // 0x15343c: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x15343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x153440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153444: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x153444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x153448: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x153448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15344c: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x15344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x153450: 0x2408005e  addiu       $t0, $zero, 0x5E
    ctx->pc = 0x153450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x153454: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x153454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153458: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x153458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15345c: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x15345cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153460: 0xc054dc8  jal         func_153720
    ctx->pc = 0x153460u;
    SET_GPR_U32(ctx, 31, 0x153468u);
    ctx->pc = 0x153464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153460u;
    // 0x153464: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x153460u, 0x153468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x153468u;
    {
        const bool branch_taken_0x153468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153468u;
        // 0x15346c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153468) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153470u;
label_153470:
    // 0x153470: 0x24c2005e  addiu       $v0, $a2, 0x5E
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 94));
    // 0x153474: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x153474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153478: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x153478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15347c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15347Cu;
    {
        const bool branch_taken_0x15347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15347Cu;
        // 0x153480: 0x2404005e  addiu       $a0, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15347c) {
            ctx->pc = 0x15348Cu;
            goto label_15348c;
        }
    }
    ctx->pc = 0x153484u;
    // 0x153484: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x153488: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15348c:
    // 0x15348c: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x15348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x153490: 0x28420280  slti        $v0, $v0, 0x280
    ctx->pc = 0x153490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x153494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153494u;
    {
        const bool branch_taken_0x153494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153494u;
        // 0x153498: 0x30e2ffff  andi        $v0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153494) {
            ctx->pc = 0x1534A8u;
            goto label_1534a8;
        }
    }
    ctx->pc = 0x15349Cu;
    // 0x15349c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x15349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1534a0: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1534a4: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1534a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1534a8:
    // 0x1534a8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1534a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1534ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1534acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1534b0: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1534b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x1534b4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1534b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1534b8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1534b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1534bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1534c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1534c4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1534c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x1534c8: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1534c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1534cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1534CCu;
    {
        const bool branch_taken_0x1534cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534CCu;
        // 0x1534d0: 0xffa20028  sd          $v0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534cc) {
            ctx->pc = 0x1534DCu;
            goto label_1534dc;
        }
    }
    ctx->pc = 0x1534D4u;
    // 0x1534d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534D4u;
        // 0x1534d8: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1534E4u;
            goto label_1534e4;
        }
    }
    ctx->pc = 0x1534DCu;
label_1534dc:
    // 0x1534dc: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x1534dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x1534e0: 0x0  nop
    ctx->pc = 0x1534e0u;
    // NOP
label_1534e4:
    // 0x1534e4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x1534e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1534e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1534ec: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1534ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f4: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x1534f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f8: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1534fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153500: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153500u;
    SET_GPR_U32(ctx, 31, 0x153508u);
    ctx->pc = 0x153504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153500u;
    // 0x153504: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153500u, 0x153508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153508u;
label_153508:
    // 0x153508: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x15350c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15350cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153510: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153514: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x153518: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x15351c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153520: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153524: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x153528: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15352c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15352cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153530: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153534: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x153538: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x15353c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153540: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153544: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153548: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153548u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x15354c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x153550: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x153554: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153558: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x15355c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15355cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153560: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153564: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x153568: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153570: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153570u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x153574: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153578: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x15357c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15357cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153580: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x153580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x153584: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x153584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x153588: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x153588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x15358c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x15358cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153590: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x153590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x153594: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153598: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x153598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x15359c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15359cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1535a0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1535a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1535a4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1535a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1535a8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535A8u;
        // 0x1535ac: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x1535B0u;
label_1535b0:
    // 0x1535b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1535b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1535b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1535b8: 0x10440013  beq         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1535B8u;
        // 0x1535bc: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x153608u;
            goto label_153608;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1535C0u;
    {
        const bool branch_taken_0x1535c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c0) {
            ctx->pc = 0x1535D0u;
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535C8u;
    // 0x1535c8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1535C8u;
    {
        const bool branch_taken_0x1535c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535c8) {
            ctx->pc = 0x153704u;
            goto label_153704;
        }
    }
    ctx->pc = 0x1535D0u;
label_1535d0:
    // 0x1535d0: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x1535d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x1535d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1535d8: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1535d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x1535dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1535dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535e0: 0xffab0010  sd          $t3, 0x10($sp)
    ctx->pc = 0x1535e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 11));
    // 0x1535e4: 0x240603f8  addiu       $a2, $zero, 0x3F8
    ctx->pc = 0x1535e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x1535e8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1535e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535ec: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1535ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535f0: 0x24070278  addiu       $a3, $zero, 0x278
    ctx->pc = 0x1535f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x1535f4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1535f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535f8: 0xc054dc8  jal         func_153720
    ctx->pc = 0x1535F8u;
    SET_GPR_U32(ctx, 31, 0x153600u);
    ctx->pc = 0x1535FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535F8u;
    // 0x1535fc: 0xffb00018  sd          $s0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153720u, 0x1535F8u, 0x153600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153600u;
label_153600:
    // 0x153600: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x153600u;
    {
        const bool branch_taken_0x153600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153600u;
        // 0x153604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153600) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153608u;
label_153608:
    // 0x153608: 0x24030278  addiu       $v1, $zero, 0x278
    ctx->pc = 0x153608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x15360c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x153610: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x153610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x153614: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x153614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x153618: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x153618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x15361c: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x15361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x153620: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x153620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x153624: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153624u;
    {
        const bool branch_taken_0x153624 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x153628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153624u;
        // 0x153628: 0xffa40028  sd          $a0, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153624) {
            ctx->pc = 0x153634u;
            goto label_153634;
        }
    }
    ctx->pc = 0x15362Cu;
    // 0x15362c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15362Cu;
    {
        const bool branch_taken_0x15362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15362Cu;
        // 0x153630: 0xdf858608  ld          $a1, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15362c) {
            ctx->pc = 0x15363Cu;
            goto label_15363c;
        }
    }
    ctx->pc = 0x153634u;
label_153634:
    // 0x153634: 0xdf858610  ld          $a1, -0x79F0($gp)
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
    // 0x153638: 0x0  nop
    ctx->pc = 0x153638u;
    // NOP
label_15363c:
    // 0x15363c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x15363cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153640: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153644: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x153644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153648: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15364c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x15364cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153654: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153654u;
    SET_GPR_U32(ctx, 31, 0x15365Cu);
    ctx->pc = 0x153658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153654u;
    // 0x153658: 0x240b03f8  addiu       $t3, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153654u, 0x15365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15365Cu;
label_15365c:
    // 0x15365c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x15365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x153660: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153664: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153668: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15366c: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x15366cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x153670: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153674: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153678: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x15367c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153680: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x153680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153684: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153688: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x15368c: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x15368cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x153690: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153694: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153698: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15369c: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x15369cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536a0: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x1536a4: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x1536a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536a8: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1536ac: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x1536b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1536b4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1536b8: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x1536bc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1536c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1536c4: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x1536c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536c8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1536cc: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x1536ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1536d4: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1536d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536d8: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1536d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536dc: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1536dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x1536e0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1536e4: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1536e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1536ec: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1536ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1536f4: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1536f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536f8: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1536f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1536FCu;
    {
        const bool branch_taken_0x1536fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536FCu;
        // 0x153700: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536fc) {
            ctx->pc = 0x153708u;
            goto label_153708;
        }
    }
    ctx->pc = 0x153704u;
label_153704:
    // 0x153704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x153704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_153708:
    // 0x153708: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x15370cu;
}
