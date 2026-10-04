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

// Function: FUN_001b21e8
// Address: 0x1b21e8 - 0x1b2298
void FUN_001b21e8_0x1b21e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b21e8_0x1b21e8");
#endif

    switch (ctx->pc) {
        case 0x1b2224u: goto label_1b2224;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2284u: goto label_1b2284;
        default: break;
    }

    ctx->pc = 0x1b21e8u;

    // 0x1b21e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b21ec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b21f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b21f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b21f8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
    // 0x1b21fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b21fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b2200: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b2204: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b2204u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b2208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2208u;
    {
        const bool branch_taken_0x1b2208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2208u;
        // 0x1b220c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2208) {
            ctx->pc = 0x1B2218u;
            goto label_1b2218;
        }
    }
    ctx->pc = 0x1B2210u;
    // 0x1b2210: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B2210u;
    {
        const bool branch_taken_0x1b2210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2210u;
        // 0x1b2214: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2210) {
            ctx->pc = 0x1B2288u;
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B2218u;
label_1b2218:
    // 0x1b2218: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b2218u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b221c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B221Cu;
    SET_GPR_U32(ctx, 31, 0x1B2224u);
    ctx->pc = 0x1B2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B221Cu;
    // 0x1b2220: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B221Cu, 0x1B2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2224u;
label_1b2224:
    // 0x1b2224: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2224u;
    {
        const bool branch_taken_0x1b2224 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2224u;
        // 0x1b2228: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2224) {
            ctx->pc = 0x1B2234u;
            goto label_1b2234;
        }
    }
    ctx->pc = 0x1B222Cu;
    // 0x1b222c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B222Cu;
    {
        const bool branch_taken_0x1b222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B222Cu;
        // 0x1b2230: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b222c) {
            ctx->pc = 0x1B2288u;
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B2234u;
label_1b2234:
    // 0x1b2234: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b2238: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b2238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
    // 0x1b223c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2240: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b2244: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2248: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b224c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2254: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b2254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b2258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b225c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B225Cu;
    SET_GPR_U32(ctx, 31, 0x1B2264u);
    ctx->pc = 0x1B2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B225Cu;
    // 0x1b2260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B225Cu, 0x1B2264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2264u;
label_1b2264:
    // 0x1b2264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2268: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2268u;
    {
        const bool branch_taken_0x1b2268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2268) {
            ctx->pc = 0x1B227Cu;
            goto label_1b227c;
        }
    }
    ctx->pc = 0x1B2270u;
    // 0x1b2270: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b2274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2284u;
            goto label_1b2284;
        }
    }
    ctx->pc = 0x1B227Cu;
label_1b227c:
    // 0x1b227c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B227Cu;
    SET_GPR_U32(ctx, 31, 0x1B2284u);
    ctx->pc = 0x1B2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B227Cu;
    // 0x1b2280: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B227Cu, 0x1B2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2284u;
label_1b2284:
    // 0x1b2284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2288:
    // 0x1b2288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b228c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2290: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b2298u;
}
