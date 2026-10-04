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

// Function: entry_001e9308
// Address: 0x1e9308 - 0x1e936c
void entry_001e9308_0x1e9308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9308_0x1e9308");
#endif

    switch (ctx->pc) {
        case 0x1e931cu: goto label_1e931c;
        case 0x1e9364u: goto label_1e9364;
        default: break;
    }

    ctx->pc = 0x1e9308u;

    // 0x1e9308: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1e930c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e930cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e9310: 0x27a6009c  addiu       $a2, $sp, 0x9C
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x1e9314: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x1E9314u;
    SET_GPR_U32(ctx, 31, 0x1E931Cu);
    ctx->pc = 0x1E9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9314u;
    // 0x1e9318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x1E9314u, 0x1E931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E931Cu;
label_1e931c:
    // 0x1e931c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1e931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9320: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e9320u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9324: 0x0  nop
    ctx->pc = 0x1e9324u;
    // NOP
    // 0x1e9328: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9328u;
    {
        const bool branch_taken_0x1e9328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e9328) {
            ctx->pc = 0x1E93A4u;
            return;
        }
    }
    ctx->pc = 0x1E9330u;
    // 0x1e9330: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1e9330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1e9334: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e9338: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e9338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1e933c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9340: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e9340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1e9344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9348: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1e9348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1e934c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1e934cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1e9350: 0xa6220056  sh          $v0, 0x56($s1)
    ctx->pc = 0x1e9350u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9354: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e9354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1e9358: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e935c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1E935Cu;
    SET_GPR_U32(ctx, 31, 0x1E9364u);
    ctx->pc = 0x1E9360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E935Cu;
    // 0x1e9360: 0xa622005c  sh          $v0, 0x5C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 92), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1E935Cu, 0x1E9364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9364u;
label_1e9364:
    // 0x1e9364: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E9364u;
    {
        const bool branch_taken_0x1e9364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9364) {
            ctx->pc = 0x1E93A4u;
            return;
        }
    }
    ctx->pc = 0x1E936Cu;
}
