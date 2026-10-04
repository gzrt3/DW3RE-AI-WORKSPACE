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

// Function: entry_00192b98
// Address: 0x192b98 - 0x192cc0
void entry_00192b98_0x192b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192b98_0x192b98");
#endif

    ctx->pc = 0x192b98u;

label_192b98:
    // 0x192b98: 0x18e1821  addu        $v1, $t4, $t6
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x192b9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x192b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x192ba0: 0xac6b0004  sw          $t3, 0x4($v1)
    ctx->pc = 0x192ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 11));
    // 0x192ba4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x192ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x192ba8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x192ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x192bac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x192bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x192bb0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x192bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x192bb4: 0xac6b0018  sw          $t3, 0x18($v1)
    ctx->pc = 0x192bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 11));
    // 0x192bb8: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x192bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x192bbc: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x192bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x192bc0: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x192bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x192bc4: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x192bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x192bc8: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x192bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x192bcc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x192bccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x192bd0: 0xac6a0034  sw          $t2, 0x34($v1)
    ctx->pc = 0x192bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 10));
    // 0x192bd4: 0xac690038  sw          $t1, 0x38($v1)
    ctx->pc = 0x192bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 9));
    // 0x192bd8: 0xac6b003c  sw          $t3, 0x3C($v1)
    ctx->pc = 0x192bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 11));
    // 0x192bdc: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x192bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x192be0: 0xac6a0044  sw          $t2, 0x44($v1)
    ctx->pc = 0x192be0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 10));
    // 0x192be4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x192be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x192be8: 0xac6b004c  sw          $t3, 0x4C($v1)
    ctx->pc = 0x192be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 11));
    // 0x192bec: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x192becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x192bf0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x192bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x192bf4: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x192bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x192bf8: 0xac6b005c  sw          $t3, 0x5C($v1)
    ctx->pc = 0x192bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 11));
    // 0x192bfc: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x192bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x192c00: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x192c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x192c04: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x192c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x192c08: 0xac6b006c  sw          $t3, 0x6C($v1)
    ctx->pc = 0x192c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 11));
    // 0x192c0c: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x192c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x192c10: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x192c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x192c14: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x192c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x192c18: 0xac6b007c  sw          $t3, 0x7C($v1)
    ctx->pc = 0x192c18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 11));
    // 0x192c1c: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x192c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x192c20: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x192c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x192c24: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x192c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
    // 0x192c28: 0xac6b008c  sw          $t3, 0x8C($v1)
    ctx->pc = 0x192c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 11));
    // 0x192c2c: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x192c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x192c30: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x192c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x192c34: 0xac680098  sw          $t0, 0x98($v1)
    ctx->pc = 0x192c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 8));
    // 0x192c38: 0xac68009c  sw          $t0, 0x9C($v1)
    ctx->pc = 0x192c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 8));
    // 0x192c3c: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x192c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x192c40: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x192c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x192c44: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x192c44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
    // 0x192c48: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x192c48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x192c4c: 0xac6000b0  sw          $zero, 0xB0($v1)
    ctx->pc = 0x192c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    // 0x192c50: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x192c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x192c54: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x192c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x192c58: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x192c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
    // 0x192c5c: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x192c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x192c60: 0xac6700c4  sw          $a3, 0xC4($v1)
    ctx->pc = 0x192c60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 7));
    // 0x192c64: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x192c64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
    // 0x192c68: 0xac6000cc  sw          $zero, 0xCC($v1)
    ctx->pc = 0x192c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 204), GPR_U32(ctx, 0));
    // 0x192c6c: 0xac6000d0  sw          $zero, 0xD0($v1)
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 0));
    // 0x192c70: 0xac6600d4  sw          $a2, 0xD4($v1)
    ctx->pc = 0x192c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 212), GPR_U32(ctx, 6));
    // 0x192c74: 0xac6500d8  sw          $a1, 0xD8($v1)
    ctx->pc = 0x192c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 5));
    // 0x192c78: 0xac6400dc  sw          $a0, 0xDC($v1)
    ctx->pc = 0x192c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 4));
    // 0x192c7c: 0xac6400e0  sw          $a0, 0xE0($v1)
    ctx->pc = 0x192c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 4));
    // 0x192c80: 0xa46000e4  sh          $zero, 0xE4($v1)
    ctx->pc = 0x192c80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 228), (uint16_t)GPR_U32(ctx, 0));
    // 0x192c84: 0xac6d00e8  sw          $t5, 0xE8($v1)
    ctx->pc = 0x192c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 13));
    // 0x192c88: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x192c88u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x192c8c: 0x29a30002  slti        $v1, $t5, 0x2
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x192c90: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x192C90u;
    {
        const bool branch_taken_0x192c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C90u;
        // 0x192c94: 0x25ce00f0  addiu       $t6, $t6, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c90) {
            ctx->pc = 0x192B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192b98;
        }
    }
    ctx->pc = 0x192C98u;
    // 0x192c98: 0x3e00008  jr          $ra
    ctx->pc = 0x192C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CA0u;
    // 0x192ca0: 0xaf8081e8  sw          $zero, -0x7E18($gp)
    ctx->pc = 0x192ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935016), GPR_U32(ctx, 0));
    // 0x192ca4: 0xaf8088b8  sw          $zero, -0x7748($gp)
    ctx->pc = 0x192ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936760), GPR_U32(ctx, 0));
    // 0x192ca8: 0xaf8081ec  sw          $zero, -0x7E14($gp)
    ctx->pc = 0x192ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935020), GPR_U32(ctx, 0));
    // 0x192cac: 0x3e00008  jr          $ra
    ctx->pc = 0x192CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CACu;
        // 0x192cb0: 0xaf8088bc  sw          $zero, -0x7744($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936764), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CB4u;
    // 0x192cb4: 0x0  nop
    ctx->pc = 0x192cb4u;
    // NOP
    // 0x192cb8: 0x0  nop
    ctx->pc = 0x192cb8u;
    // NOP
    // 0x192cbc: 0x0  nop
    ctx->pc = 0x192cbcu;
    // NOP
    ctx->pc = 0x192cc0u;
}
