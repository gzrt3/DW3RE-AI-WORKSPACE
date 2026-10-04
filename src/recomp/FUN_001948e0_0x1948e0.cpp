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

// Function: FUN_001948e0
// Address: 0x1948e0 - 0x194968
void FUN_001948e0_0x1948e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001948e0_0x1948e0");
#endif

    ctx->pc = 0x1948e0u;

    // 0x1948e0: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x1948e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x1948e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1948E4u;
    {
        const bool branch_taken_0x1948e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948E4u;
        // 0x1948e8: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948e4) {
            ctx->pc = 0x1948F4u;
            goto label_1948f4;
        }
    }
    ctx->pc = 0x1948ECu;
    // 0x1948ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1948ECu;
    {
        const bool branch_taken_0x1948ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1948F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948ECu;
        // 0x1948f0: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948ec) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x1948F4u;
label_1948f4:
    // 0x1948f4: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x1948f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1948F8u;
    {
        const bool branch_taken_0x1948f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1948F8u;
        // 0x1948fc: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948f8) {
            ctx->pc = 0x19490Cu;
            goto label_19490c;
        }
    }
    ctx->pc = 0x194900u;
    // 0x194900: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
    // 0x194904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x194904u;
    {
        const bool branch_taken_0x194904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194904u;
        // 0x194908: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194904) {
            ctx->pc = 0x194928u;
            goto label_194928;
        }
    }
    ctx->pc = 0x19490Cu;
label_19490c:
    // 0x19490c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19490cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x194910: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x194910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x194914: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x194914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
    // 0x194918: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x194918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19491c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x194920: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194924: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x194924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_194928:
    // 0x194928: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x194928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x19492c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x194930: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x194930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x194934: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x194934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x194938: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x194938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x19493c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19493cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x194940: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x194940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x194944: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x194944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x194948: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x194948u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x19494c: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x19494cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x194950: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x194950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x194954: 0xa083001c  sb          $v1, 0x1C($a0)
    ctx->pc = 0x194954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x194958: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x194958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x19495c: 0xa083001e  sb          $v1, 0x1E($a0)
    ctx->pc = 0x19495cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x194960: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x194960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x194964: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x194964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x194968u;
}
