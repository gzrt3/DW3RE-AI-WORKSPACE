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

// Function: entry_00153304
// Address: 0x153304 - 0x1533d0
void entry_00153304_0x153304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153304_0x153304");
#endif

    switch (ctx->pc) {
        case 0x153328u: goto label_153328;
        default: break;
    }

    ctx->pc = 0x153304u;

    // 0x153304: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x153304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153308: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x153308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x15330c: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x15330cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153310: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153314: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x153314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153318: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15331c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153320: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153320u;
    SET_GPR_U32(ctx, 31, 0x153328u);
    ctx->pc = 0x153324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153320u;
    // 0x153324: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153320u, 0x153328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153328u;
label_153328:
    // 0x153328: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x153328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x15332c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153330: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153334: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x153338: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x153338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x15333c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15333cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153340: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153344: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153344u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x153348: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x15334c: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x15334cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153350: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153354: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x153358: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x153358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x15335c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153360: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153364: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153368: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x153368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x15336c: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x15336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x153370: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x153370u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x153374: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x153374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153378: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x153378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x15337c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15337cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153380: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x153380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x153384: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x153388: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x153388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15338c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153390: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x153390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x153394: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x153394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x153398: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x153398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x15339c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1533a0: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1533a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533a4: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1533a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x1533a8: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1533a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x1533ac: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1533acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1533b0: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1533b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533b4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1533b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1533b8: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1533b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533bc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1533bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1533c0: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1533c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1533c4: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1533c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1533c8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1533C8u;
    {
        const bool branch_taken_0x1533c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533C8u;
        // 0x1533cc: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533c8) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x1533D0u;
}
