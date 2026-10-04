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

// Function: FUN_001af980
// Address: 0x1af980 - 0x1afae8
void FUN_001af980_0x1af980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af980_0x1af980");
#endif

    switch (ctx->pc) {
        case 0x1af9a0u: goto label_1af9a0;
        case 0x1af9acu: goto label_1af9ac;
        case 0x1af9d8u: goto label_1af9d8;
        case 0x1af9fcu: goto label_1af9fc;
        case 0x1afa04u: goto label_1afa04;
        case 0x1afa18u: goto label_1afa18;
        case 0x1afa28u: goto label_1afa28;
        case 0x1afa40u: goto label_1afa40;
        case 0x1afa48u: goto label_1afa48;
        case 0x1afa68u: goto label_1afa68;
        case 0x1afa7cu: goto label_1afa7c;
        case 0x1afaa0u: goto label_1afaa0;
        case 0x1afaa8u: goto label_1afaa8;
        default: break;
    }

    ctx->pc = 0x1af980u;

    // 0x1af980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1af984: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1af988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af98c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af990: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1af994: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af994u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1af998: 0xc06bcfa  jal         func_1AF3E8
    ctx->pc = 0x1AF998u;
    SET_GPR_U32(ctx, 31, 0x1AF9A0u);
    ctx->pc = 0x1AF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF998u;
    // 0x1af99c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E8u, 0x1AF998u, 0x1AF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9A0u;
label_1af9a0:
    // 0x1af9a0: 0x8e0472a8  lw          $a0, 0x72A8($s0)
    ctx->pc = 0x1af9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
    // 0x1af9a4: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1AF9A4u;
    SET_GPR_U32(ctx, 31, 0x1AF9ACu);
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1AF9A4u, 0x1AF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9ACu;
label_1af9ac:
    // 0x1af9ac: 0x8e0372a8  lw          $v1, 0x72A8($s0)
    ctx->pc = 0x1af9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
    // 0x1af9b0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AF9B0u;
    {
        const bool branch_taken_0x1af9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9B0u;
        // 0x1af9b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9b0) {
            ctx->pc = 0x1AF9E0u;
            goto label_1af9e0;
        }
    }
    ctx->pc = 0x1AF9B8u;
    // 0x1af9b8: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1af9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29328)));
    // 0x1af9bc: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AF9BCu;
    {
        const bool branch_taken_0x1af9bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AF9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9BCu;
        // 0x1af9c0: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9bc) {
            ctx->pc = 0x1AFA18u;
            goto label_1afa18;
        }
    }
    ctx->pc = 0x1AF9C4u;
    // 0x1af9c4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1af9c8: 0x8c46729c  lw          $a2, 0x729C($v0)
    ctx->pc = 0x1af9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29340)));
    // 0x1af9cc: 0x2484a9e8  addiu       $a0, $a0, -0x5618
    ctx->pc = 0x1af9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945256));
    // 0x1af9d0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF9D0u;
    SET_GPR_U32(ctx, 31, 0x1AF9D8u);
    ctx->pc = 0x1AF9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9D0u;
    // 0x1af9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF9D0u, 0x1AF9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9D8u;
label_1af9d8:
    // 0x1af9d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1AF9D8u;
    {
        const bool branch_taken_0x1af9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF9D8u;
        // 0x1af9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9d8) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AF9E0u;
label_1af9e0:
    // 0x1af9e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af9e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1af9e8: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x375F50u));
    // 0x1af9ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1af9f0: 0xac71729c  sw          $s1, 0x729C($v1)
    ctx->pc = 0x1af9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x28729Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x28729Cu, _value); } while (0);
    // 0x1af9f4: 0xc0691c8  jal         func_1A4720
    ctx->pc = 0x1AF9F4u;
    SET_GPR_U32(ctx, 31, 0x1AF9FCu);
    ctx->pc = 0x1AF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9F4u;
    // 0x1af9f8: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4720u, 0x1AF9F4u, 0x1AF9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF9FCu;
label_1af9fc:
    // 0x1af9fc: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x1AF9FCu;
    SET_GPR_U32(ctx, 31, 0x1AFA04u);
    ctx->pc = 0x1AFA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF9FCu;
    // 0x1afa00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x1AF9FCu, 0x1AFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA04u;
label_1afa04:
    // 0x1afa04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA04u;
        // 0x1afa08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AFA0Cu;
    // 0x1afa0c: 0x8e0472a8  lw          $a0, 0x72A8($s0)
    ctx->pc = 0x1afa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29352)));
    // 0x1afa10: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AFA10u;
    SET_GPR_U32(ctx, 31, 0x1AFA18u);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AFA10u, 0x1AFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA18u;
label_1afa18:
    // 0x1afa18: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AFA18u;
    {
        const bool branch_taken_0x1afa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA18u;
        // 0x1afa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa18) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AFA20u;
    SET_GPR_U32(ctx, 31, 0x1AFA28u);
    ctx->pc = 0x1AFA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA20u;
    // 0x1afa24: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AFA20u, 0x1AFA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA28u;
label_1afa28:
    // 0x1afa28: 0x8e4272b8  lw          $v0, 0x72B8($s2)
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29368)));
    // 0x1afa2c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AFA2Cu;
    {
        const bool branch_taken_0x1afa2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AFA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA2Cu;
        // 0x1afa30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa2c) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFA34u;
    // 0x1afa34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AFA34u;
    {
        const bool branch_taken_0x1afa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA34u;
        // 0x1afa38: 0x3c110029  lui         $s1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa34) {
            ctx->pc = 0x1AFA64u;
            goto label_1afa64;
        }
    }
    ctx->pc = 0x1AFA3Cu;
    // 0x1afa3c: 0x0  nop
    ctx->pc = 0x1afa3cu;
    // NOP
label_1afa40:
    // 0x1afa40: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1afa44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afa48:
    // 0x1afa48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afa4c: 0x0  nop
    ctx->pc = 0x1afa4cu;
    // NOP
    // 0x1afa50: 0x0  nop
    ctx->pc = 0x1afa50u;
    // NOP
    // 0x1afa54: 0x0  nop
    ctx->pc = 0x1afa54u;
    // NOP
    // 0x1afa58: 0x0  nop
    ctx->pc = 0x1afa58u;
    // NOP
    // 0x1afa5c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFA5Cu;
    {
        const bool branch_taken_0x1afa5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa5c) {
            ctx->pc = 0x1AFA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa48;
        }
    }
    ctx->pc = 0x1AFA64u;
label_1afa64:
    // 0x1afa64: 0x26308450  addiu       $s0, $s1, -0x7BB0
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
label_1afa68:
    // 0x1afa68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1afa6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa70: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x1afa74: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AFA74u;
    SET_GPR_U32(ctx, 31, 0x1AFA7Cu);
    ctx->pc = 0x1AFA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA74u;
    // 0x1afa78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AFA74u, 0x1AFA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFA7Cu;
label_1afa7c:
    // 0x1afa7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AFA7Cu;
    {
        const bool branch_taken_0x1afa7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1afa7c) {
            ctx->pc = 0x1AFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFA7Cu;
            // 0x1afa80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFACCu;
            goto label_1afacc;
        }
    }
    ctx->pc = 0x1AFA84u;
    // 0x1afa84: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1afa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1afa88: 0x8c437290  lw          $v1, 0x7290($v0)
    ctx->pc = 0x1afa88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x287290u));
    // 0x1afa8c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFA8Cu;
    {
        const bool branch_taken_0x1afa8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFA8Cu;
        // 0x1afa90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afa8c) {
            ctx->pc = 0x1AFAA4u;
            goto label_1afaa4;
        }
    }
    ctx->pc = 0x1AFA94u;
    // 0x1afa94: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1afa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1afa98: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AFA98u;
    SET_GPR_U32(ctx, 31, 0x1AFAA0u);
    ctx->pc = 0x1AFA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFA98u;
    // 0x1afa9c: 0x2484aa10  addiu       $a0, $a0, -0x55F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AFA98u, 0x1AFAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFAA0u;
label_1afaa0:
    // 0x1afaa0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1afaa4:
    // 0x1afaa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1afaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1afaa8:
    // 0x1afaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1afaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1afaac: 0x0  nop
    ctx->pc = 0x1afaacu;
    // NOP
    // 0x1afab0: 0x0  nop
    ctx->pc = 0x1afab0u;
    // NOP
    // 0x1afab4: 0x0  nop
    ctx->pc = 0x1afab4u;
    // NOP
    // 0x1afab8: 0x0  nop
    ctx->pc = 0x1afab8u;
    // NOP
    // 0x1afabc: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AFABCu;
    {
        const bool branch_taken_0x1afabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afabc) {
            ctx->pc = 0x1AFAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afaa8;
        }
    }
    ctx->pc = 0x1AFAC4u;
    // 0x1afac4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AFAC4u;
    {
        const bool branch_taken_0x1afac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFAC4u;
        // 0x1afac8: 0x26308450  addiu       $s0, $s1, -0x7BB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afac4) {
            ctx->pc = 0x1AFA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa68;
        }
    }
    ctx->pc = 0x1AFACCu;
label_1afacc:
    // 0x1afacc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AFACCu;
    {
        const bool branch_taken_0x1afacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFACCu;
        // 0x1afad0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afacc) {
            ctx->pc = 0x1AFA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afa40;
        }
    }
    ctx->pc = 0x1AFAD4u;
    // 0x1afad4: 0xae4072b8  sw          $zero, 0x72B8($s2)
    ctx->pc = 0x1afad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29368), GPR_U32(ctx, 0));
label_1afad8:
    // 0x1afad8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1afad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1afadc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afae0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1afae8u;
}
