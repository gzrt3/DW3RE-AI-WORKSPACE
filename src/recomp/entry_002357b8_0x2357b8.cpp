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

// Function: entry_002357b8
// Address: 0x2357b8 - 0x235838
void entry_002357b8_0x2357b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002357b8_0x2357b8");
#endif

    switch (ctx->pc) {
        case 0x235810u: goto label_235810;
        case 0x235834u: goto label_235834;
        default: break;
    }

    ctx->pc = 0x2357b8u;

label_2357b8:
    // 0x2357b8: 0xa61004  sllv        $v0, $a2, $a1
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x2357bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2357bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2357c0: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2357c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x2357c4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2357c8: 0x28a40018  slti        $a0, $a1, 0x18
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2357cc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2357CCu;
    {
        const bool branch_taken_0x2357cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2357D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357CCu;
        // 0x2357d0: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357cc) {
            ctx->pc = 0x2357B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2357b8;
        }
    }
    ctx->pc = 0x2357D4u;
    // 0x2357d4: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x2357d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2357d8: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2357dc: 0x2e4201fc  sltiu       $v0, $s2, 0x1FC
    ctx->pc = 0x2357dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)508) ? 1 : 0);
    // 0x2357e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2357E0u;
    {
        const bool branch_taken_0x2357e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357E0u;
        // 0x2357e4: 0x2410ff9d  addiu       $s0, $zero, -0x63 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967197));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357e0) {
            ctx->pc = 0x235838u;
            return;
        }
    }
    ctx->pc = 0x2357E8u;
    // 0x2357e8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2357ec: 0x1388c0  sll         $s1, $s3, 3
    ctx->pc = 0x2357ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2357f0: 0x2610ad00  addiu       $s0, $s0, -0x5300
    ctx->pc = 0x2357f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946048));
    // 0x2357f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2357f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357f8: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x2357f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x2357fc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x235800: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x235800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x235804: 0x26100204  addiu       $s0, $s0, 0x204
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    // 0x235808: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x235808u;
    SET_GPR_U32(ctx, 31, 0x235810u);
    ctx->pc = 0x23580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235808u;
    // 0x23580c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x235808u, 0x235810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235810u;
label_235810:
    // 0x235810: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x235814: 0x24630518  addiu       $v1, $v1, 0x518
    ctx->pc = 0x235814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1304));
    // 0x235818: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x235818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23581c: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x23581cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x29051Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29051Cu, _value); } while (0);
    // 0x235820: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x235820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x235824: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x235824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x290518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290518u, _value); } while (0);
    // 0x235828: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x23582c: 0xc08d192  jal         func_234648
    ctx->pc = 0x23582Cu;
    SET_GPR_U32(ctx, 31, 0x235834u);
    ctx->pc = 0x235830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23582Cu;
    // 0x235830: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x23582Cu, 0x235834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235834u;
label_235834:
    // 0x235834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x235838u;
}
