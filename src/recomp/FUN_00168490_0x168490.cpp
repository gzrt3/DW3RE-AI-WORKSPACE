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

// Function: FUN_00168490
// Address: 0x168490 - 0x16861c
void FUN_00168490_0x168490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00168490_0x168490");
#endif

    switch (ctx->pc) {
        case 0x168490u: goto label_168490;
        case 0x168494u: goto label_168494;
        case 0x168498u: goto label_168498;
        case 0x16849cu: goto label_16849c;
        case 0x1684a0u: goto label_1684a0;
        case 0x1684a4u: goto label_1684a4;
        case 0x1684a8u: goto label_1684a8;
        case 0x1684acu: goto label_1684ac;
        case 0x1684b0u: goto label_1684b0;
        case 0x1684b4u: goto label_1684b4;
        case 0x1684b8u: goto label_1684b8;
        case 0x1684bcu: goto label_1684bc;
        case 0x1684c0u: goto label_1684c0;
        case 0x1684c4u: goto label_1684c4;
        case 0x1684c8u: goto label_1684c8;
        case 0x1684ccu: goto label_1684cc;
        case 0x1684d0u: goto label_1684d0;
        case 0x1684d4u: goto label_1684d4;
        case 0x1684d8u: goto label_1684d8;
        case 0x1684dcu: goto label_1684dc;
        case 0x1684e0u: goto label_1684e0;
        case 0x1684e4u: goto label_1684e4;
        case 0x1684e8u: goto label_1684e8;
        case 0x1684ecu: goto label_1684ec;
        case 0x1684f0u: goto label_1684f0;
        case 0x1684f4u: goto label_1684f4;
        case 0x1684f8u: goto label_1684f8;
        case 0x1684fcu: goto label_1684fc;
        case 0x168500u: goto label_168500;
        case 0x168504u: goto label_168504;
        case 0x168508u: goto label_168508;
        case 0x16850cu: goto label_16850c;
        case 0x168510u: goto label_168510;
        case 0x168514u: goto label_168514;
        case 0x168518u: goto label_168518;
        case 0x16851cu: goto label_16851c;
        case 0x168520u: goto label_168520;
        case 0x168524u: goto label_168524;
        case 0x168528u: goto label_168528;
        case 0x16852cu: goto label_16852c;
        case 0x168530u: goto label_168530;
        case 0x168534u: goto label_168534;
        case 0x168538u: goto label_168538;
        case 0x16853cu: goto label_16853c;
        case 0x168540u: goto label_168540;
        case 0x168544u: goto label_168544;
        case 0x168548u: goto label_168548;
        case 0x16854cu: goto label_16854c;
        case 0x168550u: goto label_168550;
        case 0x168554u: goto label_168554;
        case 0x168558u: goto label_168558;
        case 0x16855cu: goto label_16855c;
        case 0x168560u: goto label_168560;
        case 0x168564u: goto label_168564;
        case 0x168568u: goto label_168568;
        case 0x16856cu: goto label_16856c;
        case 0x168570u: goto label_168570;
        case 0x168574u: goto label_168574;
        case 0x168578u: goto label_168578;
        case 0x16857cu: goto label_16857c;
        case 0x168580u: goto label_168580;
        case 0x168584u: goto label_168584;
        case 0x168588u: goto label_168588;
        case 0x16858cu: goto label_16858c;
        case 0x168590u: goto label_168590;
        case 0x168594u: goto label_168594;
        case 0x168598u: goto label_168598;
        case 0x16859cu: goto label_16859c;
        case 0x1685a0u: goto label_1685a0;
        case 0x1685a4u: goto label_1685a4;
        case 0x1685a8u: goto label_1685a8;
        case 0x1685acu: goto label_1685ac;
        case 0x1685b0u: goto label_1685b0;
        case 0x1685b4u: goto label_1685b4;
        case 0x1685b8u: goto label_1685b8;
        case 0x1685bcu: goto label_1685bc;
        case 0x1685c0u: goto label_1685c0;
        case 0x1685c4u: goto label_1685c4;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685ccu: goto label_1685cc;
        case 0x1685d0u: goto label_1685d0;
        case 0x1685d4u: goto label_1685d4;
        case 0x1685d8u: goto label_1685d8;
        case 0x1685dcu: goto label_1685dc;
        case 0x1685e0u: goto label_1685e0;
        case 0x1685e4u: goto label_1685e4;
        case 0x1685e8u: goto label_1685e8;
        case 0x1685ecu: goto label_1685ec;
        case 0x1685f0u: goto label_1685f0;
        case 0x1685f4u: goto label_1685f4;
        case 0x1685f8u: goto label_1685f8;
        case 0x1685fcu: goto label_1685fc;
        case 0x168600u: goto label_168600;
        case 0x168604u: goto label_168604;
        case 0x168608u: goto label_168608;
        case 0x16860cu: goto label_16860c;
        case 0x168610u: goto label_168610;
        case 0x168614u: goto label_168614;
        case 0x168618u: goto label_168618;
        default: break;
    }

    ctx->pc = 0x168490u;

label_168490:
    // 0x168490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_168494:
    // 0x168494: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x168494u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_168498:
    // 0x168498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16849c:
    // 0x16849c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x16849cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1684a0:
    // 0x1684a0: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1684a4:
    // 0x1684a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1684a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1684a8:
    // 0x1684a8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1684a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1684ac:
    // 0x1684ac: 0x10000058  b           . + 4 + (0x58 << 2)
label_1684b0:
    if (ctx->pc == 0x1684B0u) {
        ctx->pc = 0x1684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ACu;
        // 0x1684b0: 0x256b8940  addiu       $t3, $t3, -0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1684B4u;
        goto label_1684b4;
    }
    ctx->pc = 0x1684ACu;
    {
        const bool branch_taken_0x1684ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1684B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684ACu;
        // 0x1684b0: 0x256b8940  addiu       $t3, $t3, -0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294936896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684ac) {
            ctx->pc = 0x168610u;
            goto label_168610;
        }
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1684b8:
    // 0x1684b8: 0xa2202  srl         $a0, $t2, 8
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
label_1684bc:
    // 0x1684bc: 0x314e00ff  andi        $t6, $t2, 0xFF
    ctx->pc = 0x1684bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1684c0:
    // 0x1684c0: 0x3098001f  andi        $t8, $a0, 0x1F
    ctx->pc = 0x1684c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_1684c4:
    // 0x1684c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1684c8:
    // 0x1684c8: 0xa2342  srl         $a0, $t2, 13
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 13));
label_1684cc:
    // 0x1684cc: 0xa5482  srl         $t2, $t2, 18
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
label_1684d0:
    // 0x1684d0: 0x314f3fff  andi        $t7, $t2, 0x3FFF
    ctx->pc = 0x1684d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16383);
label_1684d4:
    // 0x1684d4: 0x1c6502b  sltu        $t2, $t6, $a2
    ctx->pc = 0x1684d4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1684d8:
    // 0x1684d8: 0x15400048  bnez        $t2, . + 4 + (0x48 << 2)
label_1684dc:
    if (ctx->pc == 0x1684DCu) {
        ctx->pc = 0x1684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D8u;
        // 0x1684dc: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1684E0u;
        goto label_1684e0;
    }
    ctx->pc = 0x1684D8u;
    {
        const bool branch_taken_0x1684d8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1684DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1684D8u;
        // 0x1684dc: 0x30840007  andi        $a0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1684d8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1684E0u;
label_1684e0:
    // 0x1684e0: 0xee082b  sltu        $at, $a3, $t6
    ctx->pc = 0x1684e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_1684e4:
    // 0x1684e4: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
label_1684e8:
    if (ctx->pc == 0x1684E8u) {
        ctx->pc = 0x1684ECu;
        goto label_1684ec;
    }
    ctx->pc = 0x1684E4u;
    {
        const bool branch_taken_0x1684e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684e4) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1684ECu;
label_1684ec:
    // 0x1684ec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1684f0:
    if (ctx->pc == 0x1684F0u) {
        ctx->pc = 0x1684F4u;
        goto label_1684f4;
    }
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x168500u;
            goto label_168500;
        }
    }
    ctx->pc = 0x1684F4u;
label_1684f4:
    // 0x1684f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1684f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1684f8:
    // 0x1684f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_1684fc:
    if (ctx->pc == 0x1684FCu) {
        ctx->pc = 0x168500u;
        goto label_168500;
    }
    ctx->pc = 0x1684F8u;
    {
        const bool branch_taken_0x1684f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684f8) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168500u;
label_168500:
    // 0x168500: 0x148c0003  bne         $a0, $t4, . + 4 + (0x3 << 2)
label_168504:
    if (ctx->pc == 0x168504u) {
        ctx->pc = 0x168508u;
        goto label_168508;
    }
    ctx->pc = 0x168500u;
    {
        const bool branch_taken_0x168500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x168500) {
            ctx->pc = 0x168510u;
            goto label_168510;
        }
    }
    ctx->pc = 0x168508u;
label_168508:
    // 0x168508: 0x10000021  b           . + 4 + (0x21 << 2)
label_16850c:
    if (ctx->pc == 0x16850Cu) {
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168508u;
        // 0x16850c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168510u;
        goto label_168510;
    }
    ctx->pc = 0x168508u;
    {
        const bool branch_taken_0x168508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168508u;
        // 0x16850c: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x168508) {
            ctx->pc = 0x168590u;
            goto label_168590;
        }
    }
    ctx->pc = 0x168510u;
label_168510:
    // 0x168510: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168514:
    // 0x168514: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x168514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_168518:
    // 0x168518: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x168518u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16851c:
    // 0x16851c: 0x10000005  b           . + 4 + (0x5 << 2)
label_168520:
    if (ctx->pc == 0x168520u) {
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168524u;
        goto label_168524;
    }
    ctx->pc = 0x16851Cu;
    {
        const bool branch_taken_0x16851c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16851Cu;
        // 0x168520: 0x48080  sll         $s0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16851c) {
            ctx->pc = 0x168534u;
            goto label_168534;
        }
    }
    ctx->pc = 0x168524u;
label_168524:
    // 0x168524: 0x0  nop
    ctx->pc = 0x168524u;
    // NOP
label_168528:
    // 0x168528: 0x330c821  addu        $t9, $t9, $s0
    ctx->pc = 0x168528u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 16)));
label_16852c:
    // 0x16852c: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x16852cu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
label_168530:
    // 0x168530: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_168534:
    // 0x168534: 0x0  nop
    ctx->pc = 0x168534u;
    // NOP
label_168538:
    // 0x168538: 0x795021  addu        $t2, $v1, $t9
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_16853c:
    // 0x16853c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x16853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168540:
    // 0x168540: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x168540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168544:
    // 0x168544: 0x0  nop
    ctx->pc = 0x168544u;
    // NOP
label_168548:
    // 0x168548: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_16854c:
    if (ctx->pc == 0x16854Cu) {
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xd5080  sll         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168550u;
        goto label_168550;
    }
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xd5080  sll         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168548) {
            ctx->pc = 0x168524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168524;
        }
    }
    ctx->pc = 0x168550u;
label_168550:
    // 0x168550: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_168554:
    // 0x168554: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x168554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_168558:
    // 0x168558: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x168558u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
label_16855c:
    // 0x16855c: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x16855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_168560:
    // 0x168560: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x168560u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_168564:
    // 0x168564: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x168564u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
label_168568:
    // 0x168568: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x168568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_16856c:
    // 0x16856c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x16856cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_168570:
    // 0x168570: 0xc5430004  lwc1        $f3, 0x4($t2)
    ctx->pc = 0x168570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168574:
    // 0x168574: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x168574u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_168578:
    // 0x168578: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_16857c:
    // 0x16857c: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x16857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168580:
    // 0x168580: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168580u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
label_168584:
    // 0x168584: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x168584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_168588:
    // 0x168588: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168588u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_16858c:
    // 0x16858c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16858cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_168590:
    // 0x168590: 0xe50c0  sll         $t2, $t6, 3
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
label_168594:
    // 0x168594: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x168594u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
label_168598:
    // 0x168598: 0x2f010006  sltiu       $at, $t8, 0x6
    ctx->pc = 0x168598u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_16859c:
    // 0x16859c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x16859cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1685a0:
    // 0x1685a0: 0xaa6821  addu        $t5, $a1, $t2
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_1685a4:
    // 0x1685a4: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1685a8:
    if (ctx->pc == 0x1685A8u) {
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685ACu;
        goto label_1685ac;
    }
    ctx->pc = 0x1685A4u;
    {
        const bool branch_taken_0x1685a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685A4u;
        // 0x1685a8: 0xa1a0008c  sb          $zero, 0x8C($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685a4) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685ACu;
label_1685ac:
    // 0x1685ac: 0x185080  sll         $t2, $t8, 2
    ctx->pc = 0x1685acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
label_1685b0:
    // 0x1685b0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_1685b4:
    // 0x1685b4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1685b8:
    // 0x1685b8: 0x1400008  jr          $t2
label_1685bc:
    if (ctx->pc == 0x1685BCu) {
        ctx->pc = 0x1685C0u;
        goto label_1685c0;
    }
    ctx->pc = 0x1685B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1685B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1685C0u;
label_1685c0:
    // 0x1685c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1685c4:
    if (ctx->pc == 0x1685C4u) {
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685C8u;
        goto label_1685c8;
    }
    ctx->pc = 0x1685C0u;
    {
        const bool branch_taken_0x1685c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C0u;
        // 0x1685c4: 0xe5a00000  swc1        $f0, 0x0($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1685cc:
    if (ctx->pc == 0x1685CCu) {
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D0u;
        goto label_1685d0;
    }
    ctx->pc = 0x1685C8u;
    {
        const bool branch_taken_0x1685c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685C8u;
        // 0x1685cc: 0xe5a00004  swc1        $f0, 0x4($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685c8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685D0u;
label_1685d0:
    // 0x1685d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1685d4:
    if (ctx->pc == 0x1685D4u) {
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685D8u;
        goto label_1685d8;
    }
    ctx->pc = 0x1685D0u;
    {
        const bool branch_taken_0x1685d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D0u;
        // 0x1685d4: 0xe5a00008  swc1        $f0, 0x8($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685D8u;
label_1685d8:
    // 0x1685d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1685dc:
    if (ctx->pc == 0x1685DCu) {
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E0u;
        goto label_1685e0;
    }
    ctx->pc = 0x1685D8u;
    {
        const bool branch_taken_0x1685d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685D8u;
        // 0x1685dc: 0xe5a00010  swc1        $f0, 0x10($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685d8) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685E0u;
label_1685e0:
    // 0x1685e0: 0x15c00006  bnez        $t6, . + 4 + (0x6 << 2)
label_1685e4:
    if (ctx->pc == 0x1685E4u) {
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685E8u;
        goto label_1685e8;
    }
    ctx->pc = 0x1685E0u;
    {
        const bool branch_taken_0x1685e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685E0u;
        // 0x1685e4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685e0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685E8u;
label_1685e8:
    // 0x1685e8: 0xc5a00014  lwc1        $f0, 0x14($t5)
    ctx->pc = 0x1685e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1685ec:
    // 0x1685ec: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1685ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1685f0:
    // 0x1685f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1685f4:
    if (ctx->pc == 0x1685F4u) {
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1685F8u;
        goto label_1685f8;
    }
    ctx->pc = 0x1685F0u;
    {
        const bool branch_taken_0x1685f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1685F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1685F0u;
        // 0x1685f4: 0xe5a00014  swc1        $f0, 0x14($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1685f0) {
            ctx->pc = 0x1685FCu;
            goto label_1685fc;
        }
    }
    ctx->pc = 0x1685F8u;
label_1685f8:
    // 0x1685f8: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x1685f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
label_1685fc:
    // 0x1685fc: 0x0  nop
    ctx->pc = 0x1685fcu;
    // NOP
label_168600:
    // 0x168600: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_168604:
    // 0x168604: 0x8f2018  mult        $a0, $a0, $t7
    ctx->pc = 0x168604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_168608:
    // 0x168608: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16860c:
    // 0x16860c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_168610:
    // 0x168610: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_168614:
    // 0x168614: 0x1480ffa7  bnez        $a0, . + 4 + (-0x59 << 2)
label_168618:
    if (ctx->pc == 0x168618u) {
        ctx->pc = 0x16861Cu;
        goto label_fallthrough_0x168614;
    }
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x168614) {
            ctx->pc = 0x1684B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1684b4;
        }
    }
label_fallthrough_0x168614:
    ctx->pc = 0x16861Cu;
}
