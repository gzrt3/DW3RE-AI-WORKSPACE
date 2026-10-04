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

// Function: FUN_00187260
// Address: 0x187260 - 0x187350
void FUN_00187260_0x187260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00187260_0x187260");
#endif

    ctx->pc = 0x187260u;

    // 0x187260: 0x9083023c  lbu         $v1, 0x23C($a0)
    ctx->pc = 0x187260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 572)));
    // 0x187264: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187268: 0x1066002a  beq         $v1, $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x187268u;
    {
        const bool branch_taken_0x187268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x18726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187268u;
        // 0x18726c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187268) {
            ctx->pc = 0x187314u;
            goto label_187314;
        }
    }
    ctx->pc = 0x187270u;
    // 0x187270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187274: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x187274u;
    {
        const bool branch_taken_0x187274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x187274) {
            ctx->pc = 0x1872BCu;
            goto label_1872bc;
        }
    }
    ctx->pc = 0x18727Cu;
    // 0x18727c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18727Cu;
    {
        const bool branch_taken_0x18727c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18727c) {
            ctx->pc = 0x18728Cu;
            goto label_18728c;
        }
    }
    ctx->pc = 0x187284u;
    // 0x187284: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x187284u;
    {
        const bool branch_taken_0x187284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187284) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x18728Cu;
label_18728c:
    // 0x18728c: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x18728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187290: 0x3c034874  lui         $v1, 0x4874
    ctx->pc = 0x187290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18548 << 16));
    // 0x187294: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x187294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x187298: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18729c: 0x0  nop
    ctx->pc = 0x18729cu;
    // NOP
    // 0x1872a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872a4: 0x0  nop
    ctx->pc = 0x1872a4u;
    // NOP
    // 0x1872a8: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1872A8u;
    {
        const bool branch_taken_0x1872a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1872a8) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872B0u;
    // 0x1872b0: 0xa085023c  sb          $a1, 0x23C($a0)
    ctx->pc = 0x1872b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 5));
    // 0x1872b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1872B4u;
    {
        const bool branch_taken_0x1872b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B4u;
        // 0x1872b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872b4) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872BCu;
label_1872bc:
    // 0x1872bc: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x1872bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872c0: 0x3c03484e  lui         $v1, 0x484E
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18510 << 16));
    // 0x1872c4: 0x3463a400  ori         $v1, $v1, 0xA400
    ctx->pc = 0x1872c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41984);
    // 0x1872c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1872cc: 0x0  nop
    ctx->pc = 0x1872ccu;
    // NOP
    // 0x1872d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1872d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872d4: 0x0  nop
    ctx->pc = 0x1872d4u;
    // NOP
    // 0x1872d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1872D8u;
    {
        const bool branch_taken_0x1872d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1872DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D8u;
        // 0x1872dc: 0x3c0348af  lui         $v1, 0x48AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18607 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872d8) {
            ctx->pc = 0x1872ECu;
            goto label_1872ec;
        }
    }
    ctx->pc = 0x1872E0u;
    // 0x1872e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1872e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1872E4u;
    {
        const bool branch_taken_0x1872e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E4u;
        // 0x1872e8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872e4) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x1872ECu;
label_1872ec:
    // 0x1872ec: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x1872ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x1872f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1872f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1872f4: 0x0  nop
    ctx->pc = 0x1872f4u;
    // NOP
    // 0x1872f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1872f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1872fc: 0x0  nop
    ctx->pc = 0x1872fcu;
    // NOP
    // 0x187300: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x187300u;
    {
        const bool branch_taken_0x187300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x187300) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187308u;
    // 0x187308: 0xa086023c  sb          $a2, 0x23C($a0)
    ctx->pc = 0x187308u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 6));
    // 0x18730c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18730Cu;
    {
        const bool branch_taken_0x18730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18730c) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187314u;
label_187314:
    // 0x187314: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187318: 0x3c034899  lui         $v1, 0x4899
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18585 << 16));
    // 0x18731c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x187320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x187320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187324: 0x0  nop
    ctx->pc = 0x187324u;
    // NOP
    // 0x187328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x187328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18732c: 0x0  nop
    ctx->pc = 0x18732cu;
    // NOP
    // 0x187330: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x187330u;
    {
        const bool branch_taken_0x187330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x187330) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187338u;
    // 0x187338: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18733c: 0xa087023c  sb          $a3, 0x23C($a0)
    ctx->pc = 0x18733cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
label_187340:
    // 0x187340: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x187340u;
    {
        const bool branch_taken_0x187340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x187340) {
            ctx->pc = 0x187350u;
            return;
        }
    }
    ctx->pc = 0x187348u;
    // 0x187348: 0xa4800224  sh          $zero, 0x224($a0)
    ctx->pc = 0x187348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 548), (uint16_t)GPR_U32(ctx, 0));
    // 0x18734c: 0xa080023d  sb          $zero, 0x23D($a0)
    ctx->pc = 0x18734cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 573), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x187350u;
}
