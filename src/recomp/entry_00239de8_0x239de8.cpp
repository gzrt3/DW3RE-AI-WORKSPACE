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

// Function: entry_00239de8
// Address: 0x239de8 - 0x239fb0
void entry_00239de8_0x239de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239de8_0x239de8");
#endif

    switch (ctx->pc) {
        case 0x239f78u: goto label_239f78;
        default: break;
    }

    ctx->pc = 0x239de8u;

    // 0x239de8: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x239de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239dec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x239DECu;
    {
        const bool branch_taken_0x239dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239dec) {
            ctx->pc = 0x239DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239DECu;
            // 0x239df0: 0x25e40830  addiu       $a0, $t7, 0x830 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239E40u;
            goto label_239e40;
        }
    }
    ctx->pc = 0x239DF4u;
    // 0x239df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239df8: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x239df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x239dfc: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x239dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x239e00: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x239e00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x239e04: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x239e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x239e08: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239e0c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x239e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x239e10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239e14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x239e14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x239e18: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x239e1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x239e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x239e20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e24: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x239e24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
    // 0x239e28: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x239e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x239e2c: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x239e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
    // 0x239e30: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x239e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x239e34: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x239e34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x239e38: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x239E38u;
    {
        const bool branch_taken_0x239e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E38u;
        // 0x239e3c: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e38) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x239E40u;
label_239e40:
    // 0x239e40: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x239e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x239e44: 0x5000008  bltz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x239E44u;
    {
        const bool branch_taken_0x239e44 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x239E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E44u;
        // 0x239e48: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e44) {
            ctx->pc = 0x239E68u;
            goto label_239e68;
        }
    }
    ctx->pc = 0x239E4Cu;
    // 0x239e4c: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x239e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x239e50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239e54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x239e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x239e58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x239e5c: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x239E5Cu;
    {
        const bool branch_taken_0x239e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E5Cu;
        // 0x239e60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e5c) {
            ctx->pc = 0x23A31Cu;
            return;
        }
    }
    ctx->pc = 0x239E64u;
    // 0x239e64: 0x0  nop
    ctx->pc = 0x239e64u;
    // NOP
label_239e68:
    // 0x239e68: 0x2cc20200  sltiu       $v0, $a2, 0x200
    ctx->pc = 0x239e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x239e6c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239E6Cu;
    {
        const bool branch_taken_0x239e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239E6Cu;
        // 0x239e70: 0x61a42  srl         $v1, $a2, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239e6c) {
            ctx->pc = 0x239EB8u;
            goto label_239eb8;
        }
    }
    ctx->pc = 0x239E74u;
    // 0x239e74: 0x628c2  srl         $a1, $a2, 3
    ctx->pc = 0x239e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x239e78: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x239e7c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x239e80: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x239e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239e88: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239e8c: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x239e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x239e90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x239e94: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x239e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239e9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x239ea0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239ea4: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x239ea8: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    // 0x239eac: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x239EACu;
    {
        const bool branch_taken_0x239eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EACu;
        // 0x239eb0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eac) {
            ctx->pc = 0x239FA8u;
            goto label_239fa8;
        }
    }
    ctx->pc = 0x239EB4u;
    // 0x239eb4: 0x0  nop
    ctx->pc = 0x239eb4u;
    // NOP
label_239eb8:
    // 0x239eb8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x239EB8u;
    {
        const bool branch_taken_0x239eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EB8u;
        // 0x239ebc: 0x628c2  srl         $a1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239eb8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EC0u;
    // 0x239ec0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x239ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x239ec4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239EC4u;
    {
        const bool branch_taken_0x239ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EC4u;
        // 0x239ec8: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ec4) {
            ctx->pc = 0x239ED8u;
            goto label_239ed8;
        }
    }
    ctx->pc = 0x239ECCu;
    // 0x239ecc: 0x61182  srl         $v0, $a2, 6
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x239ed0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x239ED0u;
    {
        const bool branch_taken_0x239ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED0u;
        // 0x239ed4: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239ED8u;
label_239ed8:
    // 0x239ed8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239ED8u;
    {
        const bool branch_taken_0x239ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ED8u;
        // 0x239edc: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ed8) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EE0u;
    // 0x239ee0: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x239ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239EE4u;
    {
        const bool branch_taken_0x239ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EE4u;
        // 0x239ee8: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ee4) {
            ctx->pc = 0x239EF8u;
            goto label_239ef8;
        }
    }
    ctx->pc = 0x239EECu;
    // 0x239eec: 0x61302  srl         $v0, $a2, 12
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x239ef0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x239EF0u;
    {
        const bool branch_taken_0x239ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF0u;
        // 0x239ef4: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef0) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239EF8u;
label_239ef8:
    // 0x239ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239EF8u;
    {
        const bool branch_taken_0x239ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239EF8u;
        // 0x239efc: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ef8) {
            ctx->pc = 0x239F10u;
            goto label_239f10;
        }
    }
    ctx->pc = 0x239F00u;
    // 0x239f00: 0x613c2  srl         $v0, $a2, 15
    ctx->pc = 0x239f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 15));
    // 0x239f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x239F04u;
    {
        const bool branch_taken_0x239f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F04u;
        // 0x239f08: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f04) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F0Cu;
    // 0x239f0c: 0x0  nop
    ctx->pc = 0x239f0cu;
    // NOP
label_239f10:
    // 0x239f10: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x239F10u;
    {
        const bool branch_taken_0x239f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f10) {
            ctx->pc = 0x239F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F10u;
            // 0x239f14: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239F18u;
    // 0x239f18: 0x61482  srl         $v0, $a2, 18
    ctx->pc = 0x239f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
    // 0x239f1c: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x239f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_239f20:
    // 0x239f20: 0x25e20830  addiu       $v0, $t7, 0x830
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
    // 0x239f24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x239f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x239f28: 0x2447fff8  addiu       $a3, $v0, -0x8
    ctx->pc = 0x239f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x239f2c: 0x675821  addu        $t3, $v1, $a3
    ctx->pc = 0x239f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x239f30: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x239f34: 0x550b000e  bnel        $t0, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x239F34u;
    {
        const bool branch_taken_0x239f34 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x239f34) {
            ctx->pc = 0x239F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F34u;
            // 0x239f38: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F70u;
            goto label_239f70;
        }
    }
    ctx->pc = 0x239F3Cu;
    // 0x239f3c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x239f40: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x239f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x239f44: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x239f44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x239f48: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x239f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x239f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239f50: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x239f54: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x239f58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239f5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x239f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x239f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239f64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x239F64u;
    {
        const bool branch_taken_0x239f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F64u;
        // 0x239f68: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f64) {
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F6Cu;
    // 0x239f6c: 0x0  nop
    ctx->pc = 0x239f6cu;
    // NOP
label_239f70:
    // 0x239f70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239F70u;
    {
        const bool branch_taken_0x239f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F70u;
        // 0x239f74: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f70) {
            ctx->pc = 0x239F84u;
            goto label_239f84;
        }
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x510b0009  beql        $t0, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x239F78u;
    {
        const bool branch_taken_0x239f78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        if (branch_taken_0x239f78) {
            ctx->pc = 0x239F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F78u;
            // 0x239f7c: 0x8d0b000c  lw          $t3, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239FA0u;
            goto label_239fa0;
        }
    }
    ctx->pc = 0x239F80u;
    // 0x239f80: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x239f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_239f84:
    // 0x239f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239f88: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x239f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x239f8c: 0x0  nop
    ctx->pc = 0x239f8cu;
    // NOP
    // 0x239f90: 0x0  nop
    ctx->pc = 0x239f90u;
    // NOP
    // 0x239f94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x239F94u;
    {
        const bool branch_taken_0x239f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f94) {
            ctx->pc = 0x239F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239F94u;
            // 0x239f98: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f78;
        }
    }
    ctx->pc = 0x239F9Cu;
    // 0x239f9c: 0x8d0b000c  lw          $t3, 0xC($t0)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_239fa0:
    // 0x239fa0: 0xae0b000c  sw          $t3, 0xC($s0)
    ctx->pc = 0x239fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 11));
    // 0x239fa4: 0xae080008  sw          $t0, 0x8($s0)
    ctx->pc = 0x239fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
label_239fa8:
    // 0x239fa8: 0xad700008  sw          $s0, 0x8($t3)
    ctx->pc = 0x239fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 16));
    // 0x239fac: 0xad10000c  sw          $s0, 0xC($t0)
    ctx->pc = 0x239facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x239fb0u;
}
