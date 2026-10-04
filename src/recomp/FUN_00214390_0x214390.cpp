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

// Function: FUN_00214390
// Address: 0x214390 - 0x2148c8
void FUN_00214390_0x214390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00214390_0x214390");
#endif

    switch (ctx->pc) {
        case 0x21452cu: goto label_21452c;
        case 0x214694u: goto label_214694;
        case 0x21475cu: goto label_21475c;
        case 0x2148c4u: goto label_2148c4;
        default: break;
    }

    ctx->pc = 0x214390u;

    // 0x214390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214398: 0x8f8391cc  lw          $v1, -0x6E34($gp)
    ctx->pc = 0x214398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
    // 0x21439c: 0x10600149  beqz        $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x21439Cu;
    {
        const bool branch_taken_0x21439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21439Cu;
        // 0x2143a0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21439c) {
            ctx->pc = 0x2148C4u;
            goto label_2148c4;
        }
    }
    ctx->pc = 0x2143A4u;
    // 0x2143a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2143a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2143a8: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x2143a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x2143ac: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2143acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2143b0: 0x8f8f9208  lw          $t7, -0x6DF8($gp)
    ctx->pc = 0x2143b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939144)));
    // 0x2143b4: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x2143b8: 0x8f8c9200  lw          $t4, -0x6E00($gp)
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939136)));
    // 0x2143bc: 0x25297930  addiu       $t1, $t1, 0x7930
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31024));
    // 0x2143c0: 0x8f8d920c  lw          $t5, -0x6DF4($gp)
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939148)));
    // 0x2143c4: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x2143c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2143c8: 0x8f8e9204  lw          $t6, -0x6DFC($gp)
    ctx->pc = 0x2143c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939140)));
    // 0x2143cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2143d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2143d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2143d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2143d8: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x2143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2143dc: 0xb2940  sll         $a1, $t3, 5
    ctx->pc = 0x2143dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 5));
    // 0x2143e0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2143e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2143e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2143e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2143ec: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x2143ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2143f0: 0x4b5821  addu        $t3, $v0, $t3
    ctx->pc = 0x2143f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2143f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2143f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2143f8: 0x1ec1021  addu        $v0, $t7, $t4
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x2143fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2143fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214400: 0xb6180  sll         $t4, $t3, 6
    ctx->pc = 0x214400u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x214404: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x214404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x214408: 0x24ab6c00  addiu       $t3, $a1, 0x6C00
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x21440c: 0x12c2821  addu        $a1, $t1, $t4
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x214410: 0xd48c0  sll         $t1, $t5, 3
    ctx->pc = 0x214410u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x214414: 0x244c6c00  addiu       $t4, $v0, 0x6C00
    ctx->pc = 0x214414u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x214418: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x214418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
    // 0x21441c: 0xa4ab0080  sh          $t3, 0x80($a1)
    ctx->pc = 0x21441cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 11));
    // 0x214420: 0xa4a90082  sh          $t1, 0x82($a1)
    ctx->pc = 0x214420u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 9));
    // 0x214424: 0x1ae1021  addu        $v0, $t5, $t6
    ctx->pc = 0x214424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x214428: 0xacaa0084  sw          $t2, 0x84($a1)
    ctx->pc = 0x214428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 10));
    // 0x21442c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21442cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x214430: 0xa4ac0090  sh          $t4, 0x90($a1)
    ctx->pc = 0x214430u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 12));
    // 0x214434: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x214438: 0xa4a90092  sh          $t1, 0x92($a1)
    ctx->pc = 0x214438u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 9));
    // 0x21443c: 0xacaa0094  sw          $t2, 0x94($a1)
    ctx->pc = 0x21443cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 10));
    // 0x214440: 0xa4ab00a0  sh          $t3, 0xA0($a1)
    ctx->pc = 0x214440u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 11));
    // 0x214444: 0xa4a200a2  sh          $v0, 0xA2($a1)
    ctx->pc = 0x214444u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x214448: 0xacaa00a4  sw          $t2, 0xA4($a1)
    ctx->pc = 0x214448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 10));
    // 0x21444c: 0xa4ac00b0  sh          $t4, 0xB0($a1)
    ctx->pc = 0x21444cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 12));
    // 0x214450: 0xa4a200b2  sh          $v0, 0xB2($a1)
    ctx->pc = 0x214450u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 2));
    // 0x214454: 0xacaa00b4  sw          $t2, 0xB4($a1)
    ctx->pc = 0x214454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 10));
    // 0x214458: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x214458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30976)));
    // 0x21445c: 0xa0a20078  sb          $v0, 0x78($a1)
    ctx->pc = 0x21445cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x214460: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214464: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214464u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587904u));
    // 0x214468: 0xa0a20079  sb          $v0, 0x79($a1)
    ctx->pc = 0x214468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x21446c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214470: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587908u));
    // 0x214474: 0xa0a2007a  sb          $v0, 0x7A($a1)
    ctx->pc = 0x214474u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 122), (uint8_t)GPR_U32(ctx, 2));
    // 0x214478: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21447c: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x58790Cu));
    // 0x214480: 0xa0a2007b  sb          $v0, 0x7B($a1)
    ctx->pc = 0x214480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 123), (uint8_t)GPR_U32(ctx, 2));
    // 0x214484: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214488: 0xaca3007c  sw          $v1, 0x7C($a1)
    ctx->pc = 0x214488u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
    // 0x21448c: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587900u));
    // 0x214490: 0xa0a20088  sb          $v0, 0x88($a1)
    ctx->pc = 0x214490u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x214494: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214498: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214498u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587904u));
    // 0x21449c: 0xa0a20089  sb          $v0, 0x89($a1)
    ctx->pc = 0x21449cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144a4: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x2144a4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587908u));
    // 0x2144a8: 0xa0a2008a  sb          $v0, 0x8A($a1)
    ctx->pc = 0x2144a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144ac: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144b0: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x58790Cu));
    // 0x2144b4: 0xa0a2008b  sb          $v0, 0x8B($a1)
    ctx->pc = 0x2144b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144bc: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2144bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
    // 0x2144c0: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587900u));
    // 0x2144c4: 0xa0a20098  sb          $v0, 0x98($a1)
    ctx->pc = 0x2144c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 152), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144cc: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x2144ccu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587904u));
    // 0x2144d0: 0xa0a20099  sb          $v0, 0x99($a1)
    ctx->pc = 0x2144d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 153), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144d8: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x2144d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587908u));
    // 0x2144dc: 0xa0a2009a  sb          $v0, 0x9A($a1)
    ctx->pc = 0x2144dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 154), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144e0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144e4: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x2144e4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x58790Cu));
    // 0x2144e8: 0xa0a2009b  sb          $v0, 0x9B($a1)
    ctx->pc = 0x2144e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 155), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2144f0: 0xaca3009c  sw          $v1, 0x9C($a1)
    ctx->pc = 0x2144f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
    // 0x2144f4: 0x80227900  lb          $v0, 0x7900($at)
    ctx->pc = 0x2144f4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587900u));
    // 0x2144f8: 0xa0a200a8  sb          $v0, 0xA8($a1)
    ctx->pc = 0x2144f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 2));
    // 0x2144fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214500: 0x80227904  lb          $v0, 0x7904($at)
    ctx->pc = 0x214500u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587904u));
    // 0x214504: 0xa0a200a9  sb          $v0, 0xA9($a1)
    ctx->pc = 0x214504u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 2));
    // 0x214508: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21450c: 0x80227908  lb          $v0, 0x7908($at)
    ctx->pc = 0x21450cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x587908u));
    // 0x214510: 0xa0a200aa  sb          $v0, 0xAA($a1)
    ctx->pc = 0x214510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 2));
    // 0x214514: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214518: 0x8022790c  lb          $v0, 0x790C($at)
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x58790Cu));
    // 0x21451c: 0xa0a200ab  sb          $v0, 0xAB($a1)
    ctx->pc = 0x21451cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 171), (uint8_t)GPR_U32(ctx, 2));
    // 0x214520: 0xaca300ac  sw          $v1, 0xAC($a1)
    ctx->pc = 0x214520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 3));
    // 0x214524: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x214528: 0x244278f0  addiu       $v0, $v0, 0x78F0
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30960));
label_21452c:
    // 0x21452c: 0x475821  addu        $t3, $v0, $a3
    ctx->pc = 0x21452cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x214530: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x214534: 0x8f8c91f8  lw          $t4, -0x6E08($gp)
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939128)));
    // 0x214538: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21453c: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x21453cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x214540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x214540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x214544: 0x8d780004  lw          $t8, 0x4($t3)
    ctx->pc = 0x214544u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x214548: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x214548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x21454c: 0x8f9991fc  lw          $t9, -0x6E04($gp)
    ctx->pc = 0x21454cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939132)));
    // 0x214550: 0x250800b0  addiu       $t0, $t0, 0xB0
    ctx->pc = 0x214550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 176));
    // 0x214554: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x214558: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x21455c: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x21455cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x214560: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x214560u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x214564: 0x258f6c00  addiu       $t7, $t4, 0x6C00
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
    // 0x214568: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x21456c: 0xa52e0130  sh          $t6, 0x130($t1)
    ctx->pc = 0x21456cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 304), (uint16_t)GPR_U32(ctx, 14));
    // 0x214570: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x214574: 0x3196021  addu        $t4, $t8, $t9
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x214578: 0xa52d0132  sh          $t5, 0x132($t1)
    ctx->pc = 0x214578u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 306), (uint16_t)GPR_U32(ctx, 13));
    // 0x21457c: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x21457cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x214580: 0xad2a0134  sw          $t2, 0x134($t1)
    ctx->pc = 0x214580u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 308), GPR_U32(ctx, 10));
    // 0x214584: 0x258c7900  addiu       $t4, $t4, 0x7900
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 30976));
    // 0x214588: 0xa52f0140  sh          $t7, 0x140($t1)
    ctx->pc = 0x214588u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 320), (uint16_t)GPR_U32(ctx, 15));
    // 0x21458c: 0x28cb0002  slti        $t3, $a2, 0x2
    ctx->pc = 0x21458cu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214590: 0xa52d0142  sh          $t5, 0x142($t1)
    ctx->pc = 0x214590u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 322), (uint16_t)GPR_U32(ctx, 13));
    // 0x214594: 0xad2a0144  sw          $t2, 0x144($t1)
    ctx->pc = 0x214594u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 10));
    // 0x214598: 0xa52e0150  sh          $t6, 0x150($t1)
    ctx->pc = 0x214598u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 336), (uint16_t)GPR_U32(ctx, 14));
    // 0x21459c: 0xa52c0152  sh          $t4, 0x152($t1)
    ctx->pc = 0x21459cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 338), (uint16_t)GPR_U32(ctx, 12));
    // 0x2145a0: 0xad2a0154  sw          $t2, 0x154($t1)
    ctx->pc = 0x2145a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 10));
    // 0x2145a4: 0xa52f0160  sh          $t7, 0x160($t1)
    ctx->pc = 0x2145a4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 15));
    // 0x2145a8: 0xa52c0162  sh          $t4, 0x162($t1)
    ctx->pc = 0x2145a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 354), (uint16_t)GPR_U32(ctx, 12));
    // 0x2145ac: 0xad2a0164  sw          $t2, 0x164($t1)
    ctx->pc = 0x2145acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 356), GPR_U32(ctx, 10));
    // 0x2145b0: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x2145b0u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30944)));
    // 0x2145b4: 0xa12c0128  sb          $t4, 0x128($t1)
    ctx->pc = 0x2145b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 296), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145bc: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x2145bcu;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E4u));
    // 0x2145c0: 0xa12c0129  sb          $t4, 0x129($t1)
    ctx->pc = 0x2145c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 297), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145c4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145c8: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E8u));
    // 0x2145cc: 0xa12c012a  sb          $t4, 0x12A($t1)
    ctx->pc = 0x2145ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 298), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145d0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145d4: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x2145d4u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878ECu));
    // 0x2145d8: 0xa12c012b  sb          $t4, 0x12B($t1)
    ctx->pc = 0x2145d8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 299), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145e0: 0xad23012c  sw          $v1, 0x12C($t1)
    ctx->pc = 0x2145e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 300), GPR_U32(ctx, 3));
    // 0x2145e4: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E0u));
    // 0x2145e8: 0xa12c0138  sb          $t4, 0x138($t1)
    ctx->pc = 0x2145e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 312), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145ec: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145f0: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x2145f0u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E4u));
    // 0x2145f4: 0xa12c0139  sb          $t4, 0x139($t1)
    ctx->pc = 0x2145f4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 313), (uint8_t)GPR_U32(ctx, 12));
    // 0x2145f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2145fc: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E8u));
    // 0x214600: 0xa12c013a  sb          $t4, 0x13A($t1)
    ctx->pc = 0x214600u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 314), (uint8_t)GPR_U32(ctx, 12));
    // 0x214604: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214608: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x214608u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878ECu));
    // 0x21460c: 0xa12c013b  sb          $t4, 0x13B($t1)
    ctx->pc = 0x21460cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 315), (uint8_t)GPR_U32(ctx, 12));
    // 0x214610: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214614: 0xad23013c  sw          $v1, 0x13C($t1)
    ctx->pc = 0x214614u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 316), GPR_U32(ctx, 3));
    // 0x214618: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E0u));
    // 0x21461c: 0xa12c0148  sb          $t4, 0x148($t1)
    ctx->pc = 0x21461cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 328), (uint8_t)GPR_U32(ctx, 12));
    // 0x214620: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214624: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x214624u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E4u));
    // 0x214628: 0xa12c0149  sb          $t4, 0x149($t1)
    ctx->pc = 0x214628u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 329), (uint8_t)GPR_U32(ctx, 12));
    // 0x21462c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214630: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E8u));
    // 0x214634: 0xa12c014a  sb          $t4, 0x14A($t1)
    ctx->pc = 0x214634u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 330), (uint8_t)GPR_U32(ctx, 12));
    // 0x214638: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21463c: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878ECu));
    // 0x214640: 0xa12c014b  sb          $t4, 0x14B($t1)
    ctx->pc = 0x214640u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 331), (uint8_t)GPR_U32(ctx, 12));
    // 0x214644: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214648: 0xad23014c  sw          $v1, 0x14C($t1)
    ctx->pc = 0x214648u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 332), GPR_U32(ctx, 3));
    // 0x21464c: 0x802c78e0  lb          $t4, 0x78E0($at)
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E0u));
    // 0x214650: 0xa12c0158  sb          $t4, 0x158($t1)
    ctx->pc = 0x214650u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 344), (uint8_t)GPR_U32(ctx, 12));
    // 0x214654: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214658: 0x802c78e4  lb          $t4, 0x78E4($at)
    ctx->pc = 0x214658u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E4u));
    // 0x21465c: 0xa12c0159  sb          $t4, 0x159($t1)
    ctx->pc = 0x21465cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 345), (uint8_t)GPR_U32(ctx, 12));
    // 0x214660: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214664: 0x802c78e8  lb          $t4, 0x78E8($at)
    ctx->pc = 0x214664u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878E8u));
    // 0x214668: 0xa12c015a  sb          $t4, 0x15A($t1)
    ctx->pc = 0x214668u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 346), (uint8_t)GPR_U32(ctx, 12));
    // 0x21466c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214670: 0x802c78ec  lb          $t4, 0x78EC($at)
    ctx->pc = 0x214670u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x5878ECu));
    // 0x214674: 0xa12c015b  sb          $t4, 0x15B($t1)
    ctx->pc = 0x214674u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 347), (uint8_t)GPR_U32(ctx, 12));
    // 0x214678: 0x1560ffac  bnez        $t3, . + 4 + (-0x54 << 2)
    ctx->pc = 0x214678u;
    {
        const bool branch_taken_0x214678 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x21467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214678u;
        // 0x21467c: 0xad23015c  sw          $v1, 0x15C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214678) {
            ctx->pc = 0x21452Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21452c;
        }
    }
    ctx->pc = 0x214680u;
    // 0x214680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214688: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x214688u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21468c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x21468cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214690: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_214694:
    // 0x214694: 0x8f8c91f0  lw          $t4, -0x6E10($gp)
    ctx->pc = 0x214694u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939120)));
    // 0x214698: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21469c: 0x1464823  subu        $t1, $t2, $a2
    ctx->pc = 0x21469cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2146a0: 0x8f9891f4  lw          $t8, -0x6E0C($gp)
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939124)));
    // 0x2146a4: 0x8f8e91e8  lw          $t6, -0x6E18($gp)
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939112)));
    // 0x2146a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2146a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2146ac: 0x8f9991ec  lw          $t9, -0x6E14($gp)
    ctx->pc = 0x2146acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939116)));
    // 0x2146b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2146b4: 0x28c70002  slti        $a3, $a2, 0x2
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2146b8: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2146b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2146bc: 0xc5900  sll         $t3, $t4, 4
    ctx->pc = 0x2146bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2146c0: 0x256f6c00  addiu       $t7, $t3, 0x6C00
    ctx->pc = 0x2146c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x2146c4: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x2146c8: 0x1858c0  sll         $t3, $t8, 3
    ctx->pc = 0x2146c8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x2146cc: 0x256e7900  addiu       $t6, $t3, 0x7900
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x2146d0: 0xa46f02a0  sh          $t7, 0x2A0($v1)
    ctx->pc = 0x2146d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 672), (uint16_t)GPR_U32(ctx, 15));
    // 0x2146d4: 0x3195821  addu        $t3, $t8, $t9
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x2146d8: 0xa46e02a2  sh          $t6, 0x2A2($v1)
    ctx->pc = 0x2146d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 674), (uint16_t)GPR_U32(ctx, 14));
    // 0x2146dc: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2146e0: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2146e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2146e4: 0x258c6c00  addiu       $t4, $t4, 0x6C00
    ctx->pc = 0x2146e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
    // 0x2146e8: 0xac6d02a4  sw          $t5, 0x2A4($v1)
    ctx->pc = 0x2146e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 676), GPR_U32(ctx, 13));
    // 0x2146ec: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x2146f0: 0xa46c02b0  sh          $t4, 0x2B0($v1)
    ctx->pc = 0x2146f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 688), (uint16_t)GPR_U32(ctx, 12));
    // 0x2146f4: 0xa46b02b2  sh          $t3, 0x2B2($v1)
    ctx->pc = 0x2146f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 690), (uint16_t)GPR_U32(ctx, 11));
    // 0x2146f8: 0xac6d02b4  sw          $t5, 0x2B4($v1)
    ctx->pc = 0x2146f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 692), GPR_U32(ctx, 13));
    // 0x2146fc: 0x802b78d0  lb          $t3, 0x78D0($at)
    ctx->pc = 0x2146fcu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30928)));
    // 0x214700: 0xa06b0290  sb          $t3, 0x290($v1)
    ctx->pc = 0x214700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 656), (uint8_t)GPR_U32(ctx, 11));
    // 0x214704: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214708: 0x802b78d4  lb          $t3, 0x78D4($at)
    ctx->pc = 0x214708u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5878D4u));
    // 0x21470c: 0xa06b0291  sb          $t3, 0x291($v1)
    ctx->pc = 0x21470cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 657), (uint8_t)GPR_U32(ctx, 11));
    // 0x214710: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214714: 0x802b78d8  lb          $t3, 0x78D8($at)
    ctx->pc = 0x214714u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5878D8u));
    // 0x214718: 0xa06b0292  sb          $t3, 0x292($v1)
    ctx->pc = 0x214718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 658), (uint8_t)GPR_U32(ctx, 11));
    // 0x21471c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214720: 0x8c2b78dc  lw          $t3, 0x78DC($at)
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x5878DCu));
    // 0x214724: 0x169001a  div         $zero, $t3, $t1
    ctx->pc = 0x214724u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x214728: 0x0  nop
    ctx->pc = 0x214728u;
    // NOP
    // 0x21472c: 0x0  nop
    ctx->pc = 0x21472cu;
    // NOP
    // 0x214730: 0x4812  mflo        $t1
    ctx->pc = 0x214730u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x214734: 0xa0690293  sb          $t1, 0x293($v1)
    ctx->pc = 0x214734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 659), (uint8_t)GPR_U32(ctx, 9));
    // 0x214738: 0x14e0ffd6  bnez        $a3, . + 4 + (-0x2A << 2)
    ctx->pc = 0x214738u;
    {
        const bool branch_taken_0x214738 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214738u;
        // 0x21473c: 0xac680294  sw          $t0, 0x294($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 660), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214738) {
            ctx->pc = 0x214694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214694;
        }
    }
    ctx->pc = 0x214740u;
    // 0x214740: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214744: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21474c: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x21474cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x214750: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x214754: 0x24637920  addiu       $v1, $v1, 0x7920
    ctx->pc = 0x214754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31008));
    // 0x214758: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_21475c:
    // 0x21475c: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x21475cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x214760: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x214760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x214764: 0x8f8b9210  lw          $t3, -0x6DF0($gp)
    ctx->pc = 0x214764u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939152)));
    // 0x214768: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21476c: 0x8d4d0000  lw          $t5, 0x0($t2)
    ctx->pc = 0x21476cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x214770: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x214770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x214774: 0x8d580004  lw          $t8, 0x4($t2)
    ctx->pc = 0x214774u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x214778: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x214778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x21477c: 0x8f999214  lw          $t9, -0x6DEC($gp)
    ctx->pc = 0x21477cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939156)));
    // 0x214780: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x214784: 0x1ab5821  addu        $t3, $t5, $t3
    ctx->pc = 0x214784u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x214788: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x214788u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x21478c: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x21478cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x214790: 0x25ae6c00  addiu       $t6, $t5, 0x6C00
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 27648));
    // 0x214794: 0x256f6c00  addiu       $t7, $t3, 0x6C00
    ctx->pc = 0x214794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
    // 0x214798: 0x1868c0  sll         $t5, $t8, 3
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x21479c: 0xa50e03d0  sh          $t6, 0x3D0($t0)
    ctx->pc = 0x21479cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 976), (uint16_t)GPR_U32(ctx, 14));
    // 0x2147a0: 0x25ad7900  addiu       $t5, $t5, 0x7900
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 30976));
    // 0x2147a4: 0x3195821  addu        $t3, $t8, $t9
    ctx->pc = 0x2147a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x2147a8: 0xa50d03d2  sh          $t5, 0x3D2($t0)
    ctx->pc = 0x2147a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 978), (uint16_t)GPR_U32(ctx, 13));
    // 0x2147ac: 0xb58c0  sll         $t3, $t3, 3
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2147b0: 0xad0203d4  sw          $v0, 0x3D4($t0)
    ctx->pc = 0x2147b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 980), GPR_U32(ctx, 2));
    // 0x2147b4: 0x256b7900  addiu       $t3, $t3, 0x7900
    ctx->pc = 0x2147b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 30976));
    // 0x2147b8: 0xa50f03e0  sh          $t7, 0x3E0($t0)
    ctx->pc = 0x2147b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 992), (uint16_t)GPR_U32(ctx, 15));
    // 0x2147bc: 0x292a0002  slti        $t2, $t1, 0x2
    ctx->pc = 0x2147bcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2147c0: 0xa50d03e2  sh          $t5, 0x3E2($t0)
    ctx->pc = 0x2147c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 994), (uint16_t)GPR_U32(ctx, 13));
    // 0x2147c4: 0xad0203e4  sw          $v0, 0x3E4($t0)
    ctx->pc = 0x2147c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 2));
    // 0x2147c8: 0xa50e03f0  sh          $t6, 0x3F0($t0)
    ctx->pc = 0x2147c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1008), (uint16_t)GPR_U32(ctx, 14));
    // 0x2147cc: 0xa50b03f2  sh          $t3, 0x3F2($t0)
    ctx->pc = 0x2147ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1010), (uint16_t)GPR_U32(ctx, 11));
    // 0x2147d0: 0xad0203f4  sw          $v0, 0x3F4($t0)
    ctx->pc = 0x2147d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1012), GPR_U32(ctx, 2));
    // 0x2147d4: 0xa50f0400  sh          $t7, 0x400($t0)
    ctx->pc = 0x2147d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1024), (uint16_t)GPR_U32(ctx, 15));
    // 0x2147d8: 0xa50b0402  sh          $t3, 0x402($t0)
    ctx->pc = 0x2147d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1026), (uint16_t)GPR_U32(ctx, 11));
    // 0x2147dc: 0xad020404  sw          $v0, 0x404($t0)
    ctx->pc = 0x2147dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1028), GPR_U32(ctx, 2));
    // 0x2147e0: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 30992)));
    // 0x2147e4: 0xa10b03c8  sb          $t3, 0x3C8($t0)
    ctx->pc = 0x2147e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 968), (uint8_t)GPR_U32(ctx, 11));
    // 0x2147e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2147ec: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x2147ecu;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587914u));
    // 0x2147f0: 0xa10b03c9  sb          $t3, 0x3C9($t0)
    ctx->pc = 0x2147f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 969), (uint8_t)GPR_U32(ctx, 11));
    // 0x2147f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2147f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2147f8: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x2147f8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587918u));
    // 0x2147fc: 0xa10b03ca  sb          $t3, 0x3CA($t0)
    ctx->pc = 0x2147fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 970), (uint8_t)GPR_U32(ctx, 11));
    // 0x214800: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214804: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x58791Cu));
    // 0x214808: 0xa10b03cb  sb          $t3, 0x3CB($t0)
    ctx->pc = 0x214808u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 971), (uint8_t)GPR_U32(ctx, 11));
    // 0x21480c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21480cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214810: 0xad0c03cc  sw          $t4, 0x3CC($t0)
    ctx->pc = 0x214810u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 972), GPR_U32(ctx, 12));
    // 0x214814: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214814u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587910u));
    // 0x214818: 0xa10b03d8  sb          $t3, 0x3D8($t0)
    ctx->pc = 0x214818u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 984), (uint8_t)GPR_U32(ctx, 11));
    // 0x21481c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21481cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214820: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587914u));
    // 0x214824: 0xa10b03d9  sb          $t3, 0x3D9($t0)
    ctx->pc = 0x214824u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 985), (uint8_t)GPR_U32(ctx, 11));
    // 0x214828: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21482c: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x21482cu;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587918u));
    // 0x214830: 0xa10b03da  sb          $t3, 0x3DA($t0)
    ctx->pc = 0x214830u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 986), (uint8_t)GPR_U32(ctx, 11));
    // 0x214834: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214838: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x214838u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x58791Cu));
    // 0x21483c: 0xa10b03db  sb          $t3, 0x3DB($t0)
    ctx->pc = 0x21483cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 987), (uint8_t)GPR_U32(ctx, 11));
    // 0x214840: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214844: 0xad0c03dc  sw          $t4, 0x3DC($t0)
    ctx->pc = 0x214844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 988), GPR_U32(ctx, 12));
    // 0x214848: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587910u));
    // 0x21484c: 0xa10b03e8  sb          $t3, 0x3E8($t0)
    ctx->pc = 0x21484cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1000), (uint8_t)GPR_U32(ctx, 11));
    // 0x214850: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214854: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587914u));
    // 0x214858: 0xa10b03e9  sb          $t3, 0x3E9($t0)
    ctx->pc = 0x214858u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1001), (uint8_t)GPR_U32(ctx, 11));
    // 0x21485c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214860: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587918u));
    // 0x214864: 0xa10b03ea  sb          $t3, 0x3EA($t0)
    ctx->pc = 0x214864u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1002), (uint8_t)GPR_U32(ctx, 11));
    // 0x214868: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21486c: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x58791Cu));
    // 0x214870: 0xa10b03eb  sb          $t3, 0x3EB($t0)
    ctx->pc = 0x214870u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1003), (uint8_t)GPR_U32(ctx, 11));
    // 0x214874: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214878: 0xad0c03ec  sw          $t4, 0x3EC($t0)
    ctx->pc = 0x214878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1004), GPR_U32(ctx, 12));
    // 0x21487c: 0x802b7910  lb          $t3, 0x7910($at)
    ctx->pc = 0x21487cu;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587910u));
    // 0x214880: 0xa10b03f8  sb          $t3, 0x3F8($t0)
    ctx->pc = 0x214880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1016), (uint8_t)GPR_U32(ctx, 11));
    // 0x214884: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214888: 0x802b7914  lb          $t3, 0x7914($at)
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587914u));
    // 0x21488c: 0xa10b03f9  sb          $t3, 0x3F9($t0)
    ctx->pc = 0x21488cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1017), (uint8_t)GPR_U32(ctx, 11));
    // 0x214890: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x214890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x214894: 0x802b7918  lb          $t3, 0x7918($at)
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x587918u));
    // 0x214898: 0xa10b03fa  sb          $t3, 0x3FA($t0)
    ctx->pc = 0x214898u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1018), (uint8_t)GPR_U32(ctx, 11));
    // 0x21489c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2148a0: 0x802b791c  lb          $t3, 0x791C($at)
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x58791Cu));
    // 0x2148a4: 0xa10b03fb  sb          $t3, 0x3FB($t0)
    ctx->pc = 0x2148a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1019), (uint8_t)GPR_U32(ctx, 11));
    // 0x2148a8: 0x1540ffac  bnez        $t2, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2148A8u;
    {
        const bool branch_taken_0x2148a8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2148ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2148A8u;
        // 0x2148ac: 0xad0c03fc  sw          $t4, 0x3FC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2148a8) {
            ctx->pc = 0x21475Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21475c;
        }
    }
    ctx->pc = 0x2148B0u;
    // 0x2148b0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2148b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2148b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2148b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2148b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2148bc: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x2148BCu;
    SET_GPR_U32(ctx, 31, 0x2148C4u);
    ctx->pc = 0x2148C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148BCu;
    // 0x2148c0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x2148BCu, 0x2148C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148C4u;
label_2148c4:
    // 0x2148c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2148c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2148c8u;
}
