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

// Function: entry_0020febc
// Address: 0x20febc - 0x20ffa8
void entry_0020febc_0x20febc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020febc_0x20febc");
#endif

    ctx->pc = 0x20febcu;

label_20febc:
    // 0x20febc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x20febcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fec0: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x20fec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20fec4: 0xc26804  sllv        $t5, $v0, $a2
    ctx->pc = 0x20fec4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20fec8: 0x824004  sllv        $t0, $v0, $a0
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x20fecc: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x20fed0: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x20fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x20fed4: 0xc25804  sllv        $t3, $v0, $a2
    ctx->pc = 0x20fed4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20fed8: 0xa26004  sllv        $t4, $v0, $a1
    ctx->pc = 0x20fed8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20fedc: 0x24860005  addiu       $a2, $a0, 0x5
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20fee0: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x20fee4: 0xa25004  sllv        $t2, $v0, $a1
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20fee8: 0xc24804  sllv        $t1, $v0, $a2
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x20feec: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x20feecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x20fef0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x20fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x20fef4: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x20fef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x20fef8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20fefc: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20fefcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff00: 0xa24004  sllv        $t0, $v0, $a1
    ctx->pc = 0x20ff00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ff04: 0x24850007  addiu       $a1, $a0, 0x7
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x20ff08: 0xa23804  sllv        $a3, $v0, $a1
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x20ff0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20ff10: 0x2885000e  slti        $a1, $a0, 0xE
    ctx->pc = 0x20ff10u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x20ff14: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x20ff14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x20ff18: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff1c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff20: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff24: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff28: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x20ff28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x20ff2c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff30: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff34: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff38: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff3c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x20ff3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x20ff40: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff44: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff48: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff4c: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff50: 0xca3025  or          $a2, $a2, $t2
    ctx->pc = 0x20ff50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x20ff54: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff58: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff5c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff60: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff64: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x20ff64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x20ff68: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff6c: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff70: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff74: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff78: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x20ff78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x20ff7c: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff80: 0xac261880  sw          $a2, 0x1880($at)
    ctx->pc = 0x20ff80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x2B1880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2B1880u, _value); } while (0);
    // 0x20ff84: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff88: 0x8c261880  lw          $a2, 0x1880($at)
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2B1880u));
    // 0x20ff8c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x20ff8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x20ff90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x20ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x20ff94: 0x14a0ffc9  bnez        $a1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x20FF94u;
    {
        const bool branch_taken_0x20ff94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF94u;
        // 0x20ff98: 0xac261880  sw          $a2, 0x1880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 6272), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff94) {
            ctx->pc = 0x20FEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20febc;
        }
    }
    ctx->pc = 0x20FF9Cu;
    // 0x20ff9c: 0x28810016  slti        $at, $a0, 0x16
    ctx->pc = 0x20ff9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x20ffa0: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x20FFA0u;
    {
        const bool branch_taken_0x20ffa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFA0u;
        // 0x20ffa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffa0) {
            ctx->pc = 0x20FFCCu;
            return;
        }
    }
    ctx->pc = 0x20FFA8u;
}
