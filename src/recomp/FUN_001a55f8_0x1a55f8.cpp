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

// Function: FUN_001a55f8
// Address: 0x1a55f8 - 0x1a56c4
void FUN_001a55f8_0x1a55f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a55f8_0x1a55f8");
#endif

    switch (ctx->pc) {
        case 0x1a5628u: goto label_1a5628;
        case 0x1a566cu: goto label_1a566c;
        case 0x1a5680u: goto label_1a5680;
        case 0x1a56a0u: goto label_1a56a0;
        case 0x1a56a8u: goto label_1a56a8;
        case 0x1a56b4u: goto label_1a56b4;
        default: break;
    }

    ctx->pc = 0x1a55f8u;

    // 0x1a55f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a55f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a55fc: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1a55fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1a5600: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1a5604: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a5608: 0x8e025b58  lw          $v0, 0x5B58($s0)
    ctx->pc = 0x1a5608u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x285B58u));
    // 0x1a560c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A560Cu;
    {
        const bool branch_taken_0x1a560c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1A5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A560Cu;
        // 0x1a5610: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a560c) {
            ctx->pc = 0x1A5680u;
            goto label_1a5680;
        }
    }
    ctx->pc = 0x1A5614u;
    // 0x1a5614: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a5618: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a5618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1a561c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1a561cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1a5620: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1A5620u;
    SET_GPR_U32(ctx, 31, 0x1A5628u);
    ctx->pc = 0x1A5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5620u;
    // 0x1a5624: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1A5620u, 0x1A5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5628u;
label_1a5628:
    // 0x1a5628: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
    // 0x1a562c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A562Cu;
    {
        const bool branch_taken_0x1a562c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A562Cu;
        // 0x1a5630: 0xae220ec0  sw          $v0, 0xEC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a562c) {
            ctx->pc = 0x1A5680u;
            goto label_1a5680;
        }
    }
    ctx->pc = 0x1A5634u;
    // 0x1a5634: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1a5638: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a5638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1a563c: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x1a563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x1a5640: 0x24425520  addiu       $v0, $v0, 0x5520
    ctx->pc = 0x1a5640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21792));
    // 0x1a5644: 0x24630ac0  addiu       $v1, $v1, 0xAC0
    ctx->pc = 0x1a5644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2752));
    // 0x1a5648: 0x24a58170  addiu       $a1, $a1, -0x7E90
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934896));
    // 0x1a564c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1a5650: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a5650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a5654: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a5654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1a5658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a565c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1a565cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1a5660: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a5660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a5664: 0xc069188  jal         func_1A4620
    ctx->pc = 0x1A5664u;
    SET_GPR_U32(ctx, 31, 0x1A566Cu);
    ctx->pc = 0x1A5668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5664u;
    // 0x1a5668: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4620u, 0x1A5664u, 0x1A566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A566Cu;
label_1a566c:
    // 0x1a566c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5670: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5670u;
    {
        const bool branch_taken_0x1a5670 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5670u;
        // 0x1a5674: 0xae045b58  sw          $a0, 0x5B58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 23384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5670) {
            ctx->pc = 0x1A5688u;
            goto label_1a5688;
        }
    }
    ctx->pc = 0x1A5678u;
    // 0x1a5678: 0xc06920c  jal         func_1A4830
    ctx->pc = 0x1A5678u;
    SET_GPR_U32(ctx, 31, 0x1A5680u);
    ctx->pc = 0x1A567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5678u;
    // 0x1a567c: 0x8e240ec0  lw          $a0, 0xEC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4830u, 0x1A5678u, 0x1A5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5680u;
label_1a5680:
    // 0x1a5680: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A5680u;
    {
        const bool branch_taken_0x1a5680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5680u;
        // 0x1a5684: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5680) {
            ctx->pc = 0x1A56B8u;
            goto label_1a56b8;
        }
    }
    ctx->pc = 0x1A5688u;
label_1a5688:
    // 0x1a5688: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1a568c: 0x24430ec8  addiu       $v1, $v0, 0xEC8
    ctx->pc = 0x1a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3784));
    // 0x1a5690: 0xac400ec8  sw          $zero, 0xEC8($v0)
    ctx->pc = 0x1a5690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x370EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370EC8u, _value); } while (0);
    // 0x1a5694: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a5694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5698: 0xc069190  jal         func_1A4640
    ctx->pc = 0x1A5698u;
    SET_GPR_U32(ctx, 31, 0x1A56A0u);
    ctx->pc = 0x1A569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5698u;
    // 0x1a569c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4640u, 0x1A5698u, 0x1A56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A0u;
label_1a56a0:
    // 0x1a56a0: 0xc0691c4  jal         func_1A4710
    ctx->pc = 0x1A56A0u;
    SET_GPR_U32(ctx, 31, 0x1A56A8u);
    ctx->pc = 0x1A4710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4710u, 0x1A56A0u, 0x1A56A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56A8u;
label_1a56a8:
    // 0x1a56a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a56a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56ac: 0xc0691ac  jal         func_1A46B0
    ctx->pc = 0x1A56ACu;
    SET_GPR_U32(ctx, 31, 0x1A56B4u);
    ctx->pc = 0x1A56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A56ACu;
    // 0x1a56b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A46B0u, 0x1A56ACu, 0x1A56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A56B4u;
label_1a56b4:
    // 0x1a56b4: 0x8e025b58  lw          $v0, 0x5B58($s0)
    ctx->pc = 0x1a56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23384)));
label_1a56b8:
    // 0x1a56b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a56b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a56bc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1a56bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a56c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1a56c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1a56c4u;
}
