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

// Function: entry_001e21e0
// Address: 0x1e21e0 - 0x1e2354
void entry_001e21e0_0x1e21e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e21e0_0x1e21e0");
#endif

    switch (ctx->pc) {
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e2248u: goto label_1e2248;
        case 0x1e2250u: goto label_1e2250;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e2340u: goto label_1e2340;
        default: break;
    }

    ctx->pc = 0x1e21e0u;

    // 0x1e21e0: 0xc078030  jal         func_1E00C0
    ctx->pc = 0x1E21E0u;
    SET_GPR_U32(ctx, 31, 0x1E21E8u);
    ctx->pc = 0x1E00C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E00C0u, 0x1E21E0u, 0x1E21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21E8u;
label_1e21e8:
    // 0x1e21e8: 0xc07b230  jal         func_1EC8C0
    ctx->pc = 0x1E21E8u;
    SET_GPR_U32(ctx, 31, 0x1E21F0u);
    ctx->pc = 0x1EC8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC8C0u, 0x1E21E8u, 0x1E21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21F0u;
label_1e21f0:
    // 0x1e21f0: 0xc07ab54  jal         func_1EAD50
    ctx->pc = 0x1E21F0u;
    SET_GPR_U32(ctx, 31, 0x1E21F8u);
    ctx->pc = 0x1EAD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD50u, 0x1E21F0u, 0x1E21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0xc04e168  jal         func_1385A0
    ctx->pc = 0x1E21F8u;
    SET_GPR_U32(ctx, 31, 0x1E2200u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E21F8u, 0x1E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2200u;
label_1e2200:
    // 0x1e2200: 0xc078d9c  jal         func_1E3670
    ctx->pc = 0x1E2200u;
    SET_GPR_U32(ctx, 31, 0x1E2208u);
    ctx->pc = 0x1E3670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3670u, 0x1E2200u, 0x1E2208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2208u;
label_1e2208:
    // 0x1e2208: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e220c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e2210: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1e2210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x1e2214: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e2218: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e221c: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
    // 0x1e2220: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e2224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e222c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1e2230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e2234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e2234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e2238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e223c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2240: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E2240u;
    SET_GPR_U32(ctx, 31, 0x1E2248u);
    ctx->pc = 0x1E2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2240u;
    // 0x1e2244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2240u, 0x1E2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2248u;
label_1e2248:
    // 0x1e2248: 0xc079158  jal         func_1E4560
    ctx->pc = 0x1E2248u;
    SET_GPR_U32(ctx, 31, 0x1E2250u);
    ctx->pc = 0x1E4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4560u, 0x1E2248u, 0x1E2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2250u;
label_1e2250:
    // 0x1e2250: 0x8f828d94  lw          $v0, -0x726C($gp)
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
    // 0x1e2254: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2254u;
    {
        const bool branch_taken_0x1e2254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2254) {
            ctx->pc = 0x1E22BCu;
            goto label_1e22bc;
        }
    }
    ctx->pc = 0x1E225Cu;
    // 0x1e225c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e2260: 0x87828d90  lh          $v0, -0x7270($gp)
    ctx->pc = 0x1e2260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e2264: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e2268: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e2268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e226c: 0x27838d98  addiu       $v1, $gp, -0x7268
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
    // 0x1e2270: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e2274: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e2274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e2278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e227c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e227cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e2280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2284: 0x2442ff08  addiu       $v0, $v0, -0xF8
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967048));
    // 0x1e2288: 0x55140  sll         $t2, $a1, 5
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e228c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e2290: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e2290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e2294: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e2298: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e229c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1e22a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e22a4: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x1e22a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e22a8: 0x87828d90  lh          $v0, -0x7270($gp)
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938000)));
    // 0x1e22ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e22b0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e22b4: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E22B4u;
    SET_GPR_U32(ctx, 31, 0x1E22BCu);
    ctx->pc = 0x1E22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22B4u;
    // 0x1e22b8: 0xa4a200a0  sh          $v0, 0xA0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E22B4u, 0x1E22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22BCu;
label_1e22bc:
    // 0x1e22bc: 0xc078ef4  jal         func_1E3BD0
    ctx->pc = 0x1E22BCu;
    SET_GPR_U32(ctx, 31, 0x1E22C4u);
    ctx->pc = 0x1E3BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3BD0u, 0x1E22BCu, 0x1E22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22C4u;
label_1e22c4:
    // 0x1e22c4: 0xc07897c  jal         func_1E25F0
    ctx->pc = 0x1E22C4u;
    SET_GPR_U32(ctx, 31, 0x1E22CCu);
    ctx->pc = 0x1E25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E25F0u, 0x1E22C4u, 0x1E22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22CCu;
label_1e22cc:
    // 0x1e22cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e22d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e22d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e22d8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e22dc: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
    // 0x1e22e0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e22e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e22e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e22e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22ec: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e22ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1e22f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e22f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e22f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e22f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e22fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2300: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E2300u;
    SET_GPR_U32(ctx, 31, 0x1E2308u);
    ctx->pc = 0x1E2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2300u;
    // 0x1e2304: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2300u, 0x1E2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2308u;
label_1e2308:
    // 0x1e2308: 0xc078cac  jal         func_1E32B0
    ctx->pc = 0x1E2308u;
    SET_GPR_U32(ctx, 31, 0x1E2310u);
    ctx->pc = 0x1E32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E32B0u, 0x1E2308u, 0x1E2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2310u;
label_1e2310:
    // 0x1e2310: 0xc077fc4  jal         func_1DFF10
    ctx->pc = 0x1E2310u;
    SET_GPR_U32(ctx, 31, 0x1E2318u);
    ctx->pc = 0x1DFF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF10u, 0x1E2310u, 0x1E2318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2318u;
label_1e2318:
    // 0x1e2318: 0xc07b1bc  jal         func_1EC6F0
    ctx->pc = 0x1E2318u;
    SET_GPR_U32(ctx, 31, 0x1E2320u);
    ctx->pc = 0x1EC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6F0u, 0x1E2318u, 0x1E2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2320u;
label_1e2320:
    // 0x1e2320: 0xc07ab3c  jal         func_1EACF0
    ctx->pc = 0x1E2320u;
    SET_GPR_U32(ctx, 31, 0x1E2328u);
    ctx->pc = 0x1EACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACF0u, 0x1E2320u, 0x1E2328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2328u;
label_1e2328:
    // 0x1e2328: 0xc04e120  jal         func_138480
    ctx->pc = 0x1E2328u;
    SET_GPR_U32(ctx, 31, 0x1E2330u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E2328u, 0x1E2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2330u;
label_1e2330:
    // 0x1e2330: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1E2330u;
    SET_GPR_U32(ctx, 31, 0x1E2338u);
    ctx->pc = 0x1E2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2330u;
    // 0x1e2334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E2330u, 0x1E2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2338u;
label_1e2338:
    // 0x1e2338: 0xc060258  jal         func_180960
    ctx->pc = 0x1E2338u;
    SET_GPR_U32(ctx, 31, 0x1E2340u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E2338u, 0x1E2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2340u;
label_1e2340:
    // 0x1e2340: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x1e2344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2344u;
    {
        const bool branch_taken_0x1e2344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2344) {
            ctx->pc = 0x1E2354u;
            return;
        }
    }
    ctx->pc = 0x1E234Cu;
    // 0x1e234c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2350: 0xaf828db0  sw          $v0, -0x7250($gp)
    ctx->pc = 0x1e2350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
    ctx->pc = 0x1e2354u;
}
