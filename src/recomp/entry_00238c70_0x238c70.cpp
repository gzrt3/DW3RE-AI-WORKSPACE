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

// Function: entry_00238c70
// Address: 0x238c70 - 0x238dc8
void entry_00238c70_0x238c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238c70_0x238c70");
#endif

    switch (ctx->pc) {
        case 0x238d90u: goto label_238d90;
        default: break;
    }

    ctx->pc = 0x238c70u;

    // 0x238c70: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x238c74: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x238c74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x238c78: 0x15600053  bnez        $t3, . + 4 + (0x53 << 2)
    ctx->pc = 0x238C78u;
    {
        const bool branch_taken_0x238c78 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x238C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C78u;
        // 0x238c7c: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c78) {
            ctx->pc = 0x238DC8u;
            return;
        }
    }
    ctx->pc = 0x238C80u;
    // 0x238c80: 0x2d020200  sltiu       $v0, $t0, 0x200
    ctx->pc = 0x238c80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x238c84: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x238C84u;
    {
        const bool branch_taken_0x238c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238c84) {
            ctx->pc = 0x238C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238C84u;
            // 0x238c88: 0x81a42  srl         $v1, $t0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238CD0u;
            goto label_238cd0;
        }
    }
    ctx->pc = 0x238C8Cu;
    // 0x238c8c: 0x828c2  srl         $a1, $t0, 3
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x238c90: 0x25840828  addiu       $a0, $t4, 0x828
    ctx->pc = 0x238c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 2088));
    // 0x238c94: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x238c98: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x238c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x238c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ca0: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238ca4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x238ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x238ca8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x238cac: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x238cb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238cb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238cb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238cbc: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x238cc0: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x238cc4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x238CC4u;
    {
        const bool branch_taken_0x238cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CC4u;
        // 0x238cc8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cc4) {
            ctx->pc = 0x238DC0u;
            goto label_238dc0;
        }
    }
    ctx->pc = 0x238CCCu;
    // 0x238ccc: 0x0  nop
    ctx->pc = 0x238cccu;
    // NOP
label_238cd0:
    // 0x238cd0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x238CD0u;
    {
        const bool branch_taken_0x238cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CD0u;
        // 0x238cd4: 0x828c2  srl         $a1, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cd0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CD8u;
    // 0x238cd8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x238cd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x238cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CDCu;
    {
        const bool branch_taken_0x238cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CDCu;
        // 0x238ce0: 0x2c620015  sltiu       $v0, $v1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cdc) {
            ctx->pc = 0x238CF0u;
            goto label_238cf0;
        }
    }
    ctx->pc = 0x238CE4u;
    // 0x238ce4: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x238ce8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x238CE8u;
    {
        const bool branch_taken_0x238ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CE8u;
        // 0x238cec: 0x24450038  addiu       $a1, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce8) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF0u;
label_238cf0:
    // 0x238cf0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CF0u;
        // 0x238cf4: 0x2465005b  addiu       $a1, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238CF8u;
    // 0x238cf8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x238cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x238cfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CFCu;
    {
        const bool branch_taken_0x238cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238CFCu;
        // 0x238d00: 0x2c620155  sltiu       $v0, $v1, 0x155 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cfc) {
            ctx->pc = 0x238D10u;
            goto label_238d10;
        }
    }
    ctx->pc = 0x238D04u;
    // 0x238d04: 0x81302  srl         $v0, $t0, 12
    ctx->pc = 0x238d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 12));
    // 0x238d08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x238D08u;
    {
        const bool branch_taken_0x238d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D08u;
        // 0x238d0c: 0x2445006e  addiu       $a1, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d08) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D10u;
label_238d10:
    // 0x238d10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238D10u;
    {
        const bool branch_taken_0x238d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D10u;
        // 0x238d14: 0x2c620555  sltiu       $v0, $v1, 0x555 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d10) {
            ctx->pc = 0x238D28u;
            goto label_238d28;
        }
    }
    ctx->pc = 0x238D18u;
    // 0x238d18: 0x813c2  srl         $v0, $t0, 15
    ctx->pc = 0x238d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 15));
    // 0x238d1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238D1Cu;
    {
        const bool branch_taken_0x238d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D1Cu;
        // 0x238d20: 0x24450077  addiu       $a1, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d1c) {
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D24u;
    // 0x238d24: 0x0  nop
    ctx->pc = 0x238d24u;
    // NOP
label_238d28:
    // 0x238d28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x238D28u;
    {
        const bool branch_taken_0x238d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238d28) {
            ctx->pc = 0x238D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D28u;
            // 0x238d2c: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D38u;
            goto label_238d38;
        }
    }
    ctx->pc = 0x238D30u;
    // 0x238d30: 0x81482  srl         $v0, $t0, 18
    ctx->pc = 0x238d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 18));
    // 0x238d34: 0x2445007c  addiu       $a1, $v0, 0x7C
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_238d38:
    // 0x238d38: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x238d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x238d3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x238d40: 0x24420830  addiu       $v0, $v0, 0x830
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
    // 0x238d44: 0x244afff8  addiu       $t2, $v0, -0x8
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x238d48: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x238d4c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x238d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x238d50: 0x54c7000d  bnel        $a2, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x238D50u;
    {
        const bool branch_taken_0x238d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x238d50) {
            ctx->pc = 0x238D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D50u;
            // 0x238d54: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D88u;
            goto label_238d88;
        }
    }
    ctx->pc = 0x238D58u;
    // 0x238d58: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x238d5c: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x238d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x238d60: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x238d60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x238d64: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x238d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d6c: 0x52083  sra         $a0, $a1, 2
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 2));
    // 0x238d70: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x238d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x238d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x238d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x238d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x238d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x238d7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x238d80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x238D80u;
    {
        const bool branch_taken_0x238d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D80u;
        // 0x238d84: 0xad430004  sw          $v1, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d80) {
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x238D88u;
    {
        const bool branch_taken_0x238d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238D88u;
        // 0x238d8c: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d88) {
            ctx->pc = 0x238D9Cu;
            goto label_238d9c;
        }
    }
    ctx->pc = 0x238D90u;
label_238d90:
    // 0x238d90: 0x50c70009  beql        $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x238D90u;
    {
        const bool branch_taken_0x238d90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x238d90) {
            ctx->pc = 0x238D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238D90u;
            // 0x238d94: 0x8cc7000c  lw          $a3, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238DB8u;
            goto label_238db8;
        }
    }
    ctx->pc = 0x238D98u;
    // 0x238d98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_238d9c:
    // 0x238d9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x238d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x238da0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238da4: 0x0  nop
    ctx->pc = 0x238da4u;
    // NOP
    // 0x238da8: 0x0  nop
    ctx->pc = 0x238da8u;
    // NOP
    // 0x238dac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x238DACu;
    {
        const bool branch_taken_0x238dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238dac) {
            ctx->pc = 0x238DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238d90;
        }
    }
    ctx->pc = 0x238DB4u;
    // 0x238db4: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x238db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_238db8:
    // 0x238db8: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x238db8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x238dbc: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x238dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
label_238dc0:
    // 0x238dc0: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x238dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x238dc4: 0xacc9000c  sw          $t1, 0xC($a2)
    ctx->pc = 0x238dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 9));
    ctx->pc = 0x238dc8u;
}
