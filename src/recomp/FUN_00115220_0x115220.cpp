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

// Function: FUN_00115220
// Address: 0x115220 - 0x115414
void FUN_00115220_0x115220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115220_0x115220");
#endif

    switch (ctx->pc) {
        case 0x115234u: goto label_115234;
        default: break;
    }

    ctx->pc = 0x115220u;

    // 0x115220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11522c: 0xc0657f0  jal         func_195FC0
    ctx->pc = 0x11522Cu;
    SET_GPR_U32(ctx, 31, 0x115234u);
    ctx->pc = 0x115230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11522Cu;
    // 0x115230: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195FC0u, 0x11522Cu, 0x115234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115234u;
label_115234:
    // 0x115234: 0xae021d60  sw          $v0, 0x1D60($s0)
    ctx->pc = 0x115234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7520), GPR_U32(ctx, 2));
    // 0x115238: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x11523c: 0xae031d64  sw          $v1, 0x1D64($s0)
    ctx->pc = 0x11523cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7524), GPR_U32(ctx, 3));
    // 0x115240: 0x9044003a  lbu         $a0, 0x3A($v0)
    ctx->pc = 0x115240u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x115244: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x115244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115248: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115248u;
    {
        const bool branch_taken_0x115248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x115248) {
            ctx->pc = 0x115258u;
            goto label_115258;
        }
    }
    ctx->pc = 0x115250u;
    // 0x115250: 0x8e031d60  lw          $v1, 0x1D60($s0)
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7520)));
    // 0x115254: 0xae031d64  sw          $v1, 0x1D64($s0)
    ctx->pc = 0x115254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7524), GPR_U32(ctx, 3));
label_115258:
    // 0x115258: 0x84450038  lh          $a1, 0x38($v0)
    ctx->pc = 0x115258u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x11525c: 0x28a10057  slti        $at, $a1, 0x57
    ctx->pc = 0x11525cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x115260: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x115260u;
    {
        const bool branch_taken_0x115260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x28a1005f  slti        $at, $a1, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115260) {
            ctx->pc = 0x11528Cu;
            goto label_11528c;
        }
    }
    ctx->pc = 0x115268u;
    // 0x115268: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11526c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x11526cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x115270: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115274: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x115274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x115278: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11527c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x11527cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x115280: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x115280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x115284: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115284u;
        // 0x115288: 0x643821  addu        $a3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x1152D8u;
            goto label_1152d8;
        }
    }
    ctx->pc = 0x11528Cu;
label_11528c:
    // 0x11528c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11528Cu;
    {
        const bool branch_taken_0x11528c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x115290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11528Cu;
        // 0x115290: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11528c) {
            ctx->pc = 0x11529Cu;
            goto label_11529c;
        }
    }
    ctx->pc = 0x115294u;
    // 0x115294: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115294u;
    {
        const bool branch_taken_0x115294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115294u;
        // 0x115298: 0x24e7e7f0  addiu       $a3, $a3, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115294) {
            ctx->pc = 0x1152D8u;
            goto label_1152d8;
        }
    }
    ctx->pc = 0x11529Cu;
label_11529c:
    // 0x11529c: 0x28a10060  slti        $at, $a1, 0x60
    ctx->pc = 0x11529cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1152a0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1152A0u;
    {
        const bool branch_taken_0x1152a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152A0u;
        // 0x1152a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152a0) {
            ctx->pc = 0x1152D8u;
            goto label_1152d8;
        }
    }
    ctx->pc = 0x1152A8u;
    // 0x1152a8: 0x28a10089  slti        $at, $a1, 0x89
    ctx->pc = 0x1152a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1152ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1152ACu;
    {
        const bool branch_taken_0x1152ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1152ac) {
            ctx->pc = 0x1152D8u;
            goto label_1152d8;
        }
    }
    ctx->pc = 0x1152B4u;
    // 0x1152b4: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x1152b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x1152b8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1152b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1152bc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1152bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1152c0: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1152c4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1152c8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1152cc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1152d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1152d4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1152d8:
    // 0x1152d8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1152dc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1152dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1152e0: 0xae061d68  sw          $a2, 0x1D68($s0)
    ctx->pc = 0x1152e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7528), GPR_U32(ctx, 6));
    // 0x1152e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1152e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1152e8: 0xae001d70  sw          $zero, 0x1D70($s0)
    ctx->pc = 0x1152e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 0));
    // 0x1152ec: 0xae051d6c  sw          $a1, 0x1D6C($s0)
    ctx->pc = 0x1152ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7532), GPR_U32(ctx, 5));
    // 0x1152f0: 0xae001d74  sw          $zero, 0x1D74($s0)
    ctx->pc = 0x1152f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 0));
    // 0x1152f4: 0x9044003a  lbu         $a0, 0x3A($v0)
    ctx->pc = 0x1152f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x1152f8: 0x10830043  beq         $a0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1152FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152F8u;
        // 0x1152fc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x115408u;
            goto label_115408;
        }
    }
    ctx->pc = 0x115300u;
    // 0x115300: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x115300u;
    {
        const bool branch_taken_0x115300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115300) {
            ctx->pc = 0x11534Cu;
            goto label_11534c;
        }
    }
    ctx->pc = 0x115308u;
    // 0x115308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11530c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11530Cu;
    {
        const bool branch_taken_0x11530c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x115310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11530Cu;
        // 0x115310: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11530c) {
            ctx->pc = 0x115340u;
            goto label_115340;
        }
    }
    ctx->pc = 0x115314u;
    // 0x115314: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115314u;
    {
        const bool branch_taken_0x115314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x115314) {
            ctx->pc = 0x115334u;
            goto label_115334;
        }
    }
    ctx->pc = 0x11531Cu;
    // 0x11531c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11531Cu;
    {
        const bool branch_taken_0x11531c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11531c) {
            ctx->pc = 0x11532Cu;
            goto label_11532c;
        }
    }
    ctx->pc = 0x115324u;
    // 0x115324: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x115324u;
    {
        const bool branch_taken_0x115324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115324u;
        // 0x115328: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115324) {
            ctx->pc = 0x115414u;
            return;
        }
    }
    ctx->pc = 0x11532Cu;
label_11532c:
    // 0x11532c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11532Cu;
    {
        const bool branch_taken_0x11532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11532Cu;
        // 0x115330: 0xae071d70  sw          $a3, 0x1D70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11532c) {
            ctx->pc = 0x115410u;
            goto label_115410;
        }
    }
    ctx->pc = 0x115334u;
label_115334:
    // 0x115334: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x115334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x115338: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x115338u;
    {
        const bool branch_taken_0x115338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115338u;
        // 0x11533c: 0xae061d6c  sw          $a2, 0x1D6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7532), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115338) {
            ctx->pc = 0x115410u;
            goto label_115410;
        }
    }
    ctx->pc = 0x115340u;
label_115340:
    // 0x115340: 0xae071d74  sw          $a3, 0x1D74($s0)
    ctx->pc = 0x115340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 7));
    // 0x115344: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x115344u;
    {
        const bool branch_taken_0x115344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115344u;
        // 0x115348: 0xae051d68  sw          $a1, 0x1D68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7528), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115344) {
            ctx->pc = 0x115410u;
            goto label_115410;
        }
    }
    ctx->pc = 0x11534Cu;
label_11534c:
    // 0x11534c: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x11534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x115350: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x115350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x115354: 0xdc440030  ld          $a0, 0x30($v0)
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x115358: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11535c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x11535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x115360: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115360u;
    {
        const bool branch_taken_0x115360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115360u;
        // 0x115364: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115360) {
            ctx->pc = 0x115370u;
            goto label_115370;
        }
    }
    ctx->pc = 0x115368u;
    // 0x115368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115368u;
    {
        const bool branch_taken_0x115368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115368) {
            ctx->pc = 0x115384u;
            goto label_115384;
        }
    }
    ctx->pc = 0x115370u;
label_115370:
    // 0x115370: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115374: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x115374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x115378: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x115378u;
    {
        const bool branch_taken_0x115378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115378u;
        // 0x11537c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115378) {
            ctx->pc = 0x115384u;
            goto label_115384;
        }
    }
    ctx->pc = 0x115380u;
    // 0x115380: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x115380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_115384:
    // 0x115384: 0x28a10057  slti        $at, $a1, 0x57
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)87) ? 1 : 0);
    // 0x115388: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x28a1005f  slti        $at, $a1, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)95) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115388) {
            ctx->pc = 0x1153B4u;
            goto label_1153b4;
        }
    }
    ctx->pc = 0x115390u;
    // 0x115390: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115394: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x115394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x115398: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x11539c: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x11539cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1153a0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153a4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1153a8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1153ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1153ACu;
    {
        const bool branch_taken_0x1153ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ACu;
        // 0x1153b0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ac) {
            ctx->pc = 0x115400u;
            goto label_115400;
        }
    }
    ctx->pc = 0x1153B4u;
label_1153b4:
    // 0x1153b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153B4u;
    {
        const bool branch_taken_0x1153b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153B4u;
        // 0x1153b8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153b4) {
            ctx->pc = 0x1153C4u;
            goto label_1153c4;
        }
    }
    ctx->pc = 0x1153BCu;
    // 0x1153bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1153BCu;
    {
        const bool branch_taken_0x1153bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153BCu;
        // 0x1153c0: 0x2463e7f0  addiu       $v1, $v1, -0x1810 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153bc) {
            ctx->pc = 0x115400u;
            goto label_115400;
        }
    }
    ctx->pc = 0x1153C4u;
label_1153c4:
    // 0x1153c4: 0x28a10060  slti        $at, $a1, 0x60
    ctx->pc = 0x1153c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x1153c8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1153C8u;
    {
        const bool branch_taken_0x1153c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153C8u;
        // 0x1153cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153c8) {
            ctx->pc = 0x115400u;
            goto label_115400;
        }
    }
    ctx->pc = 0x1153D0u;
    // 0x1153d0: 0x28a10089  slti        $at, $a1, 0x89
    ctx->pc = 0x1153d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)137) ? 1 : 0);
    // 0x1153d4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1153D4u;
    {
        const bool branch_taken_0x1153d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1153d4) {
            ctx->pc = 0x115400u;
            goto label_115400;
        }
    }
    ctx->pc = 0x1153DCu;
    // 0x1153dc: 0x24a5fff7  addiu       $a1, $a1, -0x9
    ctx->pc = 0x1153dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
    // 0x1153e0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1153e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1153e4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153e8: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x1153e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
    // 0x1153ec: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1153ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1153f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1153f4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1153f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1153f8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1153f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1153fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_115400:
    // 0x115400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115400u;
    {
        const bool branch_taken_0x115400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115400u;
        // 0x115404: 0xae031d74  sw          $v1, 0x1D74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115400) {
            ctx->pc = 0x115410u;
            goto label_115410;
        }
    }
    ctx->pc = 0x115408u;
label_115408:
    // 0x115408: 0xae071d70  sw          $a3, 0x1D70($s0)
    ctx->pc = 0x115408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7536), GPR_U32(ctx, 7));
    // 0x11540c: 0xae071d74  sw          $a3, 0x1D74($s0)
    ctx->pc = 0x11540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7540), GPR_U32(ctx, 7));
label_115410:
    // 0x115410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x115414u;
}
