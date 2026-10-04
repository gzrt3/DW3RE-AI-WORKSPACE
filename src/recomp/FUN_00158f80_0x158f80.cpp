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

// Function: FUN_00158f80
// Address: 0x158f80 - 0x159004
void FUN_00158f80_0x158f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158f80_0x158f80");
#endif

    switch (ctx->pc) {
        case 0x158fb4u: goto label_158fb4;
        default: break;
    }

    ctx->pc = 0x158f80u;

    // 0x158f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x158f84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f88: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x158f88u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f8c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x158f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x158f90: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x158f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
    // 0x158f94: 0xcb1821  addu        $v1, $a2, $t3
    ctx->pc = 0x158f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x158f98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x158f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158f9c: 0xa4603608  sh          $zero, 0x3608($v1)
    ctx->pc = 0x158f9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334908u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334908u, _value); } while (0);
    // 0x158fa0: 0x246d3608  addiu       $t5, $v1, 0x3608
    ctx->pc = 0x158fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 13832));
    // 0x158fa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x158fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x158fa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158fac: 0xcc1821  addu        $v1, $a2, $t4
    ctx->pc = 0x158facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x158fb0: 0x24650000  addiu       $a1, $v1, 0x0
    ctx->pc = 0x158fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_158fb4:
    // 0x158fb4: 0x0  nop
    ctx->pc = 0x158fb4u;
    // NOP
    // 0x158fb8: 0xaa2021  addu        $a0, $a1, $t2
    ctx->pc = 0x158fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x158fbc: 0x90830220  lbu         $v1, 0x220($a0)
    ctx->pc = 0x158fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x158fc0: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x158fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x158fc4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x158FC4u;
    {
        const bool branch_taken_0x158fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158fc4) {
            ctx->pc = 0x158FE0u;
            goto label_158fe0;
        }
    }
    ctx->pc = 0x158FCCu;
    // 0x158fcc: 0x84830232  lh          $v1, 0x232($a0)
    ctx->pc = 0x158fccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x158fd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x158fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x158fd4: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x158fd8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x158fdc: 0xa5a30000  sh          $v1, 0x0($t5)
    ctx->pc = 0x158fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 3));
label_158fe0:
    // 0x158fe0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x158fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x158fe4: 0x2903000a  slti        $v1, $t0, 0xA
    ctx->pc = 0x158fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x158fe8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x158FE8u;
    {
        const bool branch_taken_0x158fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158FE8u;
        // 0x158fec: 0x254a0240  addiu       $t2, $t2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158fe8) {
            ctx->pc = 0x158FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158fb4;
        }
    }
    ctx->pc = 0x158FF0u;
    // 0x158ff0: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x158ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x158ff4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x158ff8: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x158ff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x158ffc: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x158ffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x159000: 0x258c1b00  addiu       $t4, $t4, 0x1B00
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 6912));
    ctx->pc = 0x159004u;
}
