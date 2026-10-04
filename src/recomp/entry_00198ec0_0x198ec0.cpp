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

// Function: entry_00198ec0
// Address: 0x198ec0 - 0x199008
void entry_00198ec0_0x198ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ec0_0x198ec0");
#endif

    switch (ctx->pc) {
        case 0x198f64u: goto label_198f64;
        default: break;
    }

    ctx->pc = 0x198ec0u;

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
    // 0x198ee4: 0x137100b  movn        $v0, $t1, $s7
    ctx->pc = 0x198ee4u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x198ee8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x198ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x198eec: 0x137180b  movn        $v1, $t1, $s7
    ctx->pc = 0x198eecu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x198ef0: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x198ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x198ef4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198ef8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x198ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x198efc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198f00: 0xde470058  ld          $a3, 0x58($s2)
    ctx->pc = 0x198f00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x198f04: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x198f04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x198f08: 0xde480148  ld          $t0, 0x148($s2)
    ctx->pc = 0x198f08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x198f0c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198f14: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x198f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x198f18: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x198f1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x198f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x198f20: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x198f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x198f24: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x198f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x198f28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x198f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198f2c: 0x1054024  and         $t0, $t0, $a1
    ctx->pc = 0x198f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x198f30: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x198f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x198f34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x198f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x198f38: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198f3c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x198f3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x198f40: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x198f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x198f44: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x198f44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
    // 0x198f48: 0xfe460140  sd          $a2, 0x140($s2)
    ctx->pc = 0x198f48u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 6));
    // 0x198f4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x198f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f50: 0xfe470058  sd          $a3, 0x58($s2)
    ctx->pc = 0x198f50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 7));
    // 0x198f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x198f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f58: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x198f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f5c: 0xc066234  jal         func_1988D0
    ctx->pc = 0x198F5Cu;
    SET_GPR_U32(ctx, 31, 0x198F64u);
    ctx->pc = 0x198F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198F5Cu;
    // 0x198f60: 0xfe480148  sd          $t0, 0x148($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 328), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1988D0u, 0x198F5Cu, 0x198F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198F64u;
label_198f64:
    // 0x198f64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198f68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x198f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198f6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198f70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198f74: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x198f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x198f78: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x198f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f7c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x198f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x198f80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x198f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x198f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x198f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x198f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x198f8c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198F8Cu;
    {
        const bool branch_taken_0x198f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x198F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F8Cu;
        // 0x198f90: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f8c) {
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198F94u;
    // 0x198f94: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x198f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198f98: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x198F98u;
    {
        const bool branch_taken_0x198f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F98u;
        // 0x198f9c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f98) {
            ctx->pc = 0x198FDCu;
            goto label_198fdc;
        }
    }
    ctx->pc = 0x198FA0u;
label_198fa0:
    // 0x198fa0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x198fa0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x198fa4: 0xde440038  ld          $a0, 0x38($s2)
    ctx->pc = 0x198fa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x198fa8: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x198fa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x198fac: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x198fb0: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x198fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x198fb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x198fb8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x198fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x198fbc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x198fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x198fc0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x198fc4: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x198fc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x198fc8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198fcc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x198fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x198fd0: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x198fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x198fd4: 0xfe440038  sd          $a0, 0x38($s2)
    ctx->pc = 0x198fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 4));
    // 0x198fd8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x198fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_198fdc:
    // 0x198fdc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x198fdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198fe0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x198fe0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198fe4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x198fe4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x198fe8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x198fe8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198fec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x198fecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x198ff0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x198ff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198ff4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x198ff4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x198ff8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x198ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198ffc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x198ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199000: 0x3e00008  jr          $ra
    ctx->pc = 0x199000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199000u;
        // 0x199004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199008u;
}
