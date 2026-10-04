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

// Function: entry_0012b214
// Address: 0x12b214 - 0x12b250
void entry_0012b214_0x12b214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b214_0x12b214");
#endif

    ctx->pc = 0x12b214u;

    // 0x12b214: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12b214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12b218: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x12b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12b21c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12B21Cu;
    {
        const bool branch_taken_0x12b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B21Cu;
        // 0x12b220: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b21c) {
            ctx->pc = 0x12B250u;
            return;
        }
    }
    ctx->pc = 0x12B224u;
    // 0x12b224: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x12b224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12b228: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12b228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12b22c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x12b230: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12b230u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12b234: 0x0  nop
    ctx->pc = 0x12b234u;
    // NOP
    // 0x12b238: 0x0  nop
    ctx->pc = 0x12b238u;
    // NOP
    // 0x12b23c: 0x1012  mflo        $v0
    ctx->pc = 0x12b23cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x12b240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12b244: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x12b244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12b248: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12B248u;
    {
        const bool branch_taken_0x12b248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B248u;
        // 0x12b24c: 0xa20202e3  sb          $v0, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b248) {
            ctx->pc = 0x12B290u;
            return;
        }
    }
    ctx->pc = 0x12B250u;
}
