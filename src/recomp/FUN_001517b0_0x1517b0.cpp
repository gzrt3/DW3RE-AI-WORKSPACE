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

// Function: FUN_001517b0
// Address: 0x1517b0 - 0x151824
void FUN_001517b0_0x1517b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001517b0_0x1517b0");
#endif

    switch (ctx->pc) {
        case 0x1517c8u: goto label_1517c8;
        case 0x15180cu: goto label_15180c;
        default: break;
    }

    ctx->pc = 0x1517b0u;

    // 0x1517b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1517b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1517b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1517b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1517b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1517bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1517bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1517c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1517c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1517c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1517c8:
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
            goto label_15180c;
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
label_15180c:
    // 0x15180c: 0x0  nop
    ctx->pc = 0x15180cu;
    // NOP
    // 0x151810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x151814: 0x2a030014  slti        $v1, $s0, 0x14
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x151818: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x151818u;
    {
        const bool branch_taken_0x151818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151818u;
        // 0x15181c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151818) {
            ctx->pc = 0x1517C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1517c8;
        }
    }
    ctx->pc = 0x151820u;
    // 0x151820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x151824u;
}
