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

// Function: FUN_00181930
// Address: 0x181930 - 0x181998
void FUN_00181930_0x181930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181930_0x181930");
#endif

    ctx->pc = 0x181930u;

    // 0x181930: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x181930u;
    {
        const bool branch_taken_0x181930 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181930) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181938u;
    // 0x181938: 0x28a100b8  slti        $at, $a1, 0xB8
    ctx->pc = 0x181938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x18193c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x18193Cu;
    {
        const bool branch_taken_0x18193c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18193Cu;
        // 0x181940: 0x28a200b8  slti        $v0, $a1, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18193c) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x181944u;
    // 0x181944: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x181948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x181948u;
    {
        const bool branch_taken_0x181948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181948u;
        // 0x18194c: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181948) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181950u;
label_181950:
    // 0x181950: 0x28a200b8  slti        $v0, $a1, 0xB8
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
label_181954:
    // 0x181954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x181954u;
    {
        const bool branch_taken_0x181954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181954) {
            ctx->pc = 0x181970u;
            goto label_181970;
        }
    }
    ctx->pc = 0x18195Cu;
    // 0x18195c: 0x28a10238  slti        $at, $a1, 0x238
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)568) ? 1 : 0);
    // 0x181960: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x181960u;
    {
        const bool branch_taken_0x181960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181960) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181968u;
    // 0x181968: 0x24a33dc8  addiu       $v1, $a1, 0x3DC8
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
label_18196c:
    // 0x18196c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_181970:
    // 0x181970: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x181974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181978: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
    // 0x18197c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x181980: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x181984: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x181984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x181988: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x181988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x18198c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x181990: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x181994: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x181998u;
}
