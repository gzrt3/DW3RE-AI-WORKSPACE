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

// Function: entry_00168610
// Address: 0x168610 - 0x168700
void entry_00168610_0x168610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168610_0x168610");
#endif

    switch (ctx->pc) {
        case 0x168650u: goto label_168650;
        case 0x168658u: goto label_168658;
        case 0x1686a0u: goto label_1686a0;
        default: break;
    }

    ctx->pc = 0x168610u;

    // 0x168610: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x168610u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x168614: 0x1480ffa7  bnez        $a0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x168614) {
            ctx->pc = 0x1684B4u;
            return;
        }
    }
    ctx->pc = 0x16861Cu;
    // 0x16861c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16861cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168620: 0x3e00008  jr          $ra
    ctx->pc = 0x168620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168620u;
        // 0x168624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168628u;
    // 0x168628: 0x0  nop
    ctx->pc = 0x168628u;
    // NOP
    // 0x16862c: 0x0  nop
    ctx->pc = 0x16862cu;
    // NOP
    // 0x168630: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x168634: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x168634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x168638: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x168638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16863c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x168640: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x168640u;
    {
        const bool branch_taken_0x168640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168640u;
        // 0x168644: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168640) {
            ctx->pc = 0x1686F4u;
            goto label_1686f4;
        }
    }
    ctx->pc = 0x168648u;
    // 0x168648: 0x46006087  neg.s       $f2, $f12
    ctx->pc = 0x168648u;
    ctx->f[2] = FPU_NEG_S(ctx->f[12]);
    // 0x16864c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16864cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168650:
    // 0x168650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168654: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x168654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168658:
    // 0x168658: 0x9104008d  lbu         $a0, 0x8D($t0)
    ctx->pc = 0x168658u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 141)));
    // 0x16865c: 0x25230003  addiu       $v1, $t1, 0x3
    ctx->pc = 0x16865cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x168660: 0x671804  sllv        $v1, $a3, $v1
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x168664: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x168668: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x168668u;
    {
        const bool branch_taken_0x168668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168668u;
        // 0x16866c: 0x10a1821  addu        $v1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168668) {
            ctx->pc = 0x168688u;
            goto label_168688;
        }
    }
    ctx->pc = 0x168670u;
    // 0x168670: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x168670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168674: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x168674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x168678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16867c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16867cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x168680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x168680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x168684: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x168684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_168688:
    // 0x168688: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x168688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x16868c: 0x29230003  slti        $v1, $t1, 0x3
    ctx->pc = 0x16868cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x168690: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x168690u;
    {
        const bool branch_taken_0x168690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168690u;
        // 0x168694: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168690) {
            ctx->pc = 0x168658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168658;
        }
    }
    ctx->pc = 0x168698u;
    // 0x168698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x168698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16869c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16869cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1686a0:
    // 0x1686a0: 0x9104008d  lbu         $a0, 0x8D($t0)
    ctx->pc = 0x1686a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 141)));
    // 0x1686a4: 0x1471804  sllv        $v1, $a3, $t2
    ctx->pc = 0x1686a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1686a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1686a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1686ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1686ACu;
    {
        const bool branch_taken_0x1686ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ACu;
        // 0x1686b0: 0x1091821  addu        $v1, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686ac) {
            ctx->pc = 0x1686CCu;
            goto label_1686cc;
        }
    }
    ctx->pc = 0x1686B4u;
    // 0x1686b4: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1686b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1686b8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1686b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1686bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1686bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1686c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1686c0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1686c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1686c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1686c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1686c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1686cc:
    // 0x1686cc: 0x0  nop
    ctx->pc = 0x1686ccu;
    // NOP
    // 0x1686d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1686d4: 0x29430003  slti        $v1, $t2, 0x3
    ctx->pc = 0x1686d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1686d8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1686D8u;
    {
        const bool branch_taken_0x1686d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686D8u;
        // 0x1686dc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686d8) {
            ctx->pc = 0x1686A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1686a0;
        }
    }
    ctx->pc = 0x1686E0u;
    // 0x1686e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1686e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1686e4: 0xa100008c  sb          $zero, 0x8C($t0)
    ctx->pc = 0x1686e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x1686e8: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x1686e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1686ec: 0x1020ffd8  beqz        $at, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1686ECu;
    {
        const bool branch_taken_0x1686ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1686F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1686ECu;
        // 0x1686f0: 0x25080090  addiu       $t0, $t0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1686ec) {
            ctx->pc = 0x168650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168650;
        }
    }
    ctx->pc = 0x1686F4u;
label_1686f4:
    // 0x1686f4: 0x0  nop
    ctx->pc = 0x1686f4u;
    // NOP
    // 0x1686f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1686F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168700u;
}
