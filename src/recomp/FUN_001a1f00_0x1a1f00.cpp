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

// Function: FUN_001a1f00
// Address: 0x1a1f00 - 0x1a1fec
void FUN_001a1f00_0x1a1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a1f00_0x1a1f00");
#endif

    switch (ctx->pc) {
        case 0x1a1f44u: goto label_1a1f44;
        case 0x1a1f68u: goto label_1a1f68;
        default: break;
    }

    ctx->pc = 0x1a1f00u;

    // 0x1a1f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a1f04: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a1f08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a1f0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a1f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a1f14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a1f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a1f1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a1f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a1f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a1f24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a1f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a1f34: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a1f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f3c: 0xc068658  jal         func_1A1960
    ctx->pc = 0x1A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F44u);
    ctx->pc = 0x1A1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F3Cu;
    // 0x1a1f40: 0x8e500044  lw          $s0, 0x44($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1960u, 0x1A1F3Cu, 0x1A1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x1a1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1a1f48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f4c: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A1F4Cu;
    {
        const bool branch_taken_0x1a1f4c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F4Cu;
        // 0x1a1f50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f4c) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F54u;
    // 0x1a1f54: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1a1f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1f58: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1F58u;
    {
        const bool branch_taken_0x1a1f58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1f58) {
            ctx->pc = 0x1A1F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F58u;
            // 0x1a1f5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F68u;
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1F60u;
    // 0x1a1f60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A1F60u;
    {
        const bool branch_taken_0x1a1f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f60) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F68u;
label_1a1f68:
    // 0x1a1f68: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1a1f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a1f6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1F6Cu;
    {
        const bool branch_taken_0x1a1f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F6Cu;
        // 0x1a1f70: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f6c) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F74u;
    // 0x1a1f74: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1a1f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a1f78: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1f7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a1f7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1f80: 0x54c3fff9  bnel        $a2, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1F80u;
    {
        const bool branch_taken_0x1a1f80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1f80) {
            ctx->pc = 0x1A1F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F80u;
            // 0x1a1f84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1F88u;
    // 0x1a1f88: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x1a1f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a1f8c:
    // 0x1a1f8c: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1a1f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a1f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A1F90u;
    {
        const bool branch_taken_0x1a1f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F90u;
        // 0x1a1f94: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f90) {
            ctx->pc = 0x1A1FCCu;
            goto label_1a1fcc;
        }
    }
    ctx->pc = 0x1A1F98u;
    // 0x1a1f98: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1a1f9c: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x1a1f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a1fa0: 0x24425978  addiu       $v0, $v0, 0x5978
    ctx->pc = 0x1a1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22904));
    // 0x1a1fa4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x1a1fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1a1fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a1fac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a1fb0: 0xae450048  sw          $a1, 0x48($s2)
    ctx->pc = 0x1a1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 5));
    // 0x1a1fb4: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x1a1fb8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1a1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1a1fbc: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x1a1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
    // 0x1a1fc0: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1a1fc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1fc4: 0xac750010  sw          $s5, 0x10($v1)
    ctx->pc = 0x1a1fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 21));
    // 0x1a1fc8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1a1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_1a1fcc:
    // 0x1a1fcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a1fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1fd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a1fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1fd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a1fd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1fd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a1fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1fdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a1fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1fe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1fe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a1fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a1fecu;
}
