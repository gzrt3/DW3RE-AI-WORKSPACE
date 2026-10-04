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

// Function: FUN_00145d00
// Address: 0x145d00 - 0x1460d8
void FUN_00145d00_0x145d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00145d00_0x145d00");
#endif

    switch (ctx->pc) {
        case 0x145d3cu: goto label_145d3c;
        case 0x145d48u: goto label_145d48;
        case 0x145d54u: goto label_145d54;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d64u: goto label_145d64;
        case 0x145d6cu: goto label_145d6c;
        case 0x145d78u: goto label_145d78;
        case 0x145d8cu: goto label_145d8c;
        case 0x145d94u: goto label_145d94;
        case 0x145d9cu: goto label_145d9c;
        case 0x145da8u: goto label_145da8;
        case 0x145db8u: goto label_145db8;
        case 0x145dc8u: goto label_145dc8;
        case 0x145dd8u: goto label_145dd8;
        case 0x145de4u: goto label_145de4;
        case 0x145df4u: goto label_145df4;
        case 0x145e04u: goto label_145e04;
        case 0x145e14u: goto label_145e14;
        case 0x145e20u: goto label_145e20;
        case 0x145e30u: goto label_145e30;
        case 0x145e48u: goto label_145e48;
        case 0x145e50u: goto label_145e50;
        case 0x145e58u: goto label_145e58;
        case 0x145e60u: goto label_145e60;
        case 0x145e68u: goto label_145e68;
        case 0x145e70u: goto label_145e70;
        case 0x145e78u: goto label_145e78;
        case 0x145e84u: goto label_145e84;
        case 0x145e8cu: goto label_145e8c;
        case 0x145e94u: goto label_145e94;
        case 0x145e9cu: goto label_145e9c;
        case 0x145eb4u: goto label_145eb4;
        case 0x145eccu: goto label_145ecc;
        case 0x145ed4u: goto label_145ed4;
        case 0x145edcu: goto label_145edc;
        case 0x145ee4u: goto label_145ee4;
        case 0x145ef0u: goto label_145ef0;
        case 0x145ef8u: goto label_145ef8;
        case 0x145f1cu: goto label_145f1c;
        case 0x145f24u: goto label_145f24;
        case 0x145f2cu: goto label_145f2c;
        case 0x145f34u: goto label_145f34;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f44u: goto label_145f44;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f54u: goto label_145f54;
        case 0x145f5cu: goto label_145f5c;
        case 0x145f64u: goto label_145f64;
        case 0x145f6cu: goto label_145f6c;
        case 0x145fa4u: goto label_145fa4;
        case 0x145fb4u: goto label_145fb4;
        case 0x145fbcu: goto label_145fbc;
        case 0x145fc4u: goto label_145fc4;
        case 0x145fccu: goto label_145fcc;
        case 0x145fd4u: goto label_145fd4;
        case 0x145fdcu: goto label_145fdc;
        case 0x145fe4u: goto label_145fe4;
        case 0x145fecu: goto label_145fec;
        case 0x145ff4u: goto label_145ff4;
        case 0x145ffcu: goto label_145ffc;
        case 0x146004u: goto label_146004;
        case 0x14600cu: goto label_14600c;
        case 0x146014u: goto label_146014;
        case 0x14601cu: goto label_14601c;
        case 0x146024u: goto label_146024;
        case 0x14602cu: goto label_14602c;
        case 0x146034u: goto label_146034;
        case 0x146058u: goto label_146058;
        case 0x146060u: goto label_146060;
        case 0x146068u: goto label_146068;
        case 0x146070u: goto label_146070;
        case 0x146078u: goto label_146078;
        case 0x146080u: goto label_146080;
        case 0x146088u: goto label_146088;
        case 0x146090u: goto label_146090;
        case 0x146098u: goto label_146098;
        case 0x1460a0u: goto label_1460a0;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460b0u: goto label_1460b0;
        case 0x1460b8u: goto label_1460b8;
        case 0x1460c0u: goto label_1460c0;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460d0u: goto label_1460d0;
        default: break;
    }

    ctx->pc = 0x145d00u;

    // 0x145d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x145d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x145d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x145d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145d0c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145d10: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x145d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x145d14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x145D14u;
    {
        const bool branch_taken_0x145d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145d14) {
            ctx->pc = 0x145D30u;
            goto label_145d30;
        }
    }
    ctx->pc = 0x145D1Cu;
    // 0x145d1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d20: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x145d24: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x145d24u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x145d28: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x145D28u;
    {
        const bool branch_taken_0x145d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145d28) {
            ctx->pc = 0x145D94u;
            goto label_145d94;
        }
    }
    ctx->pc = 0x145D30u;
label_145d30:
    // 0x145d30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d34: 0xc0401b8  jal         func_1006E0
    ctx->pc = 0x145D34u;
    SET_GPR_U32(ctx, 31, 0x145D3Cu);
    ctx->pc = 0x145D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D34u;
    // 0x145d38: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006E0u, 0x145D34u, 0x145D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D3Cu;
label_145d3c:
    // 0x145d3c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x145d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x145d40: 0xc044ad0  jal         func_112B40
    ctx->pc = 0x145D40u;
    SET_GPR_U32(ctx, 31, 0x145D48u);
    ctx->pc = 0x145D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D40u;
    // 0x145d44: 0x24842470  addiu       $a0, $a0, 0x2470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112B40u, 0x145D40u, 0x145D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D48u;
label_145d48:
    // 0x145d48: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x145d4c: 0xc044dd4  jal         func_113750
    ctx->pc = 0x145D4Cu;
    SET_GPR_U32(ctx, 31, 0x145D54u);
    ctx->pc = 0x145D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D4Cu;
    // 0x145d50: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113750u, 0x145D4Cu, 0x145D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D54u;
label_145d54:
    // 0x145d54: 0xc08c2f0  jal         func_230BC0
    ctx->pc = 0x145D54u;
    SET_GPR_U32(ctx, 31, 0x145D5Cu);
    ctx->pc = 0x230BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BC0u, 0x145D54u, 0x145D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D5Cu;
label_145d5c:
    // 0x145d5c: 0xc0544a0  jal         func_151280
    ctx->pc = 0x145D5Cu;
    SET_GPR_U32(ctx, 31, 0x145D64u);
    ctx->pc = 0x151280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151280u, 0x145D5Cu, 0x145D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D64u;
label_145d64:
    // 0x145d64: 0xc0656b0  jal         func_195AC0
    ctx->pc = 0x145D64u;
    SET_GPR_U32(ctx, 31, 0x145D6Cu);
    ctx->pc = 0x195AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AC0u, 0x145D64u, 0x145D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D6Cu;
label_145d6c:
    // 0x145d6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d70: 0xc040220  jal         func_100880
    ctx->pc = 0x145D70u;
    SET_GPR_U32(ctx, 31, 0x145D78u);
    ctx->pc = 0x145D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D70u;
    // 0x145d74: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100880u, 0x145D70u, 0x145D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D78u;
label_145d78:
    // 0x145d78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d7c: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x145d7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x145d80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145d84: 0xc04e004  jal         func_138010
    ctx->pc = 0x145D84u;
    SET_GPR_U32(ctx, 31, 0x145D8Cu);
    ctx->pc = 0x145D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D84u;
    // 0x145d88: 0x9025490e  lbu         $a1, 0x490E($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18702)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138010u, 0x145D84u, 0x145D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D8Cu;
label_145d8c:
    // 0x145d8c: 0xc041500  jal         func_105400
    ctx->pc = 0x145D8Cu;
    SET_GPR_U32(ctx, 31, 0x145D94u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145D8Cu, 0x145D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D94u;
label_145d94:
    // 0x145d94: 0xc05562c  jal         func_1558B0
    ctx->pc = 0x145D94u;
    SET_GPR_U32(ctx, 31, 0x145D9Cu);
    ctx->pc = 0x1558B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558B0u, 0x145D94u, 0x145D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D9Cu;
label_145d9c:
    // 0x145d9c: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145da0: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145DA0u;
    SET_GPR_U32(ctx, 31, 0x145DA8u);
    ctx->pc = 0x145DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DA0u;
    // 0x145da4: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145DA0u, 0x145DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DA8u;
label_145da8:
    // 0x145da8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145DA8u;
    {
        const bool branch_taken_0x145da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145da8) {
            ctx->pc = 0x145DC0u;
            goto label_145dc0;
        }
    }
    ctx->pc = 0x145DB0u;
    // 0x145db0: 0xc055610  jal         func_155840
    ctx->pc = 0x145DB0u;
    SET_GPR_U32(ctx, 31, 0x145DB8u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145DB0u, 0x145DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DB8u;
label_145db8:
    // 0x145db8: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x145DB8u;
    {
        const bool branch_taken_0x145db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DB8u;
        // 0x145dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145db8) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x145DC0u;
label_145dc0:
    // 0x145dc0: 0xc044cfc  jal         func_1133F0
    ctx->pc = 0x145DC0u;
    SET_GPR_U32(ctx, 31, 0x145DC8u);
    ctx->pc = 0x1133F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1133F0u, 0x145DC0u, 0x145DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DC8u;
label_145dc8:
    // 0x145dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145DC8u;
    {
        const bool branch_taken_0x145dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145dc8) {
            ctx->pc = 0x145DFCu;
            goto label_145dfc;
        }
    }
    ctx->pc = 0x145DD0u;
    // 0x145dd0: 0xc041500  jal         func_105400
    ctx->pc = 0x145DD0u;
    SET_GPR_U32(ctx, 31, 0x145DD8u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145DD0u, 0x145DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DD8u;
label_145dd8:
    // 0x145dd8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145ddc: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145DDCu;
    SET_GPR_U32(ctx, 31, 0x145DE4u);
    ctx->pc = 0x145DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145DDCu;
    // 0x145de0: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145DDCu, 0x145DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DE4u;
label_145de4:
    // 0x145de4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145DE4u;
    {
        const bool branch_taken_0x145de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145de4) {
            ctx->pc = 0x145DFCu;
            goto label_145dfc;
        }
    }
    ctx->pc = 0x145DECu;
    // 0x145dec: 0xc055610  jal         func_155840
    ctx->pc = 0x145DECu;
    SET_GPR_U32(ctx, 31, 0x145DF4u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145DECu, 0x145DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145DF4u;
label_145df4:
    // 0x145df4: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x145DF4u;
    {
        const bool branch_taken_0x145df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DF4u;
        // 0x145df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145df4) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x145DFCu;
label_145dfc:
    // 0x145dfc: 0xc065614  jal         func_195850
    ctx->pc = 0x145DFCu;
    SET_GPR_U32(ctx, 31, 0x145E04u);
    ctx->pc = 0x195850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195850u, 0x145DFCu, 0x145E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E04u;
label_145e04:
    // 0x145e04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145E04u;
    {
        const bool branch_taken_0x145e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145e04) {
            ctx->pc = 0x145E38u;
            goto label_145e38;
        }
    }
    ctx->pc = 0x145E0Cu;
    // 0x145e0c: 0xc041500  jal         func_105400
    ctx->pc = 0x145E0Cu;
    SET_GPR_U32(ctx, 31, 0x145E14u);
    ctx->pc = 0x105400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105400u, 0x145E0Cu, 0x145E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E14u;
label_145e14:
    // 0x145e14: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x145e18: 0xc0414ac  jal         func_1052B0
    ctx->pc = 0x145E18u;
    SET_GPR_U32(ctx, 31, 0x145E20u);
    ctx->pc = 0x145E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E18u;
    // 0x145e1c: 0x30440010  andi        $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1052B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1052B0u, 0x145E18u, 0x145E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E20u;
label_145e20:
    // 0x145e20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E20u;
    {
        const bool branch_taken_0x145e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145e20) {
            ctx->pc = 0x145E38u;
            goto label_145e38;
        }
    }
    ctx->pc = 0x145E28u;
    // 0x145e28: 0xc055610  jal         func_155840
    ctx->pc = 0x145E28u;
    SET_GPR_U32(ctx, 31, 0x145E30u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145E28u, 0x145E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E30u;
label_145e30:
    // 0x145e30: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x145E30u;
    {
        const bool branch_taken_0x145e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E30u;
        // 0x145e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e30) {
            ctx->pc = 0x1460D4u;
            goto label_1460d4;
        }
    }
    ctx->pc = 0x145E38u;
label_145e38:
    // 0x145e38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145e3c: 0x9022490d  lbu         $v0, 0x490D($at)
    ctx->pc = 0x145e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33490Du));
    // 0x145e40: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x145E40u;
    SET_GPR_U32(ctx, 31, 0x145E48u);
    ctx->pc = 0x145E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E40u;
    // 0x145e44: 0x24440002  addiu       $a0, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x145E40u, 0x145E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E48u;
label_145e48:
    // 0x145e48: 0xc05183c  jal         func_1460F0
    ctx->pc = 0x145E48u;
    SET_GPR_U32(ctx, 31, 0x145E50u);
    ctx->pc = 0x1460F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460F0u, 0x145E48u, 0x145E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E50u;
label_145e50:
    // 0x145e50: 0xc048e6c  jal         func_1239B0
    ctx->pc = 0x145E50u;
    SET_GPR_U32(ctx, 31, 0x145E58u);
    ctx->pc = 0x1239B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1239B0u, 0x145E50u, 0x145E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E58u;
label_145e58:
    // 0x145e58: 0xc07f218  jal         func_1FC860
    ctx->pc = 0x145E58u;
    SET_GPR_U32(ctx, 31, 0x145E60u);
    ctx->pc = 0x145E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E58u;
    // 0x145e5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC860u, 0x145E58u, 0x145E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E60u;
label_145e60:
    // 0x145e60: 0xc054438  jal         func_1510E0
    ctx->pc = 0x145E60u;
    SET_GPR_U32(ctx, 31, 0x145E68u);
    ctx->pc = 0x1510E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1510E0u, 0x145E60u, 0x145E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E68u;
label_145e68:
    // 0x145e68: 0xc045624  jal         func_115890
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x115890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115890u, 0x145E68u, 0x145E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0xc07a764  jal         func_1E9D90
    ctx->pc = 0x145E70u;
    SET_GPR_U32(ctx, 31, 0x145E78u);
    ctx->pc = 0x1E9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D90u, 0x145E70u, 0x145E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E78u;
label_145e78:
    // 0x145e78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145e7c: 0xc04dfd0  jal         func_137F40
    ctx->pc = 0x145E7Cu;
    SET_GPR_U32(ctx, 31, 0x145E84u);
    ctx->pc = 0x145E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E7Cu;
    // 0x145e80: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F40u, 0x145E7Cu, 0x145E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E84u;
label_145e84:
    // 0x145e84: 0xc0548ec  jal         func_1523B0
    ctx->pc = 0x145E84u;
    SET_GPR_U32(ctx, 31, 0x145E8Cu);
    ctx->pc = 0x1523B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1523B0u, 0x145E84u, 0x145E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E8Cu;
label_145e8c:
    // 0x145e8c: 0xc043d70  jal         func_10F5C0
    ctx->pc = 0x145E8Cu;
    SET_GPR_U32(ctx, 31, 0x145E94u);
    ctx->pc = 0x10F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F5C0u, 0x145E8Cu, 0x145E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E94u;
label_145e94:
    // 0x145e94: 0xc0589b0  jal         func_1626C0
    ctx->pc = 0x145E94u;
    SET_GPR_U32(ctx, 31, 0x145E9Cu);
    ctx->pc = 0x1626C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1626C0u, 0x145E94u, 0x145E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E9Cu;
label_145e9c:
    // 0x145e9c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145ea0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x145ea4: 0x9026497c  lbu         $a2, 0x497C($at)
    ctx->pc = 0x145ea4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x145ea8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x145eac: 0xc07565c  jal         func_1D5970
    ctx->pc = 0x145EACu;
    SET_GPR_U32(ctx, 31, 0x145EB4u);
    ctx->pc = 0x145EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EACu;
    // 0x145eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5970u, 0x145EACu, 0x145EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EB4u;
label_145eb4:
    // 0x145eb4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145eb8: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x145eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x145ebc: 0x90264a0c  lbu         $a2, 0x4A0C($at)
    ctx->pc = 0x145ebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x145ec0: 0x24840410  addiu       $a0, $a0, 0x410
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x145ec4: 0xc07565c  jal         func_1D5970
    ctx->pc = 0x145EC4u;
    SET_GPR_U32(ctx, 31, 0x145ECCu);
    ctx->pc = 0x145EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EC4u;
    // 0x145ec8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5970u, 0x145EC4u, 0x145ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ECCu;
label_145ecc:
    // 0x145ecc: 0xc056348  jal         func_158D20
    ctx->pc = 0x145ECCu;
    SET_GPR_U32(ctx, 31, 0x145ED4u);
    ctx->pc = 0x158D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D20u, 0x145ECCu, 0x145ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145ED4u;
label_145ed4:
    // 0x145ed4: 0xc051898  jal         func_146260
    ctx->pc = 0x145ED4u;
    SET_GPR_U32(ctx, 31, 0x145EDCu);
    ctx->pc = 0x146260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146260u, 0x145ED4u, 0x145EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EDCu;
label_145edc:
    // 0x145edc: 0xc04d67c  jal         func_1359F0
    ctx->pc = 0x145EDCu;
    SET_GPR_U32(ctx, 31, 0x145EE4u);
    ctx->pc = 0x1359F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1359F0u, 0x145EDCu, 0x145EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EE4u;
label_145ee4:
    // 0x145ee4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145ee8: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x145EE8u;
    SET_GPR_U32(ctx, 31, 0x145EF0u);
    ctx->pc = 0x145EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145EE8u;
    // 0x145eec: 0x9024490d  lbu         $a0, 0x490D($at) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x145EE8u, 0x145EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EF0u;
label_145ef0:
    // 0x145ef0: 0xc055610  jal         func_155840
    ctx->pc = 0x145EF0u;
    SET_GPR_U32(ctx, 31, 0x145EF8u);
    ctx->pc = 0x155840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155840u, 0x145EF0u, 0x145EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EF8u;
label_145ef8:
    // 0x145ef8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145efc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x145efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x145f00: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x145f04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F04u;
    {
        const bool branch_taken_0x145f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F04u;
        // 0x145f08: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f04) {
            ctx->pc = 0x145F14u;
            goto label_145f14;
        }
    }
    ctx->pc = 0x145F0Cu;
    // 0x145f0c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145F0Cu;
    {
        const bool branch_taken_0x145f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x145f0c) {
            ctx->pc = 0x145F1Cu;
            goto label_145f1c;
        }
    }
    ctx->pc = 0x145F14u;
label_145f14:
    // 0x145f14: 0xc16a080  jal         func_5A8200
    ctx->pc = 0x145F14u;
    SET_GPR_U32(ctx, 31, 0x145F1Cu);
    ctx->pc = 0x5A8200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A8200u, 0x145F14u, 0x145F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F1Cu;
label_145f1c:
    // 0x145f1c: 0xc08527c  jal         func_2149F0
    ctx->pc = 0x145F1Cu;
    SET_GPR_U32(ctx, 31, 0x145F24u);
    ctx->pc = 0x2149F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149F0u, 0x145F1Cu, 0x145F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F24u;
label_145f24:
    // 0x145f24: 0xc0751bc  jal         func_1D46F0
    ctx->pc = 0x145F24u;
    SET_GPR_U32(ctx, 31, 0x145F2Cu);
    ctx->pc = 0x1D46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46F0u, 0x145F24u, 0x145F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F2Cu;
label_145f2c:
    // 0x145f2c: 0xc074cc4  jal         func_1D3310
    ctx->pc = 0x145F2Cu;
    SET_GPR_U32(ctx, 31, 0x145F34u);
    ctx->pc = 0x1D3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3310u, 0x145F2Cu, 0x145F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F34u;
label_145f34:
    // 0x145f34: 0xc07077c  jal         func_1C1DF0
    ctx->pc = 0x145F34u;
    SET_GPR_U32(ctx, 31, 0x145F3Cu);
    ctx->pc = 0x1C1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DF0u, 0x145F34u, 0x145F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F3Cu;
label_145f3c:
    // 0x145f3c: 0xc070140  jal         func_1C0500
    ctx->pc = 0x145F3Cu;
    SET_GPR_U32(ctx, 31, 0x145F44u);
    ctx->pc = 0x1C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0500u, 0x145F3Cu, 0x145F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F44u;
label_145f44:
    // 0x145f44: 0xc07b07c  jal         func_1EC1F0
    ctx->pc = 0x145F44u;
    SET_GPR_U32(ctx, 31, 0x145F4Cu);
    ctx->pc = 0x1EC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1F0u, 0x145F44u, 0x145F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F4Cu;
label_145f4c:
    // 0x145f4c: 0xc07af20  jal         func_1EBC80
    ctx->pc = 0x145F4Cu;
    SET_GPR_U32(ctx, 31, 0x145F54u);
    ctx->pc = 0x1EBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC80u, 0x145F4Cu, 0x145F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F54u;
label_145f54:
    // 0x145f54: 0xc07ae58  jal         func_1EB960
    ctx->pc = 0x145F54u;
    SET_GPR_U32(ctx, 31, 0x145F5Cu);
    ctx->pc = 0x1EB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB960u, 0x145F54u, 0x145F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F5Cu;
label_145f5c:
    // 0x145f5c: 0xc07b110  jal         func_1EC440
    ctx->pc = 0x145F5Cu;
    SET_GPR_U32(ctx, 31, 0x145F64u);
    ctx->pc = 0x1EC440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC440u, 0x145F5Cu, 0x145F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F64u;
label_145f64:
    // 0x145f64: 0xc090e7c  jal         func_2439F0
    ctx->pc = 0x145F64u;
    SET_GPR_U32(ctx, 31, 0x145F6Cu);
    ctx->pc = 0x2439F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2439F0u, 0x145F64u, 0x145F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F6Cu;
label_145f6c:
    // 0x145f6c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x145f70: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x145f74: 0x802451ec  lb          $a0, 0x51EC($at)
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x3651ECu));
    // 0x145f78: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x145F78u;
    {
        const bool branch_taken_0x145f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x145F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F78u;
        // 0x145f7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f78) {
            ctx->pc = 0x145FACu;
            goto label_145fac;
        }
    }
    ctx->pc = 0x145F80u;
    // 0x145f80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x145f84: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x145f88: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x145f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x145f8c: 0x24420a40  addiu       $v0, $v0, 0xA40
    ctx->pc = 0x145f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2624));
    // 0x145f90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x145f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x145f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145f98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145f9c: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x145FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F9Cu;
    // 0x145fa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145FA4u;
    {
        const bool branch_taken_0x145fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145fa4) {
            ctx->pc = 0x145FB4u;
            goto label_145fb4;
        }
    }
    ctx->pc = 0x145FACu;
label_145fac:
    // 0x145fac: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x145FACu;
    SET_GPR_U32(ctx, 31, 0x145FB4u);
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x145FACu, 0x145FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FB4u;
label_145fb4:
    // 0x145fb4: 0xc055e34  jal         func_1578D0
    ctx->pc = 0x145FB4u;
    SET_GPR_U32(ctx, 31, 0x145FBCu);
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x145FB4u, 0x145FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FBCu;
label_145fbc:
    // 0x145fbc: 0xc05af40  jal         func_16BD00
    ctx->pc = 0x145FBCu;
    SET_GPR_U32(ctx, 31, 0x145FC4u);
    ctx->pc = 0x145FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FBCu;
    // 0x145fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x145FBCu, 0x145FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FC4u;
label_145fc4:
    // 0x145fc4: 0xc051910  jal         func_146440
    ctx->pc = 0x145FC4u;
    SET_GPR_U32(ctx, 31, 0x145FCCu);
    ctx->pc = 0x146440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146440u, 0x145FC4u, 0x145FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FCCu;
label_145fcc:
    // 0x145fcc: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x145FCCu;
    SET_GPR_U32(ctx, 31, 0x145FD4u);
    ctx->pc = 0x145FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FCCu;
    // 0x145fd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x145FCCu, 0x145FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FD4u;
label_145fd4:
    // 0x145fd4: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x145FD4u;
    SET_GPR_U32(ctx, 31, 0x145FDCu);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x145FD4u, 0x145FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FDCu;
label_145fdc:
    // 0x145fdc: 0xc05c374  jal         func_170DD0
    ctx->pc = 0x145FDCu;
    SET_GPR_U32(ctx, 31, 0x145FE4u);
    ctx->pc = 0x170DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170DD0u, 0x145FDCu, 0x145FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FE4u;
label_145fe4:
    // 0x145fe4: 0xc091088  jal         func_244220
    ctx->pc = 0x145FE4u;
    SET_GPR_U32(ctx, 31, 0x145FECu);
    ctx->pc = 0x244220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244220u, 0x145FE4u, 0x145FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FECu;
label_145fec:
    // 0x145fec: 0xc07b10c  jal         func_1EC430
    ctx->pc = 0x145FECu;
    SET_GPR_U32(ctx, 31, 0x145FF4u);
    ctx->pc = 0x1EC430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC430u, 0x145FECu, 0x145FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FF4u;
label_145ff4:
    // 0x145ff4: 0xc07ae54  jal         func_1EB950
    ctx->pc = 0x145FF4u;
    SET_GPR_U32(ctx, 31, 0x145FFCu);
    ctx->pc = 0x1EB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB950u, 0x145FF4u, 0x145FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FFCu;
label_145ffc:
    // 0x145ffc: 0xc07af1c  jal         func_1EBC70
    ctx->pc = 0x145FFCu;
    SET_GPR_U32(ctx, 31, 0x146004u);
    ctx->pc = 0x1EBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC70u, 0x145FFCu, 0x146004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146004u;
label_146004:
    // 0x146004: 0xc07b078  jal         func_1EC1E0
    ctx->pc = 0x146004u;
    SET_GPR_U32(ctx, 31, 0x14600Cu);
    ctx->pc = 0x1EC1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC1E0u, 0x146004u, 0x14600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14600Cu;
label_14600c:
    // 0x14600c: 0xc070124  jal         func_1C0490
    ctx->pc = 0x14600Cu;
    SET_GPR_U32(ctx, 31, 0x146014u);
    ctx->pc = 0x1C0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0490u, 0x14600Cu, 0x146014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146014u;
label_146014:
    // 0x146014: 0xc070768  jal         func_1C1DA0
    ctx->pc = 0x146014u;
    SET_GPR_U32(ctx, 31, 0x14601Cu);
    ctx->pc = 0x1C1DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1DA0u, 0x146014u, 0x14601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14601Cu;
label_14601c:
    // 0x14601c: 0xc074cc0  jal         func_1D3300
    ctx->pc = 0x14601Cu;
    SET_GPR_U32(ctx, 31, 0x146024u);
    ctx->pc = 0x1D3300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3300u, 0x14601Cu, 0x146024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146024u;
label_146024:
    // 0x146024: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x146024u;
    SET_GPR_U32(ctx, 31, 0x14602Cu);
    ctx->pc = 0x1D46E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46E0u, 0x146024u, 0x14602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14602Cu;
label_14602c:
    // 0x14602c: 0xc085278  jal         func_2149E0
    ctx->pc = 0x14602Cu;
    SET_GPR_U32(ctx, 31, 0x146034u);
    ctx->pc = 0x2149E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2149E0u, 0x14602Cu, 0x146034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146034u;
label_146034:
    // 0x146034: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x146038: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14603c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x14603cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x334AF4u));
    // 0x146040: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146040u;
    {
        const bool branch_taken_0x146040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146040u;
        // 0x146044: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146040) {
            ctx->pc = 0x146050u;
            goto label_146050;
        }
    }
    ctx->pc = 0x146048u;
    // 0x146048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146048u;
    {
        const bool branch_taken_0x146048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146048) {
            ctx->pc = 0x146058u;
            goto label_146058;
        }
    }
    ctx->pc = 0x146050u;
label_146050:
    // 0x146050: 0xc16a058  jal         func_5A8160
    ctx->pc = 0x146050u;
    SET_GPR_U32(ctx, 31, 0x146058u);
    ctx->pc = 0x5A8160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A8160u, 0x146050u, 0x146058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146058u;
label_146058:
    // 0x146058: 0xc04d650  jal         func_135940
    ctx->pc = 0x146058u;
    SET_GPR_U32(ctx, 31, 0x146060u);
    ctx->pc = 0x135940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135940u, 0x146058u, 0x146060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146060u;
label_146060:
    // 0x146060: 0xc056108  jal         func_158420
    ctx->pc = 0x146060u;
    SET_GPR_U32(ctx, 31, 0x146068u);
    ctx->pc = 0x158420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158420u, 0x146060u, 0x146068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146068u;
label_146068:
    // 0x146068: 0xc057b20  jal         func_15EC80
    ctx->pc = 0x146068u;
    SET_GPR_U32(ctx, 31, 0x146070u);
    ctx->pc = 0x15EC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC80u, 0x146068u, 0x146070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146070u;
label_146070:
    // 0x146070: 0xc0436c0  jal         func_10DB00
    ctx->pc = 0x146070u;
    SET_GPR_U32(ctx, 31, 0x146078u);
    ctx->pc = 0x10DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB00u, 0x146070u, 0x146078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146078u;
label_146078:
    // 0x146078: 0xc064b30  jal         func_192CC0
    ctx->pc = 0x146078u;
    SET_GPR_U32(ctx, 31, 0x146080u);
    ctx->pc = 0x192CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192CC0u, 0x146078u, 0x146080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146080u;
label_146080:
    // 0x146080: 0xc044a04  jal         func_112810
    ctx->pc = 0x146080u;
    SET_GPR_U32(ctx, 31, 0x146088u);
    ctx->pc = 0x112810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112810u, 0x146080u, 0x146088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146088u;
label_146088:
    // 0x146088: 0xc04dfc4  jal         func_137F10
    ctx->pc = 0x146088u;
    SET_GPR_U32(ctx, 31, 0x146090u);
    ctx->pc = 0x137F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F10u, 0x146088u, 0x146090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146090u;
label_146090:
    // 0x146090: 0xc07a75c  jal         func_1E9D70
    ctx->pc = 0x146090u;
    SET_GPR_U32(ctx, 31, 0x146098u);
    ctx->pc = 0x1E9D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9D70u, 0x146090u, 0x146098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146098u;
label_146098:
    // 0x146098: 0xc040324  jal         func_100C90
    ctx->pc = 0x146098u;
    SET_GPR_U32(ctx, 31, 0x1460A0u);
    ctx->pc = 0x100C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C90u, 0x146098u, 0x1460A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A0u;
label_1460a0:
    // 0x1460a0: 0xc0555e4  jal         func_155790
    ctx->pc = 0x1460A0u;
    SET_GPR_U32(ctx, 31, 0x1460A8u);
    ctx->pc = 0x155790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155790u, 0x1460A0u, 0x1460A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460A8u;
label_1460a8:
    // 0x1460a8: 0xc0521c8  jal         func_148720
    ctx->pc = 0x1460A8u;
    SET_GPR_U32(ctx, 31, 0x1460B0u);
    ctx->pc = 0x148720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148720u, 0x1460A8u, 0x1460B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460B0u;
label_1460b0:
    // 0x1460b0: 0xc0548d0  jal         func_152340
    ctx->pc = 0x1460B0u;
    SET_GPR_U32(ctx, 31, 0x1460B8u);
    ctx->pc = 0x152340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152340u, 0x1460B0u, 0x1460B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460B8u;
label_1460b8:
    // 0x1460b8: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x1460B8u;
    SET_GPR_U32(ctx, 31, 0x1460C0u);
    ctx->pc = 0x1460BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460B8u;
    // 0x1460bc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1460B8u, 0x1460C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460C0u;
label_1460c0:
    // 0x1460c0: 0xc05bfb0  jal         func_16FEC0
    ctx->pc = 0x1460C0u;
    SET_GPR_U32(ctx, 31, 0x1460C8u);
    ctx->pc = 0x1460C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460C0u;
    // 0x1460c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FEC0u, 0x1460C0u, 0x1460C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460C8u;
label_1460c8:
    // 0x1460c8: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1460C8u;
    SET_GPR_U32(ctx, 31, 0x1460D0u);
    ctx->pc = 0x1460CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460C8u;
    // 0x1460cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1460C8u, 0x1460D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460D0u;
label_1460d0:
    // 0x1460d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1460d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1460d4:
    // 0x1460d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1460d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1460d8u;
}
