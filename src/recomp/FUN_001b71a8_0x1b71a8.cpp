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

// Function: FUN_001b71a8
// Address: 0x1b71a8 - 0x1b72b8
void FUN_001b71a8_0x1b71a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b71a8_0x1b71a8");
#endif

    ctx->pc = 0x1b71a8u;

    // 0x1b71a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b71ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b71acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b71b0: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x1b71b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b71b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b71b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b71b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B71B8u;
    {
        const bool branch_taken_0x1b71b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B8u;
        // 0x1b71bc: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71b8) {
            ctx->pc = 0x1B71D8u;
            goto label_1b71d8;
        }
    }
    ctx->pc = 0x1B71C0u;
    // 0x1b71c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1b71c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1b71c4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1b71c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1b71c8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1b71c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x1b71cc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B71CCu;
    {
        const bool branch_taken_0x1b71cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71CCu;
        // 0x1b71d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71cc) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71D4u;
    // 0x1b71d4: 0x0  nop
    ctx->pc = 0x1b71d4u;
    // NOP
label_1b71d8:
    // 0x1b71d8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1b71d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1b71dc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1B71DCu;
    {
        const bool branch_taken_0x1b71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71dc) {
            ctx->pc = 0x1B71E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71DCu;
            // 0x1b71e0: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7218u;
            goto label_1b7218;
        }
    }
    ctx->pc = 0x1B71E4u;
    // 0x1b71e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1b71e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1b71e8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B71E8u;
    {
        const bool branch_taken_0x1b71e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71e8) {
            ctx->pc = 0x1B71ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71E8u;
            // 0x1b71ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71F0u;
    // 0x1b71f0: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B71F0u;
    {
        const bool branch_taken_0x1b71f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b71f0) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B71F8u;
    // 0x1b71f8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1b71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b71fc: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x1b71fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x1b7200: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7200u;
    {
        const bool branch_taken_0x1b7200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7200) {
            ctx->pc = 0x1B7204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7200u;
            // 0x1b7204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7208u;
    // 0x1b7208: 0x28820400  slti        $v0, $a0, 0x400
    ctx->pc = 0x1b7208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1b720c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B720Cu;
    {
        const bool branch_taken_0x1b720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b720c) {
            ctx->pc = 0x1B7210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B720Cu;
            // 0x1b7210: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7220u;
            goto label_1b7220;
        }
    }
    ctx->pc = 0x1B7214u;
    // 0x1b7214: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x1b7214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_1b7218:
    // 0x1b7218: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7218u;
    {
        const bool branch_taken_0x1b7218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7218u;
        // 0x1b721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7218) {
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7220u;
label_1b7220:
    // 0x1b7220: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1b7220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b7224: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7224u;
    {
        const bool branch_taken_0x1b7224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7224u;
        // 0x1b7228: 0x248703ff  addiu       $a3, $a0, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7224) {
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B722Cu;
    // 0x1b722c: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x1b722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x1b7230: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7230u;
    {
        const bool branch_taken_0x1b7230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7230) {
            ctx->pc = 0x1B7234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7230u;
            // 0x1b7234: 0x64a50080  daddiu      $a1, $a1, 0x80 (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B7238u;
    // 0x1b7238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7238u;
    {
        const bool branch_taken_0x1b7238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7238) {
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B7240u;
label_1b7240:
    // 0x1b7240: 0x64a5007f  daddiu      $a1, $a1, 0x7F
    ctx->pc = 0x1b7240u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
label_1b7244:
    // 0x1b7244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7248: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1b7248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1b724c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1b724cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b7250: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7250u;
    {
        const bool branch_taken_0x1b7250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7250) {
            ctx->pc = 0x1B7254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7250u;
            // 0x1b7254: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7264u;
            goto label_1b7264;
        }
    }
    ctx->pc = 0x1B7258u;
    // 0x1b7258: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x1b7258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x1b725c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b7260: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x1b7260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_1b7264:
    // 0x1b7264: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x1b7264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x1b7268: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1b7268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1b726c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7270: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x1b7270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x1b7274: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1b7274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1b7278: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b7278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b727c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b727cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b7280: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x1b7284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7288: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b728c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1b7290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1b7294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b7298: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x1b7298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x1b729c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1b729cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1b72a0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x1b72a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x1b72a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b72a8: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1b72a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1b72ac: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1b72acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b72b0: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x1b72b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x1b72b4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b72b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->pc = 0x1b72b8u;
}
