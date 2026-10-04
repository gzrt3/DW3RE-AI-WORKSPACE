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

// Function: entry_00225b04
// Address: 0x225b04 - 0x225b84
void entry_00225b04_0x225b04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225b04_0x225b04");
#endif

    ctx->pc = 0x225b04u;

    // 0x225b04: 0x9082003d  lbu         $v0, 0x3D($a0)
    ctx->pc = 0x225b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x225b08: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x225B08u;
    {
        const bool branch_taken_0x225b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B08u;
        // 0x225b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b08) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x225B10u;
    // 0x225b10: 0x90870023  lbu         $a3, 0x23($a0)
    ctx->pc = 0x225b10u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x225b14: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x225b18: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x225B18u;
    {
        const bool branch_taken_0x225b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b18) {
            ctx->pc = 0x225B84u;
            return;
        }
    }
    ctx->pc = 0x225B20u;
    // 0x225b20: 0x90830022  lbu         $v1, 0x22($a0)
    ctx->pc = 0x225b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x225b24: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x225b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x225b28: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x225b2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x225b2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x225b30: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x225b34: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b38: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x225B38u;
    {
        const bool branch_taken_0x225b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b38) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225B40u;
    // 0x225b40: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x225b44: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x225b44u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x225b48: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
    // 0x225b4c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225b50: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x225B50u;
    {
        const bool branch_taken_0x225b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b50) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225B58u;
    // 0x225b58: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x225b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x225b5c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x225b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x225b60: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x225b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x225b64: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x225B64u;
    {
        const bool branch_taken_0x225b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b64) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225B6Cu;
    // 0x225b6c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x225b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x225b70: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x225b70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x225b74: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x225B74u;
    {
        const bool branch_taken_0x225b74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x225b74) {
            ctx->pc = 0x225BE0u;
            return;
        }
    }
    ctx->pc = 0x225B7Cu;
    // 0x225b7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x225B7Cu;
    {
        const bool branch_taken_0x225b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B7Cu;
        // 0x225b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b7c) {
            ctx->pc = 0x225BE4u;
            return;
        }
    }
    ctx->pc = 0x225B84u;
}
