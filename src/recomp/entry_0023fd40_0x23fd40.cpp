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

// Function: entry_0023fd40
// Address: 0x23fd40 - 0x23fe38
void entry_0023fd40_0x23fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fd40_0x23fd40");
#endif

    ctx->pc = 0x23fd40u;

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
            return;
        }
    }
    ctx->pc = 0x23FD4Cu;
    // 0x23fd4c: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23FD4Cu;
    {
        const bool branch_taken_0x23fd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd4c) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FD60u;
    // 0x23fd60: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23FD60u;
    {
        const bool branch_taken_0x23fd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd60) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FD74u;
    // 0x23fd74: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x23FD74u;
    {
        const bool branch_taken_0x23fd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd74) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FD88u;
    // 0x23fd88: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23FD88u;
    {
        const bool branch_taken_0x23fd88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd88) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FD9Cu;
    // 0x23fd9c: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23FD9Cu;
    {
        const bool branch_taken_0x23fd9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fd9c) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FDB0u;
    // 0x23fdb0: 0x12020021  beq         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23FDB0u;
    {
        const bool branch_taken_0x23fdb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdb0) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FDC4u;
    // 0x23fdc4: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23FDC4u;
    {
        const bool branch_taken_0x23fdc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdc4) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FDD8u;
    // 0x23fdd8: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23FDD8u;
    {
        const bool branch_taken_0x23fdd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdd8) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FDECu;
    // 0x23fdec: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23FDECu;
    {
        const bool branch_taken_0x23fdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fdec) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FE00u;
    // 0x23fe00: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23FE00u;
    {
        const bool branch_taken_0x23fe00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe00) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FE14u;
    // 0x23fe14: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FE14u;
    {
        const bool branch_taken_0x23fe14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fe14) {
            ctx->pc = 0x23FE38u;
            return;
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
            return;
        }
    }
    ctx->pc = 0x23FE28u;
    // 0x23fe28: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FE28u;
    {
        const bool branch_taken_0x23fe28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe28) {
            ctx->pc = 0x23FE38u;
            return;
        }
    }
    ctx->pc = 0x23FE30u;
    // 0x23fe30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23FE30u;
    {
        const bool branch_taken_0x23fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fe30) {
            ctx->pc = 0x23FE60u;
            return;
        }
    }
    ctx->pc = 0x23FE38u;
}
