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

// Function: entry_0023d434
// Address: 0x23d434 - 0x23d4e0
void entry_0023d434_0x23d434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023d434_0x23d434");
#endif

    ctx->pc = 0x23d434u;

    // 0x23d434: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d438: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x23d43c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d43cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d440: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23d440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d444: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x23d444u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x23d448: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x23d448u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x23d44c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x23d450: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d450u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x23d454: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x23d458: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x23d45c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x23d460: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x23d460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x23d464: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x23d464u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x23d468: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x23d468u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x23d46c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d46cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23d470: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23d470u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x23d474: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23d474u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x23d478: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23d478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d47c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x23D47Cu;
    {
        const bool branch_taken_0x23d47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D47Cu;
        // 0x23d480: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d47c) {
            ctx->pc = 0x23D55Cu;
            return;
        }
    }
    ctx->pc = 0x23D484u;
    // 0x23d484: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23d484u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d488: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x23d48c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23d48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23d490: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23d490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x23d494: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23d494u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x23d498: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23D498u;
    {
        const bool branch_taken_0x23d498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D498u;
        // 0x23d49c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d498) {
            ctx->pc = 0x23D55Cu;
            return;
        }
    }
    ctx->pc = 0x23D4A0u;
    // 0x23d4a0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23d4a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d4a4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23d4a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23d4a8: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x23d4a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23d4ac: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23d4acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23d4b0: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x23d4b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x23d4b4: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x23d4b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x23d4b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23d4bc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x23D4BCu;
    {
        const bool branch_taken_0x23d4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4bc) {
            ctx->pc = 0x23D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D4BCu;
            // 0x23d4c0: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D528u;
            return;
        }
    }
    ctx->pc = 0x23D4C4u;
    // 0x23d4c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x23D4C4u;
    {
        const bool branch_taken_0x23d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C4u;
        // 0x23d4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4c4) {
            ctx->pc = 0x23D560u;
            return;
        }
    }
    ctx->pc = 0x23D4CCu;
    // 0x23d4cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23D4CCu;
    {
        const bool branch_taken_0x23d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d4cc) {
            ctx->pc = 0x23D560u;
            return;
        }
    }
    ctx->pc = 0x23D4D4u;
    // 0x23d4d4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23d4d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d4d8: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23d4d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x23d4dc: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    ctx->pc = 0x23d4e0u;
}
