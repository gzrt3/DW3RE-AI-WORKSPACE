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

// Function: entry_00134900
// Address: 0x134900 - 0x1349c4
void entry_00134900_0x134900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134900_0x134900");
#endif

    ctx->pc = 0x134900u;

    // 0x134900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x134900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134904: 0x1083014c  beq         $a0, $v1, . + 4 + (0x14C << 2)
    ctx->pc = 0x134904u;
    {
        const bool branch_taken_0x134904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134904u;
        // 0x134908: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134904) {
            ctx->pc = 0x134E38u;
            return;
        }
    }
    ctx->pc = 0x13490Cu;
    // 0x13490c: 0x10830144  beq         $a0, $v1, . + 4 + (0x144 << 2)
    ctx->pc = 0x13490Cu;
    {
        const bool branch_taken_0x13490c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13490c) {
            ctx->pc = 0x134E20u;
            return;
        }
    }
    ctx->pc = 0x134914u;
    // 0x134914: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x134914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x134918: 0x10830149  beq         $a0, $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x134918u;
    {
        const bool branch_taken_0x134918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134918u;
        // 0x13491c: 0x2403004d  addiu       $v1, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134918) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134920u;
    // 0x134920: 0x1083013a  beq         $a0, $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x134920u;
    {
        const bool branch_taken_0x134920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134920) {
            ctx->pc = 0x134E0Cu;
            return;
        }
    }
    ctx->pc = 0x134928u;
    // 0x134928: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x134928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x13492c: 0x1083012c  beq         $a0, $v1, . + 4 + (0x12C << 2)
    ctx->pc = 0x13492Cu;
    {
        const bool branch_taken_0x13492c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13492Cu;
        // 0x134930: 0x2403004b  addiu       $v1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13492c) {
            ctx->pc = 0x134DE0u;
            return;
        }
    }
    ctx->pc = 0x134934u;
    // 0x134934: 0x10830112  beq         $a0, $v1, . + 4 + (0x112 << 2)
    ctx->pc = 0x134934u;
    {
        const bool branch_taken_0x134934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134934) {
            ctx->pc = 0x134D80u;
            return;
        }
    }
    ctx->pc = 0x13493Cu;
    // 0x13493c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x13493cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x134940: 0x10830103  beq         $a0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x134940u;
    {
        const bool branch_taken_0x134940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134940u;
        // 0x134944: 0x24030049  addiu       $v1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134940) {
            ctx->pc = 0x134D50u;
            return;
        }
    }
    ctx->pc = 0x134948u;
    // 0x134948: 0x108300fc  beq         $a0, $v1, . + 4 + (0xFC << 2)
    ctx->pc = 0x134948u;
    {
        const bool branch_taken_0x134948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134948) {
            ctx->pc = 0x134D3Cu;
            return;
        }
    }
    ctx->pc = 0x134950u;
    // 0x134950: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x134950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x134954: 0x108300ee  beq         $a0, $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x134954u;
    {
        const bool branch_taken_0x134954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134954u;
        // 0x134958: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134954) {
            ctx->pc = 0x134D10u;
            return;
        }
    }
    ctx->pc = 0x13495Cu;
    // 0x13495c: 0x108300e0  beq         $a0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x13495Cu;
    {
        const bool branch_taken_0x13495c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13495c) {
            ctx->pc = 0x134CE0u;
            return;
        }
    }
    ctx->pc = 0x134964u;
    // 0x134964: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x134964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x134968: 0x108300cc  beq         $a0, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x134968u;
    {
        const bool branch_taken_0x134968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134968u;
        // 0x13496c: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134968) {
            ctx->pc = 0x134C9Cu;
            return;
        }
    }
    ctx->pc = 0x134970u;
    // 0x134970: 0x108300a7  beq         $a0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x134970u;
    {
        const bool branch_taken_0x134970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134970) {
            ctx->pc = 0x134C10u;
            return;
        }
    }
    ctx->pc = 0x134978u;
    // 0x134978: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x134978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x13497c: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x13497Cu;
    {
        const bool branch_taken_0x13497c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13497Cu;
        // 0x134980: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13497c) {
            ctx->pc = 0x134BB0u;
            return;
        }
    }
    ctx->pc = 0x134984u;
    // 0x134984: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x134984u;
    {
        const bool branch_taken_0x134984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134984) {
            ctx->pc = 0x134BA0u;
            return;
        }
    }
    ctx->pc = 0x13498Cu;
    // 0x13498c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134990: 0x1083007f  beq         $a0, $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x134990u;
    {
        const bool branch_taken_0x134990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134990u;
        // 0x134994: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134990) {
            ctx->pc = 0x134B90u;
            return;
        }
    }
    ctx->pc = 0x134998u;
    // 0x134998: 0x10830070  beq         $a0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x134998u;
    {
        const bool branch_taken_0x134998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134998) {
            ctx->pc = 0x134B5Cu;
            return;
        }
    }
    ctx->pc = 0x1349A0u;
    // 0x1349a0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1349a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1349a4: 0x10830066  beq         $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1349A4u;
    {
        const bool branch_taken_0x1349a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1349A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349A4u;
        // 0x1349a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349a4) {
            ctx->pc = 0x134B40u;
            return;
        }
    }
    ctx->pc = 0x1349ACu;
    // 0x1349ac: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1349ACu;
    {
        const bool branch_taken_0x1349ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1349ac) {
            ctx->pc = 0x134AD8u;
            return;
        }
    }
    ctx->pc = 0x1349B4u;
    // 0x1349b4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1349B4u;
    {
        const bool branch_taken_0x1349b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1349b4) {
            ctx->pc = 0x1349C4u;
            return;
        }
    }
    ctx->pc = 0x1349BCu;
    // 0x1349bc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x1349BCu;
    {
        const bool branch_taken_0x1349bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1349C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1349BCu;
        // 0x1349c0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349bc) {
            ctx->pc = 0x134E44u;
            return;
        }
    }
    ctx->pc = 0x1349C4u;
}
