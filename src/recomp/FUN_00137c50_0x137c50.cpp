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

// Function: FUN_00137c50
// Address: 0x137c50 - 0x137d00
void FUN_00137c50_0x137c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137c50_0x137c50");
#endif

    switch (ctx->pc) {
        case 0x137ce0u: goto label_137ce0;
        case 0x137ce8u: goto label_137ce8;
        case 0x137cf4u: goto label_137cf4;
        case 0x137cfcu: goto label_137cfc;
        default: break;
    }

    ctx->pc = 0x137c50u;

    // 0x137c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137c54: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137c58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137c5c: 0x9023a400  lbu         $v1, -0x5C00($at)
    ctx->pc = 0x137c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A400u));
    // 0x137c60: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x137c60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x137c64: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x137C64u;
    {
        const bool branch_taken_0x137c64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C64u;
        // 0x137c68: 0x3c010031  lui         $at, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c64) {
            ctx->pc = 0x137C94u;
            goto label_137c94;
        }
    }
    ctx->pc = 0x137C6Cu;
    // 0x137c6c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137c70: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x137c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x137c74: 0x8c23a414  lw          $v1, -0x5BEC($at)
    ctx->pc = 0x137c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A414u));
    // 0x137c78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137c7c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x137c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x137c80: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137c88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137c8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x137C8Cu;
    {
        const bool branch_taken_0x137c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C8Cu;
        // 0x137c90: 0xac23a3cc  sw          $v1, -0x5C34($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c8c) {
            ctx->pc = 0x137CB4u;
            goto label_137cb4;
        }
    }
    ctx->pc = 0x137C94u;
label_137c94:
    // 0x137c94: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x137c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x137c98: 0x8c23a424  lw          $v1, -0x5BDC($at)
    ctx->pc = 0x137c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943780)));
    // 0x137c9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x137c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x137ca0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x137ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x137ca4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x137ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137cac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x137cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137cb0: 0xac23a3cc  sw          $v1, -0x5C34($at)
    ctx->pc = 0x137cb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x30A3CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A3CCu, _value); } while (0);
label_137cb4:
    // 0x137cb4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cb8: 0xa420a3e4  sh          $zero, -0x5C1C($at)
    ctx->pc = 0x137cb8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E4u, _value); } while (0);
    // 0x137cbc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cc0: 0xa420a3e8  sh          $zero, -0x5C18($at)
    ctx->pc = 0x137cc0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A3E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x30A3E8u, _value); } while (0);
    // 0x137cc4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cc8: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x137cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x137ccc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x137cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x137cd0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x137CD0u;
    {
        const bool branch_taken_0x137cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x137cd0) {
            ctx->pc = 0x137CFCu;
            goto label_137cfc;
        }
    }
    ctx->pc = 0x137CD8u;
    // 0x137cd8: 0xc04d3d4  jal         func_134F50
    ctx->pc = 0x137CD8u;
    SET_GPR_U32(ctx, 31, 0x137CE0u);
    ctx->pc = 0x134F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F50u, 0x137CD8u, 0x137CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CE0u;
label_137ce0:
    // 0x137ce0: 0xc04d4a8  jal         func_1352A0
    ctx->pc = 0x137CE0u;
    SET_GPR_U32(ctx, 31, 0x137CE8u);
    ctx->pc = 0x1352A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352A0u, 0x137CE0u, 0x137CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CE8u;
label_137ce8:
    // 0x137ce8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x137cec: 0xc04c430  jal         func_1310C0
    ctx->pc = 0x137CECu;
    SET_GPR_U32(ctx, 31, 0x137CF4u);
    ctx->pc = 0x137CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CECu;
    // 0x137cf0: 0x8c24a3cc  lw          $a0, -0x5C34($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310C0u, 0x137CECu, 0x137CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CF4u;
label_137cf4:
    // 0x137cf4: 0xc04d1e0  jal         func_134780
    ctx->pc = 0x137CF4u;
    SET_GPR_U32(ctx, 31, 0x137CFCu);
    ctx->pc = 0x134780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134780u, 0x137CF4u, 0x137CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CFCu;
label_137cfc:
    // 0x137cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x137d00u;
}
