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

// Function: entry_001a41f0
// Address: 0x1a41f0 - 0x1a4440
void entry_001a41f0_0x1a41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a41f0_0x1a41f0");
#endif

    switch (ctx->pc) {
        case 0x1a4278u: goto label_1a4278;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a4438u: goto label_1a4438;
        default: break;
    }

    ctx->pc = 0x1a41f0u;

label_1a41f0:
    // 0x1a41f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a41f4: 0x0  nop
    ctx->pc = 0x1a41f4u;
    // NOP
    // 0x1a41f8: 0x0  nop
    ctx->pc = 0x1a41f8u;
    // NOP
    // 0x1a41fc: 0x0  nop
    ctx->pc = 0x1a41fcu;
    // NOP
    // 0x1a4200: 0x0  nop
    ctx->pc = 0x1a4200u;
    // NOP
    // 0x1a4204: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4204u;
    {
        const bool branch_taken_0x1a4204 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4204) {
            ctx->pc = 0x1A41F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a41f0;
        }
    }
    ctx->pc = 0x1A420Cu;
    // 0x1a420c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1a4210: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4214: 0x24a55ad0  addiu       $a1, $a1, 0x5AD0
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23248));
    // 0x1a4218: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x1a421c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1a421cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285AD0u));
    // 0x1a4220: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1a4220u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4224: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1a4224u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1a4228: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x1a4228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x1a422c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a422cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a4230: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4234: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x1a4234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x1a4238: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a4238u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x285AE0u));
    // 0x1a423c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a423cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1a4240: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1a4240u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285AF0u));
    // 0x1a4244: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4244u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a4248: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1a4248u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x285B00u));
    // 0x1a424c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a424cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1a4250: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1a4250u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285B10u));
    // 0x1a4254: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4254u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a4258: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1a4258u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x285B10u));
    // 0x1a425c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a425cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1a4260: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x1a4260u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285B10u));
    // 0x1a4264: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a4264u;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a4268: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x1a4268u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x285B10u));
    // 0x1a426c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1a426cu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 3));
    // 0x1a4270: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1a4270u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 7));
    // 0x1a4274: 0x0  nop
    ctx->pc = 0x1a4274u;
    // NOP
label_1a4278:
    // 0x1a4278: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a427c: 0x0  nop
    ctx->pc = 0x1a427cu;
    // NOP
    // 0x1a4280: 0x0  nop
    ctx->pc = 0x1a4280u;
    // NOP
    // 0x1a4284: 0x0  nop
    ctx->pc = 0x1a4284u;
    // NOP
    // 0x1a4288: 0x0  nop
    ctx->pc = 0x1a4288u;
    // NOP
    // 0x1a428c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A428Cu;
    {
        const bool branch_taken_0x1a428c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a428c) {
            ctx->pc = 0x1A4278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4278;
        }
    }
    ctx->pc = 0x1A4294u;
    // 0x1a4294: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4298: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x1a429c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a42a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a42a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a42a4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x1a42a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a42a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1a42ac: 0x0  nop
    ctx->pc = 0x1a42acu;
    // NOP
label_1a42b0:
    // 0x1a42b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a42b4: 0x0  nop
    ctx->pc = 0x1a42b4u;
    // NOP
    // 0x1a42b8: 0x0  nop
    ctx->pc = 0x1a42b8u;
    // NOP
    // 0x1a42bc: 0x0  nop
    ctx->pc = 0x1a42bcu;
    // NOP
    // 0x1a42c0: 0x0  nop
    ctx->pc = 0x1a42c0u;
    // NOP
    // 0x1a42c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A42C4u;
    {
        const bool branch_taken_0x1a42c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a42c4) {
            ctx->pc = 0x1A42B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a42b0;
        }
    }
    ctx->pc = 0x1A42CCu;
    // 0x1a42cc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1a42d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a42d4: 0x24635b20  addiu       $v1, $v1, 0x5B20
    ctx->pc = 0x1a42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23328));
    // 0x1a42d8: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x1a42d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x1a42dc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1a42dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285B20u));
    // 0x1a42e0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1a42e4: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x1a42e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x1a42e8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1a42e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1a42ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a42ecu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a42f0: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1a42f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1a42f4: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x1a42f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x1a42f8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1a42f8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x285B30u));
    // 0x1a42fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1a42fcu;
    runtime->Store128(rdram, ctx, 0x10007010u, GPR_VEC(ctx, 2));
    // 0x1a4300: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1a4300u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 6));
    // 0x1a4304: 0x0  nop
    ctx->pc = 0x1a4304u;
    // NOP
label_1a4308:
    // 0x1a4308: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1a4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a430c: 0x0  nop
    ctx->pc = 0x1a430cu;
    // NOP
    // 0x1a4310: 0x0  nop
    ctx->pc = 0x1a4310u;
    // NOP
    // 0x1a4314: 0x0  nop
    ctx->pc = 0x1a4314u;
    // NOP
    // 0x1a4318: 0x0  nop
    ctx->pc = 0x1a4318u;
    // NOP
    // 0x1a431c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A431Cu;
    {
        const bool branch_taken_0x1a431c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a431c) {
            ctx->pc = 0x1A4308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4308;
        }
    }
    ctx->pc = 0x1A4324u;
    // 0x1a4324: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4328: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x1a4328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x1a432c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a432cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a4330: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4334: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a4334u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3));
    // 0x1a4338: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a4338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1a433c: 0x0  nop
    ctx->pc = 0x1a433cu;
    // NOP
label_1a4340:
    // 0x1a4340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4344: 0x0  nop
    ctx->pc = 0x1a4344u;
    // NOP
    // 0x1a4348: 0x0  nop
    ctx->pc = 0x1a4348u;
    // NOP
    // 0x1a434c: 0x0  nop
    ctx->pc = 0x1a434cu;
    // NOP
    // 0x1a4350: 0x0  nop
    ctx->pc = 0x1a4350u;
    // NOP
    // 0x1a4354: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4354u;
    {
        const bool branch_taken_0x1a4354 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4354) {
            ctx->pc = 0x1A4340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4340;
        }
    }
    ctx->pc = 0x1A435Cu;
    // 0x1a435c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4360: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1a4364: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x1a4364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x1a4368: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a4368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1a436c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a436cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x1a4370: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1a4370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1a4374: 0x0  nop
    ctx->pc = 0x1a4374u;
    // NOP
label_1a4378:
    // 0x1a4378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a437c: 0x0  nop
    ctx->pc = 0x1a437cu;
    // NOP
    // 0x1a4380: 0x0  nop
    ctx->pc = 0x1a4380u;
    // NOP
    // 0x1a4384: 0x0  nop
    ctx->pc = 0x1a4384u;
    // NOP
    // 0x1a4388: 0x0  nop
    ctx->pc = 0x1a4388u;
    // NOP
    // 0x1a438c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A438Cu;
    {
        const bool branch_taken_0x1a438c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a438c) {
            ctx->pc = 0x1A4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4378;
        }
    }
    ctx->pc = 0x1A4394u;
    // 0x1a4394: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1a4398: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1a439c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1a439cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1a43a0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1a43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1a43a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a43a4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0));
label_1a43a8:
    // 0x1a43a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a43ac: 0x0  nop
    ctx->pc = 0x1a43acu;
    // NOP
    // 0x1a43b0: 0x0  nop
    ctx->pc = 0x1a43b0u;
    // NOP
    // 0x1a43b4: 0x0  nop
    ctx->pc = 0x1a43b4u;
    // NOP
    // 0x1a43b8: 0x0  nop
    ctx->pc = 0x1a43b8u;
    // NOP
    // 0x1a43bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A43BCu;
    {
        const bool branch_taken_0x1a43bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a43bc) {
            ctx->pc = 0x1A43A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a43a8;
        }
    }
    ctx->pc = 0x1A43C4u;
    // 0x1a43c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a43c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a43c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A43C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A43CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A43C8u;
        // 0x1a43cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A43C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A43D0u;
    // 0x1a43d0: 0x0  nop
    ctx->pc = 0x1a43d0u;
    // NOP
    // 0x1a43d4: 0x0  nop
    ctx->pc = 0x1a43d4u;
    // NOP
    // 0x1a43d8: 0x0  nop
    ctx->pc = 0x1a43d8u;
    // NOP
    // 0x1a43dc: 0x0  nop
    ctx->pc = 0x1a43dcu;
    // NOP
    // 0x1a43e0: 0x0  nop
    ctx->pc = 0x1a43e0u;
    // NOP
    // 0x1a43e4: 0x0  nop
    ctx->pc = 0x1a43e4u;
    // NOP
    // 0x1a43e8: 0x0  nop
    ctx->pc = 0x1a43e8u;
    // NOP
    // 0x1a43ec: 0x0  nop
    ctx->pc = 0x1a43ecu;
    // NOP
    // 0x1a43f0: 0x0  nop
    ctx->pc = 0x1a43f0u;
    // NOP
    // 0x1a43f4: 0x0  nop
    ctx->pc = 0x1a43f4u;
    // NOP
    // 0x1a43f8: 0x0  nop
    ctx->pc = 0x1a43f8u;
    // NOP
    // 0x1a43fc: 0x0  nop
    ctx->pc = 0x1a43fcu;
    // NOP
    // 0x1a4400: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1a4404: 0xc  syscall     0
    ctx->pc = 0x1a4404u;
    ctx->pc = 0x1A4408u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4408:
    // 0x1a4408: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4410u;
    // 0x1a4410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4414: 0xc  syscall     0
    ctx->pc = 0x1a4414u;
    ctx->pc = 0x1A4418u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4418:
    // 0x1a4418: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4420u;
    // 0x1a4420: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a4424: 0xc  syscall     0
    ctx->pc = 0x1a4424u;
    ctx->pc = 0x1A4428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4428:
    // 0x1a4428: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4430u;
    // 0x1a4430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a4430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a4434: 0xc  syscall     0
    ctx->pc = 0x1a4434u;
    ctx->pc = 0x1A4438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1a4438:
    // 0x1a4438: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4440u;
}
