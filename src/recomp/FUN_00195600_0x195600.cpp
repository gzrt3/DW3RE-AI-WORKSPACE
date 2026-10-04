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

// Function: FUN_00195600
// Address: 0x195600 - 0x195660
void FUN_00195600_0x195600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00195600_0x195600");
#endif

    ctx->pc = 0x195600u;

    // 0x195600: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x195600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x195604: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x195604u;
    {
        const bool branch_taken_0x195604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195604u;
        // 0x195608: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195604) {
            ctx->pc = 0x195614u;
            goto label_195614;
        }
    }
    ctx->pc = 0x19560Cu;
    // 0x19560c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19560Cu;
    {
        const bool branch_taken_0x19560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19560Cu;
        // 0x195610: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19560c) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x195614u;
label_195614:
    // 0x195614: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x195618: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x195618u;
    {
        const bool branch_taken_0x195618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195618) {
            ctx->pc = 0x19562Cu;
            goto label_19562c;
        }
    }
    ctx->pc = 0x195620u;
    // 0x195620: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
    // 0x195624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x195624u;
    {
        const bool branch_taken_0x195624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195624) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x19562Cu;
label_19562c:
    // 0x19562c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x195630: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x195634: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
    // 0x195638: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19563c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x195640: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195644: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x195644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_195648:
    // 0x195648: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x195648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x19564c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x195650: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x195650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x195654: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x195654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x195658: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x195658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x19565c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19565cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x195660u;
}
