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

// Function: entry_00164bcc
// Address: 0x164bcc - 0x164c00
void entry_00164bcc_0x164bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164bcc_0x164bcc");
#endif

    ctx->pc = 0x164bccu;

    // 0x164bcc: 0x91430096  lbu         $v1, 0x96($t2)
    ctx->pc = 0x164bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 150)));
    // 0x164bd0: 0x14680010  bne         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x164BD0u;
    {
        const bool branch_taken_0x164bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x164bd0) {
            ctx->pc = 0x164C14u;
            return;
        }
    }
    ctx->pc = 0x164BD8u;
    // 0x164bd8: 0x91430094  lbu         $v1, 0x94($t2)
    ctx->pc = 0x164bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 148)));
    // 0x164bdc: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x164BDCu;
    {
        const bool branch_taken_0x164bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164bdc) {
            ctx->pc = 0x164C14u;
            return;
        }
    }
    ctx->pc = 0x164BE4u;
    // 0x164be4: 0x91430097  lbu         $v1, 0x97($t2)
    ctx->pc = 0x164be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 151)));
    // 0x164be8: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x164BE8u;
    {
        const bool branch_taken_0x164be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x164be8) {
            ctx->pc = 0x164C00u;
            return;
        }
    }
    ctx->pc = 0x164BF0u;
    // 0x164bf0: 0x8d430090  lw          $v1, 0x90($t2)
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 144)));
    // 0x164bf4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x164bf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164BF8u;
    {
        const bool branch_taken_0x164bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BF8u;
        // 0x164bfc: 0xad430090  sw          $v1, 0x90($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bf8) {
            ctx->pc = 0x164C14u;
            return;
        }
    }
    ctx->pc = 0x164C00u;
}
