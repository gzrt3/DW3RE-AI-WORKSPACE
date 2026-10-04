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

// Function: entry_001b2dac
// Address: 0x1b2dac - 0x1b3030
void entry_001b2dac_0x1b2dac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2dac_0x1b2dac");
#endif

    ctx->pc = 0x1b2dacu;

    // 0x1b2dac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DB4u;
        // 0x1b2db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2DBCu;
    // 0x1b2dbc: 0x0  nop
    ctx->pc = 0x1b2dbcu;
    // NOP
    // 0x1b2dc0: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x1b2dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1b2dc4: 0x0  nop
    ctx->pc = 0x1b2dc4u;
    // NOP
    // 0x1b2dc8: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1b2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1b2dcc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b2dd0: 0x3c0242b2  lui         $v0, 0x42B2
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17074 << 16));
    // 0x1b2dd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b2dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b2dd8: 0x3442d4fc  ori         $v0, $v0, 0xD4FC
    ctx->pc = 0x1b2dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54524);
    // 0x1b2ddc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b2ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b2de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2DE0u;
    {
        const bool branch_taken_0x1b2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DE0u;
        // 0x1b2de4: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2de0) {
            ctx->pc = 0x1B2DF8u;
            goto label_1b2df8;
        }
    }
    ctx->pc = 0x1B2DE8u;
    // 0x1b2de8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b2dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DECu;
        // 0x1b2df0: 0xc440ad60  lwc1        $f0, -0x52A0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2DF4u;
    // 0x1b2df4: 0x0  nop
    ctx->pc = 0x1b2df4u;
    // NOP
label_1b2df8:
    // 0x1b2df8: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2DF8u;
    {
        const bool branch_taken_0x1b2df8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DF8u;
        // 0x1b2dfc: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2df8) {
            ctx->pc = 0x1B2E18u;
            goto label_1b2e18;
        }
    }
    ctx->pc = 0x1B2E00u;
    // 0x1b2e00: 0x3c0242ae  lui         $v0, 0x42AE
    ctx->pc = 0x1b2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17070 << 16));
    // 0x1b2e04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2e04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e08: 0x3442ac50  ori         $v0, $v0, 0xAC50
    ctx->pc = 0x1b2e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44112);
    // 0x1b2e0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b2e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2e10: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x1B2E10u;
    {
        const bool branch_taken_0x1b2e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E10u;
        // 0x1b2e14: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e10) {
            ctx->pc = 0x1B3024u;
            goto label_1b3024;
        }
    }
    ctx->pc = 0x1B2E18u;
label_1b2e18:
    // 0x1b2e18: 0x34427218  ori         $v0, $v0, 0x7218
    ctx->pc = 0x1b2e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29208);
    // 0x1b2e1c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b2e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2e20: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1B2E20u;
    {
        const bool branch_taken_0x1b2e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E20u;
        // 0x1b2e24: 0x3c02317f  lui         $v0, 0x317F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e20) {
            ctx->pc = 0x1B2EC8u;
            goto label_1b2ec8;
        }
    }
    ctx->pc = 0x1B2E28u;
    // 0x1b2e28: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
    // 0x1b2e2c: 0x34421591  ori         $v0, $v0, 0x1591
    ctx->pc = 0x1b2e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5521);
    // 0x1b2e30: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b2e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2e34: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B2E34u;
    {
        const bool branch_taken_0x1b2e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E34u;
        // 0x1b2e38: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e34) {
            ctx->pc = 0x1B2E68u;
            goto label_1b2e68;
        }
    }
    ctx->pc = 0x1B2E3Cu;
    // 0x1b2e3c: 0x51823  negu        $v1, $a1
    ctx->pc = 0x1b2e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1b2e40: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b2e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b2e44: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b2e44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b2e48: 0xc420ad38  lwc1        $f0, -0x52C8($at)
    ctx->pc = 0x1b2e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2e4c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b2e50: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b2e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b2e54: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b2e54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b2e58: 0xc427ad40  lwc1        $f7, -0x52C0($at)
    ctx->pc = 0x1b2e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b2e5c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1b2e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2e60: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2E60u;
    {
        const bool branch_taken_0x1b2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2E60u;
        // 0x1b2e64: 0x46006181  sub.s       $f6, $f12, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e60) {
            ctx->pc = 0x1B2EBCu;
            goto label_1b2ebc;
        }
    }
    ctx->pc = 0x1B2E68u;
label_1b2e68:
    // 0x1b2e68: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x1b2e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x1b2e6c: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1b2e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x1b2e70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2e74: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x1b2e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
    // 0x1b2e78: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1b2e78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1b2e7c: 0xc423ad28  lwc1        $f3, -0x52D8($at)
    ctx->pc = 0x1b2e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b2e80: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b2e84: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1b2e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b2e88: 0xc442ad40  lwc1        $f2, -0x52C0($v0)
    ctx->pc = 0x1b2e88u;
    { uint32_t bits = FAST_READ32(0x2CAD40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2e8c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1b2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1b2e90: 0xc461ad38  lwc1        $f1, -0x52C8($v1)
    ctx->pc = 0x1b2e90u;
    { uint32_t bits = FAST_READ32(0x2CAD38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e94: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b2e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b2e98: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b2e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1b2e9c: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x1b2e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1b2ea0: 0x0  nop
    ctx->pc = 0x1b2ea0u;
    // NOP
    // 0x1b2ea4: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x1b2ea4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b2ea8: 0x0  nop
    ctx->pc = 0x1b2ea8u;
    // NOP
    // 0x1b2eac: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1b2eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1b2eb0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1b2eb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1b2eb4: 0x460229c2  mul.s       $f7, $f5, $f2
    ctx->pc = 0x1b2eb4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x1b2eb8: 0x46016181  sub.s       $f6, $f12, $f1
    ctx->pc = 0x1b2eb8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_1b2ebc:
    // 0x1b2ebc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B2EBCu;
    {
        const bool branch_taken_0x1b2ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2EBCu;
        // 0x1b2ec0: 0x46073301  sub.s       $f12, $f6, $f7 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ebc) {
            ctx->pc = 0x1B2F10u;
            goto label_1b2f10;
        }
    }
    ctx->pc = 0x1B2EC4u;
    // 0x1b2ec4: 0x0  nop
    ctx->pc = 0x1b2ec4u;
    // NOP
label_1b2ec8:
    // 0x1b2ec8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b2ecc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b2eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2ed0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1B2ED0u;
    {
        const bool branch_taken_0x1b2ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2ed0) {
            ctx->pc = 0x1B2ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2ED0u;
            // 0x1b2ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2F10u;
            goto label_1b2f10;
        }
    }
    ctx->pc = 0x1B2ED8u;
    // 0x1b2ed8: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x1b2ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x1b2edc: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x1b2edcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x1b2ee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2ee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2ee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2eec: 0x0  nop
    ctx->pc = 0x1b2eecu;
    // NOP
    // 0x1b2ef0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1b2ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1b2ef4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2ef8: 0x0  nop
    ctx->pc = 0x1b2ef8u;
    // NOP
    // 0x1b2efc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2EFCu;
    {
        const bool branch_taken_0x1b2efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2efc) {
            ctx->pc = 0x1B2F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2EFCu;
            // 0x1b2f00: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2F14u;
            goto label_1b2f14;
        }
    }
    ctx->pc = 0x1B2F04u;
    // 0x1b2f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F04u;
        // 0x1b2f08: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2F0Cu;
    // 0x1b2f0c: 0x0  nop
    ctx->pc = 0x1b2f0cu;
    // NOP
label_1b2f10:
    // 0x1b2f10: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x1b2f10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1b2f14:
    // 0x1b2f14: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x1b2f18: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x1b2f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x1b2f1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2f20: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x1b2f24: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x1b2f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x1b2f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2f2c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x1b2f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x1b2f30: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x1b2f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x1b2f34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2f38: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x1b2f3c: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1b2f3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1b2f40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b2f44: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2f48: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b2f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x1b2f4c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b2f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1b2f50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b2f54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b2f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2f58: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2f5c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b2f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1b2f60: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2f64: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b2f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b2f68: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2f6c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1b2f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1b2f70: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2f74: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2F74u;
    {
        const bool branch_taken_0x1b2f74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F74u;
        // 0x1b2f78: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f74) {
            ctx->pc = 0x1B2FB0u;
            goto label_1b2fb0;
        }
    }
    ctx->pc = 0x1B2F7Cu;
    // 0x1b2f7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b2f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b2f80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2f84: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x1b2f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x1b2f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2f8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2f90: 0x0  nop
    ctx->pc = 0x1b2f90u;
    // NOP
    // 0x1b2f94: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1b2f94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x1b2f98: 0x0  nop
    ctx->pc = 0x1b2f98u;
    // NOP
    // 0x1b2f9c: 0x0  nop
    ctx->pc = 0x1b2f9cu;
    // NOP
    // 0x1b2fa0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2fa0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1b2fa4: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1b2fa4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1b2fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FA8u;
        // 0x1b2fac: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2FB0u;
label_1b2fb0:
    // 0x1b2fb0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b2fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b2fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2fb8: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x1b2fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x1b2fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2fc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2fc4: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x1b2fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
    // 0x1b2fc8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1b2fc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1b2fcc: 0x0  nop
    ctx->pc = 0x1b2fccu;
    // NOP
    // 0x1b2fd0: 0x0  nop
    ctx->pc = 0x1b2fd0u;
    // NOP
    // 0x1b2fd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2fd4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1b2fd8: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x1b2fd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x1b2fdc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x1b2fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x1b2fe0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2FE0u;
    {
        const bool branch_taken_0x1b2fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FE0u;
        // 0x1b2fe4: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fe0) {
            ctx->pc = 0x1B3000u;
            goto label_1b3000;
        }
    }
    ctx->pc = 0x1B2FE8u;
    // 0x1b2fe8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1b2fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b2fec: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x1b2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1b2ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2ff4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b2ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FF8u;
        // 0x1b2ffc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3000u;
label_1b3000:
    // 0x1b3000: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1b3000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b3004: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x1b3004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x1b3008: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x1b300c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b3010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3014: 0x3c010d80  lui         $at, 0xD80
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3456 << 16));
    // 0x1b3018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b301c: 0x0  nop
    ctx->pc = 0x1b301cu;
    // NOP
    // 0x1b3020: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b3020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b3024:
    // 0x1b3024: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B302Cu;
    // 0x1b302c: 0x0  nop
    ctx->pc = 0x1b302cu;
    // NOP
    ctx->pc = 0x1b3030u;
}
