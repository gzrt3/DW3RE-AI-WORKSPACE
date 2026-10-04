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

// Function: entry_0019a14c
// Address: 0x19a14c - 0x19a1f4
void entry_0019a14c_0x19a14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a14c_0x19a14c");
#endif

    ctx->pc = 0x19a14cu;

    // 0x19a14c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x19a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x19a150: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x19a154: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x19a154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x19a158: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a15c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19a160: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19a164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19a168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19a16c: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x19a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x19a170: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x19a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x19a174: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x19a178: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a17c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19a180: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x19a180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
    // 0x19a184: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x19a184u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19a188: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x19a188u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19a18c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x19a190: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x19a194: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x19a194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x19a198: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a19c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x19a19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x19a1a0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x19a1a4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x19a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x19a1a8: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x19a1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x19a1ac: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19a1b0: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x19a1b4: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x19a1b8: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x19a1bc: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x19a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x19a1c0: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x19a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
    // 0x19a1c4: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x19a1c8: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x19a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
    // 0x19a1cc: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x19a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x19a1d0: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x19a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
    // 0x19a1d4: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x19a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x19a1d8: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x19a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
    // 0x19a1dc: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x19a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
    // 0x19a1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A1E0u;
    {
        const bool branch_taken_0x19a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E0u;
        // 0x19a1e4: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1e0) {
            ctx->pc = 0x19A1F4u;
            return;
        }
    }
    ctx->pc = 0x19A1E8u;
    // 0x19a1e8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19a1ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A1ECu;
    {
        const bool branch_taken_0x19a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1ec) {
            ctx->pc = 0x19A200u;
            return;
        }
    }
    ctx->pc = 0x19A1F4u;
}
