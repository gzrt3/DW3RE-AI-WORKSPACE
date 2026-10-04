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

// Function: entry_00231188
// Address: 0x231188 - 0x231230
void entry_00231188_0x231188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231188_0x231188");
#endif

    switch (ctx->pc) {
        case 0x231228u: goto label_231228;
        default: break;
    }

    ctx->pc = 0x231188u;

label_231188:
    // 0x231188: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x231188u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
label_23118c:
    // 0x23118c: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x23118cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_231190:
    // 0x231190: 0x26c404b0  addiu       $a0, $s6, 0x4B0
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
label_231194:
    // 0x231194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x231194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_231198:
    // 0x231198: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x231198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_23119c:
    // 0x23119c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x23119cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2311a0:
    // 0x2311a0: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x2311a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2311a4:
    // 0x2311a4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311a8:
    // 0x2311a8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2311ac:
    // 0x2311ac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x2311acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2311b0:
    // 0x2311b0: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x2311b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2311b4:
    // 0x2311b4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x2311b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2311b8:
    // 0x2311b8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2311b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_2311bc:
    // 0x2311bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x2311bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2311c0:
    // 0x2311c0: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x2311c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2311c4:
    // 0x2311c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2311c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2311c8:
    // 0x2311c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2311c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2311cc:
    // 0x2311cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2311ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2311d0:
    // 0x2311d0: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x2311d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_2311d4:
    // 0x2311d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2311d8:
    // 0x2311d8: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_2311dc:
    // 0x2311dc: 0x24a5008f  addiu       $a1, $a1, 0x8F
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 143));
label_2311e0:
    // 0x2311e0: 0x24c217a7  addiu       $v0, $a2, 0x17A7
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6055));
label_2311e4:
    // 0x2311e4: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_2311e8:
    // 0x2311e8: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_2311ec:
    // 0x2311ec: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2311ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_2311f0:
    // 0x2311f0: 0x521c0  sll         $a0, $a1, 7
    ctx->pc = 0x2311f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_2311f4:
    // 0x2311f4: 0x3a980  sll         $s5, $v1, 6
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2311f8:
    // 0x2311f8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2311f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2311fc:
    // 0x2311fc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x2311fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_231200:
    // 0x231200: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
label_231204:
    // 0x231204: 0x342112c0  ori         $at, $at, 0x12C0
    ctx->pc = 0x231204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4800);
label_231208:
    // 0x231208: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x231208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_23120c:
    // 0x23120c: 0x59180  sll         $s2, $a1, 6
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_231210:
    // 0x231210: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x231210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_231214:
    // 0x231214: 0x24de1768  addiu       $fp, $a2, 0x1768
    ctx->pc = 0x231214u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 5992));
label_231218:
    // 0x231218: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_23121c:
    if (ctx->pc == 0x23121Cu) {
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231220u;
        goto label_231220;
    }
    ctx->pc = 0x231218u;
    {
        const bool branch_taken_0x231218 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231218u;
        // 0x23121c: 0x872821  addu        $a1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231218) {
            ctx->pc = 0x231230u;
            return;
        }
    }
    ctx->pc = 0x231220u;
label_231220:
    // 0x231220: 0x100f809  jalr        $t0
label_231224:
    if (ctx->pc == 0x231224u) {
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231228u;
        goto label_231228;
    }
    ctx->pc = 0x231220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x231228u);
        ctx->pc = 0x231224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231220u;
        // 0x231224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231220u, 0x231228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231228u;
label_231228:
    // 0x231228: 0x10000004  b           . + 4 + (0x4 << 2)
label_23122c:
    if (ctx->pc == 0x23122Cu) {
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231230u;
        goto label_fallthrough_0x231228;
    }
    ctx->pc = 0x231228u;
    {
        const bool branch_taken_0x231228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231228) {
            ctx->pc = 0x23123Cu;
            return;
        }
    }
label_fallthrough_0x231228:
    ctx->pc = 0x231230u;
}
