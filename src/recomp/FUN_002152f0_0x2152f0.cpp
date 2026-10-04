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

// Function: FUN_002152f0
// Address: 0x2152f0 - 0x2156a8
void FUN_002152f0_0x2152f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002152f0_0x2152f0");
#endif

    ctx->pc = 0x2152f0u;

    // 0x2152f0: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x2152f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x2152f4: 0x460003a  bltz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2152F4u;
    {
        const bool branch_taken_0x2152f4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152F4u;
        // 0x2152f8: 0x28640040  slti        $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2152f4) {
            ctx->pc = 0x2153E0u;
            goto label_2153e0;
        }
    }
    ctx->pc = 0x2152FCu;
    // 0x2152fc: 0x28610041  slti        $at, $v1, 0x41
    ctx->pc = 0x2152fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x215300: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x215300u;
    {
        const bool branch_taken_0x215300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215300u;
        // 0x215304: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215300) {
            ctx->pc = 0x2153DCu;
            goto label_2153dc;
        }
    }
    ctx->pc = 0x215308u;
    // 0x215308: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x21530c: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x21530cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
    // 0x215310: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x215310u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x215314: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215318: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x215318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5878F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878F4u, _value); } while (0);
    // 0x21531c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21531cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215320: 0xac2478fc  sw          $a0, 0x78FC($at)
    ctx->pc = 0x215320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878FCu, _value); } while (0);
    // 0x215324: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x215324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215328: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21532c: 0xaf8491f8  sw          $a0, -0x6E08($gp)
    ctx->pc = 0x21532cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 4));
    // 0x215330: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x215334: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x215334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5878F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878F8u, _value); } while (0);
    // 0x215338: 0xaf8491fc  sw          $a0, -0x6E04($gp)
    ctx->pc = 0x215338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 4));
    // 0x21533c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21533cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215340: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x215340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215344: 0xac2478e0  sw          $a0, 0x78E0($at)
    ctx->pc = 0x215344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E0u, _value); } while (0);
    // 0x215348: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21534c: 0xac2478e4  sw          $a0, 0x78E4($at)
    ctx->pc = 0x21534cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E4u, _value); } while (0);
    // 0x215350: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215354: 0xac2478e8  sw          $a0, 0x78E8($at)
    ctx->pc = 0x215354u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E8u, _value); } while (0);
    // 0x215358: 0x28a10081  slti        $at, $a1, 0x81
    ctx->pc = 0x215358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x21535c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21535Cu;
    {
        const bool branch_taken_0x21535c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21535c) {
            ctx->pc = 0x215368u;
            goto label_215368;
        }
    }
    ctx->pc = 0x215364u;
    // 0x215364: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_215368:
    // 0x215368: 0x8f8491d4  lw          $a0, -0x6E2C($gp)
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
    // 0x21536c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215370: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215370u;
    {
        const bool branch_taken_0x215370 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215370u;
        // 0x215374: 0xac2578ec  sw          $a1, 0x78EC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30956), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215370) {
            ctx->pc = 0x215388u;
            goto label_215388;
        }
    }
    ctx->pc = 0x215378u;
    // 0x215378: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x215378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21537c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x21537cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215380u;
    {
        const bool branch_taken_0x215380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215380u;
        // 0x215384: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215380) {
            ctx->pc = 0x215390u;
            goto label_215390;
        }
    }
    ctx->pc = 0x215388u;
label_215388:
    // 0x215388: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21538c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x21538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_215390:
    // 0x215390: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215394: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x215398: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215398u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x21539c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x21539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2153a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153a4: 0xaf85920c  sw          $a1, -0x6DF4($gp)
    ctx->pc = 0x2153a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 5));
    // 0x2153a8: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x2153a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x2153ac: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2153acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2153b0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153b4: 0xaf859200  sw          $a1, -0x6E00($gp)
    ctx->pc = 0x2153b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 5));
    // 0x2153b8: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2153b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
    // 0x2153bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2153c0: 0x28810100  slti        $at, $a0, 0x100
    ctx->pc = 0x2153c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2153c4: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2153c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x2153c8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2153C8u;
    {
        const bool branch_taken_0x2153c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153C8u;
        // 0x2153cc: 0xaf859204  sw          $a1, -0x6DFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153c8) {
            ctx->pc = 0x2153D4u;
            goto label_2153d4;
        }
    }
    ctx->pc = 0x2153D0u;
    // 0x2153d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2153d4:
    // 0x2153d4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2153d8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2153d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
label_2153dc:
    // 0x2153dc: 0x28640040  slti        $a0, $v1, 0x40
    ctx->pc = 0x2153dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_2153e0:
    // 0x2153e0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2153E0u;
    {
        const bool branch_taken_0x2153e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2153E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153E0u;
        // 0x2153e4: 0x28640048  slti        $a0, $v1, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153e0) {
            ctx->pc = 0x21546Cu;
            goto label_21546c;
        }
    }
    ctx->pc = 0x2153E8u;
    // 0x2153e8: 0x28610049  slti        $at, $v1, 0x49
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)73) ? 1 : 0);
    // 0x2153ec: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x2153ECu;
    {
        const bool branch_taken_0x2153ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153ECu;
        // 0x2153f0: 0x2465ffc0  addiu       $a1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153ec) {
            ctx->pc = 0x215468u;
            goto label_215468;
        }
    }
    ctx->pc = 0x2153F4u;
    // 0x2153f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2153f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2153f8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2153f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2153fc: 0x53980  sll         $a3, $a1, 6
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x215400: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x215400u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x215404: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215404u;
    {
        const bool branch_taken_0x215404 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215404u;
        // 0x215408: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215404) {
            ctx->pc = 0x215414u;
            goto label_215414;
        }
    }
    ctx->pc = 0x21540Cu;
    // 0x21540c: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x21540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215410: 0x43043  sra         $a2, $a0, 1
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 1));
label_215414:
    // 0x215414: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215418: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x21541c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x21541cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x215420: 0xaf8491f4  sw          $a0, -0x6E0C($gp)
    ctx->pc = 0x215420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 4));
    // 0x215424: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x215424u;
    {
        const bool branch_taken_0x215424 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x215428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215424u;
        // 0x215428: 0xaf8591f0  sw          $a1, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215424) {
            ctx->pc = 0x215434u;
            goto label_215434;
        }
    }
    ctx->pc = 0x21542Cu;
    // 0x21542c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21542Cu;
    {
        const bool branch_taken_0x21542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21542Cu;
        // 0x215430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21542c) {
            ctx->pc = 0x215438u;
            goto label_215438;
        }
    }
    ctx->pc = 0x215434u;
label_215434:
    // 0x215434: 0x24e40180  addiu       $a0, $a3, 0x180
    ctx->pc = 0x215434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_215438:
    // 0x215438: 0xaf8491e8  sw          $a0, -0x6E18($gp)
    ctx->pc = 0x215438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 4));
    // 0x21543c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215440: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x215444: 0xac2878dc  sw          $t0, 0x78DC($at)
    ctx->pc = 0x215444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5878DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878DCu, _value); } while (0);
    // 0x215448: 0xaf8491ec  sw          $a0, -0x6E14($gp)
    ctx->pc = 0x215448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 4));
    // 0x21544c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215450: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215454: 0xac2478d0  sw          $a0, 0x78D0($at)
    ctx->pc = 0x215454u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D0u, _value); } while (0);
    // 0x215458: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21545c: 0xac2478d4  sw          $a0, 0x78D4($at)
    ctx->pc = 0x21545cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D4u, _value); } while (0);
    // 0x215460: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215464: 0xac2478d8  sw          $a0, 0x78D8($at)
    ctx->pc = 0x215464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D8u, _value); } while (0);
label_215468:
    // 0x215468: 0x28640048  slti        $a0, $v1, 0x48
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
label_21546c:
    // 0x21546c: 0x14800068  bnez        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x21546Cu;
    {
        const bool branch_taken_0x21546c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21546Cu;
        // 0x215470: 0x28640058  slti        $a0, $v1, 0x58 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21546c) {
            ctx->pc = 0x215610u;
            goto label_215610;
        }
    }
    ctx->pc = 0x215474u;
    // 0x215474: 0x28610059  slti        $at, $v1, 0x59
    ctx->pc = 0x215474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x215478: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x215478u;
    {
        const bool branch_taken_0x215478 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215478u;
        // 0x21547c: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215478) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x215480u;
    // 0x215480: 0x2464ffb8  addiu       $a0, $v1, -0x48
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967224));
    // 0x215484: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x215484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
    // 0x215488: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21548c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215490: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x215494: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x215494u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
    // 0x215498: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x215498u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21549c: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x21549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2154a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154a4: 0xc83823  subu        $a3, $a2, $t0
    ctx->pc = 0x2154a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2154a8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2154a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2154ac: 0xac277924  sw          $a3, 0x7924($at)
    ctx->pc = 0x2154acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31012), GPR_U32(ctx, 7));
    // 0x2154b0: 0x250600df  addiu       $a2, $t0, 0xDF
    ctx->pc = 0x2154b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 223));
    // 0x2154b4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154b8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x2154b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2154bc: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x2154bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x2154c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2154c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2154c4: 0xaf879210  sw          $a3, -0x6DF0($gp)
    ctx->pc = 0x2154c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 7));
    // 0x2154c8: 0xaf869214  sw          $a2, -0x6DEC($gp)
    ctx->pc = 0x2154c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 6));
    // 0x2154cc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154d0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2154d4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2154d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2154d8: 0xac26791c  sw          $a2, 0x791C($at)
    ctx->pc = 0x2154d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x2154dc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154e0: 0x8f8691d4  lw          $a2, -0x6E2C($gp)
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939092)));
    // 0x2154e4: 0xac277910  sw          $a3, 0x7910($at)
    ctx->pc = 0x2154e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x2154e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154ec: 0xac277914  sw          $a3, 0x7914($at)
    ctx->pc = 0x2154ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2154f0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2154f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2154f4: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F4u;
        // 0x2154f8: 0xac277918  sw          $a3, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x215554u;
            goto label_215554;
        }
    }
    ctx->pc = 0x2154FCu;
    // 0x2154fc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x2154fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x215500: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215500u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x215504: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x215504u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215508: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215508u;
    {
        const bool branch_taken_0x215508 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215508u;
        // 0x21550c: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215508) {
            ctx->pc = 0x215518u;
            goto label_215518;
        }
    }
    ctx->pc = 0x215510u;
    // 0x215510: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215514: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_215518:
    // 0x215518: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
    // 0x21551c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215520: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
    // 0x215524: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x215524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215528: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x215528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21552c: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x21552cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
    // 0x215530: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x215534: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215538: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21553c: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x21553cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215540: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215544: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x215544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x215548: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21554c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21554Cu;
        // 0x215550: 0xac267908  sw          $a2, 0x7908($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30984), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21554c) {
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x215554u;
label_215554:
    // 0x215554: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x215554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x215558: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x215558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x21555c: 0xc53823  subu        $a3, $a2, $a1
    ctx->pc = 0x21555cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215560: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215560u;
    {
        const bool branch_taken_0x215560 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x215564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215560u;
        // 0x215564: 0x73043  sra         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215560) {
            ctx->pc = 0x215570u;
            goto label_215570;
        }
    }
    ctx->pc = 0x215568u;
    // 0x215568: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21556c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x21556cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
label_215570:
    // 0x215570: 0xaf86920c  sw          $a2, -0x6DF4($gp)
    ctx->pc = 0x215570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 6));
    // 0x215574: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215578: 0xaf859204  sw          $a1, -0x6DFC($gp)
    ctx->pc = 0x215578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 5));
    // 0x21557c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x21557cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215580: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215584: 0xaf869200  sw          $a2, -0x6E00($gp)
    ctx->pc = 0x215584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 6));
    // 0x215588: 0xac25790c  sw          $a1, 0x790C($at)
    ctx->pc = 0x215588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x21558c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215590: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215594: 0xac267900  sw          $a2, 0x7900($at)
    ctx->pc = 0x215594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215598: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21559c: 0xac267904  sw          $a2, 0x7904($at)
    ctx->pc = 0x21559cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x2155a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155a4: 0xac267908  sw          $a2, 0x7908($at)
    ctx->pc = 0x2155a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
label_2155a8:
    // 0x2155a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155ac: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x2155acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2155b0: 0xac2078f0  sw          $zero, 0x78F0($at)
    ctx->pc = 0x2155b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30960), GPR_U32(ctx, 0));
    // 0x2155b4: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2155b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155bc: 0x862823  subu        $a1, $a0, $a2
    ctx->pc = 0x2155bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2155c0: 0xac2078f4  sw          $zero, 0x78F4($at)
    ctx->pc = 0x2155c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30964), GPR_U32(ctx, 0));
    // 0x2155c4: 0x24c400a0  addiu       $a0, $a2, 0xA0
    ctx->pc = 0x2155c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x2155c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155cc: 0xaf8491fc  sw          $a0, -0x6E04($gp)
    ctx->pc = 0x2155ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939132), GPR_U32(ctx, 4));
    // 0x2155d0: 0xac2578fc  sw          $a1, 0x78FC($at)
    ctx->pc = 0x2155d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878FCu, _value); } while (0);
    // 0x2155d4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2155d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2155d8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155dc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x2155dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2155e0: 0xac2478ec  sw          $a0, 0x78EC($at)
    ctx->pc = 0x2155e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5878ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878ECu, _value); } while (0);
    // 0x2155e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155e8: 0xaf8591f8  sw          $a1, -0x6E08($gp)
    ctx->pc = 0x2155e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939128), GPR_U32(ctx, 5));
    // 0x2155ec: 0xac2078f8  sw          $zero, 0x78F8($at)
    ctx->pc = 0x2155ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5878F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878F8u, _value); } while (0);
    // 0x2155f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2155f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2155f4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2155f8: 0xac2578e0  sw          $a1, 0x78E0($at)
    ctx->pc = 0x2155f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E0u, _value); } while (0);
    // 0x2155fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215600: 0xac2578e4  sw          $a1, 0x78E4($at)
    ctx->pc = 0x215600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E4u, _value); } while (0);
    // 0x215604: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215608: 0xac2578e8  sw          $a1, 0x78E8($at)
    ctx->pc = 0x215608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5878E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878E8u, _value); } while (0);
label_21560c:
    // 0x21560c: 0x28640058  slti        $a0, $v1, 0x58
    ctx->pc = 0x21560cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)88) ? 1 : 0);
label_215610:
    // 0x215610: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x215610u;
    {
        const bool branch_taken_0x215610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215610u;
        // 0x215614: 0x28610061  slti        $at, $v1, 0x61 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)97) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215610) {
            ctx->pc = 0x2156A8u;
            return;
        }
    }
    ctx->pc = 0x215618u;
    // 0x215618: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x215618u;
    {
        const bool branch_taken_0x215618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x215618) {
            ctx->pc = 0x2156A8u;
            return;
        }
    }
    ctx->pc = 0x215620u;
    // 0x215620: 0x2463ffa8  addiu       $v1, $v1, -0x58
    ctx->pc = 0x215620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967208));
    // 0x215624: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x215624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x215628: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x215628u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21562c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x21562cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x215630: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x215630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x215634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215638: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x215638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21563c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x21563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215640: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215640u;
    {
        const bool branch_taken_0x215640 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x215644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215640u;
        // 0x215644: 0x33043  sra         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215640) {
            ctx->pc = 0x215650u;
            goto label_215650;
        }
    }
    ctx->pc = 0x215648u;
    // 0x215648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x215648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21564c: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x21564cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
label_215650:
    // 0x215650: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x215650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x215654: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215658: 0xac23791c  sw          $v1, 0x791C($at)
    ctx->pc = 0x215658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x21565c: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x21565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x215660: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215664: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
    // 0x215668: 0xac267920  sw          $a2, 0x7920($at)
    ctx->pc = 0x215668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587920u, _value); } while (0);
    // 0x21566c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215670: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215674: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x215674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215678: 0xac267928  sw          $a2, 0x7928($at)
    ctx->pc = 0x215678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587928u, _value); } while (0);
    // 0x21567c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215680: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x215680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x215684: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x215684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215688: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21568c: 0xac25792c  sw          $a1, 0x792C($at)
    ctx->pc = 0x21568cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215690: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215694: 0xac237910  sw          $v1, 0x7910($at)
    ctx->pc = 0x215694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x215698: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21569c: 0xac237914  sw          $v1, 0x7914($at)
    ctx->pc = 0x21569cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2156a0: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156a4: 0xac237918  sw          $v1, 0x7918($at)
    ctx->pc = 0x2156a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x587918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587918u, _value); } while (0);
    ctx->pc = 0x2156a8u;
}
