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

// Function: FUN_0021cc30
// Address: 0x21cc30 - 0x21cd74
void FUN_0021cc30_0x21cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021cc30_0x21cc30");
#endif

    switch (ctx->pc) {
        case 0x21cc3cu: goto label_21cc3c;
        case 0x21cc64u: goto label_21cc64;
        default: break;
    }

    ctx->pc = 0x21cc30u;

    // 0x21cc30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x21cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x21cc34: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21cc38: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x21cc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_21cc3c:
    // 0x21cc3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21cc40: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21cc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x21cc44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x21cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21cc48: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x21cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x21cc4c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x21cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x21cc50: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x21cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x21cc54: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21CC54u;
    {
        const bool branch_taken_0x21cc54 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x21CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC54u;
        // 0x21cc58: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc54) {
            ctx->pc = 0x21CC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc3c;
        }
    }
    ctx->pc = 0x21CC5Cu;
    // 0x21cc5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x21cc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21cc60: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_21cc64:
    // 0x21cc64: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21cc68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21cc6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x21cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21cc70: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x21cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x21cc74: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x21cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21cc78: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21cc78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x21cc7c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x21CC7Cu;
    {
        const bool branch_taken_0x21cc7c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x21CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC7Cu;
        // 0x21cc80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc7c) {
            ctx->pc = 0x21CC64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc64;
        }
    }
    ctx->pc = 0x21CC84u;
    // 0x21cc84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21cc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21cc88: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21cc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21cc8c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CC8Cu;
    {
        const bool branch_taken_0x21cc8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC8Cu;
        // 0x21cc90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc8c) {
            ctx->pc = 0x21CC9Cu;
            goto label_21cc9c;
        }
    }
    ctx->pc = 0x21CC94u;
    // 0x21cc94: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x21CC94u;
    {
        const bool branch_taken_0x21cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC94u;
        // 0x21cc98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc94) {
            ctx->pc = 0x21CD74u;
            return;
        }
    }
    ctx->pc = 0x21CC9Cu;
label_21cc9c:
    // 0x21cc9c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x21cca0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x21cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21cca4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCA4u;
    {
        const bool branch_taken_0x21cca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA4u;
        // 0x21cca8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cca4) {
            ctx->pc = 0x21CCB4u;
            goto label_21ccb4;
        }
    }
    ctx->pc = 0x21CCACu;
    // 0x21ccac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x21CCACu;
    {
        const bool branch_taken_0x21ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccac) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCB4u;
label_21ccb4:
    // 0x21ccb4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ccb8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ccbc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCBCu;
    {
        const bool branch_taken_0x21ccbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCBCu;
        // 0x21ccc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccbc) {
            ctx->pc = 0x21CCCCu;
            goto label_21cccc;
        }
    }
    ctx->pc = 0x21CCC4u;
    // 0x21ccc4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21CCC4u;
    {
        const bool branch_taken_0x21ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccc4) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCCCu;
label_21cccc:
    // 0x21cccc: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x21ccd0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x21ccd4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CCD4u;
    {
        const bool branch_taken_0x21ccd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCD4u;
        // 0x21ccd8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccd4) {
            ctx->pc = 0x21CCE4u;
            goto label_21cce4;
        }
    }
    ctx->pc = 0x21CCDCu;
    // 0x21ccdc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21CCDCu;
    {
        const bool branch_taken_0x21ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ccdc) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CCE4u;
label_21cce4:
    // 0x21cce4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x21cce8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CCE8u;
    {
        const bool branch_taken_0x21cce8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE8u;
        // 0x21ccec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cce8) {
            ctx->pc = 0x21CCFCu;
            goto label_21ccfc;
        }
    }
    ctx->pc = 0x21CCF0u;
    // 0x21ccf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ccf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ccf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21CCF4u;
    {
        const bool branch_taken_0x21ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF4u;
        // 0x21ccf8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ccf4) {
            ctx->pc = 0x21CD14u;
            goto label_21cd14;
        }
    }
    ctx->pc = 0x21CCFCu;
label_21ccfc:
    // 0x21ccfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21cd00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cd04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd08: 0x0  nop
    ctx->pc = 0x21cd08u;
    // NOP
    // 0x21cd0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x21cd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x21cd10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x21cd10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_21cd14:
    // 0x21cd14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21cd18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21cd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21cd1c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x21cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cd20: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x21cd20u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x21cd24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x21cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x21cd28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd2c: 0x0  nop
    ctx->pc = 0x21cd2cu;
    // NOP
    // 0x21cd30: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x21cd30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x21cd34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21cd34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21cd38: 0x0  nop
    ctx->pc = 0x21cd38u;
    // NOP
    // 0x21cd3c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21CD3Cu;
    {
        const bool branch_taken_0x21cd3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd3c) {
            ctx->pc = 0x21CD5Cu;
            goto label_21cd5c;
        }
    }
    ctx->pc = 0x21CD44u;
    // 0x21cd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd48: 0x0  nop
    ctx->pc = 0x21cd48u;
    // NOP
    // 0x21cd4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21cd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21cd50: 0x0  nop
    ctx->pc = 0x21cd50u;
    // NOP
    // 0x21cd54: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21CD54u;
    {
        const bool branch_taken_0x21cd54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21cd54) {
            ctx->pc = 0x21CD6Cu;
            goto label_21cd6c;
        }
    }
    ctx->pc = 0x21CD5Cu;
label_21cd5c:
    // 0x21cd5c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CD5Cu;
    {
        const bool branch_taken_0x21cd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD5Cu;
        // 0x21cd60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd5c) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CD64u;
    // 0x21cd64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21CD64u;
    {
        const bool branch_taken_0x21cd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD64u;
        // 0x21cd68: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd64) {
            ctx->pc = 0x21CD70u;
            goto label_21cd70;
        }
    }
    ctx->pc = 0x21CD6Cu;
label_21cd6c:
    // 0x21cd6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21cd70:
    // 0x21cd70: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x21cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->pc = 0x21cd74u;
}
