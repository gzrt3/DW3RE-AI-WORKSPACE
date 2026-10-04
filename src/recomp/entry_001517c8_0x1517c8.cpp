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

// Function: entry_001517c8
// Address: 0x1517c8 - 0x15180c
void entry_001517c8_0x1517c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001517c8_0x1517c8");
#endif

    ctx->pc = 0x1517c8u;

    // 0x1517c8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x1517c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1517cc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1517CCu;
    {
        const bool branch_taken_0x1517cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1517CCu;
        // 0x1517d0: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517cc) {
            ctx->pc = 0x15180Cu;
            return;
        }
    }
    ctx->pc = 0x1517D4u;
    // 0x1517d4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1517d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1517d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1517dc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1517dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1517e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1517e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1517e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1517e8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1517e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1517ec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1517ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1517f0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1517f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1517f4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1517f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1517f8: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x1517f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1517fc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1517fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151800: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x151800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x151804: 0xc054864  jal         func_152190
    ctx->pc = 0x151804u;
    SET_GPR_U32(ctx, 31, 0x15180Cu);
    ctx->pc = 0x151808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151804u;
    // 0x151808: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152190u, 0x151804u, 0x15180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15180Cu;
}
