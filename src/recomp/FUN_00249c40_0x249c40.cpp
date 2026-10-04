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

// Function: FUN_00249c40
// Address: 0x249c40 - 0x249fec
void FUN_00249c40_0x249c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00249c40_0x249c40");
#endif

    switch (ctx->pc) {
        case 0x249c74u: goto label_249c74;
        case 0x249c9cu: goto label_249c9c;
        case 0x249d64u: goto label_249d64;
        case 0x249decu: goto label_249dec;
        case 0x249f00u: goto label_249f00;
        default: break;
    }

    ctx->pc = 0x249c40u;

    // 0x249c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x249c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x249c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x249c4c: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x249c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c54: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x249c58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x249c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x249c5c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x249c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x249c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x249c68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x249c6c: 0xc08f3d6  jal         func_23CF58
    ctx->pc = 0x249C6Cu;
    SET_GPR_U32(ctx, 31, 0x249C74u);
    ctx->pc = 0x249C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249C6Cu;
    // 0x249c70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF58u, 0x249C6Cu, 0x249C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C74u;
label_249c74:
    // 0x249c74: 0x8f8692fc  lw          $a2, -0x6D04($gp)
    ctx->pc = 0x249c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249c78: 0x90c4001d  lbu         $a0, 0x1D($a2)
    ctx->pc = 0x249c78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 29)));
    // 0x249c7c: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x249c80: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249c80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249c84: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x249C84u;
    {
        const bool branch_taken_0x249c84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C84u;
        // 0x249c88: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c84) {
            ctx->pc = 0x249D0Cu;
            goto label_249d0c;
        }
    }
    ctx->pc = 0x249C8Cu;
    // 0x249c8c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249c90: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x249C90u;
    {
        const bool branch_taken_0x249c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C90u;
        // 0x249c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c90) {
            ctx->pc = 0x249CF8u;
            goto label_249cf8;
        }
    }
    ctx->pc = 0x249C98u;
    // 0x249c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249c9c:
    // 0x249c9c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249ca0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249ca4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x249ca8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x249cac: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x249cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cb0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249CB0u;
    {
        const bool branch_taken_0x249cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB0u;
        // 0x249cb4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cb0) {
            ctx->pc = 0x249CE8u;
            goto label_249ce8;
        }
    }
    ctx->pc = 0x249CB8u;
    // 0x249cb8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cbc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cc0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cc4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cc8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249ccc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249cccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cd0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249cd4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249cd8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x249cdc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249ce0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x249ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x249ce4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_249ce8:
    // 0x249ce8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x249ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x249cec: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x249cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249cf0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x249CF0u;
    {
        const bool branch_taken_0x249cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CF0u;
        // 0x249cf4: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cf0) {
            ctx->pc = 0x249C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249c9c;
        }
    }
    ctx->pc = 0x249CF8u;
label_249cf8:
    // 0x249cf8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249cfc: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x249cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x249d00: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x249d04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x249D04u;
    {
        const bool branch_taken_0x249d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d04) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D0Cu;
label_249d0c:
    // 0x249d0c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x249d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x249d10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x249D10u;
    {
        const bool branch_taken_0x249d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d10) {
            ctx->pc = 0x249D20u;
            goto label_249d20;
        }
    }
    ctx->pc = 0x249D18u;
    // 0x249d18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D20u;
label_249d20:
    // 0x249d20: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x249d24: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x249d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x249d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x249d2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249D2Cu;
    {
        const bool branch_taken_0x249d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d2c) {
            ctx->pc = 0x249D3Cu;
            goto label_249d3c;
        }
    }
    ctx->pc = 0x249D34u;
    // 0x249d34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d34) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D3Cu;
label_249d3c:
    // 0x249d3c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x249d40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x249d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x249d44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x249d48: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249d4c: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
    // 0x249d50: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_249d54:
    // 0x249d54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249d58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x249D58u;
    {
        const bool branch_taken_0x249d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d58) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D60u;
    // 0x249d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249d64:
    // 0x249d64: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249d68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249d6c: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249d70: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
    // 0x249d74: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB0u;
            goto label_249db0;
        }
    }
    ctx->pc = 0x249D80u;
    // 0x249d80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d88: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
    // 0x249d8c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d90: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249d94: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249d94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
    // 0x249d98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249d9c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249da0: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249da0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
    // 0x249da4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x249da8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249dac: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249dacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_249db0:
    // 0x249db0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249db4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249db8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x249DB8u;
    {
        const bool branch_taken_0x249db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB8u;
        // 0x249dbc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249db8) {
            ctx->pc = 0x249D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249d64;
        }
    }
    ctx->pc = 0x249DC0u;
label_249dc0:
    // 0x249dc0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249dc4: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x249dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x249dc8: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x249dcc: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x249dd0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x249dd4: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249EE4u;
            goto label_249ee4;
        }
    }
    ctx->pc = 0x249DDCu;
    // 0x249ddc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249de0: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x249DE0u;
    {
        const bool branch_taken_0x249de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DE0u;
        // 0x249de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249de0) {
            ctx->pc = 0x249ED0u;
            goto label_249ed0;
        }
    }
    ctx->pc = 0x249DE8u;
    // 0x249de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249dec:
    // 0x249dec: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249df0: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249df4: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x249df8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249DF8u;
    {
        const bool branch_taken_0x249df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF8u;
        // 0x249dfc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249df8) {
            ctx->pc = 0x249E10u;
            goto label_249e10;
        }
    }
    ctx->pc = 0x249E00u;
    // 0x249e00: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x249e00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e04: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x249e04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e08: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x249e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e0c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x249e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_249e10:
    // 0x249e10: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249e14: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x249e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x249e18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249E18u;
    {
        const bool branch_taken_0x249e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E18u;
        // 0x249e1c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e18) {
            ctx->pc = 0x249E30u;
            goto label_249e30;
        }
    }
    ctx->pc = 0x249E20u;
    // 0x249e20: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x249e20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e24: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x249e24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e28: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x249e28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e2c: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x249e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_249e30:
    // 0x249e30: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249e34: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x249e38: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249E3Cu;
    {
        const bool branch_taken_0x249e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E3Cu;
        // 0x249e40: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e3c) {
            ctx->pc = 0x249E74u;
            goto label_249e74;
        }
    }
    ctx->pc = 0x249E44u;
    // 0x249e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e48: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e4c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e54: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e58: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249e58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e64: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249e64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e70: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249e70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_249e74:
    // 0x249e74: 0x0  nop
    ctx->pc = 0x249e74u;
    // NOP
    // 0x249e78: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249e7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e80: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x249e84: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249EC0u;
            goto label_249ec0;
        }
    }
    ctx->pc = 0x249E90u;
    // 0x249e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249e94: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249e98: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249e98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x249e9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249ea0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249ea4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x249ea8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249eac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249eb0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x249eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249eb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249ebc: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_249ec0:
    // 0x249ec0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249ec4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249ec8: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x249EC8u;
    {
        const bool branch_taken_0x249ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC8u;
        // 0x249ecc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ec8) {
            ctx->pc = 0x249DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249dec;
        }
    }
    ctx->pc = 0x249ED0u;
label_249ed0:
    // 0x249ed0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249ed4: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x249ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x249ed8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x249edc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x249EDCu;
    {
        const bool branch_taken_0x249edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EDCu;
        // 0x249ee0: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249edc) {
            ctx->pc = 0x249FE8u;
            goto label_249fe8;
        }
    }
    ctx->pc = 0x249EE4u;
label_249ee4:
    // 0x249ee4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x249EE4u;
    {
        const bool branch_taken_0x249ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ee4) {
            ctx->pc = 0x249EF0u;
            goto label_249ef0;
        }
    }
    ctx->pc = 0x249EECu;
    // 0x249eec: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x249eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_249ef0:
    // 0x249ef0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249ef4: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x249EF4u;
    {
        const bool branch_taken_0x249ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EF4u;
        // 0x249ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ef4) {
            ctx->pc = 0x249FE8u;
            goto label_249fe8;
        }
    }
    ctx->pc = 0x249EFCu;
    // 0x249efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249f00:
    // 0x249f00: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f04: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x249f08: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x249f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x249f0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249F0Cu;
    {
        const bool branch_taken_0x249f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F0Cu;
        // 0x249f10: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f0c) {
            ctx->pc = 0x249F24u;
            goto label_249f24;
        }
    }
    ctx->pc = 0x249F14u;
    // 0x249f14: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x249f14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f18: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x249f18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f1c: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x249f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f20: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x249f20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_249f24:
    // 0x249f24: 0x0  nop
    ctx->pc = 0x249f24u;
    // NOP
    // 0x249f28: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f2c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x249f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x249f30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249F30u;
    {
        const bool branch_taken_0x249f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F30u;
        // 0x249f34: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f30) {
            ctx->pc = 0x249F48u;
            goto label_249f48;
        }
    }
    ctx->pc = 0x249F38u;
    // 0x249f38: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x249f38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f3c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x249f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f40: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x249f40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f44: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x249f44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_249f48:
    // 0x249f48: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f4c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
    // 0x249f50: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249F54u;
    {
        const bool branch_taken_0x249f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f54) {
            ctx->pc = 0x249F8Cu;
            goto label_249f8c;
        }
    }
    ctx->pc = 0x249F5Cu;
    // 0x249f5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f64: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249f64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f70: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249f70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f78: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f7c: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
    // 0x249f80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249f88: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249f88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_249f8c:
    // 0x249f8c: 0x0  nop
    ctx->pc = 0x249f8cu;
    // NOP
    // 0x249f90: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x249f94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249f98: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
    // 0x249f9c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FD8u;
            goto label_249fd8;
        }
    }
    ctx->pc = 0x249FA8u;
    // 0x249fa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fb0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fbc: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fc0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fc4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fc8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
    // 0x249fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x249fd0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x249fd4: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_249fd8:
    // 0x249fd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x249fdc: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x249fe0: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x249FE0u;
    {
        const bool branch_taken_0x249fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FE0u;
        // 0x249fe4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fe0) {
            ctx->pc = 0x249F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249f00;
        }
    }
    ctx->pc = 0x249FE8u;
label_249fe8:
    // 0x249fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x249fecu;
}
