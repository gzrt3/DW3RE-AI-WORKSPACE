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

// Function: FUN_002321b8
// Address: 0x2321b8 - 0x23230c
void FUN_002321b8_0x2321b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002321b8_0x2321b8");
#endif

    switch (ctx->pc) {
        case 0x232258u: goto label_232258;
        case 0x232274u: goto label_232274;
        case 0x232298u: goto label_232298;
        case 0x2322f0u: goto label_2322f0;
        default: break;
    }

    ctx->pc = 0x2321b8u;

    // 0x2321b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2321bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2321bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2321c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2321c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2321c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2321c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2321c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2321cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2321ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2321d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2321d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2321d4: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2321d8: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2321D8u;
    {
        const bool branch_taken_0x2321d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321D8u;
        // 0x2321dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321d8) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2321E0u;
    // 0x2321e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2321e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2321e4: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2321E4u;
    {
        const bool branch_taken_0x2321e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321E4u;
        // 0x2321e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321e4) {
            ctx->pc = 0x2322FCu;
            goto label_2322fc;
        }
    }
    ctx->pc = 0x2321ECu;
    // 0x2321ec: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2321f0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2321f4: 0x8e32003c  lw          $s2, 0x3C($s1)
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2321f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2321fc: 0x52202a  slt         $a0, $v0, $s2
    ctx->pc = 0x2321fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x232200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x232200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232204: 0x44900b  movn        $s2, $v0, $a0
    ctx->pc = 0x232204u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x232208: 0x2645000f  addiu       $a1, $s2, 0xF
    ctx->pc = 0x232208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x23220c: 0x2a420000  slti        $v0, $s2, 0x0
    ctx->pc = 0x23220cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x232210: 0xa2900b  movn        $s2, $a1, $v0
    ctx->pc = 0x232210u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x232214: 0x121903  sra         $v1, $s2, 4
    ctx->pc = 0x232214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 4));
    // 0x232218: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x232218u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x23221c: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x23221Cu;
    {
        const bool branch_taken_0x23221c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x232220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23221Cu;
        // 0x232220: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23221c) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x232224u;
    // 0x232224: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x232224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x232228: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x232228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x23222c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x23222cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x232230: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232234: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232234u;
    {
        const bool branch_taken_0x232234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232234) {
            ctx->pc = 0x232238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232234u;
            // 0x232238: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23223Cu;
            goto label_23223c;
        }
    }
    ctx->pc = 0x23223Cu;
label_23223c:
    // 0x23223c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23223cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x232240: 0x8010  mfhi        $s0
    ctx->pc = 0x232240u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x232244: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x232244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x232248: 0x52182a  slt         $v1, $v0, $s2
    ctx->pc = 0x232248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23224c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23224cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232250: 0xc08db50  jal         func_236D40
    ctx->pc = 0x232250u;
    SET_GPR_U32(ctx, 31, 0x232258u);
    ctx->pc = 0x232254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232250u;
    // 0x232254: 0x243980a  movz        $s3, $s2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D40u, 0x232250u, 0x232258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232258u;
label_232258:
    // 0x232258: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x232258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x23225c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23225cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232260: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x232264: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x232264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x232268: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x232268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23226c: 0xc08c8c6  jal         func_232318
    ctx->pc = 0x23226Cu;
    SET_GPR_U32(ctx, 31, 0x232274u);
    ctx->pc = 0x232270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23226Cu;
    // 0x232270: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232318u, 0x23226Cu, 0x232274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232274u;
label_232274:
    // 0x232274: 0x2533023  subu        $a2, $s2, $s3
    ctx->pc = 0x232274u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x232278: 0x58c00008  blezl       $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x232278u;
    {
        const bool branch_taken_0x232278 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x232278) {
            ctx->pc = 0x23227Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232278u;
            // 0x23227c: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23229Cu;
            goto label_23229c;
        }
    }
    ctx->pc = 0x232280u;
    // 0x232280: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x232284: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x232284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x232288: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x23228c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x23228cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x232290: 0xc08c8c6  jal         func_232318
    ctx->pc = 0x232290u;
    SET_GPR_U32(ctx, 31, 0x232298u);
    ctx->pc = 0x232294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232290u;
    // 0x232294: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232318u, 0x232290u, 0x232298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232298u;
label_232298:
    // 0x232298: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_23229c:
    // 0x23229c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2322a0: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2322a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2322a4: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2322a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2322a8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2322ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2322acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2322b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2322b4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2322b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2322b8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x2322b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x2322bc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x2322bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x2322c0: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2322C0u;
    {
        const bool branch_taken_0x2322c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2322C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322C0u;
        // 0x2322c4: 0xae240050  sw          $a0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c0) {
            ctx->pc = 0x2322F4u;
            goto label_2322f4;
        }
    }
    ctx->pc = 0x2322C8u;
    // 0x2322c8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2322cc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2322ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2322d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2322D0u;
    {
        const bool branch_taken_0x2322d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2322d0) {
            ctx->pc = 0x2322E8u;
            goto label_2322e8;
        }
    }
    ctx->pc = 0x2322D8u;
    // 0x2322d8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2322dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2322dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2322e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2322E0u;
    {
        const bool branch_taken_0x2322e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2322E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2322E0u;
        // 0x2322e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322e0) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322E8u;
label_2322e8:
    // 0x2322e8: 0xc08dbdc  jal         func_236F70
    ctx->pc = 0x2322E8u;
    SET_GPR_U32(ctx, 31, 0x2322F0u);
    ctx->pc = 0x236F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F70u, 0x2322E8u, 0x2322F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2322F0u;
label_2322f0:
    // 0x2322f0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2322f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2322f4:
    // 0x2322f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2322f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2322f8:
    // 0x2322f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2322f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2322fc:
    // 0x2322fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2322fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232304: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x23230cu;
}
