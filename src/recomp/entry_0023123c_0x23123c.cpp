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

// Function: entry_0023123c
// Address: 0x23123c - 0x231888
void entry_0023123c_0x23123c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023123c_0x23123c");
#endif

    switch (ctx->pc) {
        case 0x231254u: goto label_231254;
        case 0x231278u: goto label_231278;
        case 0x2312c8u: goto label_2312c8;
        case 0x2312e0u: goto label_2312e0;
        case 0x231358u: goto label_231358;
        case 0x231440u: goto label_231440;
        case 0x231488u: goto label_231488;
        case 0x231490u: goto label_231490;
        case 0x2314a0u: goto label_2314a0;
        case 0x2314a8u: goto label_2314a8;
        case 0x2314b0u: goto label_2314b0;
        case 0x2314bcu: goto label_2314bc;
        case 0x2314e0u: goto label_2314e0;
        case 0x231500u: goto label_231500;
        case 0x23150cu: goto label_23150c;
        case 0x231558u: goto label_231558;
        case 0x231570u: goto label_231570;
        case 0x231588u: goto label_231588;
        case 0x231590u: goto label_231590;
        case 0x2315a0u: goto label_2315a0;
        case 0x2315b8u: goto label_2315b8;
        case 0x2315c0u: goto label_2315c0;
        case 0x2315f0u: goto label_2315f0;
        case 0x231638u: goto label_231638;
        case 0x231640u: goto label_231640;
        case 0x231660u: goto label_231660;
        case 0x2316b8u: goto label_2316b8;
        case 0x2316c0u: goto label_2316c0;
        case 0x2316fcu: goto label_2316fc;
        case 0x23172cu: goto label_23172c;
        case 0x231758u: goto label_231758;
        case 0x231788u: goto label_231788;
        case 0x2317b0u: goto label_2317b0;
        case 0x2317f8u: goto label_2317f8;
        case 0x23181cu: goto label_23181c;
        case 0x231824u: goto label_231824;
        case 0x231844u: goto label_231844;
        case 0x23185cu: goto label_23185c;
        default: break;
    }

    ctx->pc = 0x23123cu;

    // 0x23123c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231240: 0x10800191  beqz        $a0, . + 4 + (0x191 << 2)
    ctx->pc = 0x231240u;
    {
        const bool branch_taken_0x231240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xaf8482d0  sw          $a0, -0x7D30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231240) {
            ctx->pc = 0x231888u;
            return;
        }
    }
    ctx->pc = 0x231248u;
    // 0x231248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x231248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23124c: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x23124Cu;
    SET_GPR_U32(ctx, 31, 0x231254u);
    ctx->pc = 0x231250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23124Cu;
    // 0x231250: 0x3c100fff  lui         $s0, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x23124Cu, 0x231254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231258: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x231258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x23125c: 0x3c112000  lui         $s1, 0x2000
    ctx->pc = 0x23125cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8192 << 16));
    // 0x231260: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x231260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x231264: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
    // 0x231268: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x23126c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23126cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231270: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x231270u;
    SET_GPR_U32(ctx, 31, 0x231278u);
    ctx->pc = 0x231274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231270u;
    // 0x231274: 0x34c612c0  ori         $a2, $a2, 0x12C0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4800);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x231270u, 0x231278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231278u;
label_231278:
    // 0x231278: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x23127c: 0x27c2003f  addiu       $v0, $fp, 0x3F
    ctx->pc = 0x23127cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 63));
    // 0x231280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x231280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231284: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231288: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x231288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23128c: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x23128cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x231290: 0x346312c0  ori         $v1, $v1, 0x12C0
    ctx->pc = 0x231290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4800);
    // 0x231294: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x231294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x231298: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x23129c: 0x708024  and         $s0, $v1, $s0
    ctx->pc = 0x23129cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x2312a0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x2312a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2312a4: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x2312a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x2312a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2312a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2312ac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2312acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x2312b0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2312b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2312b4: 0xac301140  sw          $s0, 0x1140($at)
    ctx->pc = 0x2312b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4416), GPR_U32(ctx, 16));
    // 0x2312b8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2312b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2312c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2312c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2312c4: 0x0  nop
    ctx->pc = 0x2312c4u;
    // NOP
label_2312c8:
    // 0x2312c8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2312c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2312cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2312ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2312d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2312d4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2312d8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x2312d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2312dc: 0x0  nop
    ctx->pc = 0x2312dcu;
    // NOP
label_2312e0:
    // 0x2312e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2312e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2312e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2312e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2312e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2312e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2312ec: 0x0  nop
    ctx->pc = 0x2312ecu;
    // NOP
    // 0x2312f0: 0x0  nop
    ctx->pc = 0x2312f0u;
    // NOP
    // 0x2312f4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2312F4u;
    {
        const bool branch_taken_0x2312f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2312F4u;
        // 0x2312f8: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2312f4) {
            ctx->pc = 0x2312E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312e0;
        }
    }
    ctx->pc = 0x2312FCu;
    // 0x2312fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2312fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x231300: 0x18c0fff1  blez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x231300u;
    {
        const bool branch_taken_0x231300 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x231304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231300u;
        // 0x231304: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231300) {
            ctx->pc = 0x2312C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2312c8;
        }
    }
    ctx->pc = 0x231308u;
    // 0x231308: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x231308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x23130c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23130Cu;
    {
        const bool branch_taken_0x23130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23130c) {
            ctx->pc = 0x231310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23130Cu;
            // 0x231310: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231314u;
            goto label_231314;
        }
    }
    ctx->pc = 0x231314u;
label_231314:
    // 0x231314: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x231314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x231318: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x231318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23131c: 0x24420508  addiu       $v0, $v0, 0x508
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1288));
    // 0x231320: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231324: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x231328: 0xac241278  sw          $a0, 0x1278($at)
    ctx->pc = 0x231328u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 4));
    // 0x23132c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x23132cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x290508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290508u, _value); } while (0);
    // 0x231330: 0x26c304b0  addiu       $v1, $s6, 0x4B0
    ctx->pc = 0x231330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
    // 0x231334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x231334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x29050Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x29050Cu, _value); } while (0);
    // 0x231338: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x231338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x290510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x290510u, _value); } while (0);
    // 0x23133c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231340: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x231344: 0xac241208  sw          $a0, 0x1208($at)
    ctx->pc = 0x231344u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 4));
    // 0x231348: 0x9064001d  lbu         $a0, 0x1D($v1)
    ctx->pc = 0x231348u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 29)));
    // 0x23134c: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x23134cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x231350: 0xc06adbe  jal         func_1AB6F8
    ctx->pc = 0x231350u;
    SET_GPR_U32(ctx, 31, 0x231358u);
    ctx->pc = 0x231354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231350u;
    // 0x231354: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB6F8u, 0x231350u, 0x231358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231358u;
label_231358:
    // 0x231358: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x23135c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231360: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231364: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231364u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231368: 0xac231280  sw          $v1, 0x1280($at)
    ctx->pc = 0x231368u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4736), GPR_U32(ctx, 3));
    // 0x23136c: 0x10600146  beqz        $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x23136Cu;
    {
        const bool branch_taken_0x23136c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23136Cu;
        // 0x231370: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23136c) {
            ctx->pc = 0x231888u;
            return;
        }
    }
    ctx->pc = 0x231374u;
    // 0x231374: 0xaf8082d8  sw          $zero, -0x7D28($gp)
    ctx->pc = 0x231374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 0));
    // 0x231378: 0x16800068  bnez        $s4, . + 4 + (0x68 << 2)
    ctx->pc = 0x231378u;
    {
        const bool branch_taken_0x231378 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x23137Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231378u;
        // 0x23137c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231378) {
            ctx->pc = 0x23151Cu;
            goto label_23151c;
        }
    }
    ctx->pc = 0x231380u;
    // 0x231380: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x231384: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x231384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x231388: 0x26700001  addiu       $s0, $s3, 0x1
    ctx->pc = 0x231388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x23138c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23138Cu;
    {
        const bool branch_taken_0x23138c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x231390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23138Cu;
        // 0x231390: 0x92660000  lbu         $a2, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23138c) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x231394u;
    // 0x231394: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231398: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x231398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x23139c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2313a0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2313a4: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2313A4u;
    {
        const bool branch_taken_0x2313a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313A4u;
        // 0x2313a8: 0x26700002  addiu       $s0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313a4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313ACu;
    // 0x2313ac: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2313b0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x2313b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x2313b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2313b8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2313bc: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2313BCu;
    {
        const bool branch_taken_0x2313bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313BCu;
        // 0x2313c0: 0x26700003  addiu       $s0, $s3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313bc) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313C4u;
    // 0x2313c4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2313c8: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x2313cc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2313d0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2313d4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2313D4u;
    {
        const bool branch_taken_0x2313d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D4u;
        // 0x2313d8: 0x26700004  addiu       $s0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d4) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313DCu;
    // 0x2313dc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2313dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2313e0: 0x2403006d  addiu       $v1, $zero, 0x6D
    ctx->pc = 0x2313e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x2313e4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2313e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2313e8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2313e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2313ec: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2313ECu;
    {
        const bool branch_taken_0x2313ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313ECu;
        // 0x2313f0: 0x26700005  addiu       $s0, $s3, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313ec) {
            ctx->pc = 0x23141Cu;
            goto label_23141c;
        }
    }
    ctx->pc = 0x2313F4u;
    // 0x2313f4: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2313f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2313f8: 0x26640006  addiu       $a0, $s3, 0x6
    ctx->pc = 0x2313f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2313fc: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2313fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x231400: 0x38630030  xori        $v1, $v1, 0x30
    ctx->pc = 0x231400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)48);
    // 0x231404: 0x83800a  movz        $s0, $a0, $v1
    ctx->pc = 0x231404u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x231408: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x231408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23140c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x231410: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x231414: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x231414u;
    {
        const bool branch_taken_0x231414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x231418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231414u;
        // 0x231418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231414) {
            ctx->pc = 0x231480u;
            goto label_231480;
        }
    }
    ctx->pc = 0x23141Cu;
label_23141c:
    // 0x23141c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x23141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x231420: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x231420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x231424: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x231424u;
    {
        const bool branch_taken_0x231424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231424u;
        // 0x231428: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231424) {
            ctx->pc = 0x23147Cu;
            goto label_23147c;
        }
    }
    ctx->pc = 0x23142Cu;
    // 0x23142c: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x23142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x231430: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x231430u;
    {
        const bool branch_taken_0x231430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231430u;
        // 0x231434: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231430) {
            ctx->pc = 0x231470u;
            goto label_231470;
        }
    }
    ctx->pc = 0x231438u;
    // 0x231438: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23143c: 0x0  nop
    ctx->pc = 0x23143cu;
    // NOP
label_231440:
    // 0x231440: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231444: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x231444u;
    {
        const bool branch_taken_0x231444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231444u;
        // 0x231448: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231444) {
            ctx->pc = 0x23147Cu;
            goto label_23147c;
        }
    }
    ctx->pc = 0x23144Cu;
    // 0x23144c: 0x0  nop
    ctx->pc = 0x23144cu;
    // NOP
    // 0x231450: 0x0  nop
    ctx->pc = 0x231450u;
    // NOP
    // 0x231454: 0x0  nop
    ctx->pc = 0x231454u;
    // NOP
    // 0x231458: 0x0  nop
    ctx->pc = 0x231458u;
    // NOP
    // 0x23145c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23145Cu;
    {
        const bool branch_taken_0x23145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23145c) {
            ctx->pc = 0x231460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23145Cu;
            // 0x231460: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231440;
        }
    }
    ctx->pc = 0x231464u;
    // 0x231464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x231464u;
    {
        const bool branch_taken_0x231464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231464) {
            ctx->pc = 0x231474u;
            goto label_231474;
        }
    }
    ctx->pc = 0x23146Cu;
    // 0x23146c: 0x0  nop
    ctx->pc = 0x23146cu;
    // NOP
label_231470:
    // 0x231470: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x231470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_231474:
    // 0x231474: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x231474u;
    {
        const bool branch_taken_0x231474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231474u;
        // 0x231478: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231474) {
            ctx->pc = 0x2314D8u;
            goto label_2314d8;
        }
    }
    ctx->pc = 0x23147Cu;
label_23147c:
    // 0x23147c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x23147cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_231480:
    // 0x231480: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x231480u;
    {
        const bool branch_taken_0x231480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231480u;
        // 0x231484: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231480) {
            ctx->pc = 0x2314B0u;
            goto label_2314b0;
        }
    }
    ctx->pc = 0x231488u;
label_231488:
    // 0x231488: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x231488u;
    SET_GPR_U32(ctx, 31, 0x231490u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231488u, 0x231490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231490u;
label_231490:
    // 0x231490: 0x1c4000fd  bgtz        $v0, . + 4 + (0xFD << 2)
    ctx->pc = 0x231490u;
    {
        const bool branch_taken_0x231490 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x231494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231490u;
        // 0x231494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231490) {
            ctx->pc = 0x231888u;
            return;
        }
    }
    ctx->pc = 0x231498u;
    // 0x231498: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x231498u;
    SET_GPR_U32(ctx, 31, 0x2314A0u);
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x231498u, 0x2314A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A0u;
label_2314a0:
    // 0x2314a0: 0xc06c162  jal         func_1B0588
    ctx->pc = 0x2314A0u;
    SET_GPR_U32(ctx, 31, 0x2314A8u);
    ctx->pc = 0x1B0588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0588u, 0x2314A0u, 0x2314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314A8u;
label_2314a8:
    // 0x2314a8: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x2314A8u;
    SET_GPR_U32(ctx, 31, 0x2314B0u);
    ctx->pc = 0x2314ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314A8u;
    // 0x2314ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x2314A8u, 0x2314B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314B0u;
label_2314b0:
    // 0x2314b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2314b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314b4: 0xc06be58  jal         func_1AF960
    ctx->pc = 0x2314B4u;
    SET_GPR_U32(ctx, 31, 0x2314BCu);
    ctx->pc = 0x2314B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314B4u;
    // 0x2314b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF960u, 0x2314B4u, 0x2314BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314BCu;
label_2314bc:
    // 0x2314bc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2314BCu;
    {
        const bool branch_taken_0x2314bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314BCu;
        // 0x2314c0: 0x8fb30030  lw          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314bc) {
            ctx->pc = 0x231488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231488;
        }
    }
    ctx->pc = 0x2314C4u;
    // 0x2314c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2314c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314c8: 0x8fb40034  lw          $s4, 0x34($sp)
    ctx->pc = 0x2314c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2314cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2314CCu;
    {
        const bool branch_taken_0x2314cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2314D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314CCu;
        // 0x2314d0: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314cc) {
            ctx->pc = 0x23151Cu;
            goto label_23151c;
        }
    }
    ctx->pc = 0x2314D4u;
    // 0x2314d4: 0x0  nop
    ctx->pc = 0x2314d4u;
    // NOP
label_2314d8:
    // 0x2314d8: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x2314D8u;
    SET_GPR_U32(ctx, 31, 0x2314E0u);
    ctx->pc = 0x2314DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314D8u;
    // 0x2314dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88D0u, 0x2314D8u, 0x2314E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314E0u;
label_2314e0:
    // 0x2314e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2314e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2314e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314e8: 0x62000e7  bltz        $s1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x2314E8u;
    {
        const bool branch_taken_0x2314e8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2314E8u;
        // 0x2314ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2314e8) {
            ctx->pc = 0x231888u;
            return;
        }
    }
    ctx->pc = 0x2314F0u;
    // 0x2314f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2314f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2314f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2314f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2314f8: 0xc06a336  jal         func_1A8CD8
    ctx->pc = 0x2314F8u;
    SET_GPR_U32(ctx, 31, 0x231500u);
    ctx->pc = 0x2314FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314F8u;
    // 0x2314fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CD8u, 0x2314F8u, 0x231500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231500u;
label_231500:
    // 0x231500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231504: 0xc06a2d6  jal         func_1A8B58
    ctx->pc = 0x231504u;
    SET_GPR_U32(ctx, 31, 0x23150Cu);
    ctx->pc = 0x231508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231504u;
    // 0x231508: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B58u, 0x231504u, 0x23150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23150Cu;
label_23150c:
    // 0x23150c: 0x1a4000de  blez        $s2, . + 4 + (0xDE << 2)
    ctx->pc = 0x23150Cu;
    {
        const bool branch_taken_0x23150c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x231510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23150Cu;
        // 0x231510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23150c) {
            ctx->pc = 0x231888u;
            return;
        }
    }
    ctx->pc = 0x231514u;
    // 0x231514: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231518: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x231518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23151c:
    // 0x23151c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23151cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231520: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231520u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231524: 0xac341274  sw          $s4, 0x1274($at)
    ctx->pc = 0x231524u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4724), GPR_U32(ctx, 20));
    // 0x231528: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x231528u;
    {
        const bool branch_taken_0x231528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231528u;
        // 0x23152c: 0x2403fff0  addiu       $v1, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231528) {
            ctx->pc = 0x231580u;
            goto label_231580;
        }
    }
    ctx->pc = 0x231530u;
    // 0x231530: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x231530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
    // 0x231534: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x231534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x231538: 0x8cc61280  lw          $a2, 0x1280($a2)
    ctx->pc = 0x231538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4736)));
    // 0x23153c: 0x26c204b0  addiu       $v0, $s6, 0x4B0
    ctx->pc = 0x23153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
    // 0x231540: 0x9044001d  lbu         $a0, 0x1D($v0)
    ctx->pc = 0x231540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 29)));
    // 0x231544: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x231544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x231548: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x231548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23154c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23154cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x231550: 0xc08da64  jal         func_236990
    ctx->pc = 0x231550u;
    SET_GPR_U32(ctx, 31, 0x231558u);
    ctx->pc = 0x231554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231550u;
    // 0x231554: 0xc33024  and         $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236990u, 0x231550u, 0x231558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231558u;
label_231558:
    // 0x231558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23155c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23155cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x231560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231564: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x231564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x231568: 0xc08da9a  jal         func_236A68
    ctx->pc = 0x231568u;
    SET_GPR_U32(ctx, 31, 0x231570u);
    ctx->pc = 0x23156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231568u;
    // 0x23156c: 0xaf8382d8  sw          $v1, -0x7D28($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x231568u, 0x231570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231570u;
label_231570:
    // 0x231570: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x231570u;
    {
        const bool branch_taken_0x231570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231570u;
        // 0x231574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231570) {
            ctx->pc = 0x231688u;
            goto label_231688;
        }
    }
    ctx->pc = 0x231578u;
    // 0x231578: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x231578u;
    {
        const bool branch_taken_0x231578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23157Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231578u;
        // 0x23157c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231578) {
            ctx->pc = 0x23188Cu;
            return;
        }
    }
    ctx->pc = 0x231580u;
label_231580:
    // 0x231580: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x231580u;
    {
        const bool branch_taken_0x231580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231580u;
        // 0x231584: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231580) {
            ctx->pc = 0x231598u;
            goto label_231598;
        }
    }
    ctx->pc = 0x231588u;
label_231588:
    // 0x231588: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x231588u;
    SET_GPR_U32(ctx, 31, 0x231590u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231588u, 0x231590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231590u;
label_231590:
    // 0x231590: 0x5c4000be  bgtzl       $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x231590u;
    {
        const bool branch_taken_0x231590 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x231590) {
            ctx->pc = 0x231594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231590u;
            // 0x231594: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23188Cu;
            return;
        }
    }
    ctx->pc = 0x231598u;
label_231598:
    // 0x231598: 0xc06c03a  jal         func_1B00E8
    ctx->pc = 0x231598u;
    SET_GPR_U32(ctx, 31, 0x2315A0u);
    ctx->pc = 0x23159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231598u;
    // 0x23159c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x231598u, 0x2315A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315A0u;
label_2315a0:
    // 0x2315a0: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2315A0u;
    {
        const bool branch_taken_0x2315a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2315A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315A0u;
        // 0x2315a4: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315a0) {
            ctx->pc = 0x231588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231588;
        }
    }
    ctx->pc = 0x2315A8u;
    // 0x2315a8: 0x2411fff0  addiu       $s1, $zero, -0x10
    ctx->pc = 0x2315a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2315ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2315ACu;
    {
        const bool branch_taken_0x2315ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315ACu;
        // 0x2315b0: 0x245004b0  addiu       $s0, $v0, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315ac) {
            ctx->pc = 0x2315C8u;
            goto label_2315c8;
        }
    }
    ctx->pc = 0x2315B4u;
    // 0x2315b4: 0x0  nop
    ctx->pc = 0x2315b4u;
    // NOP
label_2315b8:
    // 0x2315b8: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x2315B8u;
    SET_GPR_U32(ctx, 31, 0x2315C0u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x2315B8u, 0x2315C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315C0u;
label_2315c0:
    // 0x2315c0: 0x5c4000b2  bgtzl       $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2315C0u;
    {
        const bool branch_taken_0x2315c0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2315c0) {
            ctx->pc = 0x2315C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2315C0u;
            // 0x2315c4: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23188Cu;
            return;
        }
    }
    ctx->pc = 0x2315C8u;
label_2315c8:
    // 0x2315c8: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x2315c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2315cc: 0x9204001d  lbu         $a0, 0x1D($s0)
    ctx->pc = 0x2315ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x2315d0: 0x3c060009  lui         $a2, 0x9
    ctx->pc = 0x2315d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9 << 16));
    // 0x2315d4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2315d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2315d8: 0x8cc61280  lw          $a2, 0x1280($a2)
    ctx->pc = 0x2315d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4736)));
    // 0x2315dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2315dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315e0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2315e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2315e4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2315e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2315e8: 0xc06c2b0  jal         func_1B0AC0
    ctx->pc = 0x2315E8u;
    SET_GPR_U32(ctx, 31, 0x2315F0u);
    ctx->pc = 0x2315ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315E8u;
    // 0x2315ec: 0xd13024  and         $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AC0u, 0x2315E8u, 0x2315F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315F0u;
label_2315f0:
    // 0x2315f0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2315F0u;
    {
        const bool branch_taken_0x2315f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315F0u;
        // 0x2315f4: 0x26c304b0  addiu       $v1, $s6, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315f0) {
            ctx->pc = 0x2315B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2315b8;
        }
    }
    ctx->pc = 0x2315F8u;
    // 0x2315f8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2315f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2315fc: 0x9062001c  lbu         $v0, 0x1C($v1)
    ctx->pc = 0x2315fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x231600: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231604: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231608: 0xa0221284  sb          $v0, 0x1284($at)
    ctx->pc = 0x231608u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4740), (uint8_t)GPR_U32(ctx, 2));
    // 0x23160c: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x23160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231610: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231614: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x231618: 0xa0201285  sb          $zero, 0x1285($at)
    ctx->pc = 0x231618u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4741), (uint8_t)GPR_U32(ctx, 0));
    // 0x23161c: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x23161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231620: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231624: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x231624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x231628: 0xa0201286  sb          $zero, 0x1286($at)
    ctx->pc = 0x231628u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4742), (uint8_t)GPR_U32(ctx, 0));
    // 0x23162c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23162Cu;
    {
        const bool branch_taken_0x23162c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23162Cu;
        // 0x231630: 0x8f8582d0  lw          $a1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23162c) {
            ctx->pc = 0x23164Cu;
            goto label_23164c;
        }
    }
    ctx->pc = 0x231634u;
    // 0x231634: 0x0  nop
    ctx->pc = 0x231634u;
    // NOP
label_231638:
    // 0x231638: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x231638u;
    SET_GPR_U32(ctx, 31, 0x231640u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x231638u, 0x231640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231640u;
label_231640:
    // 0x231640: 0x1c400092  bgtz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x231640u;
    {
        const bool branch_taken_0x231640 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x231644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231640u;
        // 0x231644: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231640) {
            ctx->pc = 0x23188Cu;
            return;
        }
    }
    ctx->pc = 0x231648u;
    // 0x231648: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x231648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_23164c:
    // 0x23164c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231650: 0x34211284  ori         $at, $at, 0x1284
    ctx->pc = 0x231650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4740);
    // 0x231654: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x231658: 0xc06c2bc  jal         func_1B0AF0
    ctx->pc = 0x231658u;
    SET_GPR_U32(ctx, 31, 0x231660u);
    ctx->pc = 0x23165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231658u;
    // 0x23165c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AF0u, 0x231658u, 0x231660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231660u;
label_231660:
    // 0x231660: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x231660u;
    {
        const bool branch_taken_0x231660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231660u;
        // 0x231664: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231660) {
            ctx->pc = 0x231638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231638;
        }
    }
    ctx->pc = 0x231668u;
    // 0x231668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23166c: 0xaf8282d8  sw          $v0, -0x7D28($gp)
    ctx->pc = 0x23166cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 2));
    // 0x231670: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231674: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231674u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231678: 0xac33128c  sw          $s3, 0x128C($at)
    ctx->pc = 0x231678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4748), GPR_U32(ctx, 19));
    // 0x23167c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23167Cu;
    {
        const bool branch_taken_0x23167c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23167Cu;
        // 0x231680: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23167c) {
            ctx->pc = 0x231690u;
            goto label_231690;
        }
    }
    ctx->pc = 0x231684u;
    // 0x231684: 0x0  nop
    ctx->pc = 0x231684u;
    // NOP
label_231688:
    // 0x231688: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x23168c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x23168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_231690:
    // 0x231690: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x231694: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x231694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x231698: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x231698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x23169c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2316a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2316a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2316a4: 0x24841100  addiu       $a0, $a0, 0x1100
    ctx->pc = 0x2316a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    // 0x2316a8: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x2316a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x2316ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2316acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2316b0: 0xc08c75c  jal         func_231D70
    ctx->pc = 0x2316B0u;
    SET_GPR_U32(ctx, 31, 0x2316B8u);
    ctx->pc = 0x2316B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316B0u;
    // 0x2316b4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D70u, 0x2316B0u, 0x2316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316B8u;
label_2316b8:
    // 0x2316b8: 0xc0689da  jal         func_1A2768
    ctx->pc = 0x2316B8u;
    SET_GPR_U32(ctx, 31, 0x2316C0u);
    ctx->pc = 0x1A2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2768u, 0x2316B8u, 0x2316C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316C0u;
label_2316c0:
    // 0x2316c0: 0x8f8882d0  lw          $t0, -0x7D30($gp)
    ctx->pc = 0x2316c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2316c4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2316c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2316c8: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x2316c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2316cc: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x2316ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2316d0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x2316d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2316d4: 0x34079140  ori         $a3, $zero, 0x9140
    ctx->pc = 0x2316d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37184);
    // 0x2316d8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2316d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2316dc: 0x3c0a0008  lui         $t2, 0x8
    ctx->pc = 0x2316dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8 << 16));
    // 0x2316e0: 0x354ae140  ori         $t2, $t2, 0xE140
    ctx->pc = 0x2316e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57664);
    // 0x2316e4: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x2316e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2316e8: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x2316e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x2316ec: 0x34841158  ori         $a0, $a0, 0x1158
    ctx->pc = 0x2316ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4440);
    // 0x2316f0: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x2316f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2316f4: 0xc08ccc6  jal         func_233318
    ctx->pc = 0x2316F4u;
    SET_GPR_U32(ctx, 31, 0x2316FCu);
    ctx->pc = 0x2316F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316F4u;
    // 0x2316f8: 0x250800c0  addiu       $t0, $t0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233318u, 0x2316F4u, 0x2316FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316FCu;
label_2316fc:
    // 0x2316fc: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x2316fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x231700: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x231700u;
    {
        const bool branch_taken_0x231700 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x231704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231700u;
        // 0x231704: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231700) {
            ctx->pc = 0x23172Cu;
            goto label_23172c;
        }
    }
    ctx->pc = 0x231708u;
    // 0x231708: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x231708u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23170c: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x23170cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x231710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231714: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x231714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x231718: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x23171c: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x23171cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x231720: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231724: 0xc08c7b6  jal         func_231ED8
    ctx->pc = 0x231724u;
    SET_GPR_U32(ctx, 31, 0x23172Cu);
    ctx->pc = 0x231728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231724u;
    // 0x231728: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231ED8u, 0x231724u, 0x23172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23172Cu;
label_23172c:
    // 0x23172c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231730: 0x26d004b0  addiu       $s0, $s6, 0x4B0
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1200));
    // 0x231734: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x231738: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x231738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x23173c: 0x24881100  addiu       $t0, $a0, 0x1100
    ctx->pc = 0x23173cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    // 0x231740: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231744: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x231748: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x231748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x23174c: 0x24e71a48  addiu       $a3, $a3, 0x1A48
    ctx->pc = 0x23174cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6728));
    // 0x231750: 0xc08cd0c  jal         func_233430
    ctx->pc = 0x231750u;
    SET_GPR_U32(ctx, 31, 0x231758u);
    ctx->pc = 0x231754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231750u;
    // 0x231754: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233430u, 0x231750u, 0x231758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231758u;
label_231758:
    // 0x231758: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x23175c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23175Cu;
    {
        const bool branch_taken_0x23175c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23175Cu;
        // 0x231760: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23175c) {
            ctx->pc = 0x231788u;
            goto label_231788;
        }
    }
    ctx->pc = 0x231764u;
    // 0x231764: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x231764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
    // 0x231768: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x231768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x23176c: 0x24e71b60  addiu       $a3, $a3, 0x1B60
    ctx->pc = 0x23176cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7008));
    // 0x231770: 0x24881100  addiu       $t0, $a0, 0x1100
    ctx->pc = 0x231770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    // 0x231774: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231778: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x231778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x23177c: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x23177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x231780: 0xc08cd0c  jal         func_233430
    ctx->pc = 0x231780u;
    SET_GPR_U32(ctx, 31, 0x231788u);
    ctx->pc = 0x231784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231780u;
    // 0x231784: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233430u, 0x231780u, 0x231788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231788u;
label_231788:
    // 0x231788: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x23178c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x23178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x231790: 0x3c050009  lui         $a1, 0x9
    ctx->pc = 0x231790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9 << 16));
    // 0x231794: 0x34a51140  ori         $a1, $a1, 0x1140
    ctx->pc = 0x231794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4416);
    // 0x231798: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x231798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x23179c: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x23179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x2317a0: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2317a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
    // 0x2317a4: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x2317a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x2317a8: 0xc08cf58  jal         func_233D60
    ctx->pc = 0x2317A8u;
    SET_GPR_U32(ctx, 31, 0x2317B0u);
    ctx->pc = 0x2317ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317A8u;
    // 0x2317ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x2317A8u, 0x2317B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317B0u;
label_2317b0:
    // 0x2317b0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x2317b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x2317b4: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2317b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2317b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2317b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2317bc: 0x9207001e  lbu         $a3, 0x1E($s0)
    ctx->pc = 0x2317bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x2317c0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2317c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2317c4: 0x24c68170  addiu       $a2, $a2, -0x7E90
    ctx->pc = 0x2317c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934896));
    // 0x2317c8: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x2317c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x2317cc: 0x34219140  ori         $at, $at, 0x9140
    ctx->pc = 0x2317ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37184);
    // 0x2317d0: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x2317d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x2317d4: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x2317d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x2317d8: 0x24423688  addiu       $v0, $v0, 0x3688
    ctx->pc = 0x2317d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13960));
    // 0x2317dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2317dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2317e0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2317e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x2317e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2317e8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x2317e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x2317ec: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2317ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2317f0: 0xc069188  jal         func_1A4620
    ctx->pc = 0x2317F0u;
    SET_GPR_U32(ctx, 31, 0x2317F8u);
    ctx->pc = 0x2317F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2317F0u;
    // 0x2317f4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4620u, 0x2317F0u, 0x2317F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2317F8u;
label_2317f8:
    // 0x2317f8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x2317f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2317fc: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2317fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231800: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x231800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x231804: 0xac221278  sw          $v0, 0x1278($at)
    ctx->pc = 0x231804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4728), GPR_U32(ctx, 2));
    // 0x231808: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x23180c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x23180cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x231810: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x231810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x231814: 0xc069190  jal         func_1A4640
    ctx->pc = 0x231814u;
    SET_GPR_U32(ctx, 31, 0x23181Cu);
    ctx->pc = 0x231818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231814u;
    // 0x231818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4640u, 0x231814u, 0x23181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23181Cu;
label_23181c:
    // 0x23181c: 0xc0694c0  jal         func_1A5300
    ctx->pc = 0x23181Cu;
    SET_GPR_U32(ctx, 31, 0x231824u);
    ctx->pc = 0x231820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23181Cu;
    // 0x231820: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5300u, 0x23181Cu, 0x231824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231824u;
label_231824:
    // 0x231824: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231828: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x231828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x23182c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231830: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231834: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x231834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x231838: 0xac22127c  sw          $v0, 0x127C($at)
    ctx->pc = 0x231838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4732), GPR_U32(ctx, 2));
    // 0x23183c: 0xc08d118  jal         func_234460
    ctx->pc = 0x23183Cu;
    SET_GPR_U32(ctx, 31, 0x231844u);
    ctx->pc = 0x231840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23183Cu;
    // 0x231840: 0x24844238  addiu       $a0, $a0, 0x4238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234460u, 0x23183Cu, 0x231844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231844u;
label_231844:
    // 0x231844: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x231844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231848: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x23184c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x23184cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x231850: 0xac221208  sw          $v0, 0x1208($at)
    ctx->pc = 0x231850u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4616), GPR_U32(ctx, 2));
    // 0x231854: 0xc0694da  jal         func_1A5368
    ctx->pc = 0x231854u;
    SET_GPR_U32(ctx, 31, 0x23185Cu);
    ctx->pc = 0x231858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231854u;
    // 0x231858: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5368u, 0x231854u, 0x23185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23185Cu;
label_23185c:
    // 0x23185c: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x23185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x231864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231868: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x23186c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x231870: 0x8c631208  lw          $v1, 0x1208($v1)
    ctx->pc = 0x231870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4616)));
    // 0x231874: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231878: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x231878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x23187c: 0xac251288  sw          $a1, 0x1288($at)
    ctx->pc = 0x23187cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4744), GPR_U32(ctx, 5));
    // 0x231880: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x231880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x231884: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x231884u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    ctx->pc = 0x231888u;
}
