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

// Function: FUN_00199600
// Address: 0x199600 - 0x199738
void FUN_00199600_0x199600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00199600_0x199600");
#endif

    ctx->pc = 0x199600u;

    // 0x199600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199604: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x199604u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19960c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19960cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x199610: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x199610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x199614: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x199614u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x199618: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x19961c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19961cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x199620: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x199620u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x199624: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x199628: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x19962c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x199630: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x199630u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x199634: 0xdc8d0018  ld          $t5, 0x18($a0)
    ctx->pc = 0x199634u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x199638: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19963c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x199640: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x199644: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x199648: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x199648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19964c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x199650: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x199650u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x199654: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x199658: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19965c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x19965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x199660: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x199664: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x199668: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19966c: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x199670: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x199670u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x199674: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x199674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x199678: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x199678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x19967c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x19967cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x199680: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x199680u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x199684: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x199684u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x199688: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x199688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x19968c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x19968cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x199690: 0x73e3b  dsra        $a3, $a3, 24
    ctx->pc = 0x199690u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 24);
    // 0x199694: 0xb5c3b  dsra        $t3, $t3, 16
    ctx->pc = 0x199694u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> 16);
    // 0x199698: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x199698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19969c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x19969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1996a0: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1996a4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1996a4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1996a8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1996a8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1996ac: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1996acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1996b0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x1996b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1996b4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1996b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1996b8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1996b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x1996bc: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x1996c0: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x1996c4: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1996c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1996c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1996cc: 0x3c071300  lui         $a3, 0x1300
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4864 << 16));
    // 0x1996d0: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x1996d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x1996d4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1996d8: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x1996d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1996dc: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x1996dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1996e0: 0x240f0061  addiu       $t7, $zero, 0x61
    ctx->pc = 0x1996e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1996e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1996e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1996e8: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1996ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1996ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1996f0: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x1996f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
    // 0x1996f4: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1996f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1996f8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1996fc: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1996fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x199700: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x199700u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x199704: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x199704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x199708: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x199708u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
    // 0x19970c: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x19970cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
    // 0x199710: 0xfc8b0038  sd          $t3, 0x38($a0)
    ctx->pc = 0x199710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
    // 0x199714: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x199714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
    // 0x199718: 0xfc8e0048  sd          $t6, 0x48($a0)
    ctx->pc = 0x199718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 14));
    // 0x19971c: 0xfc8f0058  sd          $t7, 0x58($a0)
    ctx->pc = 0x19971cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 15));
    // 0x199720: 0xfc900060  sd          $s0, 0x60($a0)
    ctx->pc = 0x199720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 16));
    // 0x199724: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x199724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x199728: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x199728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x19972c: 0xf  sync
    ctx->pc = 0x19972cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x199730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199734: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x199738u;
}
