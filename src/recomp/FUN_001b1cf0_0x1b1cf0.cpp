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

// Function: FUN_001b1cf0
// Address: 0x1b1cf0 - 0x1b1e30
void FUN_001b1cf0_0x1b1cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1cf0_0x1b1cf0");
#endif

    switch (ctx->pc) {
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1e08u: goto label_1b1e08;
        default: break;
    }

    ctx->pc = 0x1b1cf0u;

    // 0x1b1cf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b1cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b1cf4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1cf8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b1cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1b1cfc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b1d00: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b1d04: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b1d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b1d08: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b1d08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d0c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b1d10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b1d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b1d18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d1c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b1d20: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1b1d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1d28: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b1d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b1d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b1d30: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b1d34: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1d38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1D38u;
    {
        const bool branch_taken_0x1b1d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D38u;
        // 0x1b1d3c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d38) {
            ctx->pc = 0x1B1D48u;
            goto label_1b1d48;
        }
    }
    ctx->pc = 0x1B1D40u;
    // 0x1b1d40: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1B1D40u;
    {
        const bool branch_taken_0x1b1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D40u;
        // 0x1b1d44: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d40) {
            ctx->pc = 0x1B1E0Cu;
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D48u;
label_1b1d48:
    // 0x1b1d48: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1d4c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D54u);
    ctx->pc = 0x1B1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D4Cu;
    // 0x1b1d50: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1D4Cu, 0x1B1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D54u;
label_1b1d54:
    // 0x1b1d54: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1D54u;
    {
        const bool branch_taken_0x1b1d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D54u;
        // 0x1b1d58: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d54) {
            ctx->pc = 0x1B1E0Cu;
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D5Cu;
    // 0x1b1d5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1D5Cu;
    {
        const bool branch_taken_0x1b1d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d5c) {
            ctx->pc = 0x1B1D70u;
            goto label_1b1d70;
        }
    }
    ctx->pc = 0x1B1D64u;
    // 0x1b1d64: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b1d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1D68u;
    {
        const bool branch_taken_0x1b1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D68u;
        // 0x1b1d6c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d68) {
            ctx->pc = 0x1B1D80u;
            goto label_1b1d80;
        }
    }
    ctx->pc = 0x1B1D70u;
label_1b1d70:
    // 0x1b1d70: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D70u;
    // 0x1b1d74: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1D70u, 0x1B1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B1D78u;
    {
        const bool branch_taken_0x1b1d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d78) {
            ctx->pc = 0x1B1E0Cu;
            goto label_1b1e0c;
        }
    }
    ctx->pc = 0x1B1D80u;
label_1b1d80:
    // 0x1b1d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1d84: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b1d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b1d88: 0xac5662b0  sw          $s6, 0x62B0($v0)
    ctx->pc = 0x1b1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 22));
    // 0x1b1d8c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1b1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1b1d90: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b1d94: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1b1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1b1d98: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b1d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b1d9c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1b1da0: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B1DA0u;
    SET_GPR_U32(ctx, 31, 0x1B1DA8u);
    ctx->pc = 0x1B1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DA0u;
    // 0x1b1da4: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B1DA0u, 0x1B1DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DA8u;
label_1b1da8:
    // 0x1b1da8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DA8u;
    {
        const bool branch_taken_0x1b1da8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1B1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DA8u;
        // 0x1b1dac: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1da8) {
            ctx->pc = 0x1B1DBCu;
            goto label_1b1dbc;
        }
    }
    ctx->pc = 0x1B1DB0u;
    // 0x1b1db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1db4: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1DB4u;
    SET_GPR_U32(ctx, 31, 0x1B1DBCu);
    ctx->pc = 0x1B1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DB4u;
    // 0x1b1db8: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1DB4u, 0x1B1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DBCu;
label_1b1dbc:
    // 0x1b1dbc: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1dc0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dc8: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1dcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b1dd0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1dd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1dd8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b1ddc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1de0: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE0u;
    // 0x1b1de4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1DE0u, 0x1B1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1dec: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1DECu;
    {
        const bool branch_taken_0x1b1dec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DECu;
        // 0x1b1df0: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dec) {
            ctx->pc = 0x1B1E00u;
            goto label_1b1e00;
        }
    }
    ctx->pc = 0x1B1DF4u;
    // 0x1b1df4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1b1df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1DF8u;
    {
        const bool branch_taken_0x1b1df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF8u;
        // 0x1b1dfc: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1df8) {
            ctx->pc = 0x1B1E08u;
            goto label_1b1e08;
        }
    }
    ctx->pc = 0x1B1E00u;
label_1b1e00:
    // 0x1b1e00: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1E00u;
    SET_GPR_U32(ctx, 31, 0x1B1E08u);
    ctx->pc = 0x1B1E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1E00u;
    // 0x1b1e04: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1E00u, 0x1B1E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1E08u;
label_1b1e08:
    // 0x1b1e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1e0c:
    // 0x1b1e0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b1e10: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1e10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1e14: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1e14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1e18: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1e18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1e1c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1e20: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1e20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1e24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1e28: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1e28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1e2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1e30u;
}
