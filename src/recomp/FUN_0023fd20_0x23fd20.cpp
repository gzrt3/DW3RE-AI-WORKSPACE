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

// Function: FUN_0023fd20
// Address: 0x23fd20 - 0x23ff54
void FUN_0023fd20_0x23fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fd20_0x23fd20");
#endif

    switch (ctx->pc) {
        case 0x23fd40u: goto label_23fd40;
        case 0x23fe58u: goto label_23fe58;
        case 0x23fe98u: goto label_23fe98;
        case 0x23fef0u: goto label_23fef0;
        default: break;
    }

    ctx->pc = 0x23fd20u;

    // 0x23fd20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23fd24: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23fd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23fd28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fd2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fd34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fd38: 0xac20e290  sw          $zero, -0x1D70($at)
    ctx->pc = 0x23fd38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x29E290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29E290u, _value); } while (0);
    // 0x23fd3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fd40:
    // 0x23fd40: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x23fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x23fd44: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x23FD44u;
    {
        const bool branch_taken_0x23fd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD44u;
        // 0x23fd48: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd44) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD4Cu;
    // 0x23fd4c: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23FD4Cu;
    {
        const bool branch_taken_0x23fd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd4c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD54u;
    // 0x23fd54: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x23fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x23fd58: 0x12020037  beq         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x23FD58u;
    {
        const bool branch_taken_0x23fd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD58u;
        // 0x23fd5c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd58) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD60u;
    // 0x23fd60: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23FD60u;
    {
        const bool branch_taken_0x23fd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd60) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD68u;
    // 0x23fd68: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x23fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x23fd6c: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x23FD6Cu;
    {
        const bool branch_taken_0x23fd6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD6Cu;
        // 0x23fd70: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd6c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD74u;
    // 0x23fd74: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23FD74u;
    {
        const bool branch_taken_0x23fd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd74) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD7Cu;
    // 0x23fd7c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x23fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x23fd80: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x23FD80u;
    {
        const bool branch_taken_0x23fd80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD80u;
        // 0x23fd84: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd80) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD88u;
    // 0x23fd88: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23FD88u;
    {
        const bool branch_taken_0x23fd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd88) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD90u;
    // 0x23fd90: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23fd94: 0x12020028  beq         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23FD94u;
    {
        const bool branch_taken_0x23fd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FD94u;
        // 0x23fd98: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fd94) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FD9Cu;
    // 0x23fd9c: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23FD9Cu;
    {
        const bool branch_taken_0x23fd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd9c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDA4u;
    // 0x23fda4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x23fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x23fda8: 0x12020023  beq         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23FDA8u;
    {
        const bool branch_taken_0x23fda8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDA8u;
        // 0x23fdac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fda8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDB0u;
    // 0x23fdb0: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23FDB0u;
    {
        const bool branch_taken_0x23fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdb0) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDB8u;
    // 0x23fdb8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x23fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x23fdbc: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23FDBCu;
    {
        const bool branch_taken_0x23fdbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDBCu;
        // 0x23fdc0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdbc) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDC4u;
    // 0x23fdc4: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23FDC4u;
    {
        const bool branch_taken_0x23fdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdc4) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDCCu;
    // 0x23fdcc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x23fdd0: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23FDD0u;
    {
        const bool branch_taken_0x23fdd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDD0u;
        // 0x23fdd4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdd0) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDD8u;
    // 0x23fdd8: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FDD8u;
    {
        const bool branch_taken_0x23fdd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdd8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDE0u;
    // 0x23fde0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23fde4: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23FDE4u;
    {
        const bool branch_taken_0x23fde4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDE4u;
        // 0x23fde8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fde4) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDECu;
    // 0x23fdec: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FDECu;
    {
        const bool branch_taken_0x23fdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdec) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FDF4u;
    // 0x23fdf4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23fdf8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23FDF8u;
    {
        const bool branch_taken_0x23fdf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FDF8u;
        // 0x23fdfc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fdf8) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE00u;
    // 0x23fe00: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23FE00u;
    {
        const bool branch_taken_0x23fe00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe00) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE08u;
    // 0x23fe08: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23fe0c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FE0Cu;
    {
        const bool branch_taken_0x23fe0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE0Cu;
        // 0x23fe10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe0c) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE14u;
    // 0x23fe14: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FE14u;
    {
        const bool branch_taken_0x23fe14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe14) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE1Cu;
    // 0x23fe1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fe20: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FE20u;
    {
        const bool branch_taken_0x23fe20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe20) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE28u;
    // 0x23fe28: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FE28u;
    {
        const bool branch_taken_0x23fe28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe28) {
            ctx->pc = 0x23FE38u;
            goto label_23fe38;
        }
    }
    ctx->pc = 0x23FE30u;
    // 0x23fe30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23FE30u;
    {
        const bool branch_taken_0x23fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe30) {
            ctx->pc = 0x23FE60u;
            goto label_23fe60;
        }
    }
    ctx->pc = 0x23FE38u;
label_23fe38:
    // 0x23fe38: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fe3c: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fe40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fe44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23fe48: 0x34213a10  ori         $at, $at, 0x3A10
    ctx->pc = 0x23fe48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14864);
    // 0x23fe4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe50: 0xc065580  jal         func_195600
    ctx->pc = 0x23FE50u;
    SET_GPR_U32(ctx, 31, 0x23FE58u);
    ctx->pc = 0x23FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FE50u;
    // 0x23fe54: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x23FE50u, 0x23FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FE58u;
label_23fe58:
    // 0x23fe58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FE58u;
    {
        const bool branch_taken_0x23fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe58) {
            ctx->pc = 0x23FE7Cu;
            goto label_23fe7c;
        }
    }
    ctx->pc = 0x23FE60u;
label_23fe60:
    // 0x23fe60: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fe64: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fe68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fe68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fe6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23fe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23fe70: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x23fe74: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23fe78: 0xa0233a1b  sb          $v1, 0x3A1B($at)
    ctx->pc = 0x23fe78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14875), (uint8_t)GPR_U32(ctx, 3));
label_23fe7c:
    // 0x23fe7c: 0x0  nop
    ctx->pc = 0x23fe7cu;
    // NOP
    // 0x23fe80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23fe80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23fe84: 0x2a0200ab  slti        $v0, $s0, 0xAB
    ctx->pc = 0x23fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
    // 0x23fe88: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x23FE88u;
    {
        const bool branch_taken_0x23fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE88u;
        // 0x23fe8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe88) {
            ctx->pc = 0x23FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fd40;
        }
    }
    ctx->pc = 0x23FE90u;
    // 0x23fe90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23fe90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fe94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23fe94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fe98:
    // 0x23fe98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x23fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23fe9c: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23FE9Cu;
    {
        const bool branch_taken_0x23fe9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FE9Cu;
        // 0x23fea0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fe9c) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEA4u;
    // 0x23fea4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23FEA4u;
    {
        const bool branch_taken_0x23fea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fea4) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEACu;
    // 0x23feac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23feb0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FEB0u;
    {
        const bool branch_taken_0x23feb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x23FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEB0u;
        // 0x23feb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23feb0) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEB8u;
    // 0x23feb8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FEB8u;
    {
        const bool branch_taken_0x23feb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23feb8) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEC0u;
    // 0x23fec0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FEC0u;
    {
        const bool branch_taken_0x23fec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec0) {
            ctx->pc = 0x23FED0u;
            goto label_23fed0;
        }
    }
    ctx->pc = 0x23FEC8u;
    // 0x23fec8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23FEC8u;
    {
        const bool branch_taken_0x23fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fec8) {
            ctx->pc = 0x23FEF8u;
            goto label_23fef8;
        }
    }
    ctx->pc = 0x23FED0u;
label_23fed0:
    // 0x23fed0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fed4: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23fed8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23fedc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23fee0: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x23fee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
    // 0x23fee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23fee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fee8: 0xc065564  jal         func_195590
    ctx->pc = 0x23FEE8u;
    SET_GPR_U32(ctx, 31, 0x23FEF0u);
    ctx->pc = 0x23FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FEE8u;
    // 0x23feec: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195590u, 0x23FEE8u, 0x23FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FEF0u;
label_23fef0:
    // 0x23fef0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23FEF0u;
    {
        const bool branch_taken_0x23fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fef0) {
            ctx->pc = 0x23FF14u;
            goto label_23ff14;
        }
    }
    ctx->pc = 0x23FEF8u;
label_23fef8:
    // 0x23fef8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23fefc: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23ff00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ff04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ff08: 0x240300ab  addiu       $v1, $zero, 0xAB
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x23ff0c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x23ff0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x23ff10: 0xa0234a3b  sb          $v1, 0x4A3B($at)
    ctx->pc = 0x23ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19003), (uint8_t)GPR_U32(ctx, 3));
label_23ff14:
    // 0x23ff14: 0x0  nop
    ctx->pc = 0x23ff14u;
    // NOP
    // 0x23ff18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23ff1c: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x23ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x23ff20: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x23FF20u;
    {
        const bool branch_taken_0x23ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF20u;
        // 0x23ff24: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff20) {
            ctx->pc = 0x23FE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fe98;
        }
    }
    ctx->pc = 0x23FF28u;
    // 0x23ff28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ff28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23ff34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x23ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x23ff38: 0x2442c990  addiu       $v0, $v0, -0x3670
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953360));
    // 0x23ff3c: 0x342130f0  ori         $at, $at, 0x30F0
    ctx->pc = 0x23ff3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12528);
    // 0x23ff40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23ff44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff48: 0x240601a8  addiu       $a2, $zero, 0x1A8
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x23ff4c: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x23FF4Cu;
    SET_GPR_U32(ctx, 31, 0x23FF54u);
    ctx->pc = 0x23FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF4Cu;
    // 0x23ff50: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x23FF4Cu, 0x23FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF54u;
}
