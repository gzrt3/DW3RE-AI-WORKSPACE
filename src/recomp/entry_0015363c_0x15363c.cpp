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

// Function: entry_0015363c
// Address: 0x15363c - 0x153704
void entry_0015363c_0x15363c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015363c_0x15363c");
#endif

    switch (ctx->pc) {
        case 0x15365cu: goto label_15365c;
        default: break;
    }

    ctx->pc = 0x15363cu;

    // 0x15363c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x15363cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153640: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x153640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153644: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x153644u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153648: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x153648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15364c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x15364cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153654: 0xc05ded8  jal         func_177B60
    ctx->pc = 0x153654u;
    SET_GPR_U32(ctx, 31, 0x15365Cu);
    ctx->pc = 0x153658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153654u;
    // 0x153658: 0x240b03f8  addiu       $t3, $zero, 0x3F8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x153654u, 0x15365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15365Cu;
label_15365c:
    // 0x15365c: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x15365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x153660: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x153664: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x153664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
    // 0x153668: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15366c: 0xa2230071  sb          $v1, 0x71($s1)
    ctx->pc = 0x15366cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x153670: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x153674: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x153678: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x153678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x15367c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x153680: 0xa2250073  sb          $a1, 0x73($s1)
    ctx->pc = 0x153680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 5));
    // 0x153684: 0xae240074  sw          $a0, 0x74($s1)
    ctx->pc = 0x153684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 4));
    // 0x153688: 0x244259c0  addiu       $v0, $v0, 0x59C0
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22976));
    // 0x15368c: 0xa2230088  sb          $v1, 0x88($s1)
    ctx->pc = 0x15368cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 3));
    // 0x153690: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x153694: 0xa2230089  sb          $v1, 0x89($s1)
    ctx->pc = 0x153694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 3));
    // 0x153698: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15369c: 0xa223008a  sb          $v1, 0x8A($s1)
    ctx->pc = 0x15369cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536a0: 0x244259c1  addiu       $v0, $v0, 0x59C1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22977));
    // 0x1536a4: 0xa225008b  sb          $a1, 0x8B($s1)
    ctx->pc = 0x1536a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536a8: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1536ac: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
    // 0x1536b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1536b4: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1536b8: 0x244259c2  addiu       $v0, $v0, 0x59C2
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22978));
    // 0x1536bc: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1536c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1536c4: 0xa22300a0  sb          $v1, 0xA0($s1)
    ctx->pc = 0x1536c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536c8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1536cc: 0xa22300a1  sb          $v1, 0xA1($s1)
    ctx->pc = 0x1536ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 161), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536d0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1536d4: 0xa22300a2  sb          $v1, 0xA2($s1)
    ctx->pc = 0x1536d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 162), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536d8: 0xa22500a3  sb          $a1, 0xA3($s1)
    ctx->pc = 0x1536d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 163), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536dc: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x1536dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x1536e0: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1536e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1536e4: 0xa22300b8  sb          $v1, 0xB8($s1)
    ctx->pc = 0x1536e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1536e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1536ec: 0xa22300b9  sb          $v1, 0xB9($s1)
    ctx->pc = 0x1536ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 185), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1536f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1536f4: 0xa22300ba  sb          $v1, 0xBA($s1)
    ctx->pc = 0x1536f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 186), (uint8_t)GPR_U32(ctx, 3));
    // 0x1536f8: 0xa22500bb  sb          $a1, 0xBB($s1)
    ctx->pc = 0x1536f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 187), (uint8_t)GPR_U32(ctx, 5));
    // 0x1536fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1536FCu;
    {
        const bool branch_taken_0x1536fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536FCu;
        // 0x153700: 0xae2400bc  sw          $a0, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536fc) {
            ctx->pc = 0x153708u;
            return;
        }
    }
    ctx->pc = 0x153704u;
}
