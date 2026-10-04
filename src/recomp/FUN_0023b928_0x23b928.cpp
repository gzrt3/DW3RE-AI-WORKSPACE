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

// Function: FUN_0023b928
// Address: 0x23b928 - 0x23baa4
void FUN_0023b928_0x23b928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023b928_0x23b928");
#endif

    switch (ctx->pc) {
        case 0x23b928u: goto label_23b928;
        case 0x23b92cu: goto label_23b92c;
        case 0x23b930u: goto label_23b930;
        case 0x23b934u: goto label_23b934;
        case 0x23b938u: goto label_23b938;
        case 0x23b93cu: goto label_23b93c;
        case 0x23b940u: goto label_23b940;
        case 0x23b944u: goto label_23b944;
        case 0x23b948u: goto label_23b948;
        case 0x23b94cu: goto label_23b94c;
        case 0x23b950u: goto label_23b950;
        case 0x23b954u: goto label_23b954;
        case 0x23b958u: goto label_23b958;
        case 0x23b95cu: goto label_23b95c;
        case 0x23b960u: goto label_23b960;
        case 0x23b964u: goto label_23b964;
        case 0x23b968u: goto label_23b968;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b970u: goto label_23b970;
        case 0x23b974u: goto label_23b974;
        case 0x23b978u: goto label_23b978;
        case 0x23b97cu: goto label_23b97c;
        case 0x23b980u: goto label_23b980;
        case 0x23b984u: goto label_23b984;
        case 0x23b988u: goto label_23b988;
        case 0x23b98cu: goto label_23b98c;
        case 0x23b990u: goto label_23b990;
        case 0x23b994u: goto label_23b994;
        case 0x23b998u: goto label_23b998;
        case 0x23b99cu: goto label_23b99c;
        case 0x23b9a0u: goto label_23b9a0;
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9a8u: goto label_23b9a8;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23b9b0u: goto label_23b9b0;
        case 0x23b9b4u: goto label_23b9b4;
        case 0x23b9b8u: goto label_23b9b8;
        case 0x23b9bcu: goto label_23b9bc;
        case 0x23b9c0u: goto label_23b9c0;
        case 0x23b9c4u: goto label_23b9c4;
        case 0x23b9c8u: goto label_23b9c8;
        case 0x23b9ccu: goto label_23b9cc;
        case 0x23b9d0u: goto label_23b9d0;
        case 0x23b9d4u: goto label_23b9d4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23b9dcu: goto label_23b9dc;
        case 0x23b9e0u: goto label_23b9e0;
        case 0x23b9e4u: goto label_23b9e4;
        case 0x23b9e8u: goto label_23b9e8;
        case 0x23b9ecu: goto label_23b9ec;
        case 0x23b9f0u: goto label_23b9f0;
        case 0x23b9f4u: goto label_23b9f4;
        case 0x23b9f8u: goto label_23b9f8;
        case 0x23b9fcu: goto label_23b9fc;
        case 0x23ba00u: goto label_23ba00;
        case 0x23ba04u: goto label_23ba04;
        case 0x23ba08u: goto label_23ba08;
        case 0x23ba0cu: goto label_23ba0c;
        case 0x23ba10u: goto label_23ba10;
        case 0x23ba14u: goto label_23ba14;
        case 0x23ba18u: goto label_23ba18;
        case 0x23ba1cu: goto label_23ba1c;
        case 0x23ba20u: goto label_23ba20;
        case 0x23ba24u: goto label_23ba24;
        case 0x23ba28u: goto label_23ba28;
        case 0x23ba2cu: goto label_23ba2c;
        case 0x23ba30u: goto label_23ba30;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba38u: goto label_23ba38;
        case 0x23ba3cu: goto label_23ba3c;
        case 0x23ba40u: goto label_23ba40;
        case 0x23ba44u: goto label_23ba44;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba4cu: goto label_23ba4c;
        case 0x23ba50u: goto label_23ba50;
        case 0x23ba54u: goto label_23ba54;
        case 0x23ba58u: goto label_23ba58;
        case 0x23ba5cu: goto label_23ba5c;
        case 0x23ba60u: goto label_23ba60;
        case 0x23ba64u: goto label_23ba64;
        case 0x23ba68u: goto label_23ba68;
        case 0x23ba6cu: goto label_23ba6c;
        case 0x23ba70u: goto label_23ba70;
        case 0x23ba74u: goto label_23ba74;
        case 0x23ba78u: goto label_23ba78;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba80u: goto label_23ba80;
        case 0x23ba84u: goto label_23ba84;
        case 0x23ba88u: goto label_23ba88;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23ba90u: goto label_23ba90;
        case 0x23ba94u: goto label_23ba94;
        case 0x23ba98u: goto label_23ba98;
        case 0x23ba9cu: goto label_23ba9c;
        case 0x23baa0u: goto label_23baa0;
        default: break;
    }

    ctx->pc = 0x23b928u;

label_23b928:
    // 0x23b928: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x23b928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_23b92c:
    // 0x23b92c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x23b92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_23b930:
    // 0x23b930: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x23b930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_23b934:
    // 0x23b934: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x23b934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_23b938:
    // 0x23b938: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x23b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_23b93c:
    // 0x23b93c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x23b93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_23b940:
    // 0x23b940: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x23b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_23b944:
    // 0x23b944: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x23b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
label_23b948:
    // 0x23b948: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x23b948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_23b94c:
    // 0x23b94c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x23b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_23b950:
    // 0x23b950: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23b950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23b954:
    // 0x23b954: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x23b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_23b958:
    // 0x23b958: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x23b958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b95c:
    // 0x23b95c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x23b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_23b960:
    // 0x23b960: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x23b960u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23b964:
    // 0x23b964: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x23b964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_23b968:
    // 0x23b968: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23b96c:
    if (ctx->pc == 0x23B96Cu) {
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B970u;
        goto label_23b970;
    }
    ctx->pc = 0x23B968u;
    {
        const bool branch_taken_0x23b968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B968u;
        // 0x23b96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b968) {
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B970u;
label_23b970:
    // 0x23b970: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x23b970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
label_23b974:
    // 0x23b974: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_23b978:
    if (ctx->pc == 0x23B978u) {
        ctx->pc = 0x23B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B974u;
        // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B97Cu;
        goto label_23b97c;
    }
    ctx->pc = 0x23B974u;
    {
        const bool branch_taken_0x23b974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b974) {
            ctx->pc = 0x23B978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B974u;
            // 0x23b978: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B984u;
            goto label_23b984;
        }
    }
    ctx->pc = 0x23B97Cu;
label_23b97c:
    // 0x23b97c: 0x3a820008  xori        $v0, $s4, 0x8
    ctx->pc = 0x23b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)8);
label_23b980:
    // 0x23b980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23b980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23b984:
    // 0x23b984: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23b984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_23b988:
    // 0x23b988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23b98c:
    // 0x23b98c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23b990:
    // 0x23b990: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_23b994:
    if (ctx->pc == 0x23B994u) {
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B998u;
        goto label_23b998;
    }
    ctx->pc = 0x23B990u;
    {
        const bool branch_taken_0x23b990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B990u;
        // 0x23b994: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b990) {
            ctx->pc = 0x23BA98u;
            goto label_23ba98;
        }
    }
    ctx->pc = 0x23B998u;
label_23b998:
    // 0x23b998: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x23b998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23b99c:
    // 0x23b99c: 0x2d49821  addu        $s3, $s6, $s4
    ctx->pc = 0x23b99cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_23b9a0:
    // 0x23b9a0: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x23b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_23b9a4:
    // 0x23b9a4: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23b9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23b9a8:
    // 0x23b9a8: 0x5040024f  beql        $v0, $zero, . + 4 + (0x24F << 2)
label_23b9ac:
    if (ctx->pc == 0x23B9ACu) {
        ctx->pc = 0x23B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9A8u;
        // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9B0u;
        goto label_23b9b0;
    }
    ctx->pc = 0x23B9A8u;
    {
        const bool branch_taken_0x23b9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9a8) {
            ctx->pc = 0x23B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23B9A8u;
            // 0x23b9ac: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23C2E8u;
            return;
        }
    }
    ctx->pc = 0x23B9B0u;
label_23b9b0:
    // 0x23b9b0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x23b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_23b9b4:
    // 0x23b9b4: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
label_23b9b8:
    // 0x23b9b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23b9bc:
    // 0x23b9bc: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_23b9c0:
    // 0x23b9c0: 0x14903c  dsll32      $s2, $s4, 0
    ctx->pc = 0x23b9c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) << (32 + 0));
label_23b9c4:
    // 0x23b9c4: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x23b9c4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_23b9c8:
    // 0x23b9c8: 0x10000022  b           . + 4 + (0x22 << 2)
label_23b9cc:
    if (ctx->pc == 0x23B9CCu) {
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9D0u;
        goto label_23b9d0;
    }
    ctx->pc = 0x23B9C8u;
    {
        const bool branch_taken_0x23b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9C8u;
        // 0x23b9cc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9c8) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9D0u;
label_23b9d0:
    // 0x23b9d0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_23b9d4:
    if (ctx->pc == 0x23B9D4u) {
        ctx->pc = 0x23B9D8u;
        goto label_23b9d8;
    }
    ctx->pc = 0x23B9D0u;
    {
        const bool branch_taken_0x23b9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b9d0) {
            ctx->pc = 0x23B9F0u;
            goto label_23b9f0;
        }
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x23b9d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_23b9dc:
    // 0x23b9dc: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x23b9dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_23b9e0:
    // 0x23b9e0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x23b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_23b9e4:
    // 0x23b9e4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23b9e8:
    if (ctx->pc == 0x23B9E8u) {
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9ECu;
        goto label_23b9ec;
    }
    ctx->pc = 0x23B9E4u;
    {
        const bool branch_taken_0x23b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9E4u;
        // 0x23b9e8: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e4) {
            ctx->pc = 0x23BA50u;
            goto label_23ba50;
        }
    }
    ctx->pc = 0x23B9ECu;
label_23b9ec:
    // 0x23b9ec: 0x0  nop
    ctx->pc = 0x23b9ecu;
    // NOP
label_23b9f0:
    // 0x23b9f0: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
label_23b9f4:
    if (ctx->pc == 0x23B9F4u) {
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B9F8u;
        goto label_23b9f8;
    }
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B9F0u;
        // 0x23b9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BA28u;
            goto label_23ba28;
        }
    }
    ctx->pc = 0x23B9F8u;
label_23b9f8:
    // 0x23b9f8: 0x17283e  dsrl32      $a1, $s7, 0
    ctx->pc = 0x23b9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) >> (32 + 0));
label_23b9fc:
    // 0x23b9fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba00:
    // 0x23ba00: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x23ba00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_23ba04:
    // 0x23ba04: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23ba04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23ba08:
    // 0x23ba08: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23ba08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_23ba0c:
    // 0x23ba0c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_23ba10:
    // 0x23ba10: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23ba14:
    // 0x23ba14: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x23ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_23ba18:
    // 0x23ba18: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23ba1c:
    if (ctx->pc == 0x23BA1Cu) {
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA20u;
        goto label_23ba20;
    }
    ctx->pc = 0x23BA18u;
    {
        const bool branch_taken_0x23ba18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA18u;
        // 0x23ba1c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba18) {
            ctx->pc = 0x23BA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba00;
        }
    }
    ctx->pc = 0x23BA20u;
label_23ba20:
    // 0x23ba20: 0x1000000c  b           . + 4 + (0xC << 2)
label_23ba24:
    if (ctx->pc == 0x23BA24u) {
        ctx->pc = 0x23BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA20u;
        // 0x23ba24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA28u;
        goto label_23ba28;
    }
    ctx->pc = 0x23BA20u;
    {
        const bool branch_taken_0x23ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA20u;
        // 0x23ba24: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba20) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA28u;
label_23ba28:
    // 0x23ba28: 0x12283e  dsrl32      $a1, $s2, 0
    ctx->pc = 0x23ba28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) >> (32 + 0));
label_23ba2c:
    // 0x23ba2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23ba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba30:
    // 0x23ba30: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23ba34:
    // 0x23ba34: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x23ba34u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_23ba38:
    // 0x23ba38: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23ba38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23ba3c:
    // 0x23ba3c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x23ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_23ba40:
    // 0x23ba40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ba40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ba44:
    // 0x23ba44: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x23ba44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_23ba48:
    // 0x23ba48: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_23ba4c:
    if (ctx->pc == 0x23BA4Cu) {
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA50u;
        goto label_23ba50;
    }
    ctx->pc = 0x23BA48u;
    {
        const bool branch_taken_0x23ba48 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x23BA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA48u;
        // 0x23ba4c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba48) {
            ctx->pc = 0x23BA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba30;
        }
    }
    ctx->pc = 0x23BA50u;
label_23ba50:
    // 0x23ba50: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ba54:
    // 0x23ba54: 0x2d0102b  sltu        $v0, $s6, $s0
    ctx->pc = 0x23ba54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_23ba58:
    // 0x23ba58: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23ba5c:
    if (ctx->pc == 0x23BA5Cu) {
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA60u;
        goto label_23ba60;
    }
    ctx->pc = 0x23BA58u;
    {
        const bool branch_taken_0x23ba58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA58u;
        // 0x23ba5c: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba58) {
            ctx->pc = 0x23BA7Cu;
            goto label_23ba7c;
        }
    }
    ctx->pc = 0x23BA60u;
label_23ba60:
    // 0x23ba60: 0x2148823  subu        $s1, $s0, $s4
    ctx->pc = 0x23ba60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_23ba64:
    // 0x23ba64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ba68:
    // 0x23ba68: 0x3c0f809  jalr        $fp
label_23ba6c:
    if (ctx->pc == 0x23BA6Cu) {
        ctx->pc = 0x23BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA68u;
        // 0x23ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA70u;
        goto label_23ba70;
    }
    ctx->pc = 0x23BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x23BA70u);
        ctx->pc = 0x23BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA68u;
        // 0x23ba6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BA68u, 0x23BA70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BA70u;
label_23ba70:
    // 0x23ba70: 0x5c40ffd7  bgtzl       $v0, . + 4 + (-0x29 << 2)
label_23ba74:
    if (ctx->pc == 0x23BA74u) {
        ctx->pc = 0x23BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA70u;
        // 0x23ba74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA78u;
        goto label_23ba78;
    }
    ctx->pc = 0x23BA70u;
    {
        const bool branch_taken_0x23ba70 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x23ba70) {
            ctx->pc = 0x23BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA70u;
            // 0x23ba74: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23B9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b9d0;
        }
    }
    ctx->pc = 0x23BA78u;
label_23ba78:
    // 0x23ba78: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_23ba7c:
    // 0x23ba7c: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_23ba80:
    // 0x23ba80: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x23ba80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23ba84:
    // 0x23ba84: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_23ba88:
    if (ctx->pc == 0x23BA88u) {
        ctx->pc = 0x23BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA84u;
        // 0x23ba88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA8Cu;
        goto label_23ba8c;
    }
    ctx->pc = 0x23BA84u;
    {
        const bool branch_taken_0x23ba84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ba84) {
            ctx->pc = 0x23BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BA84u;
            // 0x23ba88: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BA54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA8Cu;
label_23ba8c:
    // 0x23ba8c: 0x10000216  b           . + 4 + (0x216 << 2)
label_23ba90:
    if (ctx->pc == 0x23BA90u) {
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23BA94u;
        goto label_23ba94;
    }
    ctx->pc = 0x23BA8Cu;
    {
        const bool branch_taken_0x23ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BA8Cu;
        // 0x23ba90: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba8c) {
            ctx->pc = 0x23C2E8u;
            return;
        }
    }
    ctx->pc = 0x23BA94u;
label_23ba94:
    // 0x23ba94: 0x0  nop
    ctx->pc = 0x23ba94u;
    // NOP
label_23ba98:
    // 0x23ba98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x23ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23ba9c:
    // 0x23ba9c: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_23baa0:
    // 0x23baa0: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x23baa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    ctx->pc = 0x23baa4u;
}
