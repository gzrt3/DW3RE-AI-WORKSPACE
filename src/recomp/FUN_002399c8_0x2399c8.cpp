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

// Function: FUN_002399c8
// Address: 0x2399c8 - 0x239c18
void FUN_002399c8_0x2399c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002399c8_0x2399c8");
#endif

    switch (ctx->pc) {
        case 0x239a6cu: goto label_239a6c;
        case 0x239b24u: goto label_239b24;
        case 0x239bbcu: goto label_239bbc;
        default: break;
    }

    ctx->pc = 0x2399c8u;

    // 0x2399c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2399c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2399cc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2399d0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2399d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2399d4: 0x24570828  addiu       $s7, $v0, 0x828
    ctx->pc = 0x2399d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
    // 0x2399d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2399d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2399dc: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2399dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x2399e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2399e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2399e4: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2399e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2399e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2399ec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2399ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2399f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2399f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2399f4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2399f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2399f8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2399f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2399fc: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2399fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239a00: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x239a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x239a04: 0x24560c40  addiu       $s6, $v0, 0xC40
    ctx->pc = 0x239a04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3136));
    // 0x239a08: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x239a0c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x239a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x239a10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x239a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x239a14: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x239a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x239a18: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x239a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x239a1c: 0xdcc30c38  ld          $v1, 0xC38($a2)
    ctx->pc = 0x239a1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 3128)));
    // 0x239a20: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x239a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x239a24: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x239a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x239a28: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x239a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x239a2c: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x239a2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x239a30: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x239a30u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x239a34: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x239a34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x239a38: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x239a38u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x239a3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x239a40: 0x10750008  beq         $v1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x239A40u;
    {
        const bool branch_taken_0x239a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x239A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A40u;
        // 0x239a44: 0x2938021  addu        $s0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a40) {
            ctx->pc = 0x239A64u;
            goto label_239a64;
        }
    }
    ctx->pc = 0x239A48u;
    // 0x239a48: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x239a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x239a4c: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x239a50: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x239a54: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x239a54u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x239a58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x239a5c: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x239a5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x239a60: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x239a60u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_239a64:
    // 0x239a64: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x239A64u;
    SET_GPR_U32(ctx, 31, 0x239A6Cu);
    ctx->pc = 0x239A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239A64u;
    // 0x239a68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x239A64u, 0x239A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A6Cu;
label_239a6c:
    // 0x239a6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a70: 0x1235005f  beq         $s1, $s5, . + 4 + (0x5F << 2)
    ctx->pc = 0x239A70u;
    {
        const bool branch_taken_0x239a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x239A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A70u;
        // 0x239a74: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a70) {
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239A78u;
    // 0x239a78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239A78u;
    {
        const bool branch_taken_0x239a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A78u;
        // 0x239a7c: 0x3c1e0029  lui         $fp, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a78) {
            ctx->pc = 0x239A8Cu;
            goto label_239a8c;
        }
    }
    ctx->pc = 0x239A80u;
    // 0x239a80: 0x5697005c  bnel        $s4, $s7, . + 4 + (0x5C << 2)
    ctx->pc = 0x239A80u;
    {
        const bool branch_taken_0x239a80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x239a80) {
            ctx->pc = 0x239A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239A80u;
            // 0x239a84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BF4u;
            goto label_239bf4;
        }
    }
    ctx->pc = 0x239A88u;
    // 0x239a88: 0x3c1e0029  lui         $fp, 0x29
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)41 << 16));
label_239a8c:
    // 0x239a8c: 0x27c40c58  addiu       $a0, $fp, 0xC58
    ctx->pc = 0x239a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3160));
    // 0x239a90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239a94: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x239a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x239a98: 0x16300007  bne         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239A98u;
    {
        const bool branch_taken_0x239a98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x239A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239A98u;
        // 0x239a9c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a98) {
            ctx->pc = 0x239AB8u;
            goto label_239ab8;
        }
    }
    ctx->pc = 0x239AA0u;
    // 0x239aa0: 0x2532021  addu        $a0, $s2, $s3
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x239aa4: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x239aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x239aa8: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x239aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x239aac: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x239AACu;
    {
        const bool branch_taken_0x239aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AACu;
        // 0x239ab0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aac) {
            ctx->pc = 0x239BBCu;
            goto label_239bbc;
        }
    }
    ctx->pc = 0x239AB4u;
    // 0x239ab4: 0x0  nop
    ctx->pc = 0x239ab4u;
    // NOP
label_239ab8:
    // 0x239ab8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x239ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x239abc: 0x14550004  bne         $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x239ABCu;
    {
        const bool branch_taken_0x239abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x239AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239ABCu;
        // 0x239ac0: 0x2301023  subu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239abc) {
            ctx->pc = 0x239AD0u;
            goto label_239ad0;
        }
    }
    ctx->pc = 0x239AC4u;
    // 0x239ac4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AC4u;
        // 0x239ac8: 0xaed10000  sw          $s1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AD8u;
            goto label_239ad8;
        }
    }
    ctx->pc = 0x239ACCu;
    // 0x239acc: 0x0  nop
    ctx->pc = 0x239accu;
    // NOP
label_239ad0:
    // 0x239ad0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x239ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x239ad4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x239ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_239ad8:
    // 0x239ad8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x239adc: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x239adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x239ae0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AE0u;
        // 0x239ae4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239AF8u;
            goto label_239af8;
        }
    }
    ctx->pc = 0x239AE8u;
    // 0x239ae8: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x239ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x239aec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x239AECu;
    {
        const bool branch_taken_0x239aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239AECu;
        // 0x239af0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aec) {
            ctx->pc = 0x239AFCu;
            goto label_239afc;
        }
    }
    ctx->pc = 0x239AF4u;
    // 0x239af4: 0x0  nop
    ctx->pc = 0x239af4u;
    // NOP
label_239af8:
    // 0x239af8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x239af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239afc:
    // 0x239afc: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x239afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x239b00: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x239b04: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x239b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x239b08: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239b0c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x239b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x239b10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x239b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x239b14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x239b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x239b18: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x239b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x239b1c: 0xc08f0fe  jal         func_23C3F8
    ctx->pc = 0x239B1Cu;
    SET_GPR_U32(ctx, 31, 0x239B24u);
    ctx->pc = 0x239B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239B1Cu;
    // 0x239b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C3F8u, 0x239B1Cu, 0x239B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239B24u;
label_239b24:
    // 0x239b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239b2c: 0x10820030  beq         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x239B2Cu;
    {
        const bool branch_taken_0x239b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x239B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B2Cu;
        // 0x239b30: 0x912023  subu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b2c) {
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239B34u;
    // 0x239b34: 0x27c50c58  addiu       $a1, $fp, 0xC58
    ctx->pc = 0x239b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3160));
    // 0x239b38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x239b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239b3c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x239b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x239b40: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x239b40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x239b44: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x239b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x239b48: 0x24c30828  addiu       $v1, $a2, 0x828
    ctx->pc = 0x239b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2088));
    // 0x239b4c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x239b50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x239b50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x239b54: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x239b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x290830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290830u, _value); } while (0);
    // 0x239b58: 0x12830018  beq         $s4, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x239B58u;
    {
        const bool branch_taken_0x239b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x239B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B58u;
        // 0x239b5c: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b58) {
            ctx->pc = 0x239BBCu;
            goto label_239bbc;
        }
    }
    ctx->pc = 0x239B60u;
    // 0x239b60: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x239b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x239b64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x239B64u;
    {
        const bool branch_taken_0x239b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b64) {
            ctx->pc = 0x239B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239B64u;
            // 0x239b68: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239B80u;
            goto label_239b80;
        }
    }
    ctx->pc = 0x239B6Cu;
    // 0x239b6c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x239b6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239b74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x239B74u;
    {
        const bool branch_taken_0x239b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239B74u;
        // 0x239b78: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b74) {
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239B7Cu;
    // 0x239b7c: 0x0  nop
    ctx->pc = 0x239b7cu;
    // NOP
label_239b80:
    // 0x239b80: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x239b84: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x239b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x239b88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x239b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239b8c: 0x839824  and         $s3, $a0, $v1
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x239b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239b94: 0x2931821  addu        $v1, $s4, $s3
    ctx->pc = 0x239b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x239b98: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x239b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x239b9c: 0x2e640010  sltiu       $a0, $s3, 0x10
    ctx->pc = 0x239b9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x239ba0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x239ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x239ba4: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x239ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x239ba8: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239BA8u;
    {
        const bool branch_taken_0x239ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239BA8u;
        // 0x239bac: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ba8) {
            ctx->pc = 0x239BBCu;
            goto label_239bbc;
        }
    }
    ctx->pc = 0x239BB0u;
    // 0x239bb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239bb4: 0xc08e2c0  jal         func_238B00
    ctx->pc = 0x239BB4u;
    SET_GPR_U32(ctx, 31, 0x239BBCu);
    ctx->pc = 0x239BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239BB4u;
    // 0x239bb8: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B00u, 0x239BB4u, 0x239BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239BBCu;
label_239bbc:
    // 0x239bbc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x239bc0: 0x8fc50c58  lw          $a1, 0xC58($fp)
    ctx->pc = 0x239bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3160)));
    // 0x239bc4: 0x24630c48  addiu       $v1, $v1, 0xC48
    ctx->pc = 0x239bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3144));
    // 0x239bc8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239bc8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x290C48u));
    // 0x239bcc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x239bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239BD0u;
    {
        const bool branch_taken_0x239bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239bd0) {
            ctx->pc = 0x239BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BD0u;
            // 0x239bd4: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BD8u;
            goto label_239bd8;
        }
    }
    ctx->pc = 0x239BD8u;
label_239bd8:
    // 0x239bd8: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x239bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x239bdc: 0x24630c50  addiu       $v1, $v1, 0xC50
    ctx->pc = 0x239bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3152));
    // 0x239be0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x239be0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x290C50u));
    // 0x239be4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x239be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x239be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x239BE8u;
    {
        const bool branch_taken_0x239be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239be8) {
            ctx->pc = 0x239BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239BE8u;
            // 0x239bec: 0xfc650000  sd          $a1, 0x0($v1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239BF0u;
label_239bf0:
    // 0x239bf0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x239bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239bf4:
    // 0x239bf4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x239bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239bfc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x239bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239c00: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x239c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239c04: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x239c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239c08: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x239c08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x239c0c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x239c0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x239c10: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x239c10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x239c14: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x239c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x239c18u;
}
