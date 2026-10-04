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

// Function: entry_0010dc5c
// Address: 0x10dc5c - 0x10dd9c
void entry_0010dc5c_0x10dc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc5c_0x10dc5c");
#endif

    ctx->pc = 0x10dc5cu;

    // 0x10dc5c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x10dc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10dc60: 0x912a367c  lbu         $t2, 0x367C($t1)
    ctx->pc = 0x10dc60u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 13948)));
    // 0x10dc64: 0x1140004d  beqz        $t2, . + 4 + (0x4D << 2)
    ctx->pc = 0x10DC64u;
    {
        const bool branch_taken_0x10dc64 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC64u;
        // 0x10dc68: 0x252c3620  addiu       $t4, $t1, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc64) {
            ctx->pc = 0x10DD9Cu;
            return;
        }
    }
    ctx->pc = 0x10DC6Cu;
    // 0x10dc6c: 0x8d8a0024  lw          $t2, 0x24($t4)
    ctx->pc = 0x10dc6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x10dc70: 0x14a5018  mult        $t2, $t2, $t2
    ctx->pc = 0x10dc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x10dc74: 0x8a0018  mult        $zero, $a0, $t2
    ctx->pc = 0x10dc74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x10dc78: 0xa5fc2  srl         $t3, $t2, 31
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x10dc7c: 0x0  nop
    ctx->pc = 0x10dc7cu;
    // NOP
    // 0x10dc80: 0x5010  mfhi        $t2
    ctx->pc = 0x10dc80u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x10dc84: 0xa5183  sra         $t2, $t2, 6
    ctx->pc = 0x10dc84u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 6));
    // 0x10dc88: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x10dc88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x10dc8c: 0xad8a0034  sw          $t2, 0x34($t4)
    ctx->pc = 0x10dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 10));
    // 0x10dc90: 0x8d8a0034  lw          $t2, 0x34($t4)
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x10dc94: 0x29412710  slti        $at, $t2, 0x2710
    ctx->pc = 0x10dc94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x10dc98: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DC98u;
    {
        const bool branch_taken_0x10dc98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dc98) {
            ctx->pc = 0x10DCA4u;
            goto label_10dca4;
        }
    }
    ctx->pc = 0x10DCA0u;
    // 0x10dca0: 0x240a270f  addiu       $t2, $zero, 0x270F
    ctx->pc = 0x10dca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_10dca4:
    // 0x10dca4: 0xad8a0034  sw          $t2, 0x34($t4)
    ctx->pc = 0x10dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 52), GPR_U32(ctx, 10));
    // 0x10dca8: 0xad87003c  sw          $a3, 0x3C($t4)
    ctx->pc = 0x10dca8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 60), GPR_U32(ctx, 7));
    // 0x10dcac: 0x252a3660  addiu       $t2, $t1, 0x3660
    ctx->pc = 0x10dcacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 13920));
    // 0x10dcb0: 0x8d8e0054  lw          $t6, 0x54($t4)
    ctx->pc = 0x10dcb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x10dcb4: 0x8d8d004c  lw          $t5, 0x4C($t4)
    ctx->pc = 0x10dcb4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x10dcb8: 0x8d2b3660  lw          $t3, 0x3660($t1)
    ctx->pc = 0x10dcb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13920)));
    // 0x10dcbc: 0xe6200  sll         $t4, $t6, 8
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x10dcc0: 0x18e7023  subu        $t6, $t4, $t6
    ctx->pc = 0x10dcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x10dcc4: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x10dcc4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
    // 0x10dcc8: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x10dcc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x10dccc: 0xe68c0  sll         $t5, $t6, 3
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x10dcd0: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x10dcd4: 0xc68c0  sll         $t5, $t4, 3
    ctx->pc = 0x10dcd4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x10dcd8: 0xe60c0  sll         $t4, $t6, 3
    ctx->pc = 0x10dcd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x10dcdc: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x10dce0: 0x258c0000  addiu       $t4, $t4, 0x0
    ctx->pc = 0x10dce0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 0));
    // 0x10dce4: 0x18d7021  addu        $t6, $t4, $t5
    ctx->pc = 0x10dce4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x10dce8: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10dcec: 0x91cc002a  lbu         $t4, 0x2A($t6)
    ctx->pc = 0x10dcecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 42)));
    // 0x10dcf0: 0x91ad0010  lbu         $t5, 0x10($t5)
    ctx->pc = 0x10dcf0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x10dcf4: 0x1ac6823  subu        $t5, $t5, $t4
    ctx->pc = 0x10dcf4u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x10dcf8: 0xd6180  sll         $t4, $t5, 6
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x10dcfc: 0x18d6023  subu        $t4, $t4, $t5
    ctx->pc = 0x10dcfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x10dd00: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x10dd00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10dd04: 0x1ac6023  subu        $t4, $t5, $t4
    ctx->pc = 0x10dd04u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x10dd08: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x10dd08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10dd0c: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x10dd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x10dd10: 0xad2b3660  sw          $t3, 0x3660($t1)
    ctx->pc = 0x10dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 13920), GPR_U32(ctx, 11));
    // 0x10dd14: 0x8d293660  lw          $t1, 0x3660($t1)
    ctx->pc = 0x10dd14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 13920)));
    // 0x10dd18: 0x2921d8f1  slti        $at, $t1, -0x270F
    ctx->pc = 0x10dd18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4294957297) ? 1 : 0);
    // 0x10dd1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DD1Cu;
    {
        const bool branch_taken_0x10dd1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dd1c) {
            ctx->pc = 0x10DD28u;
            goto label_10dd28;
        }
    }
    ctx->pc = 0x10DD24u;
    // 0x10dd24: 0x2409d8f1  addiu       $t1, $zero, -0x270F
    ctx->pc = 0x10dd24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957297));
label_10dd28:
    // 0x10dd28: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x10dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x10dd2c: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x10dd2cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10dd30: 0x29212710  slti        $at, $t1, 0x2710
    ctx->pc = 0x10dd30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x10dd34: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DD34u;
    {
        const bool branch_taken_0x10dd34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd34) {
            ctx->pc = 0x10DD40u;
            goto label_10dd40;
        }
    }
    ctx->pc = 0x10DD3Cu;
    // 0x10dd3c: 0x2409270f  addiu       $t1, $zero, 0x270F
    ctx->pc = 0x10dd3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_10dd40:
    // 0x10dd40: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x10dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x10dd44: 0x91cb002a  lbu         $t3, 0x2A($t6)
    ctx->pc = 0x10dd44u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 42)));
    // 0x10dd48: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x10dd48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10dd4c: 0x256cffff  addiu       $t4, $t3, -0x1
    ctx->pc = 0x10dd4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x10dd50: 0xc5940  sll         $t3, $t4, 5
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x10dd54: 0x16c5823  subu        $t3, $t3, $t4
    ctx->pc = 0x10dd54u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x10dd58: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x10dd58u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x10dd5c: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x10dd5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x10dd60: 0xb5840  sll         $t3, $t3, 1
    ctx->pc = 0x10dd60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x10dd64: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x10dd64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x10dd68: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x10dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x10dd6c: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x10dd6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10dd70: 0x2921d8f1  slti        $at, $t1, -0x270F
    ctx->pc = 0x10dd70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4294957297) ? 1 : 0);
    // 0x10dd74: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DD74u;
    {
        const bool branch_taken_0x10dd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dd74) {
            ctx->pc = 0x10DD80u;
            goto label_10dd80;
        }
    }
    ctx->pc = 0x10DD7Cu;
    // 0x10dd7c: 0x2409d8f1  addiu       $t1, $zero, -0x270F
    ctx->pc = 0x10dd7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957297));
label_10dd80:
    // 0x10dd80: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x10dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x10dd84: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x10dd84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x10dd88: 0x29212710  slti        $at, $t1, 0x2710
    ctx->pc = 0x10dd88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x10dd8c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x10DD8Cu;
    {
        const bool branch_taken_0x10dd8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dd8c) {
            ctx->pc = 0x10DD98u;
            goto label_10dd98;
        }
    }
    ctx->pc = 0x10DD94u;
    // 0x10dd94: 0x2409270f  addiu       $t1, $zero, 0x270F
    ctx->pc = 0x10dd94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_10dd98:
    // 0x10dd98: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x10dd98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    ctx->pc = 0x10dd9cu;
}
