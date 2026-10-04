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

// Function: FUN_00286728
// Address: 0x286728 - 0x2867bc
void FUN_00286728_0x286728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00286728_0x286728");
#endif

    switch (ctx->pc) {
        case 0x286728u: goto label_286728;
        case 0x28672cu: goto label_28672c;
        case 0x286730u: goto label_286730;
        case 0x286734u: goto label_286734;
        case 0x286738u: goto label_286738;
        case 0x28673cu: goto label_28673c;
        case 0x286740u: goto label_286740;
        case 0x286744u: goto label_286744;
        case 0x286748u: goto label_286748;
        case 0x28674cu: goto label_28674c;
        case 0x286750u: goto label_286750;
        case 0x286754u: goto label_286754;
        case 0x286758u: goto label_286758;
        case 0x28675cu: goto label_28675c;
        case 0x286760u: goto label_286760;
        case 0x286764u: goto label_286764;
        case 0x286768u: goto label_286768;
        case 0x28676cu: goto label_28676c;
        case 0x286770u: goto label_286770;
        case 0x286774u: goto label_286774;
        case 0x286778u: goto label_286778;
        case 0x28677cu: goto label_28677c;
        case 0x286780u: goto label_286780;
        case 0x286784u: goto label_286784;
        case 0x286788u: goto label_286788;
        case 0x28678cu: goto label_28678c;
        case 0x286790u: goto label_286790;
        case 0x286794u: goto label_286794;
        case 0x286798u: goto label_286798;
        case 0x28679cu: goto label_28679c;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867a4u: goto label_2867a4;
        case 0x2867a8u: goto label_2867a8;
        case 0x2867acu: goto label_2867ac;
        case 0x2867b0u: goto label_2867b0;
        case 0x2867b4u: goto label_2867b4;
        case 0x2867b8u: goto label_2867b8;
        default: break;
    }

    ctx->pc = 0x286728u;

label_286728:
    // 0x286728: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_28672c:
    // 0x28672c: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_286730:
    // 0x286730: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x286730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_286734:
    // 0x286734: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x286734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_286738:
    // 0x286738: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x286738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_28673c:
    // 0x28673c: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_286740:
    // 0x286740: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x286740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_286744:
    // 0x286744: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x286744u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_286748:
    // 0x286748: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x286748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_28674c:
    // 0x28674c: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x28674cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_286750:
    // 0x286750: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x286750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_286754:
    // 0x286754: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x286754u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_286758:
    // 0x286758: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x286758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_28675c:
    // 0x28675c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x28675cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_286760:
    // 0x286760: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x286760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_286764:
    // 0x286764: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x286764u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_286768:
    // 0x286768: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x286768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_28676c:
    // 0x28676c: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_286770:
    // 0x286770: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_286774:
    // 0x286774: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286778:
    // 0x286778: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x286778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_28677c:
    // 0x28677c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_286780:
    // 0x286780: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x286780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_286784:
    // 0x286784: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x286784u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_286788:
    // 0x286788: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x286788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_28678c:
    // 0x28678c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x28678cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_286790:
    // 0x286790: 0x40f809  jalr        $v0
label_286794:
    if (ctx->pc == 0x286794u) {
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286798u;
        goto label_286798;
    }
    ctx->pc = 0x286790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286798u);
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286790u, 0x286798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286798u;
label_286798:
    // 0x286798: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x286798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_28679c:
    // 0x28679c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2867a0:
    // 0x2867a0: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x2867a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_2867a4:
    // 0x2867a4: 0x40f809  jalr        $v0
label_2867a8:
    if (ctx->pc == 0x2867A8u) {
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867ACu;
        goto label_2867ac;
    }
    ctx->pc = 0x2867A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2867ACu);
        ctx->pc = 0x2867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867A4u;
        // 0x2867a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867A4u, 0x2867ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2867ACu;
label_2867ac:
    // 0x2867ac: 0x0  nop
    ctx->pc = 0x2867acu;
    // NOP
label_2867b0:
    // 0x2867b0: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x2867b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_2867b4:
    // 0x2867b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2867b8:
    // 0x2867b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2867b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x2867bcu;
}
