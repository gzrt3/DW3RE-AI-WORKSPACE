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

// Function: FUN_001c0200
// Address: 0x1c0200 - 0x1c02b8
void FUN_001c0200_0x1c0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c0200_0x1c0200");
#endif

    switch (ctx->pc) {
        case 0x1c0260u: goto label_1c0260;
        default: break;
    }

    ctx->pc = 0x1c0200u;

    // 0x1c0200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0204: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1c0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c0208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c020c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c020cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0214: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1c0214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1c0218: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c021c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1c021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c0220: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1c0224: 0x8c234aac  lw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x464AACu));
    // 0x1c0228: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c022c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x1c022cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x1c0230: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1c0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c0234: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x1c0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1c0238: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c023c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1c0240: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1c0240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c0244: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1c0244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c0248: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0248u;
    {
        const bool branch_taken_0x1c0248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0248u;
        // 0x1c024c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0248) {
            ctx->pc = 0x1C0258u;
            goto label_1c0258;
        }
    }
    ctx->pc = 0x1C0250u;
    // 0x1c0250: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1C0250u;
    {
        const bool branch_taken_0x1c0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0250) {
            ctx->pc = 0x1C02B8u;
            return;
        }
    }
    ctx->pc = 0x1C0258u;
label_1c0258:
    // 0x1c0258: 0xc0700d4  jal         func_1C0350
    ctx->pc = 0x1C0258u;
    SET_GPR_U32(ctx, 31, 0x1C0260u);
    ctx->pc = 0x1C025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0258u;
    // 0x1c025c: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0350u, 0x1C0258u, 0x1C0260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0260u;
label_1c0260:
    // 0x1c0260: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0260u;
    {
        const bool branch_taken_0x1c0260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0260u;
        // 0x1c0264: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0260) {
            ctx->pc = 0x1C0270u;
            goto label_1c0270;
        }
    }
    ctx->pc = 0x1C0268u;
    // 0x1c0268: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C0268u;
    {
        const bool branch_taken_0x1c0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0268u;
        // 0x1c026c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0268) {
            ctx->pc = 0x1C02B4u;
            goto label_1c02b4;
        }
    }
    ctx->pc = 0x1C0270u;
label_1c0270:
    // 0x1c0270: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1c0270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1c0274: 0x8c244aac  lw          $a0, 0x4AAC($at)
    ctx->pc = 0x1c0274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19116)));
    // 0x1c0278: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c0278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c027c: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c027cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0280: 0xac234aac  sw          $v1, 0x4AAC($at)
    ctx->pc = 0x1c0280u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x464AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464AACu, _value); } while (0);
    // 0x1c0284: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1c0284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c0288: 0x90001b  divu        $zero, $a0, $s0
    ctx->pc = 0x1c0288u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1c028c: 0x0  nop
    ctx->pc = 0x1c028cu;
    // NOP
    // 0x1c0290: 0x0  nop
    ctx->pc = 0x1c0290u;
    // NOP
    // 0x1c0294: 0x1810  mfhi        $v1
    ctx->pc = 0x1c0294u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1c0298: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0298u;
    {
        const bool branch_taken_0x1c0298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0298) {
            ctx->pc = 0x1C02A4u;
            goto label_1c02a4;
        }
    }
    ctx->pc = 0x1C02A0u;
    // 0x1c02a0: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1c02a4:
    // 0x1c02a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c02a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c02a8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1c02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1c02ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c02b0: 0x0  nop
    ctx->pc = 0x1c02b0u;
    // NOP
label_1c02b4:
    // 0x1c02b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c02b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1c02b8u;
}
