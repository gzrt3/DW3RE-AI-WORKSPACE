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

// Function: entry_00198a70
// Address: 0x198a70 - 0x198b18
void entry_00198a70_0x198a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198a70_0x198a70");
#endif

    ctx->pc = 0x198a70u;

    // 0x198a70: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x198a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x198a74: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x198a74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x198a78: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x198a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x198a7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x198a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x198a80: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x198a84: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x198a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x198a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x198a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x198a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x198a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x198a90: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x198a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x198a94: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x198a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x198a98: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x198a9c: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x198aa0: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x198aa4: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x198aa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x198aa8: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x198aa8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x198aac: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x198ab0: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x198ab4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x198ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x198ab8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x198ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x198abc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198ac0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x198ac4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x198ac8: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x198acc: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x198accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x198ad0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x198ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x198ad4: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x198ad8: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x198adc: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x198ae0: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x198ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x198ae4: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x198ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x198ae8: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x198ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x198aec: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x198aecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x198af0: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x198af0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x198af4: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x198af4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x198af8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x198afc: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x198afcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x198b00: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x198b00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x198b04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198B04u;
    {
        const bool branch_taken_0x198b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B04u;
        // 0x198b08: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b04) {
            ctx->pc = 0x198B18u;
            return;
        }
    }
    ctx->pc = 0x198B0Cu;
    // 0x198b0c: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x198b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x198B10u;
    {
        const bool branch_taken_0x198b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B10u;
        // 0x198b14: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198b10) {
            ctx->pc = 0x198B24u;
            return;
        }
    }
    ctx->pc = 0x198B18u;
}
