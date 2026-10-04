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

// Function: entry_001bd470
// Address: 0x1bd470 - 0x1bf250
void entry_001bd470_0x1bd470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd470_0x1bd470");
#endif

    switch (ctx->pc) {
        case 0x1bd634u: goto label_1bd634;
        case 0x1bda54u: goto label_1bda54;
        case 0x1bdae8u: goto label_1bdae8;
        case 0x1bdda0u: goto label_1bdda0;
        case 0x1bddd0u: goto label_1bddd0;
        case 0x1bdde0u: goto label_1bdde0;
        case 0x1bdde8u: goto label_1bdde8;
        case 0x1bddf8u: goto label_1bddf8;
        case 0x1bde24u: goto label_1bde24;
        case 0x1bde40u: goto label_1bde40;
        case 0x1bde88u: goto label_1bde88;
        case 0x1bde8cu: goto label_1bde8c;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1be018u: goto label_1be018;
        case 0x1be46cu: goto label_1be46c;
        case 0x1be4ccu: goto label_1be4cc;
        case 0x1be4d4u: goto label_1be4d4;
        case 0x1be4e8u: goto label_1be4e8;
        case 0x1be50cu: goto label_1be50c;
        case 0x1be56cu: goto label_1be56c;
        case 0x1be964u: goto label_1be964;
        case 0x1be96cu: goto label_1be96c;
        case 0x1be97cu: goto label_1be97c;
        case 0x1be9b0u: goto label_1be9b0;
        case 0x1be9ecu: goto label_1be9ec;
        case 0x1bea04u: goto label_1bea04;
        case 0x1bea0cu: goto label_1bea0c;
        case 0x1bea1cu: goto label_1bea1c;
        case 0x1bea28u: goto label_1bea28;
        case 0x1bead0u: goto label_1bead0;
        default: break;
    }

    ctx->pc = 0x1bd470u;

    // 0x1bd470: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1bd470u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd474: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd478: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd478u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bd47c: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1bd47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
    // 0x1bd480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd484: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd488: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd48c: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd490: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd494: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd498: 0x0  nop
    ctx->pc = 0x1bd498u;
    // NOP
    // 0x1bd49c: 0x0  nop
    ctx->pc = 0x1bd49cu;
    // NOP
    // 0x1bd4a0: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd4a0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd4a4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd4a8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd4a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd4ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd4b0: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd4b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd4b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD4B4u;
    {
        const bool branch_taken_0x1bd4b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4b4) {
            ctx->pc = 0x1BD4C0u;
            goto label_1bd4c0;
        }
    }
    ctx->pc = 0x1BD4BCu;
    // 0x1bd4bc: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd4c0:
    // 0x1bd4c0: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1bd4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd4c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd4c8: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1bd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
    // 0x1bd4cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd4d0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd4d4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD4D4u;
    {
        const bool branch_taken_0x1bd4d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D4u;
        // 0x1bd4d8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4d4) {
            ctx->pc = 0x1BD4E8u;
            goto label_1bd4e8;
        }
    }
    ctx->pc = 0x1BD4DCu;
    // 0x1bd4dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd4e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD4E0u;
    {
        const bool branch_taken_0x1bd4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E0u;
        // 0x1bd4e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4e0) {
            ctx->pc = 0x1BD500u;
            goto label_1bd500;
        }
    }
    ctx->pc = 0x1BD4E8u;
label_1bd4e8:
    // 0x1bd4e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd4ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd4f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd4f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd4f4: 0x0  nop
    ctx->pc = 0x1bd4f4u;
    // NOP
    // 0x1bd4f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bd4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bd4fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bd4fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bd500:
    // 0x1bd500: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bd504: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd508: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bd508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd50c: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1bd50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
    // 0x1bd510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd514: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bd514u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1bd518: 0x0  nop
    ctx->pc = 0x1bd518u;
    // NOP
    // 0x1bd51c: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1bd51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
    // 0x1bd520: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd524: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD524u;
    {
        const bool branch_taken_0x1bd524 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD524u;
        // 0x1bd528: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd524) {
            ctx->pc = 0x1BD538u;
            goto label_1bd538;
        }
    }
    ctx->pc = 0x1BD52Cu;
    // 0x1bd52c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd52cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD530u;
    {
        const bool branch_taken_0x1bd530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD530u;
        // 0x1bd534: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd530) {
            ctx->pc = 0x1BD550u;
            goto label_1bd550;
        }
    }
    ctx->pc = 0x1BD538u;
label_1bd538:
    // 0x1bd538: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd53c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd540: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd540u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd544: 0x0  nop
    ctx->pc = 0x1bd544u;
    // NOP
    // 0x1bd548: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd54c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd54cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd550:
    // 0x1bd550: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bd554: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd55c: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1bd55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
    // 0x1bd560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd564: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bd564u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bd568: 0x0  nop
    ctx->pc = 0x1bd568u;
    // NOP
    // 0x1bd56c: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1bd56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
    // 0x1bd570: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bd570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd574: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD574u;
    {
        const bool branch_taken_0x1bd574 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD574u;
        // 0x1bd578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd574) {
            ctx->pc = 0x1BD588u;
            goto label_1bd588;
        }
    }
    ctx->pc = 0x1BD57Cu;
    // 0x1bd57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD580u;
    {
        const bool branch_taken_0x1bd580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD580u;
        // 0x1bd584: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd580) {
            ctx->pc = 0x1BD5A0u;
            goto label_1bd5a0;
        }
    }
    ctx->pc = 0x1BD588u;
label_1bd588:
    // 0x1bd588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bd588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bd58c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bd58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bd590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd594: 0x0  nop
    ctx->pc = 0x1bd594u;
    // NOP
    // 0x1bd598: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd59c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd59cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd5a0:
    // 0x1bd5a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1bd5a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd5a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd5a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd5ac: 0x0  nop
    ctx->pc = 0x1bd5acu;
    // NOP
    // 0x1bd5b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bd5b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bd5b4: 0x0  nop
    ctx->pc = 0x1bd5b4u;
    // NOP
    // 0x1bd5b8: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1bd5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
    // 0x1bd5bc: 0x92630234  lbu         $v1, 0x234($s3)
    ctx->pc = 0x1bd5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x1bd5c0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BD5C0u;
    {
        const bool branch_taken_0x1bd5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C0u;
        // 0x1bd5c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5c0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5C8u;
    // 0x1bd5c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd5cc: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x1bd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1bd5d0: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD5D0u;
    {
        const bool branch_taken_0x1bd5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd5d0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5D8u;
    // 0x1bd5d8: 0x92640241  lbu         $a0, 0x241($s3)
    ctx->pc = 0x1bd5d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 577)));
    // 0x1bd5dc: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x1bd5dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1bd5e0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD5E0u;
    {
        const bool branch_taken_0x1bd5e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E0u;
        // 0x1bd5e4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5e0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5E8u;
    // 0x1bd5e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bd5ec: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x1bd5f0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD5F0u;
    {
        const bool branch_taken_0x1bd5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5F0u;
        // 0x1bd5f4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5f0) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD5F8u;
    // 0x1bd5f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD5F8u;
    {
        const bool branch_taken_0x1bd5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd5f8) {
            ctx->pc = 0x1BD60Cu;
            goto label_1bd60c;
        }
    }
    ctx->pc = 0x1BD600u;
    // 0x1bd600: 0x24820059  addiu       $v0, $a0, 0x59
    ctx->pc = 0x1bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 89));
    // 0x1bd604: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x1BD604u;
    {
        const bool branch_taken_0x1bd604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD604u;
        // 0x1bd608: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd604) {
            ctx->pc = 0x1BDA54u;
            goto label_1bda54;
        }
    }
    ctx->pc = 0x1BD60Cu;
label_1bd60c:
    // 0x1bd60c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd610: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bd614: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x1bd614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
    // 0x1bd618: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x1bd618u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bd61c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bd620: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bd624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd628: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bd628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd62c: 0xc06fb54  jal         func_1BED50
    ctx->pc = 0x1BD62Cu;
    SET_GPR_U32(ctx, 31, 0x1BD634u);
    ctx->pc = 0x1BD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD62Cu;
    // 0x1bd630: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    goto label_1bed50;
    ctx->pc = 0x1BD634u;
label_1bd634:
    // 0x1bd634: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1BD634u;
    {
        const bool branch_taken_0x1bd634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD634u;
        // 0x1bd638: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd634) {
            ctx->pc = 0x1BDA58u;
            goto label_1bda58;
        }
    }
    ctx->pc = 0x1BD63Cu;
    // 0x1bd63c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd640: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bd644: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bd644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bd648: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd64c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD64Cu;
    {
        const bool branch_taken_0x1bd64c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1BD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD64Cu;
        // 0x1bd650: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd64c) {
            ctx->pc = 0x1BD65Cu;
            goto label_1bd65c;
        }
    }
    ctx->pc = 0x1BD654u;
    // 0x1bd654: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1bd658: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd658u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1bd65c:
    // 0x1bd65c: 0xa6620220  sh          $v0, 0x220($s3)
    ctx->pc = 0x1bd65cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bd660: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1bd660u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1bd664: 0xa6620252  sh          $v0, 0x252($s3)
    ctx->pc = 0x1bd664u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bd668: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1bd668u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1bd66c: 0xa6620222  sh          $v0, 0x222($s3)
    ctx->pc = 0x1bd66cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bd670: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1bd674: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd678: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1bd678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1bd67c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bd680: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bd684: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bd684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1bd688: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1bd688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
    // 0x1bd68c: 0x25083b82  addiu       $t0, $t0, 0x3B82
    ctx->pc = 0x1bd68cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15234));
    // 0x1bd690: 0x24e73b84  addiu       $a3, $a3, 0x3B84
    ctx->pc = 0x1bd690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15236));
    // 0x1bd694: 0x24c63b83  addiu       $a2, $a2, 0x3B83
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15235));
    // 0x1bd698: 0x24a53b85  addiu       $a1, $a1, 0x3B85
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15237));
    // 0x1bd69c: 0x24843b8e  addiu       $a0, $a0, 0x3B8E
    ctx->pc = 0x1bd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15246));
    // 0x1bd6a0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bd6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bd6a4: 0x954b000c  lhu         $t3, 0xC($t2)
    ctx->pc = 0x1bd6a4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1bd6a8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bd6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1bd6ac: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x1bd6acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1bd6b0: 0x14b5023  subu        $t2, $t2, $t3
    ctx->pc = 0x1bd6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1bd6b4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1bd6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1bd6b8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1bd6bc: 0xa2690241  sb          $t1, 0x241($s3)
    ctx->pc = 0x1bd6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 9));
    // 0x1bd6c0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd6c4: 0x952a000c  lhu         $t2, 0xC($t1)
    ctx->pc = 0x1bd6c4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1bd6c8: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x1bd6c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1bd6cc: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1bd6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1bd6d0: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1bd6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1bd6d4: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bd6d8: 0xa2680242  sb          $t0, 0x242($s3)
    ctx->pc = 0x1bd6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 8));
    // 0x1bd6dc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x1bd6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd6e0: 0x9509000c  lhu         $t1, 0xC($t0)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1bd6e4: 0x94100  sll         $t0, $t1, 4
    ctx->pc = 0x1bd6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1bd6e8: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1bd6ec: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1bd6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bd6f0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1bd6f4: 0xa2670244  sb          $a3, 0x244($s3)
    ctx->pc = 0x1bd6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 7));
    // 0x1bd6f8: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd6fc: 0x94e8000c  lhu         $t0, 0xC($a3)
    ctx->pc = 0x1bd6fcu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bd700: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1bd704: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1bd704u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1bd708: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bd70c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1bd70cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bd710: 0xa2660243  sb          $a2, 0x243($s3)
    ctx->pc = 0x1bd710u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 6));
    // 0x1bd714: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd718: 0x94c7000c  lhu         $a3, 0xC($a2)
    ctx->pc = 0x1bd718u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bd71c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1bd71cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1bd720: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1bd724: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bd724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bd728: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd728u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd72c: 0xa2650246  sb          $a1, 0x246($s3)
    ctx->pc = 0x1bd72cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bd730: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1bd730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd734: 0x94a6000c  lhu         $a2, 0xC($a1)
    ctx->pc = 0x1bd734u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bd738: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1bd738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1bd73c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1bd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bd740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bd740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bd744: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1bd744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd748: 0xa2640240  sb          $a0, 0x240($s3)
    ctx->pc = 0x1bd748u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd74c: 0xa2630248  sb          $v1, 0x248($s3)
    ctx->pc = 0x1bd74cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd750: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd754: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x1bd754u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1bd758: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bd75c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1bd75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd760: 0x0  nop
    ctx->pc = 0x1bd760u;
    // NOP
    // 0x1bd764: 0x0  nop
    ctx->pc = 0x1bd764u;
    // NOP
    // 0x1bd768: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd768u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd76c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bd770: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1bd774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd778: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1bd778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1bd77c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD77Cu;
    {
        const bool branch_taken_0x1bd77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd77c) {
            ctx->pc = 0x1BD78Cu;
            goto label_1bd78c;
        }
    }
    ctx->pc = 0x1BD784u;
    // 0x1bd784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD784u;
    {
        const bool branch_taken_0x1bd784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD784u;
        // 0x1bd788: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd784) {
            ctx->pc = 0x1BD794u;
            goto label_1bd794;
        }
    }
    ctx->pc = 0x1BD78Cu;
label_1bd78c:
    // 0x1bd78c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bd790: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1bd790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bd794:
    // 0x1bd794: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1bd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1bd798: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1bd798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1bd79c: 0xa263024a  sb          $v1, 0x24A($s3)
    ctx->pc = 0x1bd79cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd7a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1bd7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1bd7a4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bd7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd7a8: 0x9064000f  lbu         $a0, 0xF($v1)
    ctx->pc = 0x1bd7a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x1bd7ac: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bd7b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1bd7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd7b4: 0x0  nop
    ctx->pc = 0x1bd7b4u;
    // NOP
    // 0x1bd7b8: 0x0  nop
    ctx->pc = 0x1bd7b8u;
    // NOP
    // 0x1bd7bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1bd7bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bd7c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1bd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1bd7c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1bd7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bd7cc: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1bd7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1bd7d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7D0u;
    {
        const bool branch_taken_0x1bd7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7d0) {
            ctx->pc = 0x1BD7E0u;
            goto label_1bd7e0;
        }
    }
    ctx->pc = 0x1BD7D8u;
    // 0x1bd7d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7D8u;
    {
        const bool branch_taken_0x1bd7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7D8u;
        // 0x1bd7dc: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7d8) {
            ctx->pc = 0x1BD7E8u;
            goto label_1bd7e8;
        }
    }
    ctx->pc = 0x1BD7E0u;
label_1bd7e0:
    // 0x1bd7e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1bd7e4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bd7e8:
    // 0x1bd7e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bd7ec: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1bd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bd7f0: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
    // 0x1bd7f4: 0xa263024b  sb          $v1, 0x24B($s3)
    ctx->pc = 0x1bd7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd7f8: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bd7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd7fc: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1bd7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1bd800: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1bd800u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bd804: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bd804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bd808: 0x9446000c  lhu         $a2, 0xC($v0)
    ctx->pc = 0x1bd808u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bd80c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1bd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1bd810: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1bd810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bd814: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bd814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bd818: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bd818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd81c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bd81cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd820: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd824: 0x0  nop
    ctx->pc = 0x1bd824u;
    // NOP
    // 0x1bd828: 0x0  nop
    ctx->pc = 0x1bd828u;
    // NOP
    // 0x1bd82c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd82cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd830: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd834: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd83c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd83cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd840: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD840u;
    {
        const bool branch_taken_0x1bd840 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd840) {
            ctx->pc = 0x1BD84Cu;
            goto label_1bd84c;
        }
    }
    ctx->pc = 0x1BD848u;
    // 0x1bd848: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd84c:
    // 0x1bd84c: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bd84cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd850: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd854: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bd858: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bd858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
    // 0x1bd85c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd860: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd860u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd864: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd868: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd86c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd870: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd874: 0x0  nop
    ctx->pc = 0x1bd874u;
    // NOP
    // 0x1bd878: 0x0  nop
    ctx->pc = 0x1bd878u;
    // NOP
    // 0x1bd87c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd87cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd880: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd880u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd884: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd884u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd88c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd890: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD890u;
    {
        const bool branch_taken_0x1bd890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd890) {
            ctx->pc = 0x1BD89Cu;
            goto label_1bd89c;
        }
    }
    ctx->pc = 0x1BD898u;
    // 0x1bd898: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd89c:
    // 0x1bd89c: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1bd89cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd8a0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd8a4: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bd8a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bd8a8: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1bd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
    // 0x1bd8ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd8b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd8b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd8b4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd8b8: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd8bc: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd8c0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd8c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd8c4: 0x0  nop
    ctx->pc = 0x1bd8c4u;
    // NOP
    // 0x1bd8c8: 0x0  nop
    ctx->pc = 0x1bd8c8u;
    // NOP
    // 0x1bd8cc: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd8ccu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd8d0: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd8d4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd8d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd8dc: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd8dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd8e0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD8E0u;
    {
        const bool branch_taken_0x1bd8e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd8e0) {
            ctx->pc = 0x1BD8ECu;
            goto label_1bd8ec;
        }
    }
    ctx->pc = 0x1BD8E8u;
    // 0x1bd8e8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd8ec:
    // 0x1bd8ec: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1bd8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd8f0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd8f4: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bd8f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bd8f8: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1bd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
    // 0x1bd8fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd900: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bd900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd904: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bd904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bd908: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bd908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bd90c: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bd90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bd910: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bd910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bd914: 0x0  nop
    ctx->pc = 0x1bd914u;
    // NOP
    // 0x1bd918: 0x0  nop
    ctx->pc = 0x1bd918u;
    // NOP
    // 0x1bd91c: 0x1810  mfhi        $v1
    ctx->pc = 0x1bd91cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bd920: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bd920u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bd924: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bd924u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bd928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bd928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bd92c: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bd92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bd930: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD930u;
    {
        const bool branch_taken_0x1bd930 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd930) {
            ctx->pc = 0x1BD93Cu;
            goto label_1bd93c;
        }
    }
    ctx->pc = 0x1BD938u;
    // 0x1bd938: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bd938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bd93c:
    // 0x1bd93c: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1bd93cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bd940: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd944: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
    // 0x1bd948: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd94c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd950: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD950u;
    {
        const bool branch_taken_0x1bd950 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD950u;
        // 0x1bd954: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd950) {
            ctx->pc = 0x1BD964u;
            goto label_1bd964;
        }
    }
    ctx->pc = 0x1BD958u;
    // 0x1bd958: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd95c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD95Cu;
    {
        const bool branch_taken_0x1bd95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD95Cu;
        // 0x1bd960: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd95c) {
            ctx->pc = 0x1BD97Cu;
            goto label_1bd97c;
        }
    }
    ctx->pc = 0x1BD964u;
label_1bd964:
    // 0x1bd964: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd968: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd96c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd96cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd970: 0x0  nop
    ctx->pc = 0x1bd970u;
    // NOP
    // 0x1bd974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bd974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bd978: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bd978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bd97c:
    // 0x1bd97c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bd980: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd984: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bd984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bd988: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1bd988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
    // 0x1bd98c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bd98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd990: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bd990u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1bd994: 0x0  nop
    ctx->pc = 0x1bd994u;
    // NOP
    // 0x1bd998: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1bd998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
    // 0x1bd99c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bd99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9a0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD9A0u;
    {
        const bool branch_taken_0x1bd9a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9A0u;
        // 0x1bd9a4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9a0) {
            ctx->pc = 0x1BD9B4u;
            goto label_1bd9b4;
        }
    }
    ctx->pc = 0x1BD9A8u;
    // 0x1bd9a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bd9a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd9ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD9ACu;
    {
        const bool branch_taken_0x1bd9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9ACu;
        // 0x1bd9b0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9ac) {
            ctx->pc = 0x1BD9CCu;
            goto label_1bd9cc;
        }
    }
    ctx->pc = 0x1BD9B4u;
label_1bd9b4:
    // 0x1bd9b4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd9b8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bd9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bd9bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd9bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd9c0: 0x0  nop
    ctx->pc = 0x1bd9c0u;
    // NOP
    // 0x1bd9c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bd9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bd9c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bd9c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bd9cc:
    // 0x1bd9cc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bd9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bd9d0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bd9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bd9d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bd9d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd9d8: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1bd9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
    // 0x1bd9dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd9e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bd9e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bd9e4: 0x0  nop
    ctx->pc = 0x1bd9e4u;
    // NOP
    // 0x1bd9e8: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1bd9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
    // 0x1bd9ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bd9ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd9f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD9F0u;
    {
        const bool branch_taken_0x1bd9f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BD9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9F0u;
        // 0x1bd9f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9f0) {
            ctx->pc = 0x1BDA04u;
            goto label_1bda04;
        }
    }
    ctx->pc = 0x1BD9F8u;
    // 0x1bd9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bd9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd9fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD9FCu;
    {
        const bool branch_taken_0x1bd9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD9FCu;
        // 0x1bda00: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd9fc) {
            ctx->pc = 0x1BDA1Cu;
            goto label_1bda1c;
        }
    }
    ctx->pc = 0x1BDA04u;
label_1bda04:
    // 0x1bda04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bda04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bda08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bda08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bda0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bda0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bda10: 0x0  nop
    ctx->pc = 0x1bda10u;
    // NOP
    // 0x1bda14: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bda14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bda18: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bda18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bda1c:
    // 0x1bda1c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bda1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1bda20: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bda20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bda24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bda24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bda28: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x1bda28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
    // 0x1bda2c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bda2cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bda30: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1bda30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
    // 0x1bda34: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bda34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bda38: 0x9465000c  lhu         $a1, 0xC($v1)
    ctx->pc = 0x1bda38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bda3c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bda40: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bda40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bda44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bda44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bda48: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bda48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bda4c: 0xc06fb54  jal         func_1BED50
    ctx->pc = 0x1BDA4Cu;
    SET_GPR_U32(ctx, 31, 0x1BDA54u);
    ctx->pc = 0x1BDA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDA4Cu;
    // 0x1bda50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    goto label_1bed50;
    ctx->pc = 0x1BDA54u;
label_1bda54:
    // 0x1bda54: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1bda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1bda58:
    // 0x1bda58: 0x90820012  lbu         $v0, 0x12($a0)
    ctx->pc = 0x1bda58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1bda5c: 0x144003e5  bnez        $v0, . + 4 + (0x3E5 << 2)
    ctx->pc = 0x1BDA5Cu;
    {
        const bool branch_taken_0x1bda5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA5Cu;
        // 0x1bda60: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda5c) {
            ctx->pc = 0x1BE9F4u;
            goto label_1be9f4;
        }
    }
    ctx->pc = 0x1BDA64u;
    // 0x1bda64: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bda64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
    // 0x1bda68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDA68u;
    {
        const bool branch_taken_0x1bda68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bda68) {
            ctx->pc = 0x1BDAA0u;
            goto label_1bdaa0;
        }
    }
    ctx->pc = 0x1BDA70u;
    // 0x1bda70: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bda70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bda74: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bda74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1bda78: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x1bda78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x1bda7c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDA7Cu;
    {
        const bool branch_taken_0x1bda7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bda7c) {
            ctx->pc = 0x1BDAA0u;
            goto label_1bdaa0;
        }
    }
    ctx->pc = 0x1BDA84u;
    // 0x1bda84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bda84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bda88: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bda88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x1bda8c: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x1bda8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33496Cu));
    // 0x1bda90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDA90u;
    {
        const bool branch_taken_0x1bda90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bda90) {
            ctx->pc = 0x1BDAA0u;
            goto label_1bdaa0;
        }
    }
    ctx->pc = 0x1BDA98u;
    // 0x1bda98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BDA98u;
    {
        const bool branch_taken_0x1bda98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDA98u;
        // 0x1bda9c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bda98) {
            ctx->pc = 0x1BDAD8u;
            goto label_1bdad8;
        }
    }
    ctx->pc = 0x1BDAA0u;
label_1bdaa0:
    // 0x1bdaa0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdaa4: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bdaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x1bdaa8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDAA8u;
    {
        const bool branch_taken_0x1bdaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAA8u;
        // 0x1bdaac: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdaa8) {
            ctx->pc = 0x1BDAD8u;
            goto label_1bdad8;
        }
    }
    ctx->pc = 0x1BDAB0u;
    // 0x1bdab0: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bdab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1bdab4: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x1bdab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
    // 0x1bdab8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDAB8u;
    {
        const bool branch_taken_0x1bdab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdab8) {
            ctx->pc = 0x1BDAD8u;
            goto label_1bdad8;
        }
    }
    ctx->pc = 0x1BDAC0u;
    // 0x1bdac0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdac4: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bdac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x1bdac8: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x1bdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3349FCu));
    // 0x1bdacc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDACCu;
    {
        const bool branch_taken_0x1bdacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdacc) {
            ctx->pc = 0x1BDAD8u;
            goto label_1bdad8;
        }
    }
    ctx->pc = 0x1BDAD4u;
    // 0x1bdad4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bdad4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdad8:
    // 0x1bdad8: 0x90850018  lbu         $a1, 0x18($a0)
    ctx->pc = 0x1bdad8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1bdadc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bdadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdae0: 0xc06fe14  jal         func_1BF850
    ctx->pc = 0x1BDAE0u;
    SET_GPR_U32(ctx, 31, 0x1BDAE8u);
    ctx->pc = 0x1BDAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDAE0u;
    // 0x1bdae4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF850u, 0x1BDAE0u, 0x1BDAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDAE8u;
label_1bdae8:
    // 0x1bdae8: 0x1620012e  bnez        $s1, . + 4 + (0x12E << 2)
    ctx->pc = 0x1BDAE8u;
    {
        const bool branch_taken_0x1bdae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDAE8u;
        // 0x1bdaec: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdae8) {
            ctx->pc = 0x1BDFA4u;
            goto label_1bdfa4;
        }
    }
    ctx->pc = 0x1BDAF0u;
    // 0x1bdaf0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bdaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bdaf4: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1bdaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bdaf8: 0xa6600222  sh          $zero, 0x222($s3)
    ctx->pc = 0x1bdaf8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bdafc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bdb00: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x1bdb00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bdb04: 0x24424926  addiu       $v0, $v0, 0x4926
    ctx->pc = 0x1bdb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18726));
    // 0x1bdb08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bdb0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bdb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bdb10: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bdb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
    // 0x1bdb14: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1bdb14u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdb18: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1bdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1bdb1c: 0xa6660252  sh          $a2, 0x252($s3)
    ctx->pc = 0x1bdb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 6));
    // 0x1bdb20: 0xa6640250  sh          $a0, 0x250($s3)
    ctx->pc = 0x1bdb20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 592), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bdb24: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1bdb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1bdb28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bdb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdb2c: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1bdb2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bdb30: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1bdb30u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1bdb34: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1bdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1bdb38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1bdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bdb3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1bdb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bdb40: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bdb40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bdb44: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1bdb44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bdb48: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bdb48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bdb4c: 0x0  nop
    ctx->pc = 0x1bdb4cu;
    // NOP
    // 0x1bdb50: 0x0  nop
    ctx->pc = 0x1bdb50u;
    // NOP
    // 0x1bdb54: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdb54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bdb58: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bdb5c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdb5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bdb60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdb64: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdb64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bdb68: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDB68u;
    {
        const bool branch_taken_0x1bdb68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdb68) {
            ctx->pc = 0x1BDB74u;
            goto label_1bdb74;
        }
    }
    ctx->pc = 0x1BDB70u;
    // 0x1bdb70: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdb74:
    // 0x1bdb74: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1bdb74u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdb78: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdb78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdb7c: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bdb7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bdb80: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1bdb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
    // 0x1bdb84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdb88: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bdb88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdb8c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bdb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bdb90: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bdb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bdb94: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bdb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bdb98: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bdb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bdb9c: 0x0  nop
    ctx->pc = 0x1bdb9cu;
    // NOP
    // 0x1bdba0: 0x0  nop
    ctx->pc = 0x1bdba0u;
    // NOP
    // 0x1bdba4: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdba4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bdba8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bdbac: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdbacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bdbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdbb4: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdbb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bdbb8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDBB8u;
    {
        const bool branch_taken_0x1bdbb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbb8) {
            ctx->pc = 0x1BDBC4u;
            goto label_1bdbc4;
        }
    }
    ctx->pc = 0x1BDBC0u;
    // 0x1bdbc0: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdbc4:
    // 0x1bdbc4: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1bdbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdbc8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdbcc: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bdbccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bdbd0: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1bdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
    // 0x1bdbd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdbd8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bdbd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdbdc: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bdbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bdbe0: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bdbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bdbe4: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bdbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bdbe8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bdbe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bdbec: 0x0  nop
    ctx->pc = 0x1bdbecu;
    // NOP
    // 0x1bdbf0: 0x0  nop
    ctx->pc = 0x1bdbf0u;
    // NOP
    // 0x1bdbf4: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdbf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bdbf8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bdbfc: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdbfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bdc00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdc04: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bdc08: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDC08u;
    {
        const bool branch_taken_0x1bdc08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc08) {
            ctx->pc = 0x1BDC14u;
            goto label_1bdc14;
        }
    }
    ctx->pc = 0x1BDC10u;
    // 0x1bdc10: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdc14:
    // 0x1bdc14: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1bdc14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdc18: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdc1c: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1bdc1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bdc20: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1bdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
    // 0x1bdc24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdc28: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1bdc28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdc2c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1bdc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bdc30: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1bdc30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1bdc34: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1bdc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1bdc38: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1bdc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bdc3c: 0x0  nop
    ctx->pc = 0x1bdc3cu;
    // NOP
    // 0x1bdc40: 0x0  nop
    ctx->pc = 0x1bdc40u;
    // NOP
    // 0x1bdc44: 0x1810  mfhi        $v1
    ctx->pc = 0x1bdc44u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1bdc48: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1bdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bdc4c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1bdc4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bdc50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdc54: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1bdc54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bdc58: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDC58u;
    {
        const bool branch_taken_0x1bdc58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdc58) {
            ctx->pc = 0x1BDC64u;
            goto label_1bdc64;
        }
    }
    ctx->pc = 0x1BDC60u;
    // 0x1bdc60: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1bdc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bdc64:
    // 0x1bdc64: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1bdc64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bdc68: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdc6c: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1bdc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
    // 0x1bdc70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdc74: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bdc74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdc78: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDC78u;
    {
        const bool branch_taken_0x1bdc78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC78u;
        // 0x1bdc7c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc78) {
            ctx->pc = 0x1BDC8Cu;
            goto label_1bdc8c;
        }
    }
    ctx->pc = 0x1BDC80u;
    // 0x1bdc80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdc84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDC84u;
    {
        const bool branch_taken_0x1bdc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC84u;
        // 0x1bdc88: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc84) {
            ctx->pc = 0x1BDCA4u;
            goto label_1bdca4;
        }
    }
    ctx->pc = 0x1BDC8Cu;
label_1bdc8c:
    // 0x1bdc8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bdc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bdc90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bdc90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bdc94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdc94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdc98: 0x0  nop
    ctx->pc = 0x1bdc98u;
    // NOP
    // 0x1bdc9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bdc9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bdca0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bdca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bdca4:
    // 0x1bdca4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bdca8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdcac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1bdcacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bdcb0: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1bdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
    // 0x1bdcb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdcb8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bdcb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1bdcbc: 0x0  nop
    ctx->pc = 0x1bdcbcu;
    // NOP
    // 0x1bdcc0: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1bdcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
    // 0x1bdcc4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bdcc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdcc8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDCC8u;
    {
        const bool branch_taken_0x1bdcc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCC8u;
        // 0x1bdccc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcc8) {
            ctx->pc = 0x1BDCDCu;
            goto label_1bdcdc;
        }
    }
    ctx->pc = 0x1BDCD0u;
    // 0x1bdcd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdcd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdcd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDCD4u;
    {
        const bool branch_taken_0x1bdcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDCD4u;
        // 0x1bdcd8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdcd4) {
            ctx->pc = 0x1BDCF4u;
            goto label_1bdcf4;
        }
    }
    ctx->pc = 0x1BDCDCu;
label_1bdcdc:
    // 0x1bdcdc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bdcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bdce0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1bdce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bdce4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdce4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdce8: 0x0  nop
    ctx->pc = 0x1bdce8u;
    // NOP
    // 0x1bdcec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bdcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bdcf0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bdcf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bdcf4:
    // 0x1bdcf4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1bdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1bdcf8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bdcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bdcfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bdcfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdd00: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1bdd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
    // 0x1bdd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdd08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bdd08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bdd0c: 0x0  nop
    ctx->pc = 0x1bdd0cu;
    // NOP
    // 0x1bdd10: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1bdd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
    // 0x1bdd14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1bdd14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdd18: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD18u;
    {
        const bool branch_taken_0x1bdd18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD18u;
        // 0x1bdd1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd18) {
            ctx->pc = 0x1BDD2Cu;
            goto label_1bdd2c;
        }
    }
    ctx->pc = 0x1BDD20u;
    // 0x1bdd20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdd24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDD24u;
    {
        const bool branch_taken_0x1bdd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD24u;
        // 0x1bdd28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd24) {
            ctx->pc = 0x1BDD44u;
            goto label_1bdd44;
        }
    }
    ctx->pc = 0x1BDD2Cu;
label_1bdd2c:
    // 0x1bdd2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bdd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bdd30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1bdd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bdd34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdd38: 0x0  nop
    ctx->pc = 0x1bdd38u;
    // NOP
    // 0x1bdd3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bdd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bdd40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bdd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bdd44:
    // 0x1bdd44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1bdd48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bdd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdd4c: 0x0  nop
    ctx->pc = 0x1bdd4cu;
    // NOP
    // 0x1bdd50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bdd50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bdd54: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1bdd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
    // 0x1bdd58: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1bdd5c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bdd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1bdd60: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDD60u;
    {
        const bool branch_taken_0x1bdd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD60u;
        // 0x1bdd64: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd60) {
            ctx->pc = 0x1BDD78u;
            goto label_1bdd78;
        }
    }
    ctx->pc = 0x1BDD68u;
    // 0x1bdd68: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bdd6c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x1bdd70: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDD70u;
    {
        const bool branch_taken_0x1bdd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD70u;
        // 0x1bdd74: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd70) {
            ctx->pc = 0x1BDDA8u;
            goto label_1bdda8;
        }
    }
    ctx->pc = 0x1BDD78u;
label_1bdd78:
    // 0x1bdd78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bdd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bdd7c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bdd80: 0x24423b8d  addiu       $v0, $v0, 0x3B8D
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15245));
    // 0x1bdd84: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x1bdd84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1bdd88: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bdd8c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bdd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdd94: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bdd94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bdd98: 0xc06fb54  jal         func_1BED50
    ctx->pc = 0x1BDD98u;
    SET_GPR_U32(ctx, 31, 0x1BDDA0u);
    ctx->pc = 0x1BDD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD98u;
    // 0x1bdd9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    goto label_1bed50;
    ctx->pc = 0x1BDDA0u;
label_1bdda0:
    // 0x1bdda0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BDDA0u;
    {
        const bool branch_taken_0x1bdda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDA0u;
        // 0x1bdda4: 0x92650244  lbu         $a1, 0x244($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdda0) {
            ctx->pc = 0x1BDDD4u;
            goto label_1bddd4;
        }
    }
    ctx->pc = 0x1BDDA8u;
label_1bdda8:
    // 0x1bdda8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDDA8u;
    {
        const bool branch_taken_0x1bdda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdda8) {
            ctx->pc = 0x1BDDB8u;
            goto label_1bddb8;
        }
    }
    ctx->pc = 0x1BDDB0u;
    // 0x1bddb0: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x1bddb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
    // 0x1bddb4: 0xa6620222  sh          $v0, 0x222($s3)
    ctx->pc = 0x1bddb4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 2));
label_1bddb8:
    // 0x1bddb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1bddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1bddbc: 0x2442497d  addiu       $v0, $v0, 0x497D
    ctx->pc = 0x1bddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18813));
    // 0x1bddc0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bddc4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1bddc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bddc8: 0xc06fb54  jal         func_1BED50
    ctx->pc = 0x1BDDC8u;
    SET_GPR_U32(ctx, 31, 0x1BDDD0u);
    ctx->pc = 0x1BDDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDC8u;
    // 0x1bddcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED50u;
    goto label_1bed50;
    ctx->pc = 0x1BDDD0u;
label_1bddd0:
    // 0x1bddd0: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1bddd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
label_1bddd4:
    // 0x1bddd4: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1bddd4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1bddd8: 0xc045784  jal         func_115E10
    ctx->pc = 0x1BDDD8u;
    SET_GPR_U32(ctx, 31, 0x1BDDE0u);
    ctx->pc = 0x1BDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDD8u;
    // 0x1bdddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BDDD8u, 0x1BDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE0u;
label_1bdde0:
    // 0x1bdde0: 0xc054c24  jal         func_153090
    ctx->pc = 0x1BDDE0u;
    SET_GPR_U32(ctx, 31, 0x1BDDE8u);
    ctx->pc = 0x1BDDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDE0u;
    // 0x1bdde4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BDDE0u, 0x1BDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE8u;
label_1bdde8:
    // 0x1bdde8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bddec: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1bddecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1bddf0: 0xc06fc94  jal         func_1BF250
    ctx->pc = 0x1BDDF0u;
    SET_GPR_U32(ctx, 31, 0x1BDDF8u);
    ctx->pc = 0x1BDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDF0u;
    // 0x1bddf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF250u, 0x1BDDF0u, 0x1BDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF8u;
label_1bddf8:
    // 0x1bddf8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1bddfc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1bddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1bde00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDE00u;
    {
        const bool branch_taken_0x1bde00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE00u;
        // 0x1bde04: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde00) {
            ctx->pc = 0x1BDE18u;
            goto label_1bde18;
        }
    }
    ctx->pc = 0x1BDE08u;
    // 0x1bde08: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bde0c: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x1bde10: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDE10u;
    {
        const bool branch_taken_0x1bde10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE10u;
        // 0x1bde14: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde10) {
            ctx->pc = 0x1BDE2Cu;
            goto label_1bde2c;
        }
    }
    ctx->pc = 0x1BDE18u;
label_1bde18:
    // 0x1bde18: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bde18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
    // 0x1bde1c: 0xc06525c  jal         func_194970
    ctx->pc = 0x1BDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE24u);
    ctx->pc = 0x1BDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE1Cu;
    // 0x1bde20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BDE1Cu, 0x1BDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE24u;
label_1bde24:
    // 0x1bde24: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1BDE24u;
    {
        const bool branch_taken_0x1bde24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde24) {
            ctx->pc = 0x1BDEF0u;
            goto label_1bdef0;
        }
    }
    ctx->pc = 0x1BDE2Cu;
label_1bde2c:
    // 0x1bde2c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDE2Cu;
    {
        const bool branch_taken_0x1bde2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bde2c) {
            ctx->pc = 0x1BDE48u;
            goto label_1bde48;
        }
    }
    ctx->pc = 0x1BDE34u;
    // 0x1bde34: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bde34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
    // 0x1bde38: 0xc06525c  jal         func_194970
    ctx->pc = 0x1BDE38u;
    SET_GPR_U32(ctx, 31, 0x1BDE40u);
    ctx->pc = 0x1BDE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE38u;
    // 0x1bde3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BDE38u, 0x1BDE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE40u;
label_1bde40:
    // 0x1bde40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BDE40u;
    {
        const bool branch_taken_0x1bde40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE40u;
        // 0x1bde44: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde40) {
            ctx->pc = 0x1BDE8Cu;
            goto label_1bde8c;
        }
    }
    ctx->pc = 0x1BDE48u;
label_1bde48:
    // 0x1bde48: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bde48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bde4c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bde50: 0x2463497d  addiu       $v1, $v1, 0x497D
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18813));
    // 0x1bde54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1bde54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1bde58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1bde58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bde5c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1bde5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x1bde60: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1bde60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bde64: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x1bde64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x1bde68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bde68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bde6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde70: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bde74: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bde74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bde78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1bde7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bde80: 0xc0653b4  jal         func_194ED0
    ctx->pc = 0x1BDE80u;
    SET_GPR_U32(ctx, 31, 0x1BDE88u);
    ctx->pc = 0x1BDE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE80u;
    // 0x1bde84: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194ED0u, 0x1BDE80u, 0x1BDE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE88u;
label_1bde88:
    // 0x1bde88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1bde88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bde8c:
    // 0x1bde8c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bde90: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1bde90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
    // 0x1bde94: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1bde94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bde98: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x1bde9c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1bde9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1bdea0: 0x9063367e  lbu         $v1, 0x367E($v1)
    ctx->pc = 0x1bdea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13950)));
    // 0x1bdea4: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1bdea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1bdea8: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1BDEA8u;
    {
        const bool branch_taken_0x1bdea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdea8) {
            ctx->pc = 0x1BDEDCu;
            goto label_1bdedc;
        }
    }
    ctx->pc = 0x1BDEB0u;
    // 0x1bdeb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bdeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bdeb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bdeb8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1bdeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1bdebc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x1bdec0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bdec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bdec4: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x1bdec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
    // 0x1bdec8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bdec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bdecc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bdeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bded0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bded0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bded4: 0xc06542c  jal         func_1950B0
    ctx->pc = 0x1BDED4u;
    SET_GPR_U32(ctx, 31, 0x1BDEDCu);
    ctx->pc = 0x1BDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDED4u;
    // 0x1bded8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950B0u, 0x1BDED4u, 0x1BDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEDCu;
label_1bdedc:
    // 0x1bdedc: 0x0  nop
    ctx->pc = 0x1bdedcu;
    // NOP
    // 0x1bdee0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1bdee0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1bdee4: 0x2aa30005  slti        $v1, $s5, 0x5
    ctx->pc = 0x1bdee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bdee8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BDEE8u;
    {
        const bool branch_taken_0x1bdee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdee8) {
            ctx->pc = 0x1BDE8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bde8c;
        }
    }
    ctx->pc = 0x1BDEF0u;
label_1bdef0:
    // 0x1bdef0: 0x86640220  lh          $a0, 0x220($s3)
    ctx->pc = 0x1bdef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x1bdef4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdef8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bdef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bdefc: 0xa664021c  sh          $a0, 0x21C($s3)
    ctx->pc = 0x1bdefcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bdf00: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x1bdf04: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BDF04u;
    {
        const bool branch_taken_0x1bdf04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf04) {
            ctx->pc = 0x1BDF2Cu;
            goto label_1bdf2c;
        }
    }
    ctx->pc = 0x1BDF0Cu;
    // 0x1bdf0c: 0x86630220  lh          $v1, 0x220($s3)
    ctx->pc = 0x1bdf0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x1bdf10: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1bdf14: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1bdf14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1bdf18: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BDF18u;
    {
        const bool branch_taken_0x1bdf18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf18) {
            ctx->pc = 0x1BDF24u;
            goto label_1bdf24;
        }
    }
    ctx->pc = 0x1BDF20u;
    // 0x1bdf20: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x1bdf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bdf24:
    // 0x1bdf24: 0xa6630220  sh          $v1, 0x220($s3)
    ctx->pc = 0x1bdf24u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdf28: 0xa663021c  sh          $v1, 0x21C($s3)
    ctx->pc = 0x1bdf28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 3));
label_1bdf2c:
    // 0x1bdf2c: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BDF2Cu;
    {
        const bool branch_taken_0x1bdf2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf2c) {
            ctx->pc = 0x1BDF74u;
            goto label_1bdf74;
        }
    }
    ctx->pc = 0x1BDF34u;
    // 0x1bdf34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf38: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x1bdf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x1bdf3c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDF3Cu;
    {
        const bool branch_taken_0x1bdf3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bdf3c) {
            ctx->pc = 0x1BDF74u;
            goto label_1bdf74;
        }
    }
    ctx->pc = 0x1BDF44u;
    // 0x1bdf44: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf48: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1bdf48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1bdf4c: 0x90244928  lbu         $a0, 0x4928($at)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334928u));
    // 0x1bdf50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf54: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1bdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1bdf58: 0x90234929  lbu         $v1, 0x4929($at)
    ctx->pc = 0x1bdf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18729)));
    // 0x1bdf5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf60: 0xac244914  sw          $a0, 0x4914($at)
    ctx->pc = 0x1bdf60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x334914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334914u, _value); } while (0);
    // 0x1bdf64: 0x9264024b  lbu         $a0, 0x24B($s3)
    ctx->pc = 0x1bdf64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1bdf68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf6c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bdf70: 0xac234918  sw          $v1, 0x4918($at)
    ctx->pc = 0x1bdf70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 18712), GPR_U32(ctx, 3));
label_1bdf74:
    // 0x1bdf74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdf78: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x1bdf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x1bdf7c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1bdf7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x1bdf80: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDF80u;
    {
        const bool branch_taken_0x1bdf80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF80u;
        // 0x1bdf84: 0x24030063  addiu       $v1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf80) {
            ctx->pc = 0x1BDF9Cu;
            goto label_1bdf9c;
        }
    }
    ctx->pc = 0x1BDF88u;
    // 0x1bdf88: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDF88u;
    {
        const bool branch_taken_0x1bdf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf88) {
            ctx->pc = 0x1BDF9Cu;
            goto label_1bdf9c;
        }
    }
    ctx->pc = 0x1BDF90u;
    // 0x1bdf90: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1bdf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bdf94: 0x148302a4  bne         $a0, $v1, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BDF9Cu;
label_1bdf9c:
    // 0x1bdf9c: 0x100002a2  b           . + 4 + (0x2A2 << 2)
    ctx->pc = 0x1BDF9Cu;
    {
        const bool branch_taken_0x1bdf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF9Cu;
        // 0x1bdfa0: 0xa6600250  sh          $zero, 0x250($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 592), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf9c) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BDFA4u;
label_1bdfa4:
    // 0x1bdfa4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x1bdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x1bdfa8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1bdfac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1bdfb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bdfb4: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1bdfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bdfb8: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x1bdfbc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bdfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bdfc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bdfc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bdfc8: 0x24923620  addiu       $s2, $a0, 0x3620
    ctx->pc = 0x1bdfc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
    // 0x1bdfcc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bdfd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bdfd4: 0x24630d80  addiu       $v1, $v1, 0xD80
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
    // 0x1bdfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdfdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bdfe0: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdfe4: 0xa2620232  sb          $v0, 0x232($s3)
    ctx->pc = 0x1bdfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 562), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bdfe8: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1bdfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1bdfec: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x1bdfecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1bdff0: 0x1020013f  beqz        $at, . + 4 + (0x13F << 2)
    ctx->pc = 0x1BDFF0u;
    {
        const bool branch_taken_0x1bdff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFF0u;
        // 0x1bdff4: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff0) {
            ctx->pc = 0x1BE4F0u;
            goto label_1be4f0;
        }
    }
    ctx->pc = 0x1BDFF8u;
    // 0x1bdff8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bdff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bdffc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1be000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be004: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1be008: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1be00c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be010: 0xc056fb4  jal         func_15BED0
    ctx->pc = 0x1BE010u;
    SET_GPR_U32(ctx, 31, 0x1BE018u);
    ctx->pc = 0x1BE014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE010u;
    // 0x1be014: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BED0u, 0x1BE010u, 0x1BE018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE018u;
label_1be018:
    // 0x1be018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1be018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1be01c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE01Cu;
    {
        const bool branch_taken_0x1be01c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE01Cu;
        // 0x1be020: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be01c) {
            ctx->pc = 0x1BE02Cu;
            goto label_1be02c;
        }
    }
    ctx->pc = 0x1BE024u;
    // 0x1be024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1be028: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1be02c:
    // 0x1be02c: 0x2482000b  addiu       $v0, $a0, 0xB
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
    // 0x1be030: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x1BE030u;
    {
        const bool branch_taken_0x1be030 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE030u;
        // 0x1be034: 0xa2620230  sb          $v0, 0x230($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 560), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be030) {
            ctx->pc = 0x1BE05Cu;
            goto label_1be05c;
        }
    }
    ctx->pc = 0x1BE038u;
    // 0x1be038: 0xdea30270  ld          $v1, 0x270($s5)
    ctx->pc = 0x1be038u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 624)));
    // 0x1be03c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1be040: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1be040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1be044: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE044u;
    {
        const bool branch_taken_0x1be044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE044u;
        // 0x1be048: 0x24820006  addiu       $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be044) {
            ctx->pc = 0x1BE060u;
            goto label_1be060;
        }
    }
    ctx->pc = 0x1BE04Cu;
    // 0x1be04c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1be050: 0x94228dae  lhu         $v0, -0x7252($at)
    ctx->pc = 0x1be050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x288DAEu));
    // 0x1be054: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE054u;
    {
        const bool branch_taken_0x1be054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be054) {
            ctx->pc = 0x1BE098u;
            goto label_1be098;
        }
    }
    ctx->pc = 0x1BE05Cu;
label_1be05c:
    // 0x1be05c: 0x24820006  addiu       $v0, $a0, 0x6
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
label_1be060:
    // 0x1be060: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x1be060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1be064: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE064u;
    {
        const bool branch_taken_0x1be064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be064) {
            ctx->pc = 0x1BE070u;
            goto label_1be070;
        }
    }
    ctx->pc = 0x1BE06Cu;
    // 0x1be06c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1be070:
    // 0x1be070: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x1be070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1be074: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE074u;
    {
        const bool branch_taken_0x1be074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be074) {
            ctx->pc = 0x1BE080u;
            goto label_1be080;
        }
    }
    ctx->pc = 0x1BE07Cu;
    // 0x1be07c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1be07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1be080:
    // 0x1be080: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1be080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1be084: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1be084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1be088: 0x24428d90  addiu       $v0, $v0, -0x7270
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
    // 0x1be08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be090: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1be090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be094: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be094u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be098:
    // 0x1be098: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be09c: 0x3c0e002b  lui         $t6, 0x2B
    ctx->pc = 0x1be09cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)43 << 16));
    // 0x1be0a0: 0x3c0d002b  lui         $t5, 0x2B
    ctx->pc = 0x1be0a0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)43 << 16));
    // 0x1be0a4: 0x3c0c002b  lui         $t4, 0x2B
    ctx->pc = 0x1be0a4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)43 << 16));
    // 0x1be0a8: 0x3c0b002b  lui         $t3, 0x2B
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)43 << 16));
    // 0x1be0ac: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x1be0acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x1be0b0: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1be0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1be0b4: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1be0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1be0b8: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1be0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1be0bc: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1be0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1be0c0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1be0c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be0c8: 0x34431000  ori         $v1, $v0, 0x1000
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1be0cc: 0x25ceff78  addiu       $t6, $t6, -0x88
    ctx->pc = 0x1be0ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967160));
    // 0x1be0d0: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1be0d4: 0xa663022c  sh          $v1, 0x22C($s3)
    ctx->pc = 0x1be0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be0d8: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x1be0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1be0dc: 0x25adff7a  addiu       $t5, $t5, -0x86
    ctx->pc = 0x1be0dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967162));
    // 0x1be0e0: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x1be0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1be0e4: 0x258cff7c  addiu       $t4, $t4, -0x84
    ctx->pc = 0x1be0e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967164));
    // 0x1be0e8: 0x256bff7d  addiu       $t3, $t3, -0x83
    ctx->pc = 0x1be0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967165));
    // 0x1be0ec: 0x254a3b80  addiu       $t2, $t2, 0x3B80
    ctx->pc = 0x1be0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15232));
    // 0x1be0f0: 0x25293b82  addiu       $t1, $t1, 0x3B82
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15234));
    // 0x1be0f4: 0x25083b83  addiu       $t0, $t0, 0x3B83
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15235));
    // 0x1be0f8: 0x24e73b84  addiu       $a3, $a3, 0x3B84
    ctx->pc = 0x1be0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15236));
    // 0x1be0fc: 0x24c63b85  addiu       $a2, $a2, 0x3B85
    ctx->pc = 0x1be0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15237));
    // 0x1be100: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1be100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1be104: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1be104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
    // 0x1be108: 0xa2620242  sb          $v0, 0x242($s3)
    ctx->pc = 0x1be108u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be10c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be110: 0x902f4af6  lbu         $t7, 0x4AF6($at)
    ctx->pc = 0x1be110u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1be114: 0xf1040  sll         $v0, $t7, 1
    ctx->pc = 0x1be114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x1be118: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be11c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x1be120: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1be124: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1be128: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be12c: 0xa662021e  sh          $v0, 0x21E($s3)
    ctx->pc = 0x1be12cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 542), (uint16_t)GPR_U32(ctx, 2));
    // 0x1be130: 0xa662021c  sh          $v0, 0x21C($s3)
    ctx->pc = 0x1be130u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 2));
    // 0x1be134: 0xa6620220  sh          $v0, 0x220($s3)
    ctx->pc = 0x1be134u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 2));
    // 0x1be138: 0xa6600222  sh          $zero, 0x222($s3)
    ctx->pc = 0x1be138u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 0));
    // 0x1be13c: 0x902e4af6  lbu         $t6, 0x4AF6($at)
    ctx->pc = 0x1be13cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be140: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x1be140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x1be144: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be148: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x1be14c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1be150: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1be154: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be158: 0xa6620252  sh          $v0, 0x252($s3)
    ctx->pc = 0x1be158u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1be15c: 0x902d4af6  lbu         $t5, 0x4AF6($at)
    ctx->pc = 0x1be15cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be160: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1be164: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be168: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1be16c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1be170: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1be174: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be178: 0xa262024a  sb          $v0, 0x24A($s3)
    ctx->pc = 0x1be178u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be17c: 0x902c4af6  lbu         $t4, 0x4AF6($at)
    ctx->pc = 0x1be17cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be180: 0xc1040  sll         $v0, $t4, 1
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1be184: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be188: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1be188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1be18c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1be190: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1be194: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be198: 0xa262024b  sb          $v0, 0x24B($s3)
    ctx->pc = 0x1be198u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be19c: 0x902b4af6  lbu         $t3, 0x4AF6($at)
    ctx->pc = 0x1be19cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be1a0: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1be1a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be1a8: 0x4b1023  subu        $v0, $v0, $t3
    ctx->pc = 0x1be1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1be1ac: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1be1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1be1b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1b4: 0xa2620241  sb          $v0, 0x241($s3)
    ctx->pc = 0x1be1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be1b8: 0x902a4af6  lbu         $t2, 0x4AF6($at)
    ctx->pc = 0x1be1b8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be1bc: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1be1c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be1c4: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1be1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1be1c8: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1be1cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1d0: 0xa2620242  sb          $v0, 0x242($s3)
    ctx->pc = 0x1be1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be1d4: 0x90294af6  lbu         $t1, 0x4AF6($at)
    ctx->pc = 0x1be1d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be1d8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1be1dc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be1e0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1be1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1be1e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1be1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1be1e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be1ec: 0xa2620243  sb          $v0, 0x243($s3)
    ctx->pc = 0x1be1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be1f0: 0x90284af6  lbu         $t0, 0x4AF6($at)
    ctx->pc = 0x1be1f0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be1f4: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1be1f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be1fc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1be1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1be200: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1be204: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be208: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be208u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be20c: 0x90274af6  lbu         $a3, 0x4AF6($at)
    ctx->pc = 0x1be20cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be210: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1be214: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1be214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1be218: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1be21c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1be220: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be224: 0xa2620246  sb          $v0, 0x246($s3)
    ctx->pc = 0x1be224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be228: 0xa2600240  sb          $zero, 0x240($s3)
    ctx->pc = 0x1be228u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be22c: 0xa2640248  sb          $a0, 0x248($s3)
    ctx->pc = 0x1be22cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 584), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be230: 0x90264af6  lbu         $a2, 0x4AF6($at)
    ctx->pc = 0x1be230u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1be234: 0x9264024a  lbu         $a0, 0x24A($s3)
    ctx->pc = 0x1be234u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1be238: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1be238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1be23c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1be23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1be240: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1be240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1be244: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1be244u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be248: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1be248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1be24c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be24cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be250: 0x0  nop
    ctx->pc = 0x1be250u;
    // NOP
    // 0x1be254: 0x0  nop
    ctx->pc = 0x1be254u;
    // NOP
    // 0x1be258: 0x1810  mfhi        $v1
    ctx->pc = 0x1be258u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1be25c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1be260: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be260u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1be264: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be268: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be26c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE26Cu;
    {
        const bool branch_taken_0x1be26c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be26c) {
            ctx->pc = 0x1BE278u;
            goto label_1be278;
        }
    }
    ctx->pc = 0x1BE274u;
    // 0x1be274: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be278:
    // 0x1be278: 0xa263024c  sb          $v1, 0x24C($s3)
    ctx->pc = 0x1be278u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be27c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be280: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1be280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1be284: 0x24633b87  addiu       $v1, $v1, 0x3B87
    ctx->pc = 0x1be284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15239));
    // 0x1be288: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be28c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be28cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be290: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1be294: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1be298: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1be29c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be2a0: 0x0  nop
    ctx->pc = 0x1be2a0u;
    // NOP
    // 0x1be2a4: 0x0  nop
    ctx->pc = 0x1be2a4u;
    // NOP
    // 0x1be2a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1be2a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1be2ac: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be2acu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1be2b0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be2b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1be2b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be2b8: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be2b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be2bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE2BCu;
    {
        const bool branch_taken_0x1be2bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be2bc) {
            ctx->pc = 0x1BE2C8u;
            goto label_1be2c8;
        }
    }
    ctx->pc = 0x1BE2C4u;
    // 0x1be2c4: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be2c8:
    // 0x1be2c8: 0xa263024d  sb          $v1, 0x24D($s3)
    ctx->pc = 0x1be2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be2cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be2d0: 0x9265024a  lbu         $a1, 0x24A($s3)
    ctx->pc = 0x1be2d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1be2d4: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
    // 0x1be2d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be2dc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be2dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be2e0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be2e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1be2e4: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1be2e8: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1be2ec: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be2f0: 0x0  nop
    ctx->pc = 0x1be2f0u;
    // NOP
    // 0x1be2f4: 0x0  nop
    ctx->pc = 0x1be2f4u;
    // NOP
    // 0x1be2f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1be2fc: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1be300: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1be304: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be308: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be30c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE30Cu;
    {
        const bool branch_taken_0x1be30c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be30c) {
            ctx->pc = 0x1BE318u;
            goto label_1be318;
        }
    }
    ctx->pc = 0x1BE314u;
    // 0x1be314: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be318:
    // 0x1be318: 0xa263024e  sb          $v1, 0x24E($s3)
    ctx->pc = 0x1be318u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be31c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be320: 0x9265024b  lbu         $a1, 0x24B($s3)
    ctx->pc = 0x1be320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1be324: 0x24633b89  addiu       $v1, $v1, 0x3B89
    ctx->pc = 0x1be324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15241));
    // 0x1be328: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be32c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1be32cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be330: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1be330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1be334: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1be334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x1be338: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1be338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1be33c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1be33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be340: 0x0  nop
    ctx->pc = 0x1be340u;
    // NOP
    // 0x1be344: 0x0  nop
    ctx->pc = 0x1be344u;
    // NOP
    // 0x1be348: 0x1810  mfhi        $v1
    ctx->pc = 0x1be348u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1be34c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1be34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1be350: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1be354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be358: 0x286100fb  slti        $at, $v1, 0xFB
    ctx->pc = 0x1be358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be35c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE35Cu;
    {
        const bool branch_taken_0x1be35c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be35c) {
            ctx->pc = 0x1BE368u;
            goto label_1be368;
        }
    }
    ctx->pc = 0x1BE364u;
    // 0x1be364: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1be364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be368:
    // 0x1be368: 0xa263024f  sb          $v1, 0x24F($s3)
    ctx->pc = 0x1be368u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be36c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be370: 0x24633b8a  addiu       $v1, $v1, 0x3B8A
    ctx->pc = 0x1be370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15242));
    // 0x1be374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be378: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be37c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE37Cu;
    {
        const bool branch_taken_0x1be37c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE37Cu;
        // 0x1be380: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be37c) {
            ctx->pc = 0x1BE390u;
            goto label_1be390;
        }
    }
    ctx->pc = 0x1BE384u;
    // 0x1be384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE388u;
    {
        const bool branch_taken_0x1be388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE388u;
        // 0x1be38c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be388) {
            ctx->pc = 0x1BE3A8u;
            goto label_1be3a8;
        }
    }
    ctx->pc = 0x1BE390u;
label_1be390:
    // 0x1be390: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1be394: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be398: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be398u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be39c: 0x0  nop
    ctx->pc = 0x1be39cu;
    // NOP
    // 0x1be3a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be3a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be3a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1be3a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1be3a8:
    // 0x1be3a8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1be3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1be3ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be3b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1be3b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be3b4: 0x24633b8b  addiu       $v1, $v1, 0x3B8B
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15243));
    // 0x1be3b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be3bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be3bcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1be3c0: 0x0  nop
    ctx->pc = 0x1be3c0u;
    // NOP
    // 0x1be3c4: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1be3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
    // 0x1be3c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be3c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be3cc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE3CCu;
    {
        const bool branch_taken_0x1be3cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BE3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3CCu;
        // 0x1be3d0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3cc) {
            ctx->pc = 0x1BE3E0u;
            goto label_1be3e0;
        }
    }
    ctx->pc = 0x1BE3D4u;
    // 0x1be3d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be3d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE3D8u;
    {
        const bool branch_taken_0x1be3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3D8u;
        // 0x1be3dc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be3d8) {
            ctx->pc = 0x1BE3F8u;
            goto label_1be3f8;
        }
    }
    ctx->pc = 0x1BE3E0u;
label_1be3e0:
    // 0x1be3e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1be3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1be3e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1be3e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be3e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be3ec: 0x0  nop
    ctx->pc = 0x1be3ecu;
    // NOP
    // 0x1be3f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1be3f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be3f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1be3f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1be3f8:
    // 0x1be3f8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1be3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1be3fc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be400: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1be400u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be404: 0x24633b8c  addiu       $v1, $v1, 0x3B8C
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15244));
    // 0x1be408: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1be408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be40c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be40cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1be410: 0x0  nop
    ctx->pc = 0x1be410u;
    // NOP
    // 0x1be414: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1be414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
    // 0x1be418: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be41c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE41Cu;
    {
        const bool branch_taken_0x1be41c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE41Cu;
        // 0x1be420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be41c) {
            ctx->pc = 0x1BE430u;
            goto label_1be430;
        }
    }
    ctx->pc = 0x1BE424u;
    // 0x1be424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be428: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE428u;
    {
        const bool branch_taken_0x1be428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE428u;
        // 0x1be42c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be428) {
            ctx->pc = 0x1BE448u;
            goto label_1be448;
        }
    }
    ctx->pc = 0x1BE430u;
label_1be430:
    // 0x1be430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1be430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1be434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1be434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1be438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be43c: 0x0  nop
    ctx->pc = 0x1be43cu;
    // NOP
    // 0x1be440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1be440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be444: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1be444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1be448:
    // 0x1be448: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1be448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1be44c: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1be44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1be450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be458: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be458u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1be45c: 0x0  nop
    ctx->pc = 0x1be45cu;
    // NOP
    // 0x1be460: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1be460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
    // 0x1be464: 0xc0651dc  jal         func_194770
    ctx->pc = 0x1BE464u;
    SET_GPR_U32(ctx, 31, 0x1BE46Cu);
    ctx->pc = 0x1BE468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE464u;
    // 0x1be468: 0x92650242  lbu         $a1, 0x242($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194770u, 0x1BE464u, 0x1BE46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE46Cu;
label_1be46c:
    // 0x1be46c: 0x93a200aa  lbu         $v0, 0xAA($sp)
    ctx->pc = 0x1be46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x1be470: 0x284100ab  slti        $at, $v0, 0xAB
    ctx->pc = 0x1be470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x1be474: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE474u;
    {
        const bool branch_taken_0x1be474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be474) {
            ctx->pc = 0x1BE484u;
            goto label_1be484;
        }
    }
    ctx->pc = 0x1BE47Cu;
    // 0x1be47c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BE47Cu;
    {
        const bool branch_taken_0x1be47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE47Cu;
        // 0x1be480: 0xa2620247  sb          $v0, 0x247($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be47c) {
            ctx->pc = 0x1BE4BCu;
            goto label_1be4bc;
        }
    }
    ctx->pc = 0x1BE484u;
label_1be484:
    // 0x1be484: 0x93a200a9  lbu         $v0, 0xA9($sp)
    ctx->pc = 0x1be484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 169)));
    // 0x1be488: 0x284100ab  slti        $at, $v0, 0xAB
    ctx->pc = 0x1be488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x1be48c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE48Cu;
    {
        const bool branch_taken_0x1be48c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be48c) {
            ctx->pc = 0x1BE4A8u;
            goto label_1be4a8;
        }
    }
    ctx->pc = 0x1BE494u;
    // 0x1be494: 0xa2620247  sb          $v0, 0x247($s3)
    ctx->pc = 0x1be494u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be498: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be49c: 0x3042f7df  andi        $v0, $v0, 0xF7DF
    ctx->pc = 0x1be49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63455);
    // 0x1be4a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE4A0u;
    {
        const bool branch_taken_0x1be4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE4A0u;
        // 0x1be4a4: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be4a0) {
            ctx->pc = 0x1BE4BCu;
            goto label_1be4bc;
        }
    }
    ctx->pc = 0x1BE4A8u;
label_1be4a8:
    // 0x1be4a8: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x1be4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1be4ac: 0xa2620247  sb          $v0, 0x247($s3)
    ctx->pc = 0x1be4acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be4b0: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be4b4: 0x3042f3cf  andi        $v0, $v0, 0xF3CF
    ctx->pc = 0x1be4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)62415);
    // 0x1be4b8: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be4bc:
    // 0x1be4bc: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be4bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1be4c0: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be4c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1be4c4: 0xc045784  jal         func_115E10
    ctx->pc = 0x1BE4C4u;
    SET_GPR_U32(ctx, 31, 0x1BE4CCu);
    ctx->pc = 0x1BE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4C4u;
    // 0x1be4c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE4C4u, 0x1BE4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4CCu;
label_1be4cc:
    // 0x1be4cc: 0xc054c24  jal         func_153090
    ctx->pc = 0x1BE4CCu;
    SET_GPR_U32(ctx, 31, 0x1BE4D4u);
    ctx->pc = 0x1BE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4CCu;
    // 0x1be4d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BE4CCu, 0x1BE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4D4u;
label_1be4d4:
    // 0x1be4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be4d8: 0xa2620231  sb          $v0, 0x231($s3)
    ctx->pc = 0x1be4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be4dc: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1be4dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
    // 0x1be4e0: 0xc06525c  jal         func_194970
    ctx->pc = 0x1BE4E0u;
    SET_GPR_U32(ctx, 31, 0x1BE4E8u);
    ctx->pc = 0x1BE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE4E0u;
    // 0x1be4e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BE4E0u, 0x1BE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE4E8u;
label_1be4e8:
    // 0x1be4e8: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x1BE4E8u;
    {
        const bool branch_taken_0x1be4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be4e8) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE4F0u;
label_1be4f0:
    // 0x1be4f0: 0xa2600240  sb          $zero, 0x240($s3)
    ctx->pc = 0x1be4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be4f4: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1be4f8: 0xa2620241  sb          $v0, 0x241($s3)
    ctx->pc = 0x1be4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 577), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be500: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1be500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1be504: 0xc06f1d4  jal         func_1BC750
    ctx->pc = 0x1BE504u;
    SET_GPR_U32(ctx, 31, 0x1BE50Cu);
    ctx->pc = 0x1BE508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE504u;
    // 0x1be508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC750u, 0x1BE504u, 0x1BE50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE50Cu;
label_1be50c:
    // 0x1be50c: 0x87a30094  lh          $v1, 0x94($sp)
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1be510: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be514: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x1be514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
    // 0x1be518: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be520: 0xa6630252  sh          $v1, 0x252($s3)
    ctx->pc = 0x1be520u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 594), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be524: 0xa6630222  sh          $v1, 0x222($s3)
    ctx->pc = 0x1be524u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 546), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be528: 0x87a30090  lh          $v1, 0x90($sp)
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be52c: 0xa663021c  sh          $v1, 0x21C($s3)
    ctx->pc = 0x1be52cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 540), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be530: 0xa663021e  sh          $v1, 0x21E($s3)
    ctx->pc = 0x1be530u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 542), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be534: 0xa6630220  sh          $v1, 0x220($s3)
    ctx->pc = 0x1be534u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 544), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be538: 0x83a30098  lb          $v1, 0x98($sp)
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1be53c: 0xa263024a  sb          $v1, 0x24A($s3)
    ctx->pc = 0x1be53cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 586), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be540: 0x83a3009c  lb          $v1, 0x9C($sp)
    ctx->pc = 0x1be540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1be544: 0xa263024b  sb          $v1, 0x24B($s3)
    ctx->pc = 0x1be544u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 587), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be548: 0x92460072  lbu         $a2, 0x72($s2)
    ctx->pc = 0x1be548u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x1be54c: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x1be54cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
    // 0x1be550: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1be550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1be554: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1be554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1be558: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1be558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x1be55c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be560: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be564: 0xc06fb04  jal         func_1BEC10
    ctx->pc = 0x1BE564u;
    SET_GPR_U32(ctx, 31, 0x1BE56Cu);
    ctx->pc = 0x1BE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE564u;
    // 0x1be568: 0xa2620242  sb          $v0, 0x242($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC10u;
    goto label_1bec10;
    ctx->pc = 0x1BE56Cu;
label_1be56c:
    // 0x1be56c: 0x92430069  lbu         $v1, 0x69($s2)
    ctx->pc = 0x1be56cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
    // 0x1be570: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be574: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BE574u;
    {
        const bool branch_taken_0x1be574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE574u;
        // 0x1be578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be574) {
            ctx->pc = 0x1BE650u;
            goto label_1be650;
        }
    }
    ctx->pc = 0x1BE57Cu;
    // 0x1be57c: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1BE57Cu;
    {
        const bool branch_taken_0x1be57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1be57c) {
            ctx->pc = 0x1BE63Cu;
            goto label_1be63c;
        }
    }
    ctx->pc = 0x1BE584u;
    // 0x1be584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be588: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BE588u;
    {
        const bool branch_taken_0x1be588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE588u;
        // 0x1be58c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be588) {
            ctx->pc = 0x1BE604u;
            goto label_1be604;
        }
    }
    ctx->pc = 0x1BE590u;
    // 0x1be590: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BE590u;
    {
        const bool branch_taken_0x1be590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be590) {
            ctx->pc = 0x1BE5CCu;
            goto label_1be5cc;
        }
    }
    ctx->pc = 0x1BE598u;
    // 0x1be598: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BE598u;
    {
        const bool branch_taken_0x1be598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be598) {
            ctx->pc = 0x1BE5A8u;
            goto label_1be5a8;
        }
    }
    ctx->pc = 0x1BE5A0u;
    // 0x1be5a0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BE5A0u;
    {
        const bool branch_taken_0x1be5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5A0u;
        // 0x1be5a4: 0x92430068  lbu         $v1, 0x68($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5a0) {
            ctx->pc = 0x1BE664u;
            goto label_1be664;
        }
    }
    ctx->pc = 0x1BE5A8u;
label_1be5a8:
    // 0x1be5a8: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be5a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1be5ac: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be5b0: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
    // 0x1be5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be5b8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1be5b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be5bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1be5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1be5c0: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be5c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1BE5C4u;
    {
        const bool branch_taken_0x1be5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5C4u;
        // 0x1be5c8: 0xa2640231  sb          $a0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5c4) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE5CCu;
label_1be5cc:
    // 0x1be5cc: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1be5d0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be5d4: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
    // 0x1be5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be5dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be5e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE5E0u;
    {
        const bool branch_taken_0x1be5e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E0u;
        // 0x1be5e4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5e0) {
            ctx->pc = 0x1BE5F4u;
            goto label_1be5f4;
        }
    }
    ctx->pc = 0x1BE5E8u;
    // 0x1be5e8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1be5ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE5ECu;
    {
        const bool branch_taken_0x1be5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5ECu;
        // 0x1be5f0: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5ec) {
            ctx->pc = 0x1BE5F8u;
            goto label_1be5f8;
        }
    }
    ctx->pc = 0x1BE5F4u;
label_1be5f4:
    // 0x1be5f4: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be5f8:
    // 0x1be5f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be5fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BE5FCu;
    {
        const bool branch_taken_0x1be5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5FCu;
        // 0x1be600: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5fc) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE604u;
label_1be604:
    // 0x1be604: 0x92430068  lbu         $v1, 0x68($s2)
    ctx->pc = 0x1be604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x1be608: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be60c: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
    // 0x1be610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be614: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1be614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be618: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE618u;
    {
        const bool branch_taken_0x1be618 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE618u;
        // 0x1be61c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be618) {
            ctx->pc = 0x1BE62Cu;
            goto label_1be62c;
        }
    }
    ctx->pc = 0x1BE620u;
    // 0x1be620: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x1be620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1be624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE624u;
    {
        const bool branch_taken_0x1be624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE624u;
        // 0x1be628: 0xa2620244  sb          $v0, 0x244($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be624) {
            ctx->pc = 0x1BE630u;
            goto label_1be630;
        }
    }
    ctx->pc = 0x1BE62Cu;
label_1be62c:
    // 0x1be62c: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be62cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
label_1be630:
    // 0x1be630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be634: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BE634u;
    {
        const bool branch_taken_0x1be634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE634u;
        // 0x1be638: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be634) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE63Cu;
label_1be63c:
    // 0x1be63c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1be640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be644: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1be644u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be648: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BE648u;
    {
        const bool branch_taken_0x1be648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE648u;
        // 0x1be64c: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be648) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE650u;
label_1be650:
    // 0x1be650: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1be650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1be654: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be658: 0xa2630244  sb          $v1, 0x244($s3)
    ctx->pc = 0x1be658u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be65c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE65Cu;
    {
        const bool branch_taken_0x1be65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE65Cu;
        // 0x1be660: 0xa2620231  sb          $v0, 0x231($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be65c) {
            ctx->pc = 0x1BE680u;
            goto label_1be680;
        }
    }
    ctx->pc = 0x1BE664u;
label_1be664:
    // 0x1be664: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be668: 0x2442537c  addiu       $v0, $v0, 0x537C
    ctx->pc = 0x1be668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21372));
    // 0x1be66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be670: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1be670u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be674: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1be674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1be678: 0xa2620244  sb          $v0, 0x244($s3)
    ctx->pc = 0x1be678u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 580), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be67c: 0xa2640231  sb          $a0, 0x231($s3)
    ctx->pc = 0x1be67cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 561), (uint8_t)GPR_U32(ctx, 4));
label_1be680:
    // 0x1be680: 0x92620244  lbu         $v0, 0x244($s3)
    ctx->pc = 0x1be680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1be684: 0x2042fff0  addi        $v0, $v0, -0x10
    ctx->pc = 0x1be684u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967280, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x1be688: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1be688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1be68c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BE68Cu;
    {
        const bool branch_taken_0x1be68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE68Cu;
        // 0x1be690: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be68c) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE694u;
    // 0x1be694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be698: 0x2463b710  addiu       $v1, $v1, -0x48F0
    ctx->pc = 0x1be698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948624));
    // 0x1be69c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be6a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1be6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be6a4: 0x400008  jr          $v0
    ctx->pc = 0x1BE6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE6ACu: goto label_1be6ac;
            case 0x1BE6BCu: goto label_1be6bc;
            case 0x1BE6CCu: goto label_1be6cc;
            case 0x1BE6DCu: goto label_1be6dc;
            case 0x1BE6ECu: goto label_1be6ec;
            case 0x1BE6FCu: goto label_1be6fc;
            case 0x1BE70Cu: goto label_1be70c;
            case 0x1BE718u: goto label_1be718;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE6A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BE6ACu;
label_1be6ac:
    // 0x1be6ac: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be6b0: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
    // 0x1be6b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BE6B4u;
    {
        const bool branch_taken_0x1be6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6B4u;
        // 0x1be6b8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6b4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6BCu;
label_1be6bc:
    // 0x1be6bc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be6c0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
    // 0x1be6c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE6C4u;
    {
        const bool branch_taken_0x1be6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6C4u;
        // 0x1be6c8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6c4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6CCu;
label_1be6cc:
    // 0x1be6cc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be6d0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
    // 0x1be6d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE6D4u;
    {
        const bool branch_taken_0x1be6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6D4u;
        // 0x1be6d8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6d4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6DCu;
label_1be6dc:
    // 0x1be6dc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be6e0: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
    // 0x1be6e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE6E4u;
    {
        const bool branch_taken_0x1be6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6E4u;
        // 0x1be6e8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6e4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6ECu;
label_1be6ec:
    // 0x1be6ec: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be6f0: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
    // 0x1be6f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE6F4u;
    {
        const bool branch_taken_0x1be6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6F4u;
        // 0x1be6f8: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6f4) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE6FCu;
label_1be6fc:
    // 0x1be6fc: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be6fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be700: 0x304273cf  andi        $v0, $v0, 0x73CF
    ctx->pc = 0x1be700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)29647);
    // 0x1be704: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE704u;
    {
        const bool branch_taken_0x1be704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE704u;
        // 0x1be708: 0xa662022c  sh          $v0, 0x22C($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be704) {
            ctx->pc = 0x1BE718u;
            goto label_1be718;
        }
    }
    ctx->pc = 0x1BE70Cu;
label_1be70c:
    // 0x1be70c: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be70cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be710: 0x304277df  andi        $v0, $v0, 0x77DF
    ctx->pc = 0x1be710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30687);
    // 0x1be714: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be714u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be718:
    // 0x1be718: 0x92460074  lbu         $a2, 0x74($s2)
    ctx->pc = 0x1be718u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1be71c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
    // 0x1be720: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1be724: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1be728: 0x246313ca  addiu       $v1, $v1, 0x13CA
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5066));
    // 0x1be72c: 0x24845378  addiu       $a0, $a0, 0x5378
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21368));
    // 0x1be730: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1be734: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1be734u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1be738: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1be738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1be73c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1be740: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1be744: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1be744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be748: 0xa2630247  sb          $v1, 0x247($s3)
    ctx->pc = 0x1be748u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 583), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be74c: 0x92450067  lbu         $a1, 0x67($s2)
    ctx->pc = 0x1be74cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
    // 0x1be750: 0x9263024a  lbu         $v1, 0x24A($s3)
    ctx->pc = 0x1be750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1be754: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1be754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1be758: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1be758u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be75c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1be75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be760: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be764: 0x0  nop
    ctx->pc = 0x1be764u;
    // NOP
    // 0x1be768: 0x0  nop
    ctx->pc = 0x1be768u;
    // NOP
    // 0x1be76c: 0x1010  mfhi        $v0
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be770: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1be774: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be774u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1be778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be77c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be780: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE780u;
    {
        const bool branch_taken_0x1be780 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be780) {
            ctx->pc = 0x1BE78Cu;
            goto label_1be78c;
        }
    }
    ctx->pc = 0x1BE788u;
    // 0x1be788: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be78c:
    // 0x1be78c: 0xa262024c  sb          $v0, 0x24C($s3)
    ctx->pc = 0x1be78cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be790: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1be790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1be794: 0x92450067  lbu         $a1, 0x67($s2)
    ctx->pc = 0x1be794u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
    // 0x1be798: 0x24845378  addiu       $a0, $a0, 0x5378
    ctx->pc = 0x1be798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21368));
    // 0x1be79c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1be7a0: 0x9263024b  lbu         $v1, 0x24B($s3)
    ctx->pc = 0x1be7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1be7a4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1be7a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1be7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1be7ac: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1be7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1be7b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1be7b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1be7b4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be7b8: 0x0  nop
    ctx->pc = 0x1be7b8u;
    // NOP
    // 0x1be7bc: 0x0  nop
    ctx->pc = 0x1be7bcu;
    // NOP
    // 0x1be7c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1be7c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be7c4: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1be7c8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be7c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1be7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be7d0: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be7d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE7D4u;
    {
        const bool branch_taken_0x1be7d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be7d4) {
            ctx->pc = 0x1BE7E0u;
            goto label_1be7e0;
        }
    }
    ctx->pc = 0x1BE7DCu;
    // 0x1be7dc: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be7e0:
    // 0x1be7e0: 0xa262024d  sb          $v0, 0x24D($s3)
    ctx->pc = 0x1be7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be7e4: 0x92430067  lbu         $v1, 0x67($s2)
    ctx->pc = 0x1be7e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 103)));
    // 0x1be7e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be7ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE7ECu;
    {
        const bool branch_taken_0x1be7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be7ec) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE7F4u;
    // 0x1be7f4: 0x92430069  lbu         $v1, 0x69($s2)
    ctx->pc = 0x1be7f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 105)));
    // 0x1be7f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be7fc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE7FCu;
    {
        const bool branch_taken_0x1be7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7FCu;
        // 0x1be800: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be7fc) {
            ctx->pc = 0x1BE808u;
            goto label_1be808;
        }
    }
    ctx->pc = 0x1BE804u;
    // 0x1be804: 0xa262024d  sb          $v0, 0x24D($s3)
    ctx->pc = 0x1be804u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
label_1be808:
    // 0x1be808: 0x92430075  lbu         $v1, 0x75($s2)
    ctx->pc = 0x1be808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 117)));
    // 0x1be80c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1be80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1be810: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE810u;
    {
        const bool branch_taken_0x1be810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE810u;
        // 0x1be814: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be810) {
            ctx->pc = 0x1BE81Cu;
            goto label_1be81c;
        }
    }
    ctx->pc = 0x1BE818u;
    // 0x1be818: 0xa2620240  sb          $v0, 0x240($s3)
    ctx->pc = 0x1be818u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 576), (uint8_t)GPR_U32(ctx, 2));
label_1be81c:
    // 0x1be81c: 0x9243006b  lbu         $v1, 0x6B($s2)
    ctx->pc = 0x1be81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 107)));
    // 0x1be820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1be820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be824: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BE824u;
    {
        const bool branch_taken_0x1be824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE824u;
        // 0x1be828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be824) {
            ctx->pc = 0x1BE8A4u;
            goto label_1be8a4;
        }
    }
    ctx->pc = 0x1BE82Cu;
    // 0x1be82c: 0x24031040  addiu       $v1, $zero, 0x1040
    ctx->pc = 0x1be82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x1be830: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x1be830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x1be834: 0xa663022c  sh          $v1, 0x22C($s3)
    ctx->pc = 0x1be834u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x1be838: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x1be838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x1be83c: 0x9264024c  lbu         $a0, 0x24C($s3)
    ctx->pc = 0x1be83cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x1be840: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be844: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1be844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1be848: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be84c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1be84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1be850: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1be854: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1be854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1be858: 0x0  nop
    ctx->pc = 0x1be858u;
    // NOP
    // 0x1be85c: 0x0  nop
    ctx->pc = 0x1be85cu;
    // NOP
    // 0x1be860: 0x1010  mfhi        $v0
    ctx->pc = 0x1be860u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1be864: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1be864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1be868: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1be868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1be86c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be870: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be874: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE874u;
    {
        const bool branch_taken_0x1be874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be874) {
            ctx->pc = 0x1BE880u;
            goto label_1be880;
        }
    }
    ctx->pc = 0x1BE87Cu;
    // 0x1be87c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be880:
    // 0x1be880: 0xa262024c  sb          $v0, 0x24C($s3)
    ctx->pc = 0x1be880u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 588), (uint8_t)GPR_U32(ctx, 2));
    // 0x1be884: 0x9262024d  lbu         $v0, 0x24D($s3)
    ctx->pc = 0x1be884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
    // 0x1be888: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1be888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1be88c: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1be88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1be890: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE890u;
    {
        const bool branch_taken_0x1be890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be890) {
            ctx->pc = 0x1BE89Cu;
            goto label_1be89c;
        }
    }
    ctx->pc = 0x1BE898u;
    // 0x1be898: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1be898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1be89c:
    // 0x1be89c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE89Cu;
    {
        const bool branch_taken_0x1be89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE89Cu;
        // 0x1be8a0: 0xa262024d  sb          $v0, 0x24D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 589), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be89c) {
            ctx->pc = 0x1BE8B8u;
            goto label_1be8b8;
        }
    }
    ctx->pc = 0x1BE8A4u;
label_1be8a4:
    // 0x1be8a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE8A4u;
    {
        const bool branch_taken_0x1be8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be8a4) {
            ctx->pc = 0x1BE8B8u;
            goto label_1be8b8;
        }
    }
    ctx->pc = 0x1BE8ACu;
    // 0x1be8ac: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x1be8acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
    // 0x1be8b0: 0x3042f03f  andi        $v0, $v0, 0xF03F
    ctx->pc = 0x1be8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61503);
    // 0x1be8b4: 0xa662022c  sh          $v0, 0x22C($s3)
    ctx->pc = 0x1be8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 556), (uint16_t)GPR_U32(ctx, 2));
label_1be8b8:
    // 0x1be8b8: 0x9266024a  lbu         $a2, 0x24A($s3)
    ctx->pc = 0x1be8b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 586)));
    // 0x1be8bc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1be8c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1be8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1be8c4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1be8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1be8c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be8cc: 0x24a55400  addiu       $a1, $a1, 0x5400
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
    // 0x1be8d0: 0x24635418  addiu       $v1, $v1, 0x5418
    ctx->pc = 0x1be8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21528));
    // 0x1be8d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1be8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1be8d8: 0x244253d0  addiu       $v0, $v0, 0x53D0
    ctx->pc = 0x1be8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21456));
    // 0x1be8dc: 0xa266024e  sb          $a2, 0x24E($s3)
    ctx->pc = 0x1be8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 590), (uint8_t)GPR_U32(ctx, 6));
    // 0x1be8e0: 0x9266024b  lbu         $a2, 0x24B($s3)
    ctx->pc = 0x1be8e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 587)));
    // 0x1be8e4: 0xa266024f  sb          $a2, 0x24F($s3)
    ctx->pc = 0x1be8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 591), (uint8_t)GPR_U32(ctx, 6));
    // 0x1be8e8: 0x92460065  lbu         $a2, 0x65($s2)
    ctx->pc = 0x1be8e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
    // 0x1be8ec: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x1be8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1be8f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1be8f4: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be8f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1be8f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be8fc: 0x0  nop
    ctx->pc = 0x1be8fcu;
    // NOP
    // 0x1be900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be904: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be904u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1be908: 0xe66001e4  swc1        $f0, 0x1E4($s3)
    ctx->pc = 0x1be908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 484), bits); }
    // 0x1be90c: 0x92450065  lbu         $a1, 0x65($s2)
    ctx->pc = 0x1be90cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 101)));
    // 0x1be910: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1be910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1be914: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1be918: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1be918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be91c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be91cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be920: 0x0  nop
    ctx->pc = 0x1be920u;
    // NOP
    // 0x1be924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be928: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be928u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1be92c: 0xe66001e8  swc1        $f0, 0x1E8($s3)
    ctx->pc = 0x1be92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 488), bits); }
    // 0x1be930: 0x92430064  lbu         $v1, 0x64($s2)
    ctx->pc = 0x1be930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1be934: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1be938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be93c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1be93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be944: 0x0  nop
    ctx->pc = 0x1be944u;
    // NOP
    // 0x1be948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be94c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1be94cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1be950: 0xe66001ec  swc1        $f0, 0x1EC($s3)
    ctx->pc = 0x1be950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 492), bits); }
    // 0x1be954: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be954u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1be958: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be958u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1be95c: 0xc045784  jal         func_115E10
    ctx->pc = 0x1BE95Cu;
    SET_GPR_U32(ctx, 31, 0x1BE964u);
    ctx->pc = 0x1BE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE95Cu;
    // 0x1be960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE95Cu, 0x1BE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE964u;
label_1be964:
    // 0x1be964: 0xc054c24  jal         func_153090
    ctx->pc = 0x1BE964u;
    SET_GPR_U32(ctx, 31, 0x1BE96Cu);
    ctx->pc = 0x1BE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE964u;
    // 0x1be968: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BE964u, 0x1BE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE96Cu;
label_1be96c:
    // 0x1be96c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1be96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1be970: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1be970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1be974: 0xc06fc94  jal         func_1BF250
    ctx->pc = 0x1BE974u;
    SET_GPR_U32(ctx, 31, 0x1BE97Cu);
    ctx->pc = 0x1BE978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE974u;
    // 0x1be978: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF250u, 0x1BE974u, 0x1BE97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE97Cu;
label_1be97c:
    // 0x1be97c: 0x92450074  lbu         $a1, 0x74($s2)
    ctx->pc = 0x1be97cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1be980: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1be984: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1be988: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x1be98c: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x1be98cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
    // 0x1be990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be998: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1be99c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1be99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1be9a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1be9a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be9a8: 0xc0653b4  jal         func_194ED0
    ctx->pc = 0x1BE9A8u;
    SET_GPR_U32(ctx, 31, 0x1BE9B0u);
    ctx->pc = 0x1BE9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9A8u;
    // 0x1be9ac: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194ED0u, 0x1BE9A8u, 0x1BE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9B0u;
label_1be9b0:
    // 0x1be9b0: 0x92430075  lbu         $v1, 0x75($s2)
    ctx->pc = 0x1be9b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 117)));
    // 0x1be9b4: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x1be9b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1be9b8: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BE9B8u;
    {
        const bool branch_taken_0x1be9b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be9b8) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE9C0u;
    // 0x1be9c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1be9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1be9c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1be9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1be9c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1be9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1be9cc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x1be9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x1be9d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1be9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1be9d4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x1be9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
    // 0x1be9d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1be9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be9e4: 0xc06542c  jal         func_1950B0
    ctx->pc = 0x1BE9E4u;
    SET_GPR_U32(ctx, 31, 0x1BE9ECu);
    ctx->pc = 0x1BE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9E4u;
    // 0x1be9e8: 0x412821  addu        $a1, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1950B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950B0u, 0x1BE9E4u, 0x1BE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9ECu;
label_1be9ec:
    // 0x1be9ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BE9ECu;
    {
        const bool branch_taken_0x1be9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be9ec) {
            ctx->pc = 0x1BEA28u;
            goto label_1bea28;
        }
    }
    ctx->pc = 0x1BE9F4u;
label_1be9f4:
    // 0x1be9f4: 0x92650244  lbu         $a1, 0x244($s3)
    ctx->pc = 0x1be9f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 580)));
    // 0x1be9f8: 0x92660242  lbu         $a2, 0x242($s3)
    ctx->pc = 0x1be9f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1be9fc: 0xc045784  jal         func_115E10
    ctx->pc = 0x1BE9FCu;
    SET_GPR_U32(ctx, 31, 0x1BEA04u);
    ctx->pc = 0x1BEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9FCu;
    // 0x1bea00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115E10u, 0x1BE9FCu, 0x1BEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA04u;
label_1bea04:
    // 0x1bea04: 0xc054c24  jal         func_153090
    ctx->pc = 0x1BEA04u;
    SET_GPR_U32(ctx, 31, 0x1BEA0Cu);
    ctx->pc = 0x1BEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA04u;
    // 0x1bea08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153090u, 0x1BEA04u, 0x1BEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA0Cu;
label_1bea0c:
    // 0x1bea0c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1bea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bea10: 0x90450013  lbu         $a1, 0x13($v0)
    ctx->pc = 0x1bea10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1bea14: 0xc06fc94  jal         func_1BF250
    ctx->pc = 0x1BEA14u;
    SET_GPR_U32(ctx, 31, 0x1BEA1Cu);
    ctx->pc = 0x1BEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA14u;
    // 0x1bea18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF250u, 0x1BEA14u, 0x1BEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA1Cu;
label_1bea1c:
    // 0x1bea1c: 0x92650247  lbu         $a1, 0x247($s3)
    ctx->pc = 0x1bea1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 583)));
    // 0x1bea20: 0xc06525c  jal         func_194970
    ctx->pc = 0x1BEA20u;
    SET_GPR_U32(ctx, 31, 0x1BEA28u);
    ctx->pc = 0x1BEA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEA20u;
    // 0x1bea24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194970u, 0x1BEA20u, 0x1BEA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA28u;
label_1bea28:
    // 0x1bea28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea2c: 0x90234af0  lbu         $v1, 0x4AF0($at)
    ctx->pc = 0x1bea2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF0u));
    // 0x1bea30: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1BEA30u;
    {
        const bool branch_taken_0x1bea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea30) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA38u;
    // 0x1bea38: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1bea38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1bea3c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1bea3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1bea40: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BEA40u;
    {
        const bool branch_taken_0x1bea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bea40) {
            ctx->pc = 0x1BEAD0u;
            goto label_1bead0;
        }
    }
    ctx->pc = 0x1BEA48u;
    // 0x1bea48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea4c: 0x9022497c  lbu         $v0, 0x497C($at)
    ctx->pc = 0x1bea4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33497Cu));
    // 0x1bea50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BEA50u;
    {
        const bool branch_taken_0x1bea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea50) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA58u;
    // 0x1bea58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea5c: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bea5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1bea60: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334974u));
    // 0x1bea64: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEA64u;
    {
        const bool branch_taken_0x1bea64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bea64) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA6Cu;
    // 0x1bea6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea70: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1bea70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x1bea74: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x1bea74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33496Cu));
    // 0x1bea78: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEA78u;
    {
        const bool branch_taken_0x1bea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bea78) {
            ctx->pc = 0x1BEA88u;
            goto label_1bea88;
        }
    }
    ctx->pc = 0x1BEA80u;
    // 0x1bea80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BEA80u;
    {
        const bool branch_taken_0x1bea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA80u;
        // 0x1bea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea80) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEA88u;
label_1bea88:
    // 0x1bea88: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea8c: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1bea8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x334A0Cu));
    // 0x1bea90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEA90u;
    {
        const bool branch_taken_0x1bea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea90) {
            ctx->pc = 0x1BEAC4u;
            goto label_1beac4;
        }
    }
    ctx->pc = 0x1BEA98u;
    // 0x1bea98: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bea98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bea9c: 0x92820034  lbu         $v0, 0x34($s4)
    ctx->pc = 0x1bea9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1beaa0: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x1beaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x334A04u));
    // 0x1beaa4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEAA4u;
    {
        const bool branch_taken_0x1beaa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaa4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEAACu;
    // 0x1beaac: 0x92820035  lbu         $v0, 0x35($s4)
    ctx->pc = 0x1beaacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 53)));
    // 0x1beab0: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
    // 0x1beab4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEAB4u;
    {
        const bool branch_taken_0x1beab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1beab4) {
            ctx->pc = 0x1BEAC0u;
            goto label_1beac0;
        }
    }
    ctx->pc = 0x1BEABCu;
    // 0x1beabc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1beabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1beac0:
    // 0x1beac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1beac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beac4:
    // 0x1beac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1beac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beac8: 0xc090024  jal         func_240090
    ctx->pc = 0x1BEAC8u;
    SET_GPR_U32(ctx, 31, 0x1BEAD0u);
    ctx->pc = 0x1BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAC8u;
    // 0x1beacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240090u, 0x1BEAC8u, 0x1BEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAD0u;
label_1bead0:
    // 0x1bead0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1bead0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1bead4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x1bead4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x1bead8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1bead8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1beadc: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1BEADCu;
    {
        const bool branch_taken_0x1beadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beadc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEAE4u;
    // 0x1beae4: 0x92640234  lbu         $a0, 0x234($s3)
    ctx->pc = 0x1beae4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
    // 0x1beae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beaec: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x1BEAECu;
    {
        const bool branch_taken_0x1beaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BEAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAECu;
        // 0x1beaf0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beaec) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEAF4u;
    // 0x1beaf4: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1beaf8: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1beaf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x1beafc: 0x14830039  bne         $a0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1BEAFCu;
    {
        const bool branch_taken_0x1beafc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1beafc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEB04u;
    // 0x1beb04: 0x92630242  lbu         $v1, 0x242($s3)
    ctx->pc = 0x1beb04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1beb08: 0x2063ffd3  addi        $v1, $v1, -0x2D
    ctx->pc = 0x1beb08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967251, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1beb0c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1beb0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1beb10: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1BEB10u;
    {
        const bool branch_taken_0x1beb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB10u;
        // 0x1beb14: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb10) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB18u;
    // 0x1beb18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1beb1c: 0x2484b6f0  addiu       $a0, $a0, -0x4910
    ctx->pc = 0x1beb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948592));
    // 0x1beb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1beb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1beb24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1beb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beb28: 0x600008  jr          $v1
    ctx->pc = 0x1BEB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEB30u: goto label_1beb30;
            case 0x1BEB3Cu: goto label_1beb3c;
            case 0x1BEB48u: goto label_1beb48;
            case 0x1BEB50u: goto label_1beb50;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEB30u;
label_1beb30:
    // 0x1beb30: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1beb34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEB34u;
    {
        const bool branch_taken_0x1beb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB34u;
        // 0x1beb38: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb34) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB3Cu;
label_1beb3c:
    // 0x1beb3c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1beb40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEB40u;
    {
        const bool branch_taken_0x1beb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB40u;
        // 0x1beb44: 0xa2630242  sb          $v1, 0x242($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb40) {
            ctx->pc = 0x1BEB50u;
            goto label_1beb50;
        }
    }
    ctx->pc = 0x1BEB48u;
label_1beb48:
    // 0x1beb48: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1beb4c: 0xa2630242  sb          $v1, 0x242($s3)
    ctx->pc = 0x1beb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 578), (uint8_t)GPR_U32(ctx, 3));
label_1beb50:
    // 0x1beb50: 0x92640242  lbu         $a0, 0x242($s3)
    ctx->pc = 0x1beb50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 578)));
    // 0x1beb54: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1beb58: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BEB58u;
    {
        const bool branch_taken_0x1beb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB58u;
        // 0x1beb5c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb58) {
            ctx->pc = 0x1BEBE0u;
            goto label_1bebe0;
        }
    }
    ctx->pc = 0x1BEB60u;
    // 0x1beb60: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1beb64: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BEB64u;
    {
        const bool branch_taken_0x1beb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB64u;
        // 0x1beb68: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb64) {
            ctx->pc = 0x1BEBD8u;
            goto label_1bebd8;
        }
    }
    ctx->pc = 0x1BEB6Cu;
    // 0x1beb6c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1beb70: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BEB70u;
    {
        const bool branch_taken_0x1beb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB70u;
        // 0x1beb74: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb70) {
            ctx->pc = 0x1BEBD4u;
            goto label_1bebd4;
        }
    }
    ctx->pc = 0x1BEB78u;
    // 0x1beb78: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BEB78u;
    {
        const bool branch_taken_0x1beb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1beb78) {
            ctx->pc = 0x1BEBD4u;
            goto label_1bebd4;
        }
    }
    ctx->pc = 0x1BEB80u;
    // 0x1beb80: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x1beb84: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BEB84u;
    {
        const bool branch_taken_0x1beb84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB84u;
        // 0x1beb88: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb84) {
            ctx->pc = 0x1BEBCCu;
            goto label_1bebcc;
        }
    }
    ctx->pc = 0x1BEB8Cu;
    // 0x1beb8c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1beb90: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEB90u;
    {
        const bool branch_taken_0x1beb90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB90u;
        // 0x1beb94: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb90) {
            ctx->pc = 0x1BEBC4u;
            goto label_1bebc4;
        }
    }
    ctx->pc = 0x1BEB98u;
    // 0x1beb98: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1beb9c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEB9Cu;
    {
        const bool branch_taken_0x1beb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB9Cu;
        // 0x1beba0: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb9c) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBA4u;
    // 0x1beba4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEBA4u;
    {
        const bool branch_taken_0x1beba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1beba4) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBACu;
    // 0x1bebac: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1bebacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1bebb0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEBB0u;
    {
        const bool branch_taken_0x1bebb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bebb0) {
            ctx->pc = 0x1BEBC0u;
            goto label_1bebc0;
        }
    }
    ctx->pc = 0x1BEBB8u;
    // 0x1bebb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BEBB8u;
    {
        const bool branch_taken_0x1bebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBB8u;
        // 0x1bebbc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebb8) {
            ctx->pc = 0x1BEBE8u;
            goto label_1bebe8;
        }
    }
    ctx->pc = 0x1BEBC0u;
label_1bebc0:
    // 0x1bebc0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1bebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bebc4:
    // 0x1bebc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEBC4u;
    {
        const bool branch_taken_0x1bebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBC4u;
        // 0x1bebc8: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebc4) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBCCu;
label_1bebcc:
    // 0x1bebcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEBCCu;
    {
        const bool branch_taken_0x1bebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBCCu;
        // 0x1bebd0: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebcc) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBD4u;
label_1bebd4:
    // 0x1bebd4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1bebd8:
    // 0x1bebd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEBD8u;
    {
        const bool branch_taken_0x1bebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEBD8u;
        // 0x1bebdc: 0xa2630243  sb          $v1, 0x243($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebd8) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEBE0u;
label_1bebe0:
    // 0x1bebe0: 0xa2630243  sb          $v1, 0x243($s3)
    ctx->pc = 0x1bebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 579), (uint8_t)GPR_U32(ctx, 3));
label_1bebe4:
    // 0x1bebe4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bebe8:
    // 0x1bebe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bebe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bebec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bebecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bebf0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bebf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bebf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bebf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bebf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bebf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bebfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec04: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC04u;
        // 0x1bec08: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEC0Cu;
    // 0x1bec0c: 0x0  nop
    ctx->pc = 0x1bec0cu;
    // NOP
label_1bec10:
    // 0x1bec10: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1bec14: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1bec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bec18: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bec1c: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x1bec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bec20: 0x24634991  addiu       $v1, $v1, 0x4991
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18833));
    // 0x1bec24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bec28: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bec28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bec2c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEC2Cu;
    {
        const bool branch_taken_0x1bec2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec2c) {
            ctx->pc = 0x1BEC58u;
            goto label_1bec58;
        }
    }
    ctx->pc = 0x1BEC34u;
    // 0x1bec34: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1bec38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bec3c: 0x24a54992  addiu       $a1, $a1, 0x4992
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18834));
    // 0x1bec40: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1bec44: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bec44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bec48: 0x14a3003f  bne         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1BEC48u;
    {
        const bool branch_taken_0x1bec48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bec48) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BEC50u;
    // 0x1bec50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEC50u;
    {
        const bool branch_taken_0x1bec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC50u;
        // 0x1bec54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec50) {
            ctx->pc = 0x1BEC60u;
            goto label_1bec60;
        }
    }
    ctx->pc = 0x1BEC58u;
label_1bec58:
    // 0x1bec58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bec5c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1bec5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bec60:
    // 0x1bec60: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1bec60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1bec64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bec64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bec68: 0x24a54992  addiu       $a1, $a1, 0x4992
    ctx->pc = 0x1bec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18834));
    // 0x1bec6c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1bec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1bec70: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bec70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bec74: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BEC74u;
    {
        const bool branch_taken_0x1bec74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bec74) {
            ctx->pc = 0x1BECFCu;
            goto label_1becfc;
        }
    }
    ctx->pc = 0x1BEC7Cu;
    // 0x1bec7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bec80: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BEC80u;
    {
        const bool branch_taken_0x1bec80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BEC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC80u;
        // 0x1bec84: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec80) {
            ctx->pc = 0x1BECECu;
            goto label_1becec;
        }
    }
    ctx->pc = 0x1BEC88u;
    // 0x1bec88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bec8c: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEC8Cu;
    {
        const bool branch_taken_0x1bec8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bec8c) {
            ctx->pc = 0x1BECB8u;
            goto label_1becb8;
        }
    }
    ctx->pc = 0x1BEC94u;
    // 0x1bec94: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEC94u;
    {
        const bool branch_taken_0x1bec94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC94u;
        // 0x1bec98: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec94) {
            ctx->pc = 0x1BECA8u;
            goto label_1beca8;
        }
    }
    ctx->pc = 0x1BEC9Cu;
    // 0x1bec9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1BEC9Cu;
    {
        const bool branch_taken_0x1bec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC9Cu;
        // 0x1beca0: 0x61e3c  dsll32      $v1, $a2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec9c) {
            ctx->pc = 0x1BED3Cu;
            goto label_1bed3c;
        }
    }
    ctx->pc = 0x1BECA4u;
    // 0x1beca4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1beca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1beca8:
    // 0x1beca8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1beca8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1becac: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1becacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1becb0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1BECB0u;
    {
        const bool branch_taken_0x1becb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECB0u;
        // 0x1becb4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becb0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECB8u;
label_1becb8:
    // 0x1becb8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1becb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1becbc: 0xa0860243  sb          $a2, 0x243($a0)
    ctx->pc = 0x1becbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 6));
    // 0x1becc0: 0x24634987  addiu       $v1, $v1, 0x4987
    ctx->pc = 0x1becc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18823));
    // 0x1becc4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1becc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1becc8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1becc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beccc: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1becccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1becd0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BECD0u;
    {
        const bool branch_taken_0x1becd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1becd0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECD8u;
    // 0x1becd8: 0x90830243  lbu         $v1, 0x243($a0)
    ctx->pc = 0x1becd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 579)));
    // 0x1becdc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1becdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bece0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BECE0u;
    {
        const bool branch_taken_0x1bece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECE0u;
        // 0x1bece4: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bece0) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECE8u;
    // 0x1bece8: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1bece8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1becec:
    // 0x1becec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bececu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1becf0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1becf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1becf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BECF4u;
    {
        const bool branch_taken_0x1becf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECF4u;
        // 0x1becf8: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becf4) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BECFCu;
label_1becfc:
    // 0x1becfc: 0x62e3c  dsll32      $a1, $a2, 24
    ctx->pc = 0x1becfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1bed00: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1bed04: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1bed04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1bed08: 0x24634987  addiu       $v1, $v1, 0x4987
    ctx->pc = 0x1bed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18823));
    // 0x1bed0c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1bed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1bed10: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bed14: 0xa0850243  sb          $a1, 0x243($a0)
    ctx->pc = 0x1bed14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bed18: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bed18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bed1c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x1bed1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bed20: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BED20u;
    {
        const bool branch_taken_0x1bed20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bed20) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BED28u;
    // 0x1bed28: 0x90830243  lbu         $v1, 0x243($a0)
    ctx->pc = 0x1bed28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 579)));
    // 0x1bed2c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bed30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BED30u;
    {
        const bool branch_taken_0x1bed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED30u;
        // 0x1bed34: 0xa0830243  sb          $v1, 0x243($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed30) {
            ctx->pc = 0x1BED48u;
            goto label_1bed48;
        }
    }
    ctx->pc = 0x1BED38u;
    // 0x1bed38: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1bed38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_1bed3c:
    // 0x1bed3c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1bed3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1bed40: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1bed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1bed44: 0xa0830243  sb          $v1, 0x243($a0)
    ctx->pc = 0x1bed44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 579), (uint8_t)GPR_U32(ctx, 3));
label_1bed48:
    // 0x1bed48: 0x3e00008  jr          $ra
    ctx->pc = 0x1BED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BED50u;
label_1bed50:
    // 0x1bed50: 0x90830232  lbu         $v1, 0x232($a0)
    ctx->pc = 0x1bed50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1bed54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bed58: 0x14660064  bne         $v1, $a2, . + 4 + (0x64 << 2)
    ctx->pc = 0x1BED58u;
    {
        const bool branch_taken_0x1bed58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED58u;
        // 0x1bed5c: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed58) {
            ctx->pc = 0x1BEEECu;
            goto label_1beeec;
        }
    }
    ctx->pc = 0x1BED60u;
    // 0x1bed60: 0x90830244  lbu         $v1, 0x244($a0)
    ctx->pc = 0x1bed60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1bed64: 0x2063fff2  addi        $v1, $v1, -0xE
    ctx->pc = 0x1bed64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967282, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1bed68: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1bed68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bed6c: 0x102000a1  beqz        $at, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1BED6Cu;
    {
        const bool branch_taken_0x1bed6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED6Cu;
        // 0x1bed70: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed6c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BED74u;
    // 0x1bed74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bed78: 0x24a5b760  addiu       $a1, $a1, -0x48A0
    ctx->pc = 0x1bed78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948704));
    // 0x1bed7c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bed80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bed84: 0x600008  jr          $v1
    ctx->pc = 0x1BED84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BED8Cu: goto label_1bed8c;
            case 0x1BEDB8u: goto label_1bedb8;
            case 0x1BEDE4u: goto label_1bede4;
            case 0x1BEE14u: goto label_1bee14;
            case 0x1BEE44u: goto label_1bee44;
            case 0x1BEE74u: goto label_1bee74;
            case 0x1BEEA4u: goto label_1beea4;
            case 0x1BEED4u: goto label_1beed4;
            case 0x1BEEE0u: goto label_1beee0;
            case 0x1BEFF4u: goto label_1beff4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BED84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BED8Cu;
label_1bed8c:
    // 0x1bed8c: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bed8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bed90: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bed90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bed94: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BED94u;
    {
        const bool branch_taken_0x1bed94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed94) {
            ctx->pc = 0x1BEDA4u;
            goto label_1beda4;
        }
    }
    ctx->pc = 0x1BED9Cu;
    // 0x1bed9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BED9Cu;
    {
        const bool branch_taken_0x1bed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BED9Cu;
        // 0x1beda0: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed9c) {
            ctx->pc = 0x1BEDA8u;
            goto label_1beda8;
        }
    }
    ctx->pc = 0x1BEDA4u;
label_1beda4:
    // 0x1beda4: 0xa0800247  sb          $zero, 0x247($a0)
    ctx->pc = 0x1beda4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
label_1beda8:
    // 0x1beda8: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beda8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bedac: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bedacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
    // 0x1bedb0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x1BEDB0u;
    {
        const bool branch_taken_0x1bedb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDB0u;
        // 0x1bedb4: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedb0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEDB8u;
label_1bedb8:
    // 0x1bedb8: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bedb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bedbc: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bedc0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEDC0u;
    {
        const bool branch_taken_0x1bedc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bedc0) {
            ctx->pc = 0x1BEDD0u;
            goto label_1bedd0;
        }
    }
    ctx->pc = 0x1BEDC8u;
    // 0x1bedc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEDC8u;
    {
        const bool branch_taken_0x1bedc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDC8u;
        // 0x1bedcc: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedc8) {
            ctx->pc = 0x1BEDD4u;
            goto label_1bedd4;
        }
    }
    ctx->pc = 0x1BEDD0u;
label_1bedd0:
    // 0x1bedd0: 0xa0800247  sb          $zero, 0x247($a0)
    ctx->pc = 0x1bedd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
label_1bedd4:
    // 0x1bedd4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bedd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bedd8: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
    // 0x1beddc: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1BEDDCu;
    {
        const bool branch_taken_0x1beddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDDCu;
        // 0x1bede0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beddc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEDE4u;
label_1bede4:
    // 0x1bede4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bede4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bede8: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bede8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bedec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEDECu;
    {
        const bool branch_taken_0x1bedec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDECu;
        // 0x1bedf0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedec) {
            ctx->pc = 0x1BEE00u;
            goto label_1bee00;
        }
    }
    ctx->pc = 0x1BEDF4u;
    // 0x1bedf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bedf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEDF8u;
    {
        const bool branch_taken_0x1bedf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEDF8u;
        // 0x1bedfc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedf8) {
            ctx->pc = 0x1BEE04u;
            goto label_1bee04;
        }
    }
    ctx->pc = 0x1BEE00u;
label_1bee00:
    // 0x1bee00: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee04:
    // 0x1bee04: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee08: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bee08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
    // 0x1bee0c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1BEE0Cu;
    {
        const bool branch_taken_0x1bee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE0Cu;
        // 0x1bee10: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee0c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE14u;
label_1bee14:
    // 0x1bee14: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee18: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bee1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE1Cu;
    {
        const bool branch_taken_0x1bee1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE1Cu;
        // 0x1bee20: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee1c) {
            ctx->pc = 0x1BEE30u;
            goto label_1bee30;
        }
    }
    ctx->pc = 0x1BEE24u;
    // 0x1bee24: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bee28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEE28u;
    {
        const bool branch_taken_0x1bee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE28u;
        // 0x1bee2c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee28) {
            ctx->pc = 0x1BEE34u;
            goto label_1bee34;
        }
    }
    ctx->pc = 0x1BEE30u;
label_1bee30:
    // 0x1bee30: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee34:
    // 0x1bee34: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee38: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
    // 0x1bee3c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1BEE3Cu;
    {
        const bool branch_taken_0x1bee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE3Cu;
        // 0x1bee40: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee3c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE44u;
label_1bee44:
    // 0x1bee44: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee48: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bee4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE4Cu;
    {
        const bool branch_taken_0x1bee4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE4Cu;
        // 0x1bee50: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee4c) {
            ctx->pc = 0x1BEE60u;
            goto label_1bee60;
        }
    }
    ctx->pc = 0x1BEE54u;
    // 0x1bee54: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bee58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEE58u;
    {
        const bool branch_taken_0x1bee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE58u;
        // 0x1bee5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee58) {
            ctx->pc = 0x1BEE64u;
            goto label_1bee64;
        }
    }
    ctx->pc = 0x1BEE60u;
label_1bee60:
    // 0x1bee60: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee64:
    // 0x1bee64: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee68: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
    // 0x1bee6c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1BEE6Cu;
    {
        const bool branch_taken_0x1bee6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE6Cu;
        // 0x1bee70: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee6c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE74u;
label_1bee74:
    // 0x1bee74: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee78: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1bee78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1bee7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEE7Cu;
    {
        const bool branch_taken_0x1bee7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE7Cu;
        // 0x1bee80: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee7c) {
            ctx->pc = 0x1BEE90u;
            goto label_1bee90;
        }
    }
    ctx->pc = 0x1BEE84u;
    // 0x1bee84: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1bee84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bee88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEE88u;
    {
        const bool branch_taken_0x1bee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE88u;
        // 0x1bee8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee88) {
            ctx->pc = 0x1BEE94u;
            goto label_1bee94;
        }
    }
    ctx->pc = 0x1BEE90u;
label_1bee90:
    // 0x1bee90: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1bee90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1bee94:
    // 0x1bee94: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bee94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bee98: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bee98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
    // 0x1bee9c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1BEE9Cu;
    {
        const bool branch_taken_0x1bee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE9Cu;
        // 0x1beea0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee9c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEA4u;
label_1beea4:
    // 0x1beea4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beea4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1beea8: 0x30630c30  andi        $v1, $v1, 0xC30
    ctx->pc = 0x1beea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3120);
    // 0x1beeac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEEACu;
    {
        const bool branch_taken_0x1beeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEACu;
        // 0x1beeb0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeac) {
            ctx->pc = 0x1BEEC0u;
            goto label_1beec0;
        }
    }
    ctx->pc = 0x1BEEB4u;
    // 0x1beeb4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1beeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1beeb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEEB8u;
    {
        const bool branch_taken_0x1beeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB8u;
        // 0x1beebc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb8) {
            ctx->pc = 0x1BEEC4u;
            goto label_1beec4;
        }
    }
    ctx->pc = 0x1BEEC0u;
label_1beec0:
    // 0x1beec0: 0xa0830247  sb          $v1, 0x247($a0)
    ctx->pc = 0x1beec0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
label_1beec4:
    // 0x1beec4: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1beec4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1beec8: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1beec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
    // 0x1beecc: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1BEECCu;
    {
        const bool branch_taken_0x1beecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEECCu;
        // 0x1beed0: 0xa483022c  sh          $v1, 0x22C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beecc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEED4u;
label_1beed4:
    // 0x1beed4: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1beed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1beed8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1BEED8u;
    {
        const bool branch_taken_0x1beed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED8u;
        // 0x1beedc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beed8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEE0u;
label_1beee0:
    // 0x1beee0: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x1beee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1beee4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1BEEE4u;
    {
        const bool branch_taken_0x1beee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE4u;
        // 0x1beee8: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beee4) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEEECu;
label_1beeec:
    // 0x1beeec: 0x14a30040  bne         $a1, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1BEEECu;
    {
        const bool branch_taken_0x1beeec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1beeec) {
            ctx->pc = 0x1BEFF0u;
            goto label_1beff0;
        }
    }
    ctx->pc = 0x1BEEF4u;
    // 0x1beef4: 0x90830244  lbu         $v1, 0x244($a0)
    ctx->pc = 0x1beef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1beef8: 0x2063fff2  addi        $v1, $v1, -0xE
    ctx->pc = 0x1beef8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967282, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1beefc: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x1beefcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bef00: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x1BEF00u;
    {
        const bool branch_taken_0x1bef00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF00u;
        // 0x1bef04: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef00) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF08u;
    // 0x1bef08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bef08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bef0c: 0x24a5b730  addiu       $a1, $a1, -0x48D0
    ctx->pc = 0x1bef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948656));
    // 0x1bef10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bef14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bef14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bef18: 0x600008  jr          $v1
    ctx->pc = 0x1BEF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BEF20u: goto label_1bef20;
            case 0x1BEF34u: goto label_1bef34;
            case 0x1BEF48u: goto label_1bef48;
            case 0x1BEF60u: goto label_1bef60;
            case 0x1BEF78u: goto label_1bef78;
            case 0x1BEF90u: goto label_1bef90;
            case 0x1BEFA8u: goto label_1befa8;
            case 0x1BEFC0u: goto label_1befc0;
            case 0x1BEFD8u: goto label_1befd8;
            case 0x1BEFE4u: goto label_1befe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BEF20u;
label_1bef20:
    // 0x1bef20: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bef20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef24: 0x306373cf  andi        $v1, $v1, 0x73CF
    ctx->pc = 0x1bef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29647);
    // 0x1bef28: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bef28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bef2c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BEF2Cu;
    {
        const bool branch_taken_0x1bef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF2Cu;
        // 0x1bef30: 0xa0800247  sb          $zero, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef2c) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF34u;
label_1bef34:
    // 0x1bef34: 0x9483022c  lhu         $v1, 0x22C($a0)
    ctx->pc = 0x1bef34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef38: 0x306377df  andi        $v1, $v1, 0x77DF
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30687);
    // 0x1bef3c: 0xa483022c  sh          $v1, 0x22C($a0)
    ctx->pc = 0x1bef3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bef40: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0xa0860247  sb          $a2, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF48u;
label_1bef48:
    // 0x1bef48: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bef50: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1bef50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
    // 0x1bef54: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bef58: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BEF58u;
    {
        const bool branch_taken_0x1bef58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF58u;
        // 0x1bef5c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef58) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF60u;
label_1bef60:
    // 0x1bef60: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bef68: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1bef68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
    // 0x1bef6c: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bef70: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF78u;
label_1bef78:
    // 0x1bef78: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef7c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1bef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bef80: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1bef80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
    // 0x1bef84: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bef88: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1BEF88u;
    {
        const bool branch_taken_0x1bef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF88u;
        // 0x1bef8c: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef88) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEF90u;
label_1bef90:
    // 0x1bef90: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1bef90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1bef94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1bef94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bef98: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1bef98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
    // 0x1bef9c: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1bef9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1befa0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BEFA0u;
    {
        const bool branch_taken_0x1befa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA0u;
        // 0x1befa4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befa0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFA8u;
label_1befa8:
    // 0x1befa8: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1befa8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1befac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1befb0: 0x30a573cf  andi        $a1, $a1, 0x73CF
    ctx->pc = 0x1befb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)29647);
    // 0x1befb4: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1befb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1befb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BEFB8u;
    {
        const bool branch_taken_0x1befb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB8u;
        // 0x1befbc: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befb8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFC0u;
label_1befc0:
    // 0x1befc0: 0x9485022c  lhu         $a1, 0x22C($a0)
    ctx->pc = 0x1befc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 556)));
    // 0x1befc4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1befc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1befc8: 0x30a577df  andi        $a1, $a1, 0x77DF
    ctx->pc = 0x1befc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)30687);
    // 0x1befcc: 0xa485022c  sh          $a1, 0x22C($a0)
    ctx->pc = 0x1befccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 556), (uint16_t)GPR_U32(ctx, 5));
    // 0x1befd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BEFD0u;
    {
        const bool branch_taken_0x1befd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFD0u;
        // 0x1befd4: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befd0) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFD8u;
label_1befd8:
    // 0x1befd8: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x1befd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1befdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BEFDCu;
    {
        const bool branch_taken_0x1befdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFDCu;
        // 0x1befe0: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befdc) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFE4u;
label_1befe4:
    // 0x1befe4: 0x240300ac  addiu       $v1, $zero, 0xAC
    ctx->pc = 0x1befe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1befe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEFE8u;
    {
        const bool branch_taken_0x1befe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE8u;
        // 0x1befec: 0xa0830247  sb          $v1, 0x247($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befe8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFF0u;
label_1beff0:
    // 0x1beff0: 0xa0850247  sb          $a1, 0x247($a0)
    ctx->pc = 0x1beff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 583), (uint8_t)GPR_U32(ctx, 5));
label_1beff4:
    // 0x1beff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEFFCu;
    // 0x1beffc: 0x0  nop
    ctx->pc = 0x1beffcu;
    // NOP
    // 0x1bf000: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1bf004: 0x9086024a  lbu         $a2, 0x24A($a0)
    ctx->pc = 0x1bf004u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x1bf008: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1bf008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bf00c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf010: 0x24a53b86  addiu       $a1, $a1, 0x3B86
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15238));
    // 0x1bf014: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf018: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1bf018u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf01c: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1bf01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bf020: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1bf024: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1bf028: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bf02c: 0x0  nop
    ctx->pc = 0x1bf02cu;
    // NOP
    // 0x1bf030: 0x0  nop
    ctx->pc = 0x1bf030u;
    // NOP
    // 0x1bf034: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf034u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bf038: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf038u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bf03c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf03cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1bf040: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bf044: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bf048: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF048u;
    {
        const bool branch_taken_0x1bf048 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf048) {
            ctx->pc = 0x1BF054u;
            goto label_1bf054;
        }
    }
    ctx->pc = 0x1BF050u;
    // 0x1bf050: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf054:
    // 0x1bf054: 0xa085024c  sb          $a1, 0x24C($a0)
    ctx->pc = 0x1bf054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bf058: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf05c: 0x9087024b  lbu         $a3, 0x24B($a0)
    ctx->pc = 0x1bf05cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x1bf060: 0x24a53b87  addiu       $a1, $a1, 0x3B87
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15239));
    // 0x1bf064: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf068: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf068u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf06c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bf070: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1bf074: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1bf078: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bf07c: 0x0  nop
    ctx->pc = 0x1bf07cu;
    // NOP
    // 0x1bf080: 0x0  nop
    ctx->pc = 0x1bf080u;
    // NOP
    // 0x1bf084: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf084u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bf088: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf088u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bf08c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf08cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1bf090: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bf094: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bf098: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF098u;
    {
        const bool branch_taken_0x1bf098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf098) {
            ctx->pc = 0x1BF0A4u;
            goto label_1bf0a4;
        }
    }
    ctx->pc = 0x1BF0A0u;
    // 0x1bf0a0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf0a4:
    // 0x1bf0a4: 0xa085024d  sb          $a1, 0x24D($a0)
    ctx->pc = 0x1bf0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bf0a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf0ac: 0x9087024a  lbu         $a3, 0x24A($a0)
    ctx->pc = 0x1bf0acu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
    // 0x1bf0b0: 0x24a53b88  addiu       $a1, $a1, 0x3B88
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    // 0x1bf0b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf0b8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf0b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf0bc: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf0bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bf0c0: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1bf0c4: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1bf0c8: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bf0cc: 0x0  nop
    ctx->pc = 0x1bf0ccu;
    // NOP
    // 0x1bf0d0: 0x0  nop
    ctx->pc = 0x1bf0d0u;
    // NOP
    // 0x1bf0d4: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf0d4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bf0d8: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bf0dc: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf0dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1bf0e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bf0e4: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bf0e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF0E8u;
    {
        const bool branch_taken_0x1bf0e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf0e8) {
            ctx->pc = 0x1BF0F4u;
            goto label_1bf0f4;
        }
    }
    ctx->pc = 0x1BF0F0u;
    // 0x1bf0f0: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf0f4:
    // 0x1bf0f4: 0xa085024e  sb          $a1, 0x24E($a0)
    ctx->pc = 0x1bf0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bf0f8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf0fc: 0x9087024b  lbu         $a3, 0x24B($a0)
    ctx->pc = 0x1bf0fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
    // 0x1bf100: 0x24a53b89  addiu       $a1, $a1, 0x3B89
    ctx->pc = 0x1bf100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15241));
    // 0x1bf104: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf108: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1bf108u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf10c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bf10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bf110: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1bf110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1bf114: 0x34a5851f  ori         $a1, $a1, 0x851F
    ctx->pc = 0x1bf114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1bf118: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x1bf118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bf11c: 0x0  nop
    ctx->pc = 0x1bf11cu;
    // NOP
    // 0x1bf120: 0x0  nop
    ctx->pc = 0x1bf120u;
    // NOP
    // 0x1bf124: 0x2810  mfhi        $a1
    ctx->pc = 0x1bf124u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bf128: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bf12c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x1bf12cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x1bf130: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1bf130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bf134: 0x28a100fb  slti        $at, $a1, 0xFB
    ctx->pc = 0x1bf134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)251) ? 1 : 0);
    // 0x1bf138: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF138u;
    {
        const bool branch_taken_0x1bf138 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf138) {
            ctx->pc = 0x1BF144u;
            goto label_1bf144;
        }
    }
    ctx->pc = 0x1BF140u;
    // 0x1bf140: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1bf140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1bf144:
    // 0x1bf144: 0xa085024f  sb          $a1, 0x24F($a0)
    ctx->pc = 0x1bf144u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bf148: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf14c: 0x24a53b8a  addiu       $a1, $a1, 0x3B8A
    ctx->pc = 0x1bf14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15242));
    // 0x1bf150: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf154: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bf154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf158: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF158u;
    {
        const bool branch_taken_0x1bf158 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BF15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF158u;
        // 0x1bf15c: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf158) {
            ctx->pc = 0x1BF16Cu;
            goto label_1bf16c;
        }
    }
    ctx->pc = 0x1BF160u;
    // 0x1bf160: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf160u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf164: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF164u;
    {
        const bool branch_taken_0x1bf164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF164u;
        // 0x1bf168: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf164) {
            ctx->pc = 0x1BF184u;
            goto label_1bf184;
        }
    }
    ctx->pc = 0x1BF16Cu;
label_1bf16c:
    // 0x1bf16c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1bf16cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1bf170: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1bf174: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf174u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf178: 0x0  nop
    ctx->pc = 0x1bf178u;
    // NOP
    // 0x1bf17c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bf17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1bf180: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1bf180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1bf184:
    // 0x1bf184: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1bf184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1bf188: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf18c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1bf18cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bf190: 0x24a53b8b  addiu       $a1, $a1, 0x3B8B
    ctx->pc = 0x1bf190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15243));
    // 0x1bf194: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf198: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bf198u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1bf19c: 0x0  nop
    ctx->pc = 0x1bf19cu;
    // NOP
    // 0x1bf1a0: 0xe48001e4  swc1        $f0, 0x1E4($a0)
    ctx->pc = 0x1bf1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 484), bits); }
    // 0x1bf1a4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1bf1a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf1a8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF1A8u;
    {
        const bool branch_taken_0x1bf1a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1BF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1A8u;
        // 0x1bf1ac: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1a8) {
            ctx->pc = 0x1BF1BCu;
            goto label_1bf1bc;
        }
    }
    ctx->pc = 0x1BF1B0u;
    // 0x1bf1b0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf1b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf1b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF1B4u;
    {
        const bool branch_taken_0x1bf1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B4u;
        // 0x1bf1b8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1b4) {
            ctx->pc = 0x1BF1D4u;
            goto label_1bf1d4;
        }
    }
    ctx->pc = 0x1BF1BCu;
label_1bf1bc:
    // 0x1bf1bc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x1bf1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1bf1c0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1bf1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1bf1c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf1c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf1c8: 0x0  nop
    ctx->pc = 0x1bf1c8u;
    // NOP
    // 0x1bf1cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bf1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bf1d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bf1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bf1d4:
    // 0x1bf1d4: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1bf1d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1bf1dc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1bf1dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf1e0: 0x24a53b8c  addiu       $a1, $a1, 0x3B8C
    ctx->pc = 0x1bf1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15244));
    // 0x1bf1e4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1bf1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bf1e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bf1e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bf1ec: 0x0  nop
    ctx->pc = 0x1bf1ecu;
    // NOP
    // 0x1bf1f0: 0xe48001e8  swc1        $f0, 0x1E8($a0)
    ctx->pc = 0x1bf1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 488), bits); }
    // 0x1bf1f4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1bf1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf1f8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF1F8u;
    {
        const bool branch_taken_0x1bf1f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1BF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1F8u;
        // 0x1bf1fc: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1f8) {
            ctx->pc = 0x1BF20Cu;
            goto label_1bf20c;
        }
    }
    ctx->pc = 0x1BF200u;
    // 0x1bf200: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf200u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF224u;
            goto label_1bf224;
        }
    }
    ctx->pc = 0x1BF20Cu;
label_1bf20c:
    // 0x1bf20c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bf20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bf210: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1bf210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1bf214: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bf214u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf218: 0x0  nop
    ctx->pc = 0x1bf218u;
    // NOP
    // 0x1bf21c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1bf21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bf220: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1bf220u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1bf224:
    // 0x1bf224: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1bf224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1bf228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bf228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf22c: 0x0  nop
    ctx->pc = 0x1bf22cu;
    // NOP
    // 0x1bf230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1bf230u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1bf234: 0x0  nop
    ctx->pc = 0x1bf234u;
    // NOP
    // 0x1bf238: 0x0  nop
    ctx->pc = 0x1bf238u;
    // NOP
    // 0x1bf23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF23Cu;
        // 0x1bf240: 0xe48001ec  swc1        $f0, 0x1EC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF244u;
    // 0x1bf244: 0x0  nop
    ctx->pc = 0x1bf244u;
    // NOP
    // 0x1bf248: 0x0  nop
    ctx->pc = 0x1bf248u;
    // NOP
    // 0x1bf24c: 0x0  nop
    ctx->pc = 0x1bf24cu;
    // NOP
    ctx->pc = 0x1bf250u;
}
