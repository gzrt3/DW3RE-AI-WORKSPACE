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

// Function: entry_001c640c
// Address: 0x1c640c - 0x1c64a4
void entry_001c640c_0x1c640c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c640c_0x1c640c");
#endif

    ctx->pc = 0x1c640cu;

    // 0x1c640c: 0x0  nop
    ctx->pc = 0x1c640cu;
    // NOP
    // 0x1c6410: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6410u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6414: 0x254d0130  addiu       $t5, $t2, 0x130
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 304));
    // 0x1c6418: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c641c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1c6420: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6424: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6428: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x1c6428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x1c642c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1c642cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x1c6430: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6430u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6434: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6438: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6438u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c643c: 0xacee0030  sw          $t6, 0x30($a3)
    ctx->pc = 0x1c643cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 14));
    // 0x1c6440: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x1c6440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
    // 0x1c6444: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6444u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6448: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c644c: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6450: 0xacee0048  sw          $t6, 0x48($a3)
    ctx->pc = 0x1c6450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 14));
    // 0x1c6454: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x1c6454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
    // 0x1c6458: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6458u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c645c: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6460: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6464: 0xacee0060  sw          $t6, 0x60($a3)
    ctx->pc = 0x1c6464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 14));
    // 0x1c6468: 0xace20064  sw          $v0, 0x64($a3)
    ctx->pc = 0x1c6468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 2));
    // 0x1c646c: 0xad400130  sw          $zero, 0x130($t2)
    ctx->pc = 0x1c646cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 304), GPR_U32(ctx, 0));
    // 0x1c6470: 0xad400134  sw          $zero, 0x134($t2)
    ctx->pc = 0x1c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 0));
    // 0x1c6474: 0xad400138  sw          $zero, 0x138($t2)
    ctx->pc = 0x1c6474u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 312), GPR_U32(ctx, 0));
    // 0x1c6478: 0xad4c013c  sw          $t4, 0x13C($t2)
    ctx->pc = 0x1c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 316), GPR_U32(ctx, 12));
    // 0x1c647c: 0xdc278ed0  ld          $a3, -0x7130($at)
    ctx->pc = 0x1c647cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
    // 0x1c6480: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1c6480u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1c6484: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c6488: 0xfd470140  sd          $a3, 0x140($t2)
    ctx->pc = 0x1c6488u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 320), GPR_U64(ctx, 7));
    // 0x1c648c: 0xdc278ed8  ld          $a3, -0x7128($at)
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x288ED8u));
    // 0x1c6490: 0xfd470148  sd          $a3, 0x148($t2)
    ctx->pc = 0x1c6490u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 328), GPR_U64(ctx, 7));
    // 0x1c6494: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6494u;
    {
        const bool branch_taken_0x1c6494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6494) {
            ctx->pc = 0x1C64A4u;
            return;
        }
    }
    ctx->pc = 0x1C649Cu;
    // 0x1c649c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C64ACu;
            return;
        }
    }
    ctx->pc = 0x1C64A4u;
}
