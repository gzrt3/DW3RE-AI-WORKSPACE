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

// Function: FUN_002042b0
// Address: 0x2042b0 - 0x2043ac
void FUN_002042b0_0x2042b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002042b0_0x2042b0");
#endif

    switch (ctx->pc) {
        case 0x2042c0u: goto label_2042c0;
        case 0x2042e4u: goto label_2042e4;
        default: break;
    }

    ctx->pc = 0x2042b0u;

    // 0x2042b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2042b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2042b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2042b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2042b8: 0xc06c3e8  jal         func_1B0FA0
    ctx->pc = 0x2042B8u;
    SET_GPR_U32(ctx, 31, 0x2042C0u);
    ctx->pc = 0x1B0FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FA0u, 0x2042B8u, 0x2042C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2042C0u;
label_2042c0:
    // 0x2042c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2042c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2042c4: 0x3c090058  lui         $t1, 0x58
    ctx->pc = 0x2042c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x2042c8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2042c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2042cc: 0x2529f700  addiu       $t1, $t1, -0x900
    ctx->pc = 0x2042ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964992));
    // 0x2042d0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2042d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2042d4: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2042d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2042d8: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x2042d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x2042dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2042dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2042e0: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x2042e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
label_2042e4:
    // 0x2042e4: 0xb30c0  sll         $a2, $t3, 3
    ctx->pc = 0x2042e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2042e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2042e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2042ec: 0xcb5021  addu        $t2, $a2, $t3
    ctx->pc = 0x2042ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2042f0: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x2042f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x2042f4: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x2042f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2042f8: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2042f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2042fc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2042fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x204300: 0xa5180  sll         $t2, $t2, 6
    ctx->pc = 0x204300u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x204304: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x204304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x204308: 0x12a5021  addu        $t2, $t1, $t2
    ctx->pc = 0x204308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x20430c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20430cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x204310: 0xad400480  sw          $zero, 0x480($t2)
    ctx->pc = 0x204310u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1152), GPR_U32(ctx, 0));
    // 0x204314: 0xa66021  addu        $t4, $a1, $a2
    ctx->pc = 0x204314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x204318: 0xad400488  sw          $zero, 0x488($t2)
    ctx->pc = 0x204318u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1160), GPR_U32(ctx, 0));
    // 0x20431c: 0x1803021  addu        $a2, $t4, $zero
    ctx->pc = 0x20431cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 0)));
    // 0x204320: 0xad40048c  sw          $zero, 0x48C($t2)
    ctx->pc = 0x204320u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 1164), GPR_U32(ctx, 0));
    // 0x204324: 0xac28f460  sw          $t0, -0xBA0($at)
    ctx->pc = 0x204324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964320), GPR_U32(ctx, 8));
    // 0x204328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20432c: 0xac27f464  sw          $a3, -0xB9C($at)
    ctx->pc = 0x20432cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x57F464u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F464u, _value); } while (0);
    // 0x204330: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x204334: 0xac2bf468  sw          $t3, -0xB98($at)
    ctx->pc = 0x204334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x57F468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F468u, _value); } while (0);
    // 0x204338: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x20433c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x20433cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x204340: 0xac20f46c  sw          $zero, -0xB94($at)
    ctx->pc = 0x204340u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F46Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F46Cu, _value); } while (0);
    // 0x204344: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x204348: 0xac20f470  sw          $zero, -0xB90($at)
    ctx->pc = 0x204348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F470u, _value); } while (0);
    // 0x20434c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x20434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x204350: 0xac20f474  sw          $zero, -0xB8C($at)
    ctx->pc = 0x204350u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57F474u, _value); } while (0);
    // 0x204354: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x204354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x204358: 0xa020f47c  sb          $zero, -0xB84($at)
    ctx->pc = 0x204358u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x57F47Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x57F47Cu, _value); } while (0);
    // 0x20435c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x20435cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x204360: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x204360u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x204364: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x204364u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x204368: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x204368u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x20436c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x20436cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x204370: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x204370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x204374: 0xad8400a0  sw          $a0, 0xA0($t4)
    ctx->pc = 0x204374u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 160), GPR_U32(ctx, 4));
    // 0x204378: 0xad830098  sw          $v1, 0x98($t4)
    ctx->pc = 0x204378u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 152), GPR_U32(ctx, 3));
    // 0x20437c: 0xad88009c  sw          $t0, 0x9C($t4)
    ctx->pc = 0x20437cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 8));
    // 0x204380: 0xad8000a4  sw          $zero, 0xA4($t4)
    ctx->pc = 0x204380u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 0));
    // 0x204384: 0xad8000a8  sw          $zero, 0xA8($t4)
    ctx->pc = 0x204384u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 168), GPR_U32(ctx, 0));
    // 0x204388: 0xad8000ac  sw          $zero, 0xAC($t4)
    ctx->pc = 0x204388u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 172), GPR_U32(ctx, 0));
    // 0x20438c: 0xad840138  sw          $a0, 0x138($t4)
    ctx->pc = 0x20438cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 312), GPR_U32(ctx, 4));
    // 0x204390: 0xad830130  sw          $v1, 0x130($t4)
    ctx->pc = 0x204390u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 304), GPR_U32(ctx, 3));
    // 0x204394: 0xad880134  sw          $t0, 0x134($t4)
    ctx->pc = 0x204394u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 308), GPR_U32(ctx, 8));
    // 0x204398: 0xad80013c  sw          $zero, 0x13C($t4)
    ctx->pc = 0x204398u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 316), GPR_U32(ctx, 0));
    // 0x20439c: 0xad800140  sw          $zero, 0x140($t4)
    ctx->pc = 0x20439cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 320), GPR_U32(ctx, 0));
    // 0x2043a0: 0x1960ffd0  blez        $t3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2043A0u;
    {
        const bool branch_taken_0x2043a0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x2043A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2043A0u;
        // 0x2043a4: 0xad800144  sw          $zero, 0x144($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2043a0) {
            ctx->pc = 0x2042E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2042e4;
        }
    }
    ctx->pc = 0x2043A8u;
    // 0x2043a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2043a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2043acu;
}
