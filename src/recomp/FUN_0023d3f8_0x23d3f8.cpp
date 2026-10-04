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

// Function: FUN_0023d3f8
// Address: 0x23d3f8 - 0x23d5ac
void FUN_0023d3f8_0x23d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d3f8_0x23d3f8");
#endif

    switch (ctx->pc) {
        case 0x23d528u: goto label_23d528;
        case 0x23d560u: goto label_23d560;
        case 0x23d590u: goto label_23d590;
        default: break;
    }

    ctx->pc = 0x23d3f8u;

    // 0x23d3f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23d3f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3fc: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x23d3fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x23d400: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23d404: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x23d404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x23d408: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23d40c: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D40Cu;
        // 0x23d410: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D414u;
    // 0x23d414: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x23d414u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x23d418: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x23D418u;
    {
        const bool branch_taken_0x23d418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D418u;
        // 0x23d41c: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d418) {
            ctx->pc = 0x23D4CCu;
            goto label_23d4cc;
        }
    }
    ctx->pc = 0x23D420u;
    // 0x23d420: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x23D420u;
    {
        const bool branch_taken_0x23d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d420) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D428u;
    // 0x23d428: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x23d428u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x23d42c: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x23d42cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x23d430: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x23d430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
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
            goto label_23d55c;
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
            goto label_23d55c;
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
            goto label_23d528;
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
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D4CCu;
label_23d4cc:
    // 0x23d4cc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23D4CCu;
    {
        const bool branch_taken_0x23d4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d4cc) {
            ctx->pc = 0x23D560u;
            goto label_23d560;
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
    // 0x23d4e0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d4e4: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d4e8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23d4e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23d4ec: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23d4f0: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x23d4f4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d4f8: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d4f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d4fc: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d500: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x23d500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x23d504: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x23d504u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x23d508: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x23d508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x23d50c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x23d50cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x23d510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d514: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x23d518: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D518u;
    {
        const bool branch_taken_0x23d518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D518u;
        // 0x23d51c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d518) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D520u;
    // 0x23d520: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23d520u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d524: 0x0  nop
    ctx->pc = 0x23d524u;
    // NOP
label_23d528:
    // 0x23d528: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x23d52c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23d530: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x23d534: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23d534u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x23d538: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D538u;
    {
        const bool branch_taken_0x23d538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D538u;
        // 0x23d53c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d538) {
            ctx->pc = 0x23D55Cu;
            goto label_23d55c;
        }
    }
    ctx->pc = 0x23D540u;
    // 0x23d540: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d544: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d544u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d548: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23d54c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d550: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x23d550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x23d554: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x23D554u;
    {
        const bool branch_taken_0x23d554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d554) {
            ctx->pc = 0x23D558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D554u;
            // 0x23d558: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d528;
        }
    }
    ctx->pc = 0x23D55Cu;
label_23d55c:
    // 0x23d55c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23d55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23d560:
    // 0x23d560: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x23D560u;
    {
        const bool branch_taken_0x23d560 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d560) {
            ctx->pc = 0x23D5ACu;
            return;
        }
    }
    ctx->pc = 0x23D568u;
    // 0x23d568: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23d568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d56c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d570: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23d570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23d574: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23d574u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23d578: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23d578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23d57c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D57Cu;
    {
        const bool branch_taken_0x23d57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D57Cu;
        // 0x23d580: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d57c) {
            ctx->pc = 0x23D560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d560;
        }
    }
    ctx->pc = 0x23D584u;
    // 0x23d584: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D588u;
    {
        const bool branch_taken_0x23d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D588u;
        // 0x23d58c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d588) {
            ctx->pc = 0x23D5ACu;
            return;
        }
    }
    ctx->pc = 0x23D590u;
label_23d590:
    // 0x23d590: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23d590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23d594: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x23d594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d598: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d59c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x23d5a0: 0x0  nop
    ctx->pc = 0x23d5a0u;
    // NOP
    // 0x23d5a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D5A4u;
    {
        const bool branch_taken_0x23d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5a4) {
            ctx->pc = 0x23D590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d590;
        }
    }
    ctx->pc = 0x23D5ACu;
}
