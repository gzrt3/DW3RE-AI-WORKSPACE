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

// Function: entry_00155218
// Address: 0x155218 - 0x155350
void entry_00155218_0x155218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155218_0x155218");
#endif

    switch (ctx->pc) {
        case 0x155248u: goto label_155248;
        case 0x155274u: goto label_155274;
        case 0x15528cu: goto label_15528c;
        default: break;
    }

    ctx->pc = 0x155218u;

    // 0x155218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15521c: 0x1860fff5  blez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15521Cu;
    {
        const bool branch_taken_0x15521c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15521c) {
            ctx->pc = 0x1551F4u;
            return;
        }
    }
    ctx->pc = 0x155224u;
    // 0x155224: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x155228: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15522c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15522cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155230: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155234: 0x2484b930  addiu       $a0, $a0, -0x46D0
    ctx->pc = 0x155234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949168));
    // 0x155238: 0x24a5b9a0  addiu       $a1, $a1, -0x4660
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949280));
    // 0x15523c: 0x24c6b9c0  addiu       $a2, $a2, -0x4640
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949312));
    // 0x155240: 0xc066f34  jal         func_19BCD0
    ctx->pc = 0x155240u;
    SET_GPR_U32(ctx, 31, 0x155248u);
    ctx->pc = 0x155244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155240u;
    // 0x155244: 0x24e7b9e0  addiu       $a3, $a3, -0x4620 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BCD0u, 0x155240u, 0x155248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155248u;
label_155248:
    // 0x155248: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x155248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x15524c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x15524cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x155250: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x155254: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x155258: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x15525c: 0x2484b8f0  addiu       $a0, $a0, -0x4710
    ctx->pc = 0x15525cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949104));
    // 0x155260: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x155260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x155264: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x155264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x155268: 0x24e7b9f0  addiu       $a3, $a3, -0x4610
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949360));
    // 0x15526c: 0xc066f64  jal         func_19BD90
    ctx->pc = 0x15526Cu;
    SET_GPR_U32(ctx, 31, 0x155274u);
    ctx->pc = 0x155270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15526Cu;
    // 0x155270: 0x2508ba00  addiu       $t0, $t0, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BD90u, 0x15526Cu, 0x155274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155274u;
label_155274:
    // 0x155274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155278: 0x3e00008  jr          $ra
    ctx->pc = 0x155278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155278u;
        // 0x15527c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155280u;
    // 0x155280: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x155284: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155288: 0x2529b970  addiu       $t1, $t1, -0x4690
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949232));
label_15528c:
    // 0x15528c: 0x0  nop
    ctx->pc = 0x15528cu;
    // NOP
    // 0x155290: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x155294: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x155294u;
    {
        const bool branch_taken_0x155294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155294) {
            ctx->pc = 0x1552B0u;
            goto label_1552b0;
        }
    }
    ctx->pc = 0x15529Cu;
    // 0x15529c: 0x0  nop
    ctx->pc = 0x15529cu;
    // NOP
    // 0x1552a0: 0x0  nop
    ctx->pc = 0x1552a0u;
    // NOP
    // 0x1552a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1552a8: 0x18e0fff8  blez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1552A8u;
    {
        const bool branch_taken_0x1552a8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1552ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552A8u;
        // 0x1552ac: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552a8) {
            ctx->pc = 0x15528Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15528c;
        }
    }
    ctx->pc = 0x1552B0u;
label_1552b0:
    // 0x1552b0: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1552B0u;
    {
        const bool branch_taken_0x1552b0 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1552b0) {
            ctx->pc = 0x1552C0u;
            goto label_1552c0;
        }
    }
    ctx->pc = 0x1552B8u;
    // 0x1552b8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x1552b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x1552bc: 0x2529b970  addiu       $t1, $t1, -0x4690
    ctx->pc = 0x1552bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949232));
label_1552c0:
    // 0x1552c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1552c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1552c4: 0x55100  sll         $t2, $a1, 4
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1552c8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1552cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1552d0: 0x24a526c0  addiu       $a1, $a1, 0x26C0
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
    // 0x1552d4: 0x246326c4  addiu       $v1, $v1, 0x26C4
    ctx->pc = 0x1552d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9924));
    // 0x1552d8: 0xaa4021  addu        $t0, $a1, $t2
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1552dc: 0x6a3821  addu        $a3, $v1, $t2
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1552e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1552e4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1552e8: 0x24a526c8  addiu       $a1, $a1, 0x26C8
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9928));
    // 0x1552ec: 0x246326cc  addiu       $v1, $v1, 0x26CC
    ctx->pc = 0x1552ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9932));
    // 0x1552f0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1552f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1552f4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1552f8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1552f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1552fc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1552fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x155300: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x155300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x155304: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x155304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155308: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x155308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x15530c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x15530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155310: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x155310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x155314: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x155314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155318: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x155318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x15531c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155320: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x155320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x155324: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x155324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155328: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x155328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
    // 0x15532c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155330: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x155330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
    // 0x155334: 0xad260020  sw          $a2, 0x20($t1)
    ctx->pc = 0x155334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
    // 0x155338: 0xad260024  sw          $a2, 0x24($t1)
    ctx->pc = 0x155338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 6));
    // 0x15533c: 0x3e00008  jr          $ra
    ctx->pc = 0x15533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15533Cu;
        // 0x155340: 0xe52c0028  swc1        $f12, 0x28($t1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155344u;
    // 0x155344: 0x0  nop
    ctx->pc = 0x155344u;
    // NOP
    // 0x155348: 0x0  nop
    ctx->pc = 0x155348u;
    // NOP
    // 0x15534c: 0x0  nop
    ctx->pc = 0x15534cu;
    // NOP
    ctx->pc = 0x155350u;
}
