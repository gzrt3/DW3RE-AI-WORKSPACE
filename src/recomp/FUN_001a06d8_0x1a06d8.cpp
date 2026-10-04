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

// Function: FUN_001a06d8
// Address: 0x1a06d8 - 0x1a0798
void FUN_001a06d8_0x1a06d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a06d8_0x1a06d8");
#endif

    ctx->pc = 0x1a06d8u;

    // 0x1a06d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a06d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a06dc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a06dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1a06e0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1a06e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1a06e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a06e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a06ec: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a06ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06f0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a06f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a06f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a06f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a06f8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1a06f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1a06fc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1a06fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1a0700: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1a0700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1a0704: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a0704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1a0708: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1a0708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1a070c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1a070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1a0710: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a0710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a0714: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1a0714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0718: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1a0718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1a071c: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x1a071cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x1a0720: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x1a0720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x1a0724: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1a0724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a0728: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1a0728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a072c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0730: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0730u;
    {
        const bool branch_taken_0x1a0730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0730u;
        // 0x1a0734: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0730) {
            ctx->pc = 0x1A074Cu;
            goto label_1a074c;
        }
    }
    ctx->pc = 0x1A0738u;
    // 0x1a0738: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x1a073c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A073Cu;
    {
        const bool branch_taken_0x1a073c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A073Cu;
        // 0x1a0740: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a073c) {
            ctx->pc = 0x1A0784u;
            goto label_1a0784;
        }
    }
    ctx->pc = 0x1A0744u;
    // 0x1a0744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0744u;
    {
        const bool branch_taken_0x1a0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0744u;
        // 0x1a0748: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0744) {
            ctx->pc = 0x1A0758u;
            goto label_1a0758;
        }
    }
    ctx->pc = 0x1A074Cu;
label_1a074c:
    // 0x1a074c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x1a074cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0750: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x1a0754: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1a0754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_1a0758:
    // 0x1a0758: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1a0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a075c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x1a075cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x1a0760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0760u;
    {
        const bool branch_taken_0x1a0760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0760u;
        // 0x1a0764: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0760) {
            ctx->pc = 0x1A0774u;
            goto label_1a0774;
        }
    }
    ctx->pc = 0x1A0768u;
    // 0x1a0768: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x1a0768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1a076c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A076Cu;
    {
        const bool branch_taken_0x1a076c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A076Cu;
        // 0x1a0770: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a076c) {
            ctx->pc = 0x1A0778u;
            goto label_1a0778;
        }
    }
    ctx->pc = 0x1A0774u;
label_1a0774:
    // 0x1a0774: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x1a0774u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a0778:
    // 0x1a0778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a077c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A077Cu;
    {
        const bool branch_taken_0x1a077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A077Cu;
        // 0x1a0780: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a077c) {
            ctx->pc = 0x1A07ACu;
            return;
        }
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1a0788: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1a078c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x1a078cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a0790: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1a0790u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1a0794: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1a0794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1a0798u;
}
