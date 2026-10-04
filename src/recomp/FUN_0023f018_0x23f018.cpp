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

// Function: FUN_0023f018
// Address: 0x23f018 - 0x23f094
void FUN_0023f018_0x23f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f018_0x23f018");
#endif

    ctx->pc = 0x23f018u;

    // 0x23f018: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23f018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23f01c: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x23f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x23f020: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23f020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23f024: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x23f024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f028: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23f02c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x23f02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f030: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23f034: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23f034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f038: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23f03c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23f03cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f040: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23f044: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x23f044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f048: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23f04c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x23f04cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f050: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23f054: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23f054u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f058: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x23f05c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x23f05cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f060: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x23f064: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x23f064u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f068: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23F068u;
    {
        const bool branch_taken_0x23f068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F068u;
        // 0x23f06c: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f068) {
            ctx->pc = 0x23F08Cu;
            goto label_23f08c;
        }
    }
    ctx->pc = 0x23F070u;
    // 0x23f070: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x23f074: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F074u;
    {
        const bool branch_taken_0x23f074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F074u;
        // 0x23f078: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f074) {
            ctx->pc = 0x23F084u;
            goto label_23f084;
        }
    }
    ctx->pc = 0x23F07Cu;
    // 0x23f07c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F07Cu;
    {
        const bool branch_taken_0x23f07c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F07Cu;
        // 0x23f080: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f07c) {
            ctx->pc = 0x23F08Cu;
            goto label_23f08c;
        }
    }
    ctx->pc = 0x23F084u;
label_23f084:
    // 0x23f084: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23f084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23f088: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x23f088u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23f08c:
    // 0x23f08c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f090: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23f090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x23f094u;
}
