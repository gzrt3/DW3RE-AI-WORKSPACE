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

// Function: FUN_002351b8
// Address: 0x2351b8 - 0x235274
void FUN_002351b8_0x2351b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002351b8_0x2351b8");
#endif

    switch (ctx->pc) {
        case 0x235200u: goto label_235200;
        case 0x235210u: goto label_235210;
        case 0x235244u: goto label_235244;
        case 0x235250u: goto label_235250;
        default: break;
    }

    ctx->pc = 0x2351b8u;

    // 0x2351b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2351b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2351bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2351bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2351c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2351c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351c4: 0x8f8482e4  lw          $a0, -0x7D1C($gp)
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x2351c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2351c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2351cc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2351ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2351d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2351d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2351d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2351dc: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2351e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2351e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2351e4: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2351e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2351e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2351e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2351ec: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2351ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2351f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2351f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2351f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2351f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2351f8: 0xc08dbf8  jal         func_236FE0
    ctx->pc = 0x2351F8u;
    SET_GPR_U32(ctx, 31, 0x235200u);
    ctx->pc = 0x2351FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351F8u;
    // 0x2351fc: 0x313200ff  andi        $s2, $t1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FE0u, 0x2351F8u, 0x235200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235200u;
label_235200:
    // 0x235200: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x235200u;
    {
        const bool branch_taken_0x235200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235200u;
        // 0x235204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235200) {
            ctx->pc = 0x235254u;
            goto label_235254;
        }
    }
    ctx->pc = 0x235208u;
    // 0x235208: 0xc08d17c  jal         func_2345F0
    ctx->pc = 0x235208u;
    SET_GPR_U32(ctx, 31, 0x235210u);
    ctx->pc = 0x2345F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2345F0u, 0x235208u, 0x235210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235210u;
label_235210:
    // 0x235210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235214: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235218: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x235218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x23521c: 0x2442ad00  addiu       $v0, $v0, -0x5300
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946048));
    // 0x235220: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x235220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x235224: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x235224u;
    {
        const bool branch_taken_0x235224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x235228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235224u;
        // 0x235228: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235224) {
            ctx->pc = 0x235248u;
            goto label_235248;
        }
    }
    ctx->pc = 0x23522Cu;
    // 0x23522c: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x23522cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x235230: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x235230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x235234: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x235234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x235238: 0xac540008  sw          $s4, 0x8($v0)
    ctx->pc = 0x235238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 20));
    // 0x23523c: 0xc08d192  jal         func_234648
    ctx->pc = 0x23523Cu;
    SET_GPR_U32(ctx, 31, 0x235244u);
    ctx->pc = 0x235240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23523Cu;
    // 0x235240: 0xac55000c  sw          $s5, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234648u, 0x23523Cu, 0x235244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235244u;
label_235244:
    // 0x235244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235248:
    // 0x235248: 0xc069210  jal         func_1A4840
    ctx->pc = 0x235248u;
    SET_GPR_U32(ctx, 31, 0x235250u);
    ctx->pc = 0x23524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235248u;
    // 0x23524c: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x235248u, 0x235250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235250u;
label_235250:
    // 0x235250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235254:
    // 0x235254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23525c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235260: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x235260u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x235264: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x235264u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235268: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23526c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x23526cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235270: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x235270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x235274u;
}
