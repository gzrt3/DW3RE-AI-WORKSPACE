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

// Function: FUN_0012fb80
// Address: 0x12fb80 - 0x12fe94
void FUN_0012fb80_0x12fb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012fb80_0x12fb80");
#endif

    switch (ctx->pc) {
        case 0x12fbf8u: goto label_12fbf8;
        case 0x12fc08u: goto label_12fc08;
        case 0x12fc18u: goto label_12fc18;
        case 0x12fc28u: goto label_12fc28;
        case 0x12fc38u: goto label_12fc38;
        case 0x12fc48u: goto label_12fc48;
        case 0x12fc58u: goto label_12fc58;
        case 0x12fc6cu: goto label_12fc6c;
        case 0x12fc7cu: goto label_12fc7c;
        case 0x12fc8cu: goto label_12fc8c;
        case 0x12fca0u: goto label_12fca0;
        case 0x12fcb0u: goto label_12fcb0;
        case 0x12fcc0u: goto label_12fcc0;
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fce4u: goto label_12fce4;
        case 0x12fcf4u: goto label_12fcf4;
        case 0x12fd04u: goto label_12fd04;
        case 0x12fd20u: goto label_12fd20;
        case 0x12fda0u: goto label_12fda0;
        case 0x12fdb4u: goto label_12fdb4;
        case 0x12fdbcu: goto label_12fdbc;
        case 0x12fdc4u: goto label_12fdc4;
        case 0x12fdccu: goto label_12fdcc;
        case 0x12fdd4u: goto label_12fdd4;
        case 0x12fddcu: goto label_12fddc;
        case 0x12fde4u: goto label_12fde4;
        case 0x12fdecu: goto label_12fdec;
        case 0x12fdf4u: goto label_12fdf4;
        case 0x12fdfcu: goto label_12fdfc;
        case 0x12fe04u: goto label_12fe04;
        case 0x12fe0cu: goto label_12fe0c;
        case 0x12fe14u: goto label_12fe14;
        case 0x12fe24u: goto label_12fe24;
        case 0x12fe34u: goto label_12fe34;
        case 0x12fe44u: goto label_12fe44;
        case 0x12fe54u: goto label_12fe54;
        case 0x12fe64u: goto label_12fe64;
        case 0x12fe74u: goto label_12fe74;
        case 0x12fe80u: goto label_12fe80;
        case 0x12fe90u: goto label_12fe90;
        default: break;
    }

    ctx->pc = 0x12fb80u;

    // 0x12fb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12fb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12fb84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x12fb88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12fb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12fb8c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x12fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12fb90: 0x9025490d  lbu         $a1, 0x490D($at)
    ctx->pc = 0x12fb90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x33490Du));
    // 0x12fb94: 0x10a300b1  beq         $a1, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x12FB94u;
    {
        const bool branch_taken_0x12fb94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB94u;
        // 0x12fb98: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb94) {
            ctx->pc = 0x12FE5Cu;
            goto label_12fe5c;
        }
    }
    ctx->pc = 0x12FB9Cu;
    // 0x12fb9c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12fba0: 0x10a300a6  beq         $a1, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x12FBA0u;
    {
        const bool branch_taken_0x12fba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBA0u;
        // 0x12fba4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fba0) {
            ctx->pc = 0x12FE3Cu;
            goto label_12fe3c;
        }
    }
    ctx->pc = 0x12FBA8u;
    // 0x12fba8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x12fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12fbac: 0x10a3009b  beq         $a1, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x12FBACu;
    {
        const bool branch_taken_0x12fbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBACu;
        // 0x12fbb0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbac) {
            ctx->pc = 0x12FE1Cu;
            goto label_12fe1c;
        }
    }
    ctx->pc = 0x12FBB4u;
    // 0x12fbb4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x12fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12fbb8: 0x10a30068  beq         $a1, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBB8u;
        // 0x12fbbc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12FD5Cu;
            goto label_12fd5c;
        }
    }
    ctx->pc = 0x12FBC0u;
    // 0x12fbc0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12fbc4: 0x10a4004d  beq         $a1, $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x12FBC4u;
    {
        const bool branch_taken_0x12fbc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x12FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBC4u;
        // 0x12fbc8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbc4) {
            ctx->pc = 0x12FCFCu;
            goto label_12fcfc;
        }
    }
    ctx->pc = 0x12FBCCu;
    // 0x12fbcc: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x12FBCCu;
    {
        const bool branch_taken_0x12fbcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbcc) {
            ctx->pc = 0x12FC30u;
            goto label_12fc30;
        }
    }
    ctx->pc = 0x12FBD4u;
    // 0x12fbd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fbd8: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x12FBD8u;
    {
        const bool branch_taken_0x12fbd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbd8) {
            ctx->pc = 0x12FC10u;
            goto label_12fc10;
        }
    }
    ctx->pc = 0x12FBE0u;
    // 0x12fbe0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FBE0u;
    {
        const bool branch_taken_0x12fbe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbe0) {
            ctx->pc = 0x12FBF0u;
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12FBE8u;
    // 0x12fbe8: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x12FBE8u;
    {
        const bool branch_taken_0x12fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBE8u;
        // 0x12fbec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbe8) {
            ctx->pc = 0x12FE94u;
            return;
        }
    }
    ctx->pc = 0x12FBF0u;
label_12fbf0:
    // 0x12fbf0: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FBF0u;
    SET_GPR_U32(ctx, 31, 0x12FBF8u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FBF0u, 0x12FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FBF8u;
label_12fbf8:
    // 0x12fbf8: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12FBF8u;
    {
        const bool branch_taken_0x12fbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbf8) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC00u;
    // 0x12fc00: 0xc040208  jal         func_100820
    ctx->pc = 0x12FC00u;
    SET_GPR_U32(ctx, 31, 0x12FC08u);
    ctx->pc = 0x100820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100820u, 0x12FC00u, 0x12FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC08u;
label_12fc08:
    // 0x12fc08: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x12FC08u;
    {
        const bool branch_taken_0x12fc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc08) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC10u;
label_12fc10:
    // 0x12fc10: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC10u;
    SET_GPR_U32(ctx, 31, 0x12FC18u);
    ctx->pc = 0x12FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC10u;
    // 0x12fc14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC10u, 0x12FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC18u;
label_12fc18:
    // 0x12fc18: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x12FC18u;
    {
        const bool branch_taken_0x12fc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC18u;
        // 0x12fc1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc18) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC20u;
    // 0x12fc20: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC20u;
    SET_GPR_U32(ctx, 31, 0x12FC28u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC20u, 0x12FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC28u;
label_12fc28:
    // 0x12fc28: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x12FC28u;
    {
        const bool branch_taken_0x12fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc28) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC30u;
label_12fc30:
    // 0x12fc30: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC30u;
    SET_GPR_U32(ctx, 31, 0x12FC38u);
    ctx->pc = 0x12FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC30u;
    // 0x12fc34: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC30u, 0x12FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC38u;
label_12fc38:
    // 0x12fc38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FC38u;
    {
        const bool branch_taken_0x12fc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC38u;
        // 0x12fc3c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc38) {
            ctx->pc = 0x12FC64u;
            goto label_12fc64;
        }
    }
    ctx->pc = 0x12FC40u;
    // 0x12fc40: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC40u;
    SET_GPR_U32(ctx, 31, 0x12FC48u);
    ctx->pc = 0x12FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC40u;
    // 0x12fc44: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC40u, 0x12FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC48u;
label_12fc48:
    // 0x12fc48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC48u;
    {
        const bool branch_taken_0x12fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC48u;
        // 0x12fc4c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc48) {
            ctx->pc = 0x12FC60u;
            goto label_12fc60;
        }
    }
    ctx->pc = 0x12FC50u;
    // 0x12fc50: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC50u;
    SET_GPR_U32(ctx, 31, 0x12FC58u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC50u, 0x12FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC58u;
label_12fc58:
    // 0x12fc58: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC60u;
label_12fc60:
    // 0x12fc60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12fc64:
    // 0x12fc64: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC64u;
    SET_GPR_U32(ctx, 31, 0x12FC6Cu);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC64u, 0x12FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC6Cu;
label_12fc6c:
    // 0x12fc6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FC6Cu;
    {
        const bool branch_taken_0x12fc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC6Cu;
        // 0x12fc70: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc6c) {
            ctx->pc = 0x12FC98u;
            goto label_12fc98;
        }
    }
    ctx->pc = 0x12FC74u;
    // 0x12fc74: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC74u;
    SET_GPR_U32(ctx, 31, 0x12FC7Cu);
    ctx->pc = 0x12FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FC74u;
    // 0x12fc78: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC74u, 0x12FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC7Cu;
label_12fc7c:
    // 0x12fc7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC7Cu;
    {
        const bool branch_taken_0x12fc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC7Cu;
        // 0x12fc80: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc7c) {
            ctx->pc = 0x12FC94u;
            goto label_12fc94;
        }
    }
    ctx->pc = 0x12FC84u;
    // 0x12fc84: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FC84u;
    SET_GPR_U32(ctx, 31, 0x12FC8Cu);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FC84u, 0x12FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC8Cu;
label_12fc8c:
    // 0x12fc8c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x12FC8Cu;
    {
        const bool branch_taken_0x12fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc8c) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FC94u;
label_12fc94:
    // 0x12fc94: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_12fc98:
    // 0x12fc98: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FC98u;
    SET_GPR_U32(ctx, 31, 0x12FCA0u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FC98u, 0x12FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCA0u;
label_12fca0:
    // 0x12fca0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FCA0u;
    {
        const bool branch_taken_0x12fca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCA0u;
        // 0x12fca4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fca0) {
            ctx->pc = 0x12FCCCu;
            goto label_12fccc;
        }
    }
    ctx->pc = 0x12FCA8u;
    // 0x12fca8: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCA8u;
    SET_GPR_U32(ctx, 31, 0x12FCB0u);
    ctx->pc = 0x12FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCA8u;
    // 0x12fcac: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCA8u, 0x12FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCB0u;
label_12fcb0:
    // 0x12fcb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCB0u;
    {
        const bool branch_taken_0x12fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCB0u;
        // 0x12fcb4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcb0) {
            ctx->pc = 0x12FCC8u;
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FCB8u;
    // 0x12fcb8: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FCB8u;
    SET_GPR_U32(ctx, 31, 0x12FCC0u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FCB8u, 0x12FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCC0u;
label_12fcc0:
    // 0x12fcc0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12FCC0u;
    {
        const bool branch_taken_0x12fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcc0) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FCC8u;
label_12fcc8:
    // 0x12fcc8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_12fccc:
    // 0x12fccc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCCCu;
    SET_GPR_U32(ctx, 31, 0x12FCD4u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCCCu, 0x12FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCD4u;
        // 0x12fcd8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCDCu;
    SET_GPR_U32(ctx, 31, 0x12FCE4u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCDCu, 0x12FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE4u;
label_12fce4:
    // 0x12fce4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x12FCE4u;
    {
        const bool branch_taken_0x12fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCE4u;
        // 0x12fce8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce4) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FCECu;
    // 0x12fcec: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FCECu;
    SET_GPR_U32(ctx, 31, 0x12FCF4u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FCECu, 0x12FCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCF4u;
label_12fcf4:
    // 0x12fcf4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x12FCF4u;
    {
        const bool branch_taken_0x12fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcf4) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FCFCu;
label_12fcfc:
    // 0x12fcfc: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FCFCu;
    SET_GPR_U32(ctx, 31, 0x12FD04u);
    ctx->pc = 0x12FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCFCu;
    // 0x12fd00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FCFCu, 0x12FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD04u;
label_12fd04:
    // 0x12fd04: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x12FD04u;
    {
        const bool branch_taken_0x12fd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd04) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD0Cu;
    // 0x12fd0c: 0x8f8785d0  lw          $a3, -0x7A30($gp)
    ctx->pc = 0x12fd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
    // 0x12fd10: 0x10e0005f  beqz        $a3, . + 4 + (0x5F << 2)
    ctx->pc = 0x12FD10u;
    {
        const bool branch_taken_0x12fd10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD10u;
        // 0x12fd14: 0x2404ffef  addiu       $a0, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd10) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD18u;
    // 0x12fd18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fd1c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x12fd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_12fd20:
    // 0x12fd20: 0x90e30094  lbu         $v1, 0x94($a3)
    ctx->pc = 0x12fd20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x12fd24: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FD24u;
    {
        const bool branch_taken_0x12fd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x12fd24) {
            ctx->pc = 0x12FD44u;
            goto label_12fd44;
        }
    }
    ctx->pc = 0x12FD2Cu;
    // 0x12fd2c: 0x90e30096  lbu         $v1, 0x96($a3)
    ctx->pc = 0x12fd2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 150)));
    // 0x12fd30: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FD30u;
    {
        const bool branch_taken_0x12fd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x12fd30) {
            ctx->pc = 0x12FD44u;
            goto label_12fd44;
        }
    }
    ctx->pc = 0x12FD38u;
    // 0x12fd38: 0x8ce30090  lw          $v1, 0x90($a3)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 144)));
    // 0x12fd3c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12fd40: 0xace30090  sw          $v1, 0x90($a3)
    ctx->pc = 0x12fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 3));
label_12fd44:
    // 0x12fd44: 0x0  nop
    ctx->pc = 0x12fd44u;
    // NOP
    // 0x12fd48: 0x8ce70084  lw          $a3, 0x84($a3)
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x12fd4c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x12FD4Cu;
    {
        const bool branch_taken_0x12fd4c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd4c) {
            ctx->pc = 0x12FD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fd20;
        }
    }
    ctx->pc = 0x12FD54u;
    // 0x12fd54: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x12FD54u;
    {
        const bool branch_taken_0x12fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd54) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD5Cu;
label_12fd5c:
    // 0x12fd5c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x12fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12fd60: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x12fd60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x12fd64: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x12FD64u;
    {
        const bool branch_taken_0x12fd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD64u;
        // 0x12fd68: 0x2483ffb6  addiu       $v1, $a0, -0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd64) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD6Cu;
    // 0x12fd6c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x12fd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12fd70: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x12FD70u;
    {
        const bool branch_taken_0x12fd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fd70) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD78u;
    // 0x12fd78: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x12fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x12fd7c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD7Cu;
    {
        const bool branch_taken_0x12fd7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD7Cu;
        // 0x12fd80: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd7c) {
            ctx->pc = 0x12FD98u;
            goto label_12fd98;
        }
    }
    ctx->pc = 0x12FD84u;
    // 0x12fd84: 0x902350b2  lbu         $v1, 0x50B2($at)
    ctx->pc = 0x12fd84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 20658)));
    // 0x12fd88: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x12FD88u;
    {
        const bool branch_taken_0x12fd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd88) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FD90u;
    // 0x12fd90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12FD90u;
    {
        const bool branch_taken_0x12fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD90u;
        // 0x12fd94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd90) {
            ctx->pc = 0x12FDACu;
            goto label_12fdac;
        }
    }
    ctx->pc = 0x12FD98u;
label_12fd98:
    // 0x12fd98: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FD98u;
    SET_GPR_U32(ctx, 31, 0x12FDA0u);
    ctx->pc = 0x12FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD98u;
    // 0x12fd9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FD98u, 0x12FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDA0u;
label_12fda0:
    // 0x12fda0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x12FDA0u;
    {
        const bool branch_taken_0x12fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fda0) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FDA8u;
    // 0x12fda8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12fdac:
    // 0x12fdac: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDACu;
    SET_GPR_U32(ctx, 31, 0x12FDB4u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDACu, 0x12FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDB4u;
label_12fdb4:
    // 0x12fdb4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDB4u;
    SET_GPR_U32(ctx, 31, 0x12FDBCu);
    ctx->pc = 0x12FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDB4u;
    // 0x12fdb8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDB4u, 0x12FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDBCu;
label_12fdbc:
    // 0x12fdbc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDBCu;
    SET_GPR_U32(ctx, 31, 0x12FDC4u);
    ctx->pc = 0x12FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDBCu;
    // 0x12fdc0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDBCu, 0x12FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDC4u;
label_12fdc4:
    // 0x12fdc4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDC4u;
    SET_GPR_U32(ctx, 31, 0x12FDCCu);
    ctx->pc = 0x12FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDC4u;
    // 0x12fdc8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDC4u, 0x12FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDCCu;
label_12fdcc:
    // 0x12fdcc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDCCu;
    SET_GPR_U32(ctx, 31, 0x12FDD4u);
    ctx->pc = 0x12FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDCCu;
    // 0x12fdd0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDCCu, 0x12FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDD4u;
label_12fdd4:
    // 0x12fdd4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDD4u;
    SET_GPR_U32(ctx, 31, 0x12FDDCu);
    ctx->pc = 0x12FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDD4u;
    // 0x12fdd8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDD4u, 0x12FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDDCu;
label_12fddc:
    // 0x12fddc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDDCu;
    SET_GPR_U32(ctx, 31, 0x12FDE4u);
    ctx->pc = 0x12FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDDCu;
    // 0x12fde0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDDCu, 0x12FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDE4u;
label_12fde4:
    // 0x12fde4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDE4u;
    SET_GPR_U32(ctx, 31, 0x12FDECu);
    ctx->pc = 0x12FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDE4u;
    // 0x12fde8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDE4u, 0x12FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDECu;
label_12fdec:
    // 0x12fdec: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDECu;
    SET_GPR_U32(ctx, 31, 0x12FDF4u);
    ctx->pc = 0x12FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDECu;
    // 0x12fdf0: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDECu, 0x12FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDF4u;
label_12fdf4:
    // 0x12fdf4: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDF4u;
    SET_GPR_U32(ctx, 31, 0x12FDFCu);
    ctx->pc = 0x12FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDF4u;
    // 0x12fdf8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDF4u, 0x12FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FDFCu;
label_12fdfc:
    // 0x12fdfc: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FDFCu;
    SET_GPR_U32(ctx, 31, 0x12FE04u);
    ctx->pc = 0x12FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FDFCu;
    // 0x12fe00: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FDFCu, 0x12FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE04u;
label_12fe04:
    // 0x12fe04: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE04u;
    SET_GPR_U32(ctx, 31, 0x12FE0Cu);
    ctx->pc = 0x12FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE04u;
    // 0x12fe08: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE04u, 0x12FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE0Cu;
label_12fe0c:
    // 0x12fe0c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE0Cu;
    SET_GPR_U32(ctx, 31, 0x12FE14u);
    ctx->pc = 0x12FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE0Cu;
    // 0x12fe10: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE0Cu, 0x12FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE14u;
label_12fe14:
    // 0x12fe14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FE14u;
    {
        const bool branch_taken_0x12fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe14) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE1Cu;
label_12fe1c:
    // 0x12fe1c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE1Cu;
    SET_GPR_U32(ctx, 31, 0x12FE24u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE1Cu, 0x12FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE24u;
label_12fe24:
    // 0x12fe24: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12FE24u;
    {
        const bool branch_taken_0x12fe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE24u;
        // 0x12fe28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe24) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE2Cu;
    // 0x12fe2c: 0xc05efcc  jal         func_17BF30
    ctx->pc = 0x12FE2Cu;
    SET_GPR_U32(ctx, 31, 0x12FE34u);
    ctx->pc = 0x17BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF30u, 0x12FE2Cu, 0x12FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE34u;
label_12fe34:
    // 0x12fe34: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12FE34u;
    {
        const bool branch_taken_0x12fe34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe34) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE3Cu;
label_12fe3c:
    // 0x12fe3c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE3Cu;
    SET_GPR_U32(ctx, 31, 0x12FE44u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE3Cu, 0x12FE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE44u;
label_12fe44:
    // 0x12fe44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12FE44u;
    {
        const bool branch_taken_0x12fe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE44u;
        // 0x12fe48: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe44) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE4Cu;
    // 0x12fe4c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE4Cu;
    SET_GPR_U32(ctx, 31, 0x12FE54u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE4Cu, 0x12FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE54u;
label_12fe54:
    // 0x12fe54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FE54u;
    {
        const bool branch_taken_0x12fe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe54) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE5Cu;
label_12fe5c:
    // 0x12fe5c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE5Cu;
    SET_GPR_U32(ctx, 31, 0x12FE64u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE5Cu, 0x12FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE64u;
label_12fe64:
    // 0x12fe64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FE64u;
    {
        const bool branch_taken_0x12fe64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE64u;
        // 0x12fe68: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe64) {
            ctx->pc = 0x12FE78u;
            goto label_12fe78;
        }
    }
    ctx->pc = 0x12FE6Cu;
    // 0x12fe6c: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE6Cu;
    SET_GPR_U32(ctx, 31, 0x12FE74u);
    ctx->pc = 0x12FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE6Cu;
    // 0x12fe70: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE6Cu, 0x12FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE74u;
label_12fe74:
    // 0x12fe74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_12fe78:
    // 0x12fe78: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x12FE78u;
    SET_GPR_U32(ctx, 31, 0x12FE80u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x12FE78u, 0x12FE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE80u;
label_12fe80:
    // 0x12fe80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FE80u;
    {
        const bool branch_taken_0x12fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE80u;
        // 0x12fe84: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe80) {
            ctx->pc = 0x12FE90u;
            goto label_12fe90;
        }
    }
    ctx->pc = 0x12FE88u;
    // 0x12fe88: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x12FE88u;
    SET_GPR_U32(ctx, 31, 0x12FE90u);
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x12FE88u, 0x12FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE90u;
label_12fe90:
    // 0x12fe90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12fe90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12fe94u;
}
