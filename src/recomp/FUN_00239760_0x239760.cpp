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

// Function: FUN_00239760
// Address: 0x239760 - 0x2397f0
void FUN_00239760_0x239760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239760_0x239760");
#endif

    switch (ctx->pc) {
        case 0x2397ecu: goto label_2397ec;
        default: break;
    }

    ctx->pc = 0x239760u;

    // 0x239760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239768: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23976c: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x23976cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x239770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x239774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239778: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x239778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23977c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239780: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239784: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x239788: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239788u;
    {
        const bool branch_taken_0x239788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239788u;
        // 0x23978c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239788) {
            ctx->pc = 0x2397B0u;
            goto label_2397b0;
        }
    }
    ctx->pc = 0x239790u;
    // 0x239790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23979c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2397a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2397a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2397a8: 0x808e708  j           func_239C20
    ctx->pc = 0x2397A8u;
    ctx->pc = 0x2397ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397A8u;
    // 0x2397ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    FUN_00239c20_0x239c20(rdram, ctx, runtime); return;
    ctx->pc = 0x2397B0u;
label_2397b0:
    // 0x2397b0: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2397b4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2397b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2397b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2397bc: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x2397bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x2397c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2397C0u;
    {
        const bool branch_taken_0x2397c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2397C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397C0u;
        // 0x2397c4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397c0) {
            ctx->pc = 0x2397D8u;
            goto label_2397d8;
        }
    }
    ctx->pc = 0x2397C8u;
    // 0x2397c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2397cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2397CCu;
    {
        const bool branch_taken_0x2397cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397CCu;
        // 0x2397d0: 0xa29824  and         $s3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397cc) {
            ctx->pc = 0x2397DCu;
            goto label_2397dc;
        }
    }
    ctx->pc = 0x2397D4u;
    // 0x2397d4: 0x0  nop
    ctx->pc = 0x2397d4u;
    // NOP
label_2397d8:
    // 0x2397d8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2397dc:
    // 0x2397dc: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2397e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2397e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397e4: 0xc08e708  jal         func_239C20
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x2397E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397E4u;
    // 0x2397e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x2397E4u, 0x2397ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2397f0u;
}
