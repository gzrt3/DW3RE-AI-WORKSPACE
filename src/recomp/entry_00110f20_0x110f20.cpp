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

// Function: entry_00110f20
// Address: 0x110f20 - 0x110f70
void entry_00110f20_0x110f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110f20_0x110f20");
#endif

    ctx->pc = 0x110f20u;

    // 0x110f20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x110f24: 0x2903001b  slti        $v1, $t0, 0x1B
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x110f28: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x110F28u;
    {
        const bool branch_taken_0x110f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F28u;
        // 0x110f2c: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f28) {
            ctx->pc = 0x110EFCu;
            return;
        }
    }
    ctx->pc = 0x110F30u;
    // 0x110f30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x110f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x110f34: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x110f38: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x110f38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x110f3c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x110F3Cu;
    {
        const bool branch_taken_0x110f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F3Cu;
        // 0x110f40: 0x240a0008  addiu       $t2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f3c) {
            ctx->pc = 0x110F70u;
            return;
        }
    }
    ctx->pc = 0x110F44u;
    // 0x110f44: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x110f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x110f48: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f4c: 0xa0232498  sb          $v1, 0x2498($at)
    ctx->pc = 0x110f4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x2F2498u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2498u, _value); } while (0);
    // 0x110f50: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x110f54: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x110f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x110f5c: 0xa0242499  sb          $a0, 0x2499($at)
    ctx->pc = 0x110f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x2F2499u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x2F2499u, _value); } while (0);
    // 0x110f60: 0x254a0003  addiu       $t2, $t2, 0x3
    ctx->pc = 0x110f60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x110f64: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x110f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
    // 0x110f68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x110F68u;
    {
        const bool branch_taken_0x110f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110F68u;
        // 0x110f6c: 0xa023249a  sb          $v1, 0x249A($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 9370), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f68) {
            ctx->pc = 0x110FB8u;
            return;
        }
    }
    ctx->pc = 0x110F70u;
}
