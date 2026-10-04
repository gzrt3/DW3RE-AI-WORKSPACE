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

// Function: FUN_001b2000
// Address: 0x1b2000 - 0x1b20c4
void FUN_001b2000_0x1b2000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2000_0x1b2000");
#endif

    switch (ctx->pc) {
        case 0x1b2044u: goto label_1b2044;
        case 0x1b208cu: goto label_1b208c;
        case 0x1b20acu: goto label_1b20ac;
        default: break;
    }

    ctx->pc = 0x1b2000u;

    // 0x1b2000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b2004: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2008: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b200c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b2010: 0x24526200  addiu       $s2, $v0, 0x6200
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b2014: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b201c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b2020: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b2024: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b2024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b2028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2028u;
    {
        const bool branch_taken_0x1b2028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2028u;
        // 0x1b202c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2028) {
            ctx->pc = 0x1B2038u;
            goto label_1b2038;
        }
    }
    ctx->pc = 0x1B2030u;
    // 0x1b2030: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B2030u;
    {
        const bool branch_taken_0x1b2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2030u;
        // 0x1b2034: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2030) {
            ctx->pc = 0x1B20B0u;
            goto label_1b20b0;
        }
    }
    ctx->pc = 0x1B2038u;
label_1b2038:
    // 0x1b2038: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
    // 0x1b203c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B203Cu;
    SET_GPR_U32(ctx, 31, 0x1B2044u);
    ctx->pc = 0x1B2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B203Cu;
    // 0x1b2040: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B203Cu, 0x1B2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2044u;
label_1b2044:
    // 0x1b2044: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2044u;
    {
        const bool branch_taken_0x1b2044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2044u;
        // 0x1b2048: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2044) {
            ctx->pc = 0x1B2054u;
            goto label_1b2054;
        }
    }
    ctx->pc = 0x1B204Cu;
    // 0x1b204c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B204Cu;
    {
        const bool branch_taken_0x1b204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b204c) {
            ctx->pc = 0x1B20B0u;
            goto label_1b20b0;
        }
    }
    ctx->pc = 0x1B2054u;
label_1b2054:
    // 0x1b2054: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2054u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b2058: 0x24426280  addiu       $v0, $v0, 0x6280
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b205c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2060: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b2060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b2064: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2068: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1b2068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1b206c: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2070: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2074: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b2078: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b207c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b2080: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2084: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B2084u;
    SET_GPR_U32(ctx, 31, 0x1B208Cu);
    ctx->pc = 0x1B2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2084u;
    // 0x1b2088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B2084u, 0x1B208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B208Cu;
label_1b208c:
    // 0x1b208c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2090: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2090u;
    {
        const bool branch_taken_0x1b2090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2090u;
        // 0x1b2094: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2090) {
            ctx->pc = 0x1B20A4u;
            goto label_1b20a4;
        }
    }
    ctx->pc = 0x1B2098u;
    // 0x1b2098: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b209c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B209Cu;
    {
        const bool branch_taken_0x1b209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b209c) {
            ctx->pc = 0x1B20ACu;
            goto label_1b20ac;
        }
    }
    ctx->pc = 0x1B20A4u;
label_1b20a4:
    // 0x1b20a4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B20A4u;
    SET_GPR_U32(ctx, 31, 0x1B20ACu);
    ctx->pc = 0x1B20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20A4u;
    // 0x1b20a8: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B20A4u, 0x1B20ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B20ACu;
label_1b20ac:
    // 0x1b20ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b20acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b20b0:
    // 0x1b20b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b20b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b20b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b20b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b20b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b20b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b20bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b20c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b20c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b20c4u;
}
