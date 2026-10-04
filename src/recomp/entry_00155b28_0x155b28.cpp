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

// Function: entry_00155b28
// Address: 0x155b28 - 0x155ba8
void entry_00155b28_0x155b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155b28_0x155b28");
#endif

    ctx->pc = 0x155b28u;

    // 0x155b28: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x155b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x155b2c: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x155b2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
    // 0x155b30: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x155b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x155b34: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x155b34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155b38: 0x0  nop
    ctx->pc = 0x155b38u;
    // NOP
    // 0x155b3c: 0x0  nop
    ctx->pc = 0x155b3cu;
    // NOP
    // 0x155b40: 0x2010  mfhi        $a0
    ctx->pc = 0x155b40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x155b44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x155B44u;
    {
        const bool branch_taken_0x155b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B44u;
        // 0x155b48: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b44) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155B4Cu;
    // 0x155b4c: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x155B4Cu;
    {
        const bool branch_taken_0x155b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b4c) {
            ctx->pc = 0x155BA4u;
            goto label_155ba4;
        }
    }
    ctx->pc = 0x155B54u;
    // 0x155b54: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x155b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x155b58: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x155B58u;
    {
        const bool branch_taken_0x155b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x155B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B58u;
        // 0x155b5c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b58) {
            ctx->pc = 0x155B9Cu;
            goto label_155b9c;
        }
    }
    ctx->pc = 0x155B60u;
    // 0x155b60: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x155B60u;
    {
        const bool branch_taken_0x155b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b60) {
            ctx->pc = 0x155B94u;
            goto label_155b94;
        }
    }
    ctx->pc = 0x155B68u;
    // 0x155b68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x155b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x155b6c: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155B6Cu;
    {
        const bool branch_taken_0x155b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x155b6c) {
            ctx->pc = 0x155B8Cu;
            goto label_155b8c;
        }
    }
    ctx->pc = 0x155B74u;
    // 0x155b74: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155B74u;
    {
        const bool branch_taken_0x155b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b74) {
            ctx->pc = 0x155B84u;
            goto label_155b84;
        }
    }
    ctx->pc = 0x155B7Cu;
    // 0x155b7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x155B7Cu;
    {
        const bool branch_taken_0x155b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155b7c) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155B84u;
label_155b84:
    // 0x155b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x155B84u;
    {
        const bool branch_taken_0x155b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B84u;
        // 0x155b88: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b84) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155B8Cu;
label_155b8c:
    // 0x155b8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155B8Cu;
    {
        const bool branch_taken_0x155b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B8Cu;
        // 0x155b90: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b8c) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155B94u;
label_155b94:
    // 0x155b94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155B94u;
    {
        const bool branch_taken_0x155b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B94u;
        // 0x155b98: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b94) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155B9Cu;
label_155b9c:
    // 0x155b9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x155B9Cu;
    {
        const bool branch_taken_0x155b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155B9Cu;
        // 0x155ba0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155b9c) {
            ctx->pc = 0x155BA8u;
            return;
        }
    }
    ctx->pc = 0x155BA4u;
label_155ba4:
    // 0x155ba4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->pc = 0x155ba8u;
}
