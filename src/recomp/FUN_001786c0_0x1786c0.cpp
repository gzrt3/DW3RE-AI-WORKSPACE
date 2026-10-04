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

// Function: FUN_001786c0
// Address: 0x1786c0 - 0x17873c
void FUN_001786c0_0x1786c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001786c0_0x1786c0");
#endif

    switch (ctx->pc) {
        case 0x1786e0u: goto label_1786e0;
        default: break;
    }

    ctx->pc = 0x1786c0u;

    // 0x1786c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1786c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1786c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1786c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1786c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1786cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1786ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1786d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1786d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1786d8: 0xc08dc56  jal         func_237158
    ctx->pc = 0x1786D8u;
    SET_GPR_U32(ctx, 31, 0x1786E0u);
    ctx->pc = 0x1786DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786D8u;
    // 0x1786dc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237158u, 0x1786D8u, 0x1786E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1786E0u;
label_1786e0:
    // 0x1786e0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1786e4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1786e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1786e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1786e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1786ec: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x1786ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
    // 0x1786f0: 0x34a5014b  ori         $a1, $a1, 0x14B
    ctx->pc = 0x1786f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)331);
    // 0x1786f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1786f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1786f8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1786f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1786fc: 0xa2240008  sb          $a0, 0x8($s1)
    ctx->pc = 0x1786fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x178700: 0xa2240009  sb          $a0, 0x9($s1)
    ctx->pc = 0x178700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x178704: 0xa224000a  sb          $a0, 0xA($s1)
    ctx->pc = 0x178704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x178708: 0xa224000b  sb          $a0, 0xB($s1)
    ctx->pc = 0x178708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 4));
    // 0x17870c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17870cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x178710: 0xa2240018  sb          $a0, 0x18($s1)
    ctx->pc = 0x178710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x178714: 0xa2240019  sb          $a0, 0x19($s1)
    ctx->pc = 0x178714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 4));
    // 0x178718: 0xa224001a  sb          $a0, 0x1A($s1)
    ctx->pc = 0x178718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 4));
    // 0x17871c: 0xa224001b  sb          $a0, 0x1B($s1)
    ctx->pc = 0x17871cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 4));
    // 0x178720: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x178720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x178724: 0xa2240028  sb          $a0, 0x28($s1)
    ctx->pc = 0x178724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x178728: 0xa2240029  sb          $a0, 0x29($s1)
    ctx->pc = 0x178728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x17872c: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x17872cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x178730: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x178730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
    // 0x178734: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x178734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x178738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x17873cu;
}
