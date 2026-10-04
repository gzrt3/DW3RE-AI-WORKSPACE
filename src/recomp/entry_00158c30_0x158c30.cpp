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

// Function: entry_00158c30
// Address: 0x158c30 - 0x158cf8
void entry_00158c30_0x158c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158c30_0x158c30");
#endif

    ctx->pc = 0x158c30u;

    // 0x158c30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158c34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x158c38: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158c38u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x158c3c: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x158C3Cu;
    {
        const bool branch_taken_0x158c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x24030195  addiu       $v1, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c3c) {
            ctx->pc = 0x158CFCu;
            return;
        }
    }
    ctx->pc = 0x158C44u;
    // 0x158c44: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x158c48: 0x8c23ccf8  lw          $v1, -0x3308($at)
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x29CCF8u));
    // 0x158c4c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x158C4Cu;
    {
        const bool branch_taken_0x158c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c4c) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158C54u;
    // 0x158c54: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158C5Cu;
    // 0x158c5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158c60: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x158c64: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c64) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158C6Cu;
    // 0x158c6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158c70: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x158c74: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x158c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x158c78: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x158C78u;
    {
        const bool branch_taken_0x158c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C78u;
        // 0x158c7c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c78) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158C80u;
    // 0x158c80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158c84: 0x8c2300ac  lw          $v1, 0xAC($at)
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 172)));
    // 0x158c88: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158C90u;
    // 0x158c90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158c94: 0x8c230064  lw          $v1, 0x64($at)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0064u));
    // 0x158c98: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x158C98u;
    {
        const bool branch_taken_0x158c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C98u;
        // 0x158c9c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c98) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CA0u;
    // 0x158ca0: 0x8c2302ec  lw          $v1, 0x2EC($at)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 748)));
    // 0x158ca4: 0x14640014  bne         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x158CA4u;
    {
        const bool branch_taken_0x158ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158ca4) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CACu;
    // 0x158cac: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158cb0: 0x8c2302d4  lw          $v1, 0x2D4($at)
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B02D4u));
    // 0x158cb4: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x158CB4u;
    {
        const bool branch_taken_0x158cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB4u;
        // 0x158cb8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cb4) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CBCu;
    // 0x158cbc: 0x8c230214  lw          $v1, 0x214($at)
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 532)));
    // 0x158cc0: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x158CC0u;
    {
        const bool branch_taken_0x158cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cc0) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CC8u;
    // 0x158cc8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158ccc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B013Cu));
    // 0x158cd0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158CD0u;
    {
        const bool branch_taken_0x158cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CD0u;
        // 0x158cd4: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cd0) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CD8u;
    // 0x158cd8: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 292)));
    // 0x158cdc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158CDCu;
    {
        const bool branch_taken_0x158cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cdc) {
            ctx->pc = 0x158CF8u;
            return;
        }
    }
    ctx->pc = 0x158CE4u;
    // 0x158ce4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ce8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158cec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x158cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x158cf0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158cf4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
    ctx->pc = 0x158cf8u;
}
