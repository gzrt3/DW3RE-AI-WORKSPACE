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

// Function: entry_001e4684
// Address: 0x1e4684 - 0x1e4724
void entry_001e4684_0x1e4684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4684_0x1e4684");
#endif

    ctx->pc = 0x1e4684u;

    // 0x1e4684: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e4684u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e4688: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E4688u;
    {
        const bool branch_taken_0x1e4688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4688) {
            ctx->pc = 0x1E4750u;
            return;
        }
    }
    ctx->pc = 0x1E4690u;
    // 0x1e4690: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e4694: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4698: 0x2442b7b0  addiu       $v0, $v0, -0x4850
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948784));
    // 0x1e469c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e46a0: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1e46a4: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e46a8: 0x2442b7b2  addiu       $v0, $v0, -0x484E
    ctx->pc = 0x1e46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948786));
    // 0x1e46ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e46b0: 0x84480000  lh          $t0, 0x0($v0)
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e46b4: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1e46b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e46b8: 0x24e3ffe0  addiu       $v1, $a3, -0x20
    ctx->pc = 0x1e46b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
    // 0x1e46bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e46c0: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x1e46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1e46c4: 0x24676c00  addiu       $a3, $v1, 0x6C00
    ctx->pc = 0x1e46c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x1e46c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e46cc: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1e46ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x1e46d0: 0xa4a71d50  sh          $a3, 0x1D50($a1)
    ctx->pc = 0x1e46d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7504), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e46d4: 0x2502ffe0  addiu       $v0, $t0, -0x20
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x1e46d8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1e46d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e46dc: 0x24e77900  addiu       $a3, $a3, 0x7900
    ctx->pc = 0x1e46dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30976));
    // 0x1e46e0: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e46e4: 0xa4a71d52  sh          $a3, 0x1D52($a1)
    ctx->pc = 0x1e46e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7506), (uint16_t)GPR_U32(ctx, 7));
    // 0x1e46e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e46ec: 0xaca61d54  sw          $a2, 0x1D54($a1)
    ctx->pc = 0x1e46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7508), GPR_U32(ctx, 6));
    // 0x1e46f0: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x1e46f4: 0xa4a31d60  sh          $v1, 0x1D60($a1)
    ctx->pc = 0x1e46f4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7520), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e46f8: 0xa4a21d62  sh          $v0, 0x1D62($a1)
    ctx->pc = 0x1e46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 7522), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e46fc: 0xaca61d64  sw          $a2, 0x1D64($a1)
    ctx->pc = 0x1e46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7524), GPR_U32(ctx, 6));
    // 0x1e4700: 0x8f838d80  lw          $v1, -0x7280($gp)
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
    // 0x1e4704: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1e4704u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e4708: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4708u;
    {
        const bool branch_taken_0x1e4708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4708u;
        // 0x1e470c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4708) {
            ctx->pc = 0x1E472Cu;
            return;
        }
    }
    ctx->pc = 0x1E4710u;
    // 0x1e4710: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e4714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4714u;
    {
        const bool branch_taken_0x1e4714 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4714u;
        // 0x1e4718: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4714) {
            ctx->pc = 0x1E4724u;
            return;
        }
    }
    ctx->pc = 0x1E471Cu;
    // 0x1e471c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4720: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1e4724u;
}
