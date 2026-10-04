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

// Function: FUN_00198d70
// Address: 0x198d70 - 0x198ee4
void FUN_00198d70_0x198d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198d70_0x198d70");
#endif

    switch (ctx->pc) {
        case 0x198dccu: goto label_198dcc;
        case 0x198df4u: goto label_198df4;
        case 0x198e10u: goto label_198e10;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e48u: goto label_198e48;
        case 0x198e90u: goto label_198e90;
        case 0x198ec0u: goto label_198ec0;
        default: break;
    }

    ctx->pc = 0x198d70u;

    // 0x198d70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x198d74: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x198d78: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x198d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x198d7c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x198d80: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x198d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x198d84: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x198d84u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x198d88: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x198d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x198d8c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x198d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x198d90: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x198d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x198d94: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x198d94u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x198d98: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x198d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x198d9c: 0x5b403  sra         $s6, $a1, 16
    ctx->pc = 0x198d9cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 16));
    // 0x198da0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x198da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x198da4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x198da4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x198da8: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x198da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x198dac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198db0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x198db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x198db4: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x198db4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x198db8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x198db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x198dbc: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x198dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x198dc0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x198dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x198dc4: 0xc06614a  jal         func_198528
    ctx->pc = 0x198DC4u;
    SET_GPR_U32(ctx, 31, 0x198DCCu);
    ctx->pc = 0x198DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DC4u;
    // 0x198dc8: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x198DC4u, 0x198DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DCCu;
label_198dcc:
    // 0x198dcc: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x198dccu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
    // 0x198dd0: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x198dd0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
    // 0x198dd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x198dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x198dd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ddc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198de0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198de4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198de4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dec: 0xc066168  jal         func_1985A0
    ctx->pc = 0x198DECu;
    SET_GPR_U32(ctx, 31, 0x198DF4u);
    ctx->pc = 0x198DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198DECu;
    // 0x198df0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985A0u, 0x198DECu, 0x198DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198DF4u;
label_198df4:
    // 0x198df4: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x198df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x198df8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e00: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e08: 0xc066168  jal         func_1985A0
    ctx->pc = 0x198E08u;
    SET_GPR_U32(ctx, 31, 0x198E10u);
    ctx->pc = 0x198E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E08u;
    // 0x198e0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985A0u, 0x198E08u, 0x198E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E10u;
label_198e10:
    // 0x198e10: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x198e14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e1c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e20: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x198e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e24: 0xc066266  jal         func_198998
    ctx->pc = 0x198E24u;
    SET_GPR_U32(ctx, 31, 0x198E2Cu);
    ctx->pc = 0x198E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E24u;
    // 0x198e28: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198998u, 0x198E24u, 0x198E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E2Cu;
label_198e2c:
    // 0x198e2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x198e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e30: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x198e34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x198e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e38: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x198e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x198e3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e40: 0xc066266  jal         func_198998
    ctx->pc = 0x198E40u;
    SET_GPR_U32(ctx, 31, 0x198E48u);
    ctx->pc = 0x198E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E40u;
    // 0x198e44: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198998u, 0x198E40u, 0x198E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E48u;
label_198e48:
    // 0x198e48: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x198E48u;
    {
        const bool branch_taken_0x198e48 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e48) {
            ctx->pc = 0x198EC0u;
            goto label_198ec0;
        }
    }
    ctx->pc = 0x198E50u;
    // 0x198e50: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x198e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x198e54: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x198e54u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
    // 0x198e58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x198e5c: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x198e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x198e60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x198e64: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x198e64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x198e68: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x198e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x198e6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x198e70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e7c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e80: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198e80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198e84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e88: 0xc0662e0  jal         func_198B80
    ctx->pc = 0x198E88u;
    SET_GPR_U32(ctx, 31, 0x198E90u);
    ctx->pc = 0x198E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198E88u;
    // 0x198e8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198B80u, 0x198E88u, 0x198E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198E90u;
label_198e90:
    // 0x198e90: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x198e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x198e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x198e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198e9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x198e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x198ea0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x198ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x198ea4: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x198ea8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x198ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x198eac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198eb0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x198eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198eb8: 0xc0662e0  jal         func_198B80
    ctx->pc = 0x198EB8u;
    SET_GPR_U32(ctx, 31, 0x198EC0u);
    ctx->pc = 0x198EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198EB8u;
    // 0x198ebc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198B80u, 0x198EB8u, 0x198EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198EC0u;
label_198ec0:
    // 0x198ec0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x198ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x198ec4: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x198ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x198ec8: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x198ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x198ecc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x198eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x198ed0: 0x7e420140  sq          $v0, 0x140($s2)
    ctx->pc = 0x198ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 320), GPR_VEC(ctx, 2));
    // 0x198ed4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x198ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198ed8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x198ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x198edc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x198edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198ee0: 0xde460140  ld          $a2, 0x140($s2)
    ctx->pc = 0x198ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 320)));
    ctx->pc = 0x198ee4u;
}
