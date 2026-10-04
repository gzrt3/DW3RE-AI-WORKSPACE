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

// Function: entry_00198cdc
// Address: 0x198cdc - 0x198d28
void entry_00198cdc_0x198cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198cdc_0x198cdc");
#endif

    ctx->pc = 0x198cdcu;

    // 0x198cdc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x198cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198ce0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198ce4: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x198ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x198ce8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x198ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x198cec: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x198cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x198cf0: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x198cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x198cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x198cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x198cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x198cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198d00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x198d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x198d04: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x198D04u;
    {
        const bool branch_taken_0x198d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D04u;
        // 0x198d08: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d04) {
            ctx->pc = 0x198D3Cu;
            return;
        }
    }
    ctx->pc = 0x198D0Cu;
    // 0x198d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x198d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x198d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x198d14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x198d18: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x198d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x198d1c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x198d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x198d20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x198D20u;
    {
        const bool branch_taken_0x198d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198D20u;
        // 0x198d24: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198d20) {
            ctx->pc = 0x198D4Cu;
            return;
        }
    }
    ctx->pc = 0x198D28u;
}
