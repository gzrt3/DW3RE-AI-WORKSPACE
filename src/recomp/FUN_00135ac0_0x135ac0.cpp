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

// Function: FUN_00135ac0
// Address: 0x135ac0 - 0x135b6c
void FUN_00135ac0_0x135ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00135ac0_0x135ac0");
#endif

    switch (ctx->pc) {
        case 0x135ae8u: goto label_135ae8;
        case 0x135b30u: goto label_135b30;
        case 0x135b54u: goto label_135b54;
        default: break;
    }

    ctx->pc = 0x135ac0u;

    // 0x135ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135ac4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x135acc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135ad0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135ad4: 0x8c24a420  lw          $a0, -0x5BE0($at)
    ctx->pc = 0x135ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x30A420u));
    // 0x135ad8: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x135AD8u;
    {
        const bool branch_taken_0x135ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ad8) {
            ctx->pc = 0x135B28u;
            goto label_135b28;
        }
    }
    ctx->pc = 0x135AE0u;
    // 0x135ae0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x135AE0u;
    SET_GPR_U32(ctx, 31, 0x135AE8u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x135AE0u, 0x135AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135AE8u;
label_135ae8:
    // 0x135ae8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135aec: 0xac20a420  sw          $zero, -0x5BE0($at)
    ctx->pc = 0x135aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A420u, _value); } while (0);
    // 0x135af0: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135af4: 0xac20a424  sw          $zero, -0x5BDC($at)
    ctx->pc = 0x135af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A424u, _value); } while (0);
    // 0x135af8: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135afc: 0xac20a428  sw          $zero, -0x5BD8($at)
    ctx->pc = 0x135afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A428u, _value); } while (0);
    // 0x135b00: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135b04: 0xac20a42c  sw          $zero, -0x5BD4($at)
    ctx->pc = 0x135b04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A42Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A42Cu, _value); } while (0);
    // 0x135b08: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135b0c: 0xac20a430  sw          $zero, -0x5BD0($at)
    ctx->pc = 0x135b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A430u, _value); } while (0);
    // 0x135b10: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135b14: 0xac20a454  sw          $zero, -0x5BAC($at)
    ctx->pc = 0x135b14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A454u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A454u, _value); } while (0);
    // 0x135b18: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135b1c: 0xac20a448  sw          $zero, -0x5BB8($at)
    ctx->pc = 0x135b1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A448u, _value); } while (0);
    // 0x135b20: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x135b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x135b24: 0xac20a44c  sw          $zero, -0x5BB4($at)
    ctx->pc = 0x135b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x30A44Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x30A44Cu, _value); } while (0);
label_135b28:
    // 0x135b28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x135b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x135b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135b30:
    // 0x135b30: 0x0  nop
    ctx->pc = 0x135b30u;
    // NOP
    // 0x135b34: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x135b38: 0x24639f20  addiu       $v1, $v1, -0x60E0
    ctx->pc = 0x135b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942496));
    // 0x135b3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x135b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x135b40: 0x8c640514  lw          $a0, 0x514($v1)
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1300)));
    // 0x135b44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135B44u;
    {
        const bool branch_taken_0x135b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b44) {
            ctx->pc = 0x135B54u;
            goto label_135b54;
        }
    }
    ctx->pc = 0x135B4Cu;
    // 0x135b4c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x135B4Cu;
    SET_GPR_U32(ctx, 31, 0x135B54u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x135B4Cu, 0x135B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135B54u;
label_135b54:
    // 0x135b54: 0x0  nop
    ctx->pc = 0x135b54u;
    // NOP
    // 0x135b58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x135b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x135b5c: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x135b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x135b60: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x135B60u;
    {
        const bool branch_taken_0x135b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135B60u;
        // 0x135b64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b60) {
            ctx->pc = 0x135B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135b30;
        }
    }
    ctx->pc = 0x135B68u;
    // 0x135b68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x135b6cu;
}
