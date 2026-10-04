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

// Function: FUN_001ef6f0
// Address: 0x1ef6f0 - 0x1ef77c
void FUN_001ef6f0_0x1ef6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ef6f0_0x1ef6f0");
#endif

    switch (ctx->pc) {
        case 0x1ef778u: goto label_1ef778;
        default: break;
    }

    ctx->pc = 0x1ef6f0u;

    // 0x1ef6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef6f8: 0x8f838f54  lw          $v1, -0x70AC($gp)
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938452)));
    // 0x1ef6fc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EF6FCu;
    {
        const bool branch_taken_0x1ef6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6FCu;
        // 0x1ef700: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6fc) {
            ctx->pc = 0x1EF778u;
            goto label_1ef778;
        }
    }
    ctx->pc = 0x1EF704u;
    // 0x1ef704: 0x311c0  sll         $v0, $v1, 7
    ctx->pc = 0x1ef704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1ef708: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1ef70c: 0x240405b0  addiu       $a0, $zero, 0x5B0
    ctx->pc = 0x1ef70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x1ef710: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1ef710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1ef714: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x1ef714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x1ef718: 0x24c61e00  addiu       $a2, $a2, 0x1E00
    ctx->pc = 0x1ef718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7680));
    // 0x1ef71c: 0x24631420  addiu       $v1, $v1, 0x1420
    ctx->pc = 0x1ef71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5152));
    // 0x1ef720: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x1ef720u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1ef724: 0xe42818  mult        $a1, $a3, $a0
    ctx->pc = 0x1ef724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ef728: 0x72140  sll         $a0, $a3, 5
    ctx->pc = 0x1ef728u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1ef72c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1ef72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ef730: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF730u;
    {
        const bool branch_taken_0x1ef730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1EF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF730u;
        // 0x1ef734: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef730) {
            ctx->pc = 0x1EF740u;
            goto label_1ef740;
        }
    }
    ctx->pc = 0x1EF738u;
    // 0x1ef738: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1ef738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1ef73c: 0x250c3  sra         $t2, $v0, 3
    ctx->pc = 0x1ef73cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 3));
label_1ef740:
    // 0x1ef740: 0xa0aa0083  sb          $t2, 0x83($a1)
    ctx->pc = 0x1ef740u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef744: 0x2406005b  addiu       $a2, $zero, 0x5B
    ctx->pc = 0x1ef744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1ef748: 0xa0aa0123  sb          $t2, 0x123($a1)
    ctx->pc = 0x1ef748u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef74c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ef74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef750: 0xa0aa01c3  sb          $t2, 0x1C3($a1)
    ctx->pc = 0x1ef750u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 451), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef758: 0xa0aa0263  sb          $t2, 0x263($a1)
    ctx->pc = 0x1ef758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 611), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef75c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ef75cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef760: 0xa0aa0303  sb          $t2, 0x303($a1)
    ctx->pc = 0x1ef760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 771), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef764: 0xa0aa03a3  sb          $t2, 0x3A3($a1)
    ctx->pc = 0x1ef764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 931), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef768: 0xa0aa0443  sb          $t2, 0x443($a1)
    ctx->pc = 0x1ef768u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1091), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef76c: 0xa0aa04e3  sb          $t2, 0x4E3($a1)
    ctx->pc = 0x1ef76cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1251), (uint8_t)GPR_U32(ctx, 10));
    // 0x1ef770: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EF770u;
    SET_GPR_U32(ctx, 31, 0x1EF778u);
    ctx->pc = 0x1EF774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF770u;
    // 0x1ef774: 0xa0aa0583  sb          $t2, 0x583($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 1411), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EF770u, 0x1EF778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF778u;
label_1ef778:
    // 0x1ef778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ef77cu;
}
