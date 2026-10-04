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

// Function: FUN_001a5ec0
// Address: 0x1a5ec0 - 0x1a5f74
void FUN_001a5ec0_0x1a5ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5ec0_0x1a5ec0");
#endif

    switch (ctx->pc) {
        case 0x1a5edcu: goto label_1a5edc;
        case 0x1a5ef4u: goto label_1a5ef4;
        case 0x1a5f60u: goto label_1a5f60;
        default: break;
    }

    ctx->pc = 0x1a5ec0u;

    // 0x1a5ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a5ec4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5ec8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a5ecc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5ed0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a5ed4: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1A5ED4u;
    SET_GPR_U32(ctx, 31, 0x1A5EDCu);
    ctx->pc = 0x1A5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5ED4u;
    // 0x1a5ed8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1A5ED4u, 0x1A5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EDCu;
label_1a5edc:
    // 0x1a5edc: 0x26111410  addiu       $s1, $s0, 0x1410
    ctx->pc = 0x1a5edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5136));
    // 0x1a5ee0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x1a5ee4: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x1a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1a5ee8: 0x24c65b08  addiu       $a2, $a2, 0x5B08
    ctx->pc = 0x1a5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23304));
    // 0x1a5eec: 0xc069620  jal         func_1A5880
    ctx->pc = 0x1A5EECu;
    SET_GPR_U32(ctx, 31, 0x1A5EF4u);
    ctx->pc = 0x1A5EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EECu;
    // 0x1a5ef0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5880u, 0x1A5EECu, 0x1A5EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EF4u;
label_1a5ef4:
    // 0x1a5ef4: 0xae021410  sw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5136), GPR_U32(ctx, 2));
    // 0x1a5ef8: 0x8e021410  lw          $v0, 0x1410($s0)
    ctx->pc = 0x1a5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5136)));
    // 0x1a5efc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5EFCu;
    {
        const bool branch_taken_0x1a5efc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EFCu;
        // 0x1a5f00: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5efc) {
            ctx->pc = 0x1A5F0Cu;
            goto label_1a5f0c;
        }
    }
    ctx->pc = 0x1A5F04u;
    // 0x1a5f04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A5F04u;
    {
        const bool branch_taken_0x1a5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F04u;
        // 0x1a5f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f04) {
            ctx->pc = 0x1A5F68u;
            goto label_1a5f68;
        }
    }
    ctx->pc = 0x1A5F0Cu;
label_1a5f0c:
    // 0x1a5f0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a5f10: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1a5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1a5f14: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1a5f18: 0x24841580  addiu       $a0, $a0, 0x1580
    ctx->pc = 0x1a5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5504));
    // 0x1a5f1c: 0x24421440  addiu       $v0, $v0, 0x1440
    ctx->pc = 0x1a5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x1a5f20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5f24: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1a5f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1a5f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1a5f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1a5f2c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1a5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1a5f30: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1a5f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1a5f34: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1a5f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1a5f38: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1a5f3c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1a5f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1a5f40: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1a5f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1a5f44: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1a5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a5f48: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x1a5f48u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x20371444u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x20371444u, _value); } while (0);
    // 0x1a5f4c: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x1a5f4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x20371446u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20371446u, _value); } while (0);
    // 0x1a5f50: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x1a5f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x20371447u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x20371447u, _value); } while (0);
    // 0x1a5f54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a5f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x20371448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x20371448u, _value); } while (0);
    // 0x1a5f58: 0xc069698  jal         func_1A5A60
    ctx->pc = 0x1A5F58u;
    SET_GPR_U32(ctx, 31, 0x1A5F60u);
    ctx->pc = 0x1A5F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F58u;
    // 0x1a5f5c: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5A60u, 0x1A5F58u, 0x1A5F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F60u;
label_1a5f60:
    // 0x1a5f60: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1a5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x1a5f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5f68:
    // 0x1a5f68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5f6c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5f74u;
}
