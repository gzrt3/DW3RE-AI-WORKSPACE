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

// Function: FUN_00161d20
// Address: 0x161d20 - 0x161f94
void FUN_00161d20_0x161d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00161d20_0x161d20");
#endif

    switch (ctx->pc) {
        case 0x161db4u: goto label_161db4;
        case 0x161f14u: goto label_161f14;
        default: break;
    }

    ctx->pc = 0x161d20u;

    // 0x161d20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x161d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x161d24: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x161d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x161d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x161d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x161d2c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x161d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x161d34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x161d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161d3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x161d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x161d40: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x161d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161d48: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x161d48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x161d4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x161d4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161d50: 0x0  nop
    ctx->pc = 0x161d50u;
    // NOP
    // 0x161d54: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x161d54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x161d58: 0x90244c65  lbu         $a0, 0x4C65($at)
    ctx->pc = 0x161d58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19557)));
    // 0x161d5c: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x161d5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x161d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x161d64: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x161d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
    // 0x161d68: 0x2211821  addu        $v1, $s1, $at
    ctx->pc = 0x161d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x161d6c: 0x0  nop
    ctx->pc = 0x161d6cu;
    // NOP
    // 0x161d70: 0x0  nop
    ctx->pc = 0x161d70u;
    // NOP
    // 0x161d74: 0x10800085  beqz        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x161D74u;
    {
        const bool branch_taken_0x161d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d74) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161D7Cu;
    // 0x161d7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x161d80: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x161d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161d84: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x161d88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x161d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x161d8c: 0x8c264c70  lw          $a2, 0x4C70($at)
    ctx->pc = 0x161d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19568)));
    // 0x161d90: 0xdcc50270  ld          $a1, 0x270($a2)
    ctx->pc = 0x161d90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 624)));
    // 0x161d94: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x161d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x161d98: 0x1080007c  beqz        $a0, . + 4 + (0x7C << 2)
    ctx->pc = 0x161D98u;
    {
        const bool branch_taken_0x161d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x161d98) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161DA0u;
    // 0x161da0: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x161da4: 0x14800079  bnez        $a0, . + 4 + (0x79 << 2)
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0x3c070032  lui         $a3, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161DACu;
    // 0x161dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161db0: 0x24e712a0  addiu       $a3, $a3, 0x12A0
    ctx->pc = 0x161db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4768));
label_161db4:
    // 0x161db4: 0x8ce40204  lw          $a0, 0x204($a3)
    ctx->pc = 0x161db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 516)));
    // 0x161db8: 0x14c40070  bne         $a2, $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x161DB8u;
    {
        const bool branch_taken_0x161db8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x161DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DB8u;
        // 0x161dbc: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161db8) {
            ctx->pc = 0x161F7Cu;
            goto label_161f7c;
        }
    }
    ctx->pc = 0x161DC0u;
    // 0x161dc0: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x161dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
    // 0x161dc4: 0x8c293ffc  lw          $t1, 0x3FFC($at)
    ctx->pc = 0x161dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x161dc8: 0xc4e80150  lwc1        $f8, 0x150($a3)
    ctx->pc = 0x161dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x161dcc: 0xc4e20158  lwc1        $f2, 0x158($a3)
    ctx->pc = 0x161dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161dd0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x161dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x161dd4: 0x9068000f  lbu         $t0, 0xF($v1)
    ctx->pc = 0x161dd4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x161dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161ddc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x161ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x161de0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x161de0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x161de4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x161de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x161de8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x161de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x161dec: 0x244256a0  addiu       $v0, $v0, 0x56A0
    ctx->pc = 0x161decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22176));
    // 0x161df0: 0x24c65680  addiu       $a2, $a2, 0x5680
    ctx->pc = 0x161df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22144));
    // 0x161df4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x161df8: 0x24a5569c  addiu       $a1, $a1, 0x569C
    ctx->pc = 0x161df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22172));
    // 0x161dfc: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x161dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x161e00: 0x34217680  ori         $at, $at, 0x7680
    ctx->pc = 0x161e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30336);
    // 0x161e04: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x161e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x161e08: 0x24845684  addiu       $a0, $a0, 0x5684
    ctx->pc = 0x161e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22148));
    // 0x161e0c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x161e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x161e10: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x161e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x161e14: 0x94140  sll         $t0, $t1, 5
    ctx->pc = 0x161e14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x161e18: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x161e18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x161e1c: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x161e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x161e20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x161e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x161e24: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x161e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x161e28: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x161e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x161e2c: 0x1018021  addu        $s0, $t0, $at
    ctx->pc = 0x161e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 1)));
    // 0x161e30: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x161e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x161e34: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x161e34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x161e38: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x161e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x161e3c: 0x25085670  addiu       $t0, $t0, 0x5670
    ctx->pc = 0x161e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22128));
    // 0x161e40: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x161e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161e44: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x161e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x161e48: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x161e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x161e4c: 0x24e75674  addiu       $a3, $a3, 0x5674
    ctx->pc = 0x161e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22132));
    // 0x161e50: 0x46030100  add.s       $f4, $f0, $f3
    ctx->pc = 0x161e50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x161e54: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x161e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x161e58: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x161e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x161e5c: 0x44824800  mtc1        $v0, $f9
    ctx->pc = 0x161e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x161e60: 0x0  nop
    ctx->pc = 0x161e60u;
    // NOP
    // 0x161e64: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x161e64u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x161e68: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x161e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x161e6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161e70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161e74: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x161e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161e78: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x161e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x161e7c: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x161e7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
    // 0x161e80: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x161e84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x161e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x161e88: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x161e88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x161e8c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x161e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x161e90: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x161e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161e94: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x161e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x161e98: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x161e98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x161e9c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x161e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x161ea0: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x161ea0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x161ea4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x161ea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x161ea8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x161ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x161eac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x161eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x161eb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161eb4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x161eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x161eb8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ebc: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x161ec0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x161ec0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x161ec4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x161ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x161ec8: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x161ec8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x161ecc: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x161eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x161ed0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x161ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x161ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161ed8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x161ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x161edc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161ee0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x161ee4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x161ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x161ee8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x161ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x161eec: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x161eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x161ef0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x161ef4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161ef8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161efc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x161efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x161f00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x161f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161f04: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x161f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x161f08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x161f0c: 0xc066e34  jal         func_19B8D0
    ctx->pc = 0x161F0Cu;
    SET_GPR_U32(ctx, 31, 0x161F14u);
    ctx->pc = 0x161F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F0Cu;
    // 0x161f10: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x161F0Cu, 0x161F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161F14u;
label_161f14:
    // 0x161f14: 0x87a40030  lh          $a0, 0x30($sp)
    ctx->pc = 0x161f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161f18: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x161f1c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x161f20: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x161f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x161f24: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161f24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x161f28: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x161f2c: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x161f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x161f30: 0x87a40034  lh          $a0, 0x34($sp)
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x161f34: 0xa6040022  sh          $a0, 0x22($s0)
    ctx->pc = 0x161f34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x161f38: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x161f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x161f3c: 0x87a40038  lh          $a0, 0x38($sp)
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x161f40: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x161f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
    // 0x161f44: 0x87a4003c  lh          $a0, 0x3C($sp)
    ctx->pc = 0x161f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x161f48: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x161f48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
    // 0x161f4c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x161f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x161f50: 0x9024761c  lbu         $a0, 0x761C($at)
    ctx->pc = 0x161f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
    // 0x161f54: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x161f54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x161f58: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x161f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x161f5c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x161f60: 0x0  nop
    ctx->pc = 0x161f60u;
    // NOP
    // 0x161f64: 0x1810  mfhi        $v1
    ctx->pc = 0x161f64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x161f68: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x161f6c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x161f6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x161f70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x161f74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161F74u;
    {
        const bool branch_taken_0x161f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F74u;
        // 0x161f78: 0xa2030013  sb          $v1, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f74) {
            ctx->pc = 0x161F8Cu;
            goto label_161f8c;
        }
    }
    ctx->pc = 0x161F7Cu;
label_161f7c:
    // 0x161f7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x161f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x161f80: 0x28a40028  slti        $a0, $a1, 0x28
    ctx->pc = 0x161f80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x161f84: 0x1480ff8b  bnez        $a0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x161F84u;
    {
        const bool branch_taken_0x161f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F84u;
        // 0x161f88: 0x24e70220  addiu       $a3, $a3, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f84) {
            ctx->pc = 0x161DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161db4;
        }
    }
    ctx->pc = 0x161F8Cu;
label_161f8c:
    // 0x161f8c: 0x0  nop
    ctx->pc = 0x161f8cu;
    // NOP
    // 0x161f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x161f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x161f94u;
}
