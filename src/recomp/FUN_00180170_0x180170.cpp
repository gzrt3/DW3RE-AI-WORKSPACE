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

// Function: FUN_00180170
// Address: 0x180170 - 0x180330
void FUN_00180170_0x180170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180170_0x180170");
#endif

    switch (ctx->pc) {
        case 0x1801c4u: goto label_1801c4;
        case 0x18030cu: goto label_18030c;
        case 0x180318u: goto label_180318;
        case 0x180328u: goto label_180328;
        default: break;
    }

    ctx->pc = 0x180170u;

    // 0x180170: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x180170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x180174: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x180174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x180178: 0x246394e0  addiu       $v1, $v1, -0x6B20
    ctx->pc = 0x180178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939872));
    // 0x18017c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x18017cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x180180: 0x244294c0  addiu       $v0, $v0, -0x6B40
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939840));
    // 0x180184: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x180184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x180188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18018c: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x18018cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x180190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180194: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x180198: 0xaf8487b0  sw          $a0, -0x7850($gp)
    ctx->pc = 0x180198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936496), GPR_U32(ctx, 4));
    // 0x18019c: 0x244294d0  addiu       $v0, $v0, -0x6B30
    ctx->pc = 0x18019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1801a0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1801a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1801a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1801a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1801a8: 0xaf8387a8  sw          $v1, -0x7858($gp)
    ctx->pc = 0x1801a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936488), GPR_U32(ctx, 3));
    // 0x1801ac: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1801b0: 0xaf8287ac  sw          $v0, -0x7854($gp)
    ctx->pc = 0x1801b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936492), GPR_U32(ctx, 2));
    // 0x1801b4: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x1801b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1801b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1801b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801bc: 0xc0600dc  jal         func_180370
    ctx->pc = 0x1801BCu;
    SET_GPR_U32(ctx, 31, 0x1801C4u);
    ctx->pc = 0x1801C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801BCu;
    // 0x1801c0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180370u, 0x1801BCu, 0x1801C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1801C4u;
label_1801c4:
    // 0x1801c4: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x1801c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1801c8: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1801c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1801cc: 0x34480fff  ori         $t0, $v0, 0xFFF
    ctx->pc = 0x1801ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4095);
    // 0x1801d0: 0x30070001  andi        $a3, $zero, 0x1
    ctx->pc = 0x1801d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1801d4: 0x8f8a87a8  lw          $t2, -0x7858($gp)
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936488)));
    // 0x1801d8: 0x2409f000  addiu       $t1, $zero, -0x1000
    ctx->pc = 0x1801d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1801dc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1801dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1801e0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1801e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1801e4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1801e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1801e8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1801e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1801ec: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1801ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1801f0: 0xdd6b0010  ld          $t3, 0x10($t3)
    ctx->pc = 0x1801f0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1801f4: 0xfd4b0000  sd          $t3, 0x0($t2)
    ctx->pc = 0x1801f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 11));
    // 0x1801f8: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1801fc: 0x8f8a87a8  lw          $t2, -0x7858($gp)
    ctx->pc = 0x1801fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936488)));
    // 0x180200: 0xdd6b0018  ld          $t3, 0x18($t3)
    ctx->pc = 0x180200u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x180204: 0xfd4b0008  sd          $t3, 0x8($t2)
    ctx->pc = 0x180204u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 11));
    // 0x180208: 0x8f8c87a8  lw          $t4, -0x7858($gp)
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936488)));
    // 0x18020c: 0x958a0008  lhu         $t2, 0x8($t4)
    ctx->pc = 0x18020cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x180210: 0x314b0fff  andi        $t3, $t2, 0xFFF
    ctx->pc = 0x180210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4095);
    // 0x180214: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x180218: 0x1495024  and         $t2, $t2, $t1
    ctx->pc = 0x180218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x18021c: 0x316b0fff  andi        $t3, $t3, 0xFFF
    ctx->pc = 0x18021cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4095);
    // 0x180220: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x180220u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x180224: 0xa58a0008  sh          $t2, 0x8($t4)
    ctx->pc = 0x180224u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 8), (uint16_t)GPR_U32(ctx, 10));
    // 0x180228: 0x8f8c87a8  lw          $t4, -0x7858($gp)
    ctx->pc = 0x180228u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936488)));
    // 0x18022c: 0x8d8a0008  lw          $t2, 0x8($t4)
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x180230: 0xa5a7c  dsll32      $t3, $t2, 9
    ctx->pc = 0x180230u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 9));
    // 0x180234: 0xb5d7e  dsrl32      $t3, $t3, 21
    ctx->pc = 0x180234u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 21));
    // 0x180238: 0x1485024  and         $t2, $t2, $t0
    ctx->pc = 0x180238u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x18023c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x18023cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x180240: 0x316b07ff  andi        $t3, $t3, 0x7FF
    ctx->pc = 0x180240u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x180244: 0xb5b00  sll         $t3, $t3, 12
    ctx->pc = 0x180244u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 12));
    // 0x180248: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x180248u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x18024c: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x18024cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x180250: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x180250u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x180254: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x180254u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x180258: 0x1465024  and         $t2, $t2, $a2
    ctx->pc = 0x180258u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 6));
    // 0x18025c: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x18025cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x180260: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x180260u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x180264: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x180264u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x180268: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x180268u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18026c: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x18026cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x180270: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x180270u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x180274: 0xa16a0000  sb          $t2, 0x0($t3)
    ctx->pc = 0x180274u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x180278: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x180278u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x18027c: 0x8f8a87ac  lw          $t2, -0x7854($gp)
    ctx->pc = 0x18027cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936492)));
    // 0x180280: 0xdd6b0038  ld          $t3, 0x38($t3)
    ctx->pc = 0x180280u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 56)));
    // 0x180284: 0xfd4b0000  sd          $t3, 0x0($t2)
    ctx->pc = 0x180284u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 11));
    // 0x180288: 0x8f8b87b0  lw          $t3, -0x7850($gp)
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x18028c: 0x8f8a87ac  lw          $t2, -0x7854($gp)
    ctx->pc = 0x18028cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936492)));
    // 0x180290: 0xdd6b0040  ld          $t3, 0x40($t3)
    ctx->pc = 0x180290u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x180294: 0xfd4b0008  sd          $t3, 0x8($t2)
    ctx->pc = 0x180294u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 11));
    // 0x180298: 0x8f8b87ac  lw          $t3, -0x7854($gp)
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936492)));
    // 0x18029c: 0x956a0008  lhu         $t2, 0x8($t3)
    ctx->pc = 0x18029cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1802a0: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x1802a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x1802a4: 0x314a0fff  andi        $t2, $t2, 0xFFF
    ctx->pc = 0x1802a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4095);
    // 0x1802a8: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1802ac: 0x314a0fff  andi        $t2, $t2, 0xFFF
    ctx->pc = 0x1802acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4095);
    // 0x1802b0: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1802b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1802b4: 0xa5690008  sh          $t1, 0x8($t3)
    ctx->pc = 0x1802b4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 9));
    // 0x1802b8: 0x8f8a87ac  lw          $t2, -0x7854($gp)
    ctx->pc = 0x1802b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936492)));
    // 0x1802bc: 0x8d490008  lw          $t1, 0x8($t2)
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1802c0: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x1802c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x1802c4: 0x94a7c  dsll32      $t1, $t1, 9
    ctx->pc = 0x1802c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 9));
    // 0x1802c8: 0x94d7e  dsrl32      $t1, $t1, 21
    ctx->pc = 0x1802c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 21));
    // 0x1802cc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1802ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1802d0: 0x312907ff  andi        $t1, $t1, 0x7FF
    ctx->pc = 0x1802d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2047);
    // 0x1802d4: 0x94b00  sll         $t1, $t1, 12
    ctx->pc = 0x1802d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 12));
    // 0x1802d8: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1802d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x1802dc: 0xad480008  sw          $t0, 0x8($t2)
    ctx->pc = 0x1802dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 8));
    // 0x1802e0: 0x8f8987b0  lw          $t1, -0x7850($gp)
    ctx->pc = 0x1802e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1802e4: 0x91280028  lbu         $t0, 0x28($t1)
    ctx->pc = 0x1802e4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x1802e8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1802e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x1802ec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1802ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1802f0: 0xa1260028  sb          $a2, 0x28($t1)
    ctx->pc = 0x1802f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x1802f4: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    // 0x1802f8: 0x90e60028  lbu         $a2, 0x28($a3)
    ctx->pc = 0x1802f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1802fc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1802fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x180300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x180304: 0xc06dfac  jal         func_1B7EB0
    ctx->pc = 0x180304u;
    SET_GPR_U32(ctx, 31, 0x18030Cu);
    ctx->pc = 0x180308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180304u;
    // 0x180308: 0xa0e20028  sb          $v0, 0x28($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 40), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EB0u, 0x180304u, 0x18030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18030Cu;
label_18030c:
    // 0x18030c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x180310: 0xc06dfac  jal         func_1B7EB0
    ctx->pc = 0x180310u;
    SET_GPR_U32(ctx, 31, 0x180318u);
    ctx->pc = 0x180314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180310u;
    // 0x180314: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EB0u, 0x180310u, 0x180318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180318u;
label_180318:
    // 0x180318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18031c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180320: 0xc06dfd4  jal         func_1B7F50
    ctx->pc = 0x180320u;
    SET_GPR_U32(ctx, 31, 0x180328u);
    ctx->pc = 0x180324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180320u;
    // 0x180324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F50u, 0x180320u, 0x180328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180328u;
label_180328:
    // 0x180328: 0xaf8087a0  sw          $zero, -0x7860($gp)
    ctx->pc = 0x180328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936480), GPR_U32(ctx, 0));
    // 0x18032c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x180330u;
}
