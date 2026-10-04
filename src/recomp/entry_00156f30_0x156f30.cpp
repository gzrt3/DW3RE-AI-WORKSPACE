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

// Function: entry_00156f30
// Address: 0x156f30 - 0x156ff8
void entry_00156f30_0x156f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156f30_0x156f30");
#endif

    ctx->pc = 0x156f30u;

label_156f30:
    // 0x156f30: 0xea7021  addu        $t6, $a3, $t2
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x156f34: 0x1c01821  addu        $v1, $t6, $zero
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 0)));
    // 0x156f38: 0xcb7821  addu        $t7, $a2, $t3
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x156f3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x156f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x156f40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x156f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x156f44: 0xadc00004  sw          $zero, 0x4($t6)
    ctx->pc = 0x156f44u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 0));
    // 0x156f48: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x156f48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x156f4c: 0xadc00008  sw          $zero, 0x8($t6)
    ctx->pc = 0x156f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 0));
    // 0x156f50: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x156f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x156f54: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x156f54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x156f58: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x156f58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x156f5c: 0xadc00010  sw          $zero, 0x10($t6)
    ctx->pc = 0x156f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 0));
    // 0x156f60: 0xadc00014  sw          $zero, 0x14($t6)
    ctx->pc = 0x156f60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 0));
    // 0x156f64: 0xadc00018  sw          $zero, 0x18($t6)
    ctx->pc = 0x156f64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 0));
    // 0x156f68: 0xadc0001c  sw          $zero, 0x1C($t6)
    ctx->pc = 0x156f68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 28), GPR_U32(ctx, 0));
    // 0x156f6c: 0xade000c0  sw          $zero, 0xC0($t7)
    ctx->pc = 0x156f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 192), GPR_U32(ctx, 0));
    // 0x156f70: 0xade000c4  sw          $zero, 0xC4($t7)
    ctx->pc = 0x156f70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 196), GPR_U32(ctx, 0));
    // 0x156f74: 0xade000c8  sw          $zero, 0xC8($t7)
    ctx->pc = 0x156f74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 200), GPR_U32(ctx, 0));
    // 0x156f78: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x156F78u;
    {
        const bool branch_taken_0x156f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F78u;
        // 0x156f7c: 0xade000cc  sw          $zero, 0xCC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f78) {
            ctx->pc = 0x156F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_156f30;
        }
    }
    ctx->pc = 0x156F80u;
    // 0x156f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x156f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x156f84: 0x258c0060  addiu       $t4, $t4, 0x60
    ctx->pc = 0x156f84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 96));
    // 0x156f88: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x156f88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156f8c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x156F8Cu;
    {
        const bool branch_taken_0x156f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F8Cu;
        // 0x156f90: 0x25ad0030  addiu       $t5, $t5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f8c) {
            ctx->pc = 0x156F1Cu;
            return;
        }
    }
    ctx->pc = 0x156F94u;
    // 0x156f94: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x156f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x156f98: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156f9c: 0x55880  sll         $t3, $a1, 2
    ctx->pc = 0x156f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156fa0: 0x24c63050  addiu       $a2, $a2, 0x3050
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12368));
    // 0x156fa4: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x156fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x156fa8: 0xac800ea0  sw          $zero, 0xEA0($a0)
    ctx->pc = 0x156fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3744), GPR_U32(ctx, 0));
    // 0x156fac: 0x90ea0000  lbu         $t2, 0x0($a3)
    ctx->pc = 0x156facu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x156fb0: 0x24633051  addiu       $v1, $v1, 0x3051
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12369));
    // 0x156fb4: 0x6b4821  addu        $t1, $v1, $t3
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fbc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156fc0: 0x24633052  addiu       $v1, $v1, 0x3052
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12370));
    // 0x156fc4: 0x6b4021  addu        $t0, $v1, $t3
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fc8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x156fcc: 0xa08a0ea4  sb          $t2, 0xEA4($a0)
    ctx->pc = 0x156fccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3748), (uint8_t)GPR_U32(ctx, 10));
    // 0x156fd0: 0x24633053  addiu       $v1, $v1, 0x3053
    ctx->pc = 0x156fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12371));
    // 0x156fd4: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x156fd4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x156fd8: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x156fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x156fdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x156fdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156fe0: 0xa0890ea5  sb          $t1, 0xEA5($a0)
    ctx->pc = 0x156fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3749), (uint8_t)GPR_U32(ctx, 9));
    // 0x156fe4: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x156fe4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x156fe8: 0xa0880ea6  sb          $t0, 0xEA6($a0)
    ctx->pc = 0x156fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3750), (uint8_t)GPR_U32(ctx, 8));
    // 0x156fec: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x156fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x156ff0: 0xa0830ea7  sb          $v1, 0xEA7($a0)
    ctx->pc = 0x156ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3751), (uint8_t)GPR_U32(ctx, 3));
    // 0x156ff4: 0x519c0  sll         $v1, $a1, 7
    ctx->pc = 0x156ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    ctx->pc = 0x156ff8u;
}
