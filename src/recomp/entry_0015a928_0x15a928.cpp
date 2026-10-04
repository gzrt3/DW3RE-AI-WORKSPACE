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

// Function: entry_0015a928
// Address: 0x15a928 - 0x15a97c
void entry_0015a928_0x15a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a928_0x15a928");
#endif

    ctx->pc = 0x15a928u;

    // 0x15a928: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x15a928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x15a92c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x15a930: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x15a930u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15a934: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x15a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x15a938: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x15a93c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x15a940: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x15a944: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
    // 0x15a948: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x15a94c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15a950: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15a954: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15a958: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x15a958u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x15a95c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x15a960: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15a964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15a968: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15a968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15a96c: 0x1483007d  bne         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x15A96Cu;
    {
        const bool branch_taken_0x15a96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a96c) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15A974u;
    // 0x15a974: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x15A974u;
    {
        const bool branch_taken_0x15a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A974u;
        // 0x15a978: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a974) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15A97Cu;
}
