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

// Function: FUN_001713a0
// Address: 0x1713a0 - 0x1714dc
void FUN_001713a0_0x1713a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001713a0_0x1713a0");
#endif

    switch (ctx->pc) {
        case 0x1713bcu: goto label_1713bc;
        case 0x171410u: goto label_171410;
        case 0x171424u: goto label_171424;
        default: break;
    }

    ctx->pc = 0x1713a0u;

    // 0x1713a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1713a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1713a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1713a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1713a8: 0x94851130  lhu         $a1, 0x1130($a0)
    ctx->pc = 0x1713a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x1713ac: 0x1ca00005  bgtz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1713ACu;
    {
        const bool branch_taken_0x1713ac = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1713ac) {
            ctx->pc = 0x1713C4u;
            goto label_1713c4;
        }
    }
    ctx->pc = 0x1713B4u;
    // 0x1713b4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1713B4u;
    SET_GPR_U32(ctx, 31, 0x1713BCu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1713B4u, 0x1713BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713BCu;
label_1713bc:
    // 0x1713bc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1713BCu;
    {
        const bool branch_taken_0x1713bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713BCu;
        // 0x1713c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713bc) {
            ctx->pc = 0x1714DCu;
            return;
        }
    }
    ctx->pc = 0x1713C4u;
label_1713c4:
    // 0x1713c4: 0x94831132  lhu         $v1, 0x1132($a0)
    ctx->pc = 0x1713c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1713c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1713c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1713cc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1713CCu;
    {
        const bool branch_taken_0x1713cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713CCu;
        // 0x1713d0: 0x28a10004  slti        $at, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713cc) {
            ctx->pc = 0x1713E8u;
            goto label_1713e8;
        }
    }
    ctx->pc = 0x1713D4u;
    // 0x1713d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1713D4u;
    {
        const bool branch_taken_0x1713d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D4u;
        // 0x1713d8: 0x24a3fffc  addiu       $v1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d4) {
            ctx->pc = 0x1713E4u;
            goto label_1713e4;
        }
    }
    ctx->pc = 0x1713DCu;
    // 0x1713dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1713DCu;
    {
        const bool branch_taken_0x1713dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713DCu;
        // 0x1713e0: 0xa4801130  sh          $zero, 0x1130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713dc) {
            ctx->pc = 0x1713E8u;
            goto label_1713e8;
        }
    }
    ctx->pc = 0x1713E4u;
label_1713e4:
    // 0x1713e4: 0xa4831130  sh          $v1, 0x1130($a0)
    ctx->pc = 0x1713e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4400), (uint16_t)GPR_U32(ctx, 3));
label_1713e8:
    // 0x1713e8: 0x94871132  lhu         $a3, 0x1132($a0)
    ctx->pc = 0x1713e8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x1713ec: 0x3c063ecc  lui         $a2, 0x3ECC
    ctx->pc = 0x1713ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16076 << 16));
    // 0x1713f0: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x1713f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x1713f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1713f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713f8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1713f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1713fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171404: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x171408: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x171408u;
    {
        const bool branch_taken_0x171408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171408u;
        // 0x17140c: 0xa4861132  sh          $a2, 0x1132($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4402), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171408) {
            ctx->pc = 0x1714C4u;
            goto label_1714c4;
        }
    }
    ctx->pc = 0x171410u;
label_171410:
    // 0x171410: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x171410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171414: 0x24c91150  addiu       $t1, $a2, 0x1150
    ctx->pc = 0x171414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4432));
    // 0x171418: 0x24e80090  addiu       $t0, $a3, 0x90
    ctx->pc = 0x171418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x17141c: 0x24ea00a0  addiu       $t2, $a3, 0xA0
    ctx->pc = 0x17141cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x171420: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171424:
    // 0x171424: 0x0  nop
    ctx->pc = 0x171424u;
    // NOP
    // 0x171428: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x171428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17142c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17142cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x171430: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x171430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x171434: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x171434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171438: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x171438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17143c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17143cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x171440: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x171440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x171444: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x171444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171448: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x171448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17144c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17144cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171450: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x171450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x171454: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x171454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171458: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x171458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17145c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17145cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171460: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x171460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x171464: 0x94861132  lhu         $a2, 0x1132($a0)
    ctx->pc = 0x171464u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x171468: 0x28c1002e  slti        $at, $a2, 0x2E
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x17146c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17146Cu;
    {
        const bool branch_taken_0x17146c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17146c) {
            ctx->pc = 0x171498u;
            goto label_171498;
        }
    }
    ctx->pc = 0x171474u;
    // 0x171474: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x171478: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17147c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17147cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x171480: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x171484: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x171488: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x171488u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
    // 0x17148c: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x171490: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x171494: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x171494u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
label_171498:
    // 0x171498: 0x94871130  lhu         $a3, 0x1130($a0)
    ctx->pc = 0x171498u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4400)));
    // 0x17149c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1714a0: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1714a4: 0x29860040  slti        $a2, $t4, 0x40
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1714a8: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1714ac: 0xad47000c  sw          $a3, 0xC($t2)
    ctx->pc = 0x1714acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 7));
    // 0x1714b0: 0x14c0ffdc  bnez        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1714B0u;
    {
        const bool branch_taken_0x1714b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714B0u;
        // 0x1714b4: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714b0) {
            ctx->pc = 0x171424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171424;
        }
    }
    ctx->pc = 0x1714B8u;
    // 0x1714b8: 0x24630820  addiu       $v1, $v1, 0x820
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
    // 0x1714bc: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1714c0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1714c4:
    // 0x1714c4: 0x0  nop
    ctx->pc = 0x1714c4u;
    // NOP
    // 0x1714c8: 0x94861138  lhu         $a2, 0x1138($a0)
    ctx->pc = 0x1714c8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4408)));
    // 0x1714cc: 0x166302b  sltu        $a2, $t3, $a2
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1714d0: 0x14c0ffcf  bnez        $a2, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1714D0u;
    {
        const bool branch_taken_0x1714d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714D0u;
        // 0x1714d4: 0x833821  addu        $a3, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714d0) {
            ctx->pc = 0x171410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171410;
        }
    }
    ctx->pc = 0x1714D8u;
    // 0x1714d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1714d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1714dcu;
}
