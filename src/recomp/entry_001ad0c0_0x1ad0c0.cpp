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

// Function: entry_001ad0c0
// Address: 0x1ad0c0 - 0x1ad460
void entry_001ad0c0_0x1ad0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad0c0_0x1ad0c0");
#endif

    switch (ctx->pc) {
        case 0x1ad214u: goto label_1ad214;
        case 0x1ad21cu: goto label_1ad21c;
        case 0x1ad458u: goto label_1ad458;
        default: break;
    }

    ctx->pc = 0x1ad0c0u;

label_1ad0c0:
    // 0x1ad0c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad0c4:
    // 0x1ad0c4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x1ad0c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1ad0c8:
    // 0x1ad0c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad0cc:
    // 0x1ad0cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad0d0:
    // 0x1ad0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad0d4:
    // 0x1ad0d4: 0x3e00008  jr          $ra
label_1ad0d8:
    if (ctx->pc == 0x1AD0D8u) {
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0DCu;
        goto label_1ad0dc;
    }
    ctx->pc = 0x1AD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0D4u;
        // 0x1ad0d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD0DCu;
label_1ad0dc:
    // 0x1ad0dc: 0x0  nop
    ctx->pc = 0x1ad0dcu;
    // NOP
label_1ad0e0:
    // 0x1ad0e0: 0x0  nop
    ctx->pc = 0x1ad0e0u;
    // NOP
label_1ad0e4:
    // 0x1ad0e4: 0x0  nop
    ctx->pc = 0x1ad0e4u;
    // NOP
label_1ad0e8:
    // 0x1ad0e8: 0x0  nop
    ctx->pc = 0x1ad0e8u;
    // NOP
label_1ad0ec:
    // 0x1ad0ec: 0x0  nop
    ctx->pc = 0x1ad0ecu;
    // NOP
label_1ad0f0:
    // 0x1ad0f0: 0x0  nop
    ctx->pc = 0x1ad0f0u;
    // NOP
label_1ad0f4:
    // 0x1ad0f4: 0x0  nop
    ctx->pc = 0x1ad0f4u;
    // NOP
label_1ad0f8:
    // 0x1ad0f8: 0x0  nop
    ctx->pc = 0x1ad0f8u;
    // NOP
label_1ad0fc:
    // 0x1ad0fc: 0x0  nop
    ctx->pc = 0x1ad0fcu;
    // NOP
label_1ad100:
    // 0x1ad100: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad100u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad104:
    // 0x1ad104: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad104u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad108:
    // 0x1ad108: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1ad108u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1ad10c:
    // 0x1ad10c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1ad10cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1ad110:
    // 0x1ad110: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1ad110u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1ad114:
    // 0x1ad114: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1ad114u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1ad118:
    // 0x1ad118: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1ad118u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1ad11c:
    // 0x1ad11c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1ad11cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1ad120:
    // 0x1ad120: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1ad120u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1ad124:
    // 0x1ad124: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1ad124u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1ad128:
    // 0x1ad128: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1ad128u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1ad12c:
    // 0x1ad12c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad12cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1ad130:
    // 0x1ad130: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad130u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1ad134:
    // 0x1ad134: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad134u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1ad138:
    // 0x1ad138: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad138u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1ad13c:
    // 0x1ad13c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad13cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1ad140:
    // 0x1ad140: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad140u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1ad144:
    // 0x1ad144: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1ad144u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1ad148:
    // 0x1ad148: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1ad148u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1ad14c:
    // 0x1ad14c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1ad14cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1ad150:
    // 0x1ad150: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1ad150u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1ad154:
    // 0x1ad154: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1ad154u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1ad158:
    // 0x1ad158: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1ad158u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1ad15c:
    // 0x1ad15c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1ad15cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1ad160:
    // 0x1ad160: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1ad164:
    // 0x1ad164: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1ad164u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1ad168:
    // 0x1ad168: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1ad16c:
    // 0x1ad16c: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad16cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1ad170:
    // 0x1ad170: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad170u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1ad174:
    // 0x1ad174: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad174u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1ad178:
    // 0x1ad178: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad178u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1ad17c:
    // 0x1ad17c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad17cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ad180:
    // 0x1ad180: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad184:
    // 0x1ad184: 0xfc225c40  sd          $v0, 0x5C40($at)
    ctx->pc = 0x1ad184u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23616), GPR_U64(ctx, 2));
label_1ad188:
    // 0x1ad188: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1ad18c:
    // 0x1ad18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad190:
    // 0x1ad190: 0xfc225c48  sd          $v0, 0x5C48($at)
    ctx->pc = 0x1ad190u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23624), GPR_U64(ctx, 2));
label_1ad194:
    // 0x1ad194: 0x1012  mflo        $v0
    ctx->pc = 0x1ad194u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ad198:
    // 0x1ad198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad19c:
    // 0x1ad19c: 0xfc225c50  sd          $v0, 0x5C50($at)
    ctx->pc = 0x1ad19cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23632), GPR_U64(ctx, 2));
label_1ad1a0:
    // 0x1ad1a0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1ad1a0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1ad1a4:
    // 0x1ad1a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1a8:
    // 0x1ad1a8: 0xfc225c58  sd          $v0, 0x5C58($at)
    ctx->pc = 0x1ad1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23640), GPR_U64(ctx, 2));
label_1ad1ac:
    // 0x1ad1ac: 0x1028  mfsa        $v0
    ctx->pc = 0x1ad1acu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1ad1b0:
    // 0x1ad1b0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1b4:
    // 0x1ad1b4: 0xfc225c60  sd          $v0, 0x5C60($at)
    ctx->pc = 0x1ad1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23648), GPR_U64(ctx, 2));
label_1ad1b8:
    // 0x1ad1b8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1ad1bc:
    // 0x1ad1bc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1ad1c0:
    // 0x1ad1c0: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1ad1c4:
    // 0x1ad1c4: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1ad1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1ad1c8:
    // 0x1ad1c8: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1ad1cc:
    // 0x1ad1cc: 0x25085a40  addiu       $t0, $t0, 0x5A40
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23104));
label_1ad1d0:
    // 0x1ad1d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad1d4:
    // 0x1ad1d4: 0xac265c68  sw          $a2, 0x5C68($at)
    ctx->pc = 0x1ad1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23656), GPR_U32(ctx, 6));
label_1ad1d8:
    // 0x1ad1d8: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
label_1ad1dc:
    // 0x1ad1dc: 0x2421d200  addiu       $at, $at, -0x2E00
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955520));
label_1ad1e0:
    // 0x1ad1e0: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1ad1e0u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1ad1e4:
    // 0x1ad1e4: 0x40f  sync.p
    ctx->pc = 0x1ad1e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1e8:
    // 0x1ad1e8: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad1ec:
    // 0x1ad1ec: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ad1f0:
    // 0x1ad1f0: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1ad1f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1ad1f4:
    // 0x1ad1f4: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad1f4u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad1f8:
    // 0x1ad1f8: 0x40f  sync.p
    ctx->pc = 0x1ad1f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad1fc:
    // 0x1ad1fc: 0x42000018  eret
    ctx->pc = 0x1ad1fcu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad200:
    // 0x1ad200: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1ad204:
    // 0x1ad204: 0x8c215f50  lw          $at, 0x5F50($at)
    ctx->pc = 0x1ad204u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24400)));
label_1ad208:
    // 0x1ad208: 0x3c1d0037  lui         $sp, 0x37
    ctx->pc = 0x1ad208u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)55 << 16));
label_1ad20c:
    // 0x1ad20c: 0x20f809  jalr        $at
label_1ad210:
    if (ctx->pc == 0x1AD210u) {
        ctx->pc = 0x1AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD20Cu;
        // 0x1ad210: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD214u;
        goto label_1ad214;
    }
    ctx->pc = 0x1AD20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1AD214u);
        ctx->pc = 0x1AD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD20Cu;
        // 0x1ad210: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD20Cu, 0x1AD214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD214u;
label_1ad214:
    // 0x1ad214: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x1ad214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_1ad218:
    // 0x1ad218: 0xc  syscall     0
    ctx->pc = 0x1ad218u;
    ctx->pc = 0x1AD21Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1ad21c:
    // 0x1ad21c: 0x0  nop
    ctx->pc = 0x1ad21cu;
    // NOP
label_1ad220:
    // 0x1ad220: 0x0  nop
    ctx->pc = 0x1ad220u;
    // NOP
label_1ad224:
    // 0x1ad224: 0x0  nop
    ctx->pc = 0x1ad224u;
    // NOP
label_1ad228:
    // 0x1ad228: 0x0  nop
    ctx->pc = 0x1ad228u;
    // NOP
label_1ad22c:
    // 0x1ad22c: 0x0  nop
    ctx->pc = 0x1ad22cu;
    // NOP
label_1ad230:
    // 0x1ad230: 0x0  nop
    ctx->pc = 0x1ad230u;
    // NOP
label_1ad234:
    // 0x1ad234: 0x0  nop
    ctx->pc = 0x1ad234u;
    // NOP
label_1ad238:
    // 0x1ad238: 0x0  nop
    ctx->pc = 0x1ad238u;
    // NOP
label_1ad23c:
    // 0x1ad23c: 0x0  nop
    ctx->pc = 0x1ad23cu;
    // NOP
label_1ad240:
    // 0x1ad240: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad240u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad244:
    // 0x1ad244: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x1ad244u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_1ad248:
    // 0x1ad248: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x1ad248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_1ad24c:
    // 0x1ad24c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad24cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad250:
    // 0x1ad250: 0x40f  sync.p
    ctx->pc = 0x1ad250u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad254:
    // 0x1ad254: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad258:
    // 0x1ad258: 0x8c425c68  lw          $v0, 0x5C68($v0)
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23656)));
label_1ad25c:
    // 0x1ad25c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x1ad25cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_1ad260:
    // 0x1ad260: 0x40f  sync.p
    ctx->pc = 0x1ad260u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad264:
    // 0x1ad264: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad268:
    // 0x1ad268: 0xdc425c40  ld          $v0, 0x5C40($v0)
    ctx->pc = 0x1ad268u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23616)));
label_1ad26c:
    // 0x1ad26c: 0x400011  mthi        $v0
    ctx->pc = 0x1ad26cu;
    ctx->hi = GPR_U64(ctx, 2);
label_1ad270:
    // 0x1ad270: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad274:
    // 0x1ad274: 0xdc425c48  ld          $v0, 0x5C48($v0)
    ctx->pc = 0x1ad274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23624)));
label_1ad278:
    // 0x1ad278: 0x70400011  mthi1       $v0
    ctx->pc = 0x1ad278u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_1ad27c:
    // 0x1ad27c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad280:
    // 0x1ad280: 0xdc425c50  ld          $v0, 0x5C50($v0)
    ctx->pc = 0x1ad280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23632)));
label_1ad284:
    // 0x1ad284: 0x400013  mtlo        $v0
    ctx->pc = 0x1ad284u;
    ctx->lo = GPR_U64(ctx, 2);
label_1ad288:
    // 0x1ad288: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad28c:
    // 0x1ad28c: 0xdc425c58  ld          $v0, 0x5C58($v0)
    ctx->pc = 0x1ad28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23640)));
label_1ad290:
    // 0x1ad290: 0x70400013  mtlo1       $v0
    ctx->pc = 0x1ad290u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_1ad294:
    // 0x1ad294: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ad298:
    // 0x1ad298: 0xdc425c60  ld          $v0, 0x5C60($v0)
    ctx->pc = 0x1ad298u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 23648)));
label_1ad29c:
    // 0x1ad29c: 0x400029  mtsa        $v0
    ctx->pc = 0x1ad29cu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_1ad2a0:
    // 0x1ad2a0: 0x40f  sync.p
    ctx->pc = 0x1ad2a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad2a4:
    // 0x1ad2a4: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad2a4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad2a8:
    // 0x1ad2a8: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad2a8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad2ac:
    // 0x1ad2ac: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x1ad2acu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_1ad2b0:
    // 0x1ad2b0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x1ad2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_1ad2b4:
    // 0x1ad2b4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x1ad2b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_1ad2b8:
    // 0x1ad2b8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x1ad2b8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_1ad2bc:
    // 0x1ad2bc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x1ad2bcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_1ad2c0:
    // 0x1ad2c0: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_1ad2c4:
    // 0x1ad2c4: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x1ad2c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_1ad2c8:
    // 0x1ad2c8: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x1ad2c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_1ad2cc:
    // 0x1ad2cc: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x1ad2ccu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_1ad2d0:
    // 0x1ad2d0: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_1ad2d4:
    // 0x1ad2d4: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad2d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_1ad2d8:
    // 0x1ad2d8: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad2d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_1ad2dc:
    // 0x1ad2dc: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad2dcu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_1ad2e0:
    // 0x1ad2e0: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad2e0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_1ad2e4:
    // 0x1ad2e4: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad2e4u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_1ad2e8:
    // 0x1ad2e8: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x1ad2e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_1ad2ec:
    // 0x1ad2ec: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_1ad2f0:
    // 0x1ad2f0: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x1ad2f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_1ad2f4:
    // 0x1ad2f4: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x1ad2f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_1ad2f8:
    // 0x1ad2f8: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x1ad2f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_1ad2fc:
    // 0x1ad2fc: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x1ad2fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_1ad300:
    // 0x1ad300: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x1ad300u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_1ad304:
    // 0x1ad304: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x1ad304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_1ad308:
    // 0x1ad308: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x1ad308u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_1ad30c:
    // 0x1ad30c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x1ad30cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_1ad310:
    // 0x1ad310: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad310u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_1ad314:
    // 0x1ad314: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad314u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_1ad318:
    // 0x1ad318: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad318u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_1ad31c:
    // 0x1ad31c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad31cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_1ad320:
    // 0x1ad320: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x1ad320u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_1ad324:
    // 0x1ad324: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x1ad324u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_1ad328:
    // 0x1ad328: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x1ad328u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_1ad32c:
    // 0x1ad32c: 0x40f  sync.p
    ctx->pc = 0x1ad32cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad330:
    // 0x1ad330: 0x42000018  eret
    ctx->pc = 0x1ad330u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad334:
    // 0x1ad334: 0x0  nop
    ctx->pc = 0x1ad334u;
    // NOP
label_1ad338:
    // 0x1ad338: 0x0  nop
    ctx->pc = 0x1ad338u;
    // NOP
label_1ad33c:
    // 0x1ad33c: 0x0  nop
    ctx->pc = 0x1ad33cu;
    // NOP
label_1ad340:
    // 0x1ad340: 0x3c1a0037  lui         $k0, 0x37
    ctx->pc = 0x1ad340u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)55 << 16));
label_1ad344:
    // 0x1ad344: 0x275a5a40  addiu       $k0, $k0, 0x5A40
    ctx->pc = 0x1ad344u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 23104));
label_1ad348:
    // 0x1ad348: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x1ad348u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_1ad34c:
    // 0x1ad34c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x1ad34cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_1ad350:
    // 0x1ad350: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x1ad350u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_1ad354:
    // 0x1ad354: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x1ad354u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_1ad358:
    // 0x1ad358: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x1ad358u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_1ad35c:
    // 0x1ad35c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x1ad35cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_1ad360:
    // 0x1ad360: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x1ad360u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_1ad364:
    // 0x1ad364: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x1ad364u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_1ad368:
    // 0x1ad368: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x1ad368u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_1ad36c:
    // 0x1ad36c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x1ad36cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_1ad370:
    // 0x1ad370: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x1ad370u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_1ad374:
    // 0x1ad374: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x1ad374u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_1ad378:
    // 0x1ad378: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x1ad378u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_1ad37c:
    // 0x1ad37c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x1ad37cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_1ad380:
    // 0x1ad380: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x1ad380u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_1ad384:
    // 0x1ad384: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x1ad384u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_1ad388:
    // 0x1ad388: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x1ad388u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_1ad38c:
    // 0x1ad38c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x1ad38cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_1ad390:
    // 0x1ad390: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x1ad390u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_1ad394:
    // 0x1ad394: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x1ad394u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_1ad398:
    // 0x1ad398: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x1ad398u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_1ad39c:
    // 0x1ad39c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x1ad39cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_1ad3a0:
    // 0x1ad3a0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x1ad3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_1ad3a4:
    // 0x1ad3a4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x1ad3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_1ad3a8:
    // 0x1ad3a8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x1ad3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_1ad3ac:
    // 0x1ad3ac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x1ad3acu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_1ad3b0:
    // 0x1ad3b0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x1ad3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_1ad3b4:
    // 0x1ad3b4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x1ad3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_1ad3b8:
    // 0x1ad3b8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x1ad3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_1ad3bc:
    // 0x1ad3bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ad3bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ad3c0:
    // 0x1ad3c0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3c4:
    // 0x1ad3c4: 0xfc225c40  sd          $v0, 0x5C40($at)
    ctx->pc = 0x1ad3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23616), GPR_U64(ctx, 2));
label_1ad3c8:
    // 0x1ad3c8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1ad3c8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_1ad3cc:
    // 0x1ad3cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3d0:
    // 0x1ad3d0: 0xfc225c48  sd          $v0, 0x5C48($at)
    ctx->pc = 0x1ad3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23624), GPR_U64(ctx, 2));
label_1ad3d4:
    // 0x1ad3d4: 0x1012  mflo        $v0
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ad3d8:
    // 0x1ad3d8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3dc:
    // 0x1ad3dc: 0xfc225c50  sd          $v0, 0x5C50($at)
    ctx->pc = 0x1ad3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23632), GPR_U64(ctx, 2));
label_1ad3e0:
    // 0x1ad3e0: 0x70001012  mflo1       $v0
    ctx->pc = 0x1ad3e0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_1ad3e4:
    // 0x1ad3e4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3e8:
    // 0x1ad3e8: 0xfc225c58  sd          $v0, 0x5C58($at)
    ctx->pc = 0x1ad3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23640), GPR_U64(ctx, 2));
label_1ad3ec:
    // 0x1ad3ec: 0x1028  mfsa        $v0
    ctx->pc = 0x1ad3ecu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_1ad3f0:
    // 0x1ad3f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ad3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1ad3f4:
    // 0x1ad3f4: 0xfc225c60  sd          $v0, 0x5C60($at)
    ctx->pc = 0x1ad3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 23648), GPR_U64(ctx, 2));
label_1ad3f8:
    // 0x1ad3f8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x1ad3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_1ad3fc:
    // 0x1ad3fc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x1ad3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_1ad400:
    // 0x1ad400: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x1ad400u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_1ad404:
    // 0x1ad404: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x1ad404u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_1ad408:
    // 0x1ad408: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x1ad408u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_1ad40c:
    // 0x1ad40c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1ad40cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1ad410:
    // 0x1ad410: 0x25295a40  addiu       $t1, $t1, 0x5A40
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23104));
label_1ad414:
    // 0x1ad414: 0x3c01001b  lui         $at, 0x1B
    ctx->pc = 0x1ad414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)27 << 16));
label_1ad418:
    // 0x1ad418: 0x2421d43c  addiu       $at, $at, -0x2BC4
    ctx->pc = 0x1ad418u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294956092));
label_1ad41c:
    // 0x1ad41c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x1ad41cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_1ad420:
    // 0x1ad420: 0x40f  sync.p
    ctx->pc = 0x1ad420u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad424:
    // 0x1ad424: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x1ad424u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_1ad428:
    // 0x1ad428: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1ad42c:
    // 0x1ad42c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x1ad42cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_1ad430:
    // 0x1ad430: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x1ad430u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_1ad434:
    // 0x1ad434: 0x40f  sync.p
    ctx->pc = 0x1ad434u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1ad438:
    // 0x1ad438: 0x42000018  eret
    ctx->pc = 0x1ad438u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_1ad43c:
    // 0x1ad43c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x1ad43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_1ad440:
    // 0x1ad440: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_1ad444:
    // 0x1ad444: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1ad444u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1ad448:
    // 0x1ad448: 0x8c215f58  lw          $at, 0x5F58($at)
    ctx->pc = 0x1ad448u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24408)));
label_1ad44c:
    // 0x1ad44c: 0x3c1d0037  lui         $sp, 0x37
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)55 << 16));
label_1ad450:
    // 0x1ad450: 0x20f809  jalr        $at
label_1ad454:
    if (ctx->pc == 0x1AD454u) {
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD458u;
        goto label_1ad458;
    }
    ctx->pc = 0x1AD450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x1AD458u);
        ctx->pc = 0x1AD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD450u;
        // 0x1ad454: 0x27bd5a40  addiu       $sp, $sp, 0x5A40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 23104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD450u, 0x1AD458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD458u;
label_1ad458:
    // 0x1ad458: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x1ad458u;
    runtime->handleBreak(rdram, ctx);
label_1ad45c:
    // 0x1ad45c: 0x0  nop
    ctx->pc = 0x1ad45cu;
    // NOP
    ctx->pc = 0x1ad460u;
}
