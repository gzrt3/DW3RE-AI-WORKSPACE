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

// Function: entry_0020fb78
// Address: 0x20fb78 - 0x20fbd4
void entry_0020fb78_0x20fb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fb78_0x20fb78");
#endif

    ctx->pc = 0x20fb78u;

label_20fb78:
    // 0x20fb78: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x20fb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20fb7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20fb80: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x20fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x20fb84: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x20fb84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fb88: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x20fb88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x20fb8c: 0xa4e30002  sh          $v1, 0x2($a3)
    ctx->pc = 0x20fb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x20fb90: 0x91030004  lbu         $v1, 0x4($t0)
    ctx->pc = 0x20fb90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x20fb94: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x20fb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fb98: 0x91030005  lbu         $v1, 0x5($t0)
    ctx->pc = 0x20fb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x20fb9c: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x20fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x20fba0: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x20fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x20fba4: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x20fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x20fba8: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x20fba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x20fbac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20FBACu;
    {
        const bool branch_taken_0x20fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FBACu;
        // 0x20fbb0: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fbac) {
            ctx->pc = 0x20FB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20fb78;
        }
    }
    ctx->pc = 0x20FBB4u;
    // 0x20fbb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fbb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20fbb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbbc: 0x342139c0  ori         $at, $at, 0x39C0
    ctx->pc = 0x20fbbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14784);
    // 0x20fbc0: 0xc13821  addu        $a3, $a2, $at
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x20fbc4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20fbc8: 0x34213908  ori         $at, $at, 0x3908
    ctx->pc = 0x20fbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14600);
    // 0x20fbcc: 0x814021  addu        $t0, $a0, $at
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x20fbd0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x20fbd4u;
}
