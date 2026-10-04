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

// Function: entry_001ab8a4
// Address: 0x1ab8a4 - 0x1ab900
void entry_001ab8a4_0x1ab8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab8a4_0x1ab8a4");
#endif

    switch (ctx->pc) {
        case 0x1ab8d0u: goto label_1ab8d0;
        default: break;
    }

    ctx->pc = 0x1ab8a4u;

    // 0x1ab8a4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1ab8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ab8a8: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1ab8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8ac: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab8b0: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x1ab8b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x374684u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x374684u, _value); } while (0);
    // 0x1ab8b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ab8b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB8B8u;
    {
        const bool branch_taken_0x1ab8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8B8u;
        // 0x1ab8bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8b8) {
            ctx->pc = 0x1AB900u;
            return;
        }
    }
    ctx->pc = 0x1AB8C0u;
    // 0x1ab8c0: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ab8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8c4: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1ab8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1ab8c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1ab8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1ab8cc: 0x0  nop
    ctx->pc = 0x1ab8ccu;
    // NOP
label_1ab8d0:
    // 0x1ab8d0: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x1ab8d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AB8D4u;
    {
        const bool branch_taken_0x1ab8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8D4u;
        // 0x1ab8d8: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8d4) {
            ctx->pc = 0x1AB908u;
            return;
        }
    }
    ctx->pc = 0x1AB8DCu;
    // 0x1ab8dc: 0x24e34680  addiu       $v1, $a3, 0x4680
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 18048));
    // 0x1ab8e0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1ab8e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ab8e4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ab8e8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x1ab8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ab8ec: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ab8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1ab8f0: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AB8F0u;
    {
        const bool branch_taken_0x1ab8f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab8f0) {
            ctx->pc = 0x1AB8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB8F0u;
            // 0x1ab8f4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab8d0;
        }
    }
    ctx->pc = 0x1AB8F8u;
    // 0x1ab8f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB8F8u;
    {
        const bool branch_taken_0x1ab8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB8F8u;
        // 0x1ab8fc: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab8f8) {
            ctx->pc = 0x1AB90Cu;
            return;
        }
    }
    ctx->pc = 0x1AB900u;
}
