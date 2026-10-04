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

// Function: FUN_0017fd90
// Address: 0x17fd90 - 0x17fe84
void FUN_0017fd90_0x17fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fd90_0x17fd90");
#endif

    ctx->pc = 0x17fd90u;

    // 0x17fd90: 0x8f86879c  lw          $a2, -0x7864($gp)
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17fd94: 0x2cc10020  sltiu       $at, $a2, 0x20
    ctx->pc = 0x17fd94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17fd98: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x17FD98u;
    {
        const bool branch_taken_0x17fd98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd98) {
            ctx->pc = 0x17FE84u;
            return;
        }
    }
    ctx->pc = 0x17FDA0u;
    // 0x17fda0: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fda4: 0x3c030c00  lui         $v1, 0xC00
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3072 << 16));
    // 0x17fda8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17fda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x17fdac: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x17FDACu;
    {
        const bool branch_taken_0x17fdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDACu;
        // 0x17fdb0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdac) {
            ctx->pc = 0x17FE4Cu;
            goto label_17fe4c;
        }
    }
    ctx->pc = 0x17FDB4u;
    // 0x17fdb4: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17fdb8: 0x2c610020  sltiu       $at, $v1, 0x20
    ctx->pc = 0x17fdb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17fdbc: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x17FDBCu;
    {
        const bool branch_taken_0x17fdbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDBCu;
        // 0x17fdc0: 0x338c0  sll         $a3, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fdbc) {
            ctx->pc = 0x17FE3Cu;
            goto label_17fe3c;
        }
    }
    ctx->pc = 0x17FDC4u;
    // 0x17fdc4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17fdc8: 0x246391c0  addiu       $v1, $v1, -0x6E40
    ctx->pc = 0x17fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939072));
    // 0x17fdcc: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x17fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fdd0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17fdd4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x17fdd8: 0x8c860090  lw          $a2, 0x90($a0)
    ctx->pc = 0x17fdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fddc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x17fddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x17fde0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17FDE0u;
    {
        const bool branch_taken_0x17fde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE0u;
        // 0x17fde4: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde0) {
            ctx->pc = 0x17FE10u;
            goto label_17fe10;
        }
    }
    ctx->pc = 0x17FDE8u;
    // 0x17fde8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x17fde8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x17fdec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17fdf0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x17fdf4: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
    // 0x17fdf8: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x17fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x17fdfc: 0x8f858798  lw          $a1, -0x7868($gp)
    ctx->pc = 0x17fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17fe00: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17fe04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17fe08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17FE08u;
    {
        const bool branch_taken_0x17fe08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE08u;
        // 0x17fe0c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe08) {
            ctx->pc = 0x17FE30u;
            goto label_17fe30;
        }
    }
    ctx->pc = 0x17FE10u;
label_17fe10:
    // 0x17fe10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fe14: 0x246391c4  addiu       $v1, $v1, -0x6E3C
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939076));
    // 0x17fe18: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17fe1c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x17fe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x17fe20: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x17fe24: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x17fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe28: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x17fe28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x17fe2c: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
label_17fe30:
    // 0x17fe30: 0x8f838798  lw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x17fe34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fe38: 0xaf838798  sw          $v1, -0x7868($gp)
    ctx->pc = 0x17fe38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 3));
label_17fe3c:
    // 0x17fe3c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe40: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x17fe44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17FE44u;
    {
        const bool branch_taken_0x17fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE44u;
        // 0x17fe48: 0xac830090  sw          $v1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe44) {
            ctx->pc = 0x17FE84u;
            return;
        }
    }
    ctx->pc = 0x17FE4Cu;
label_17fe4c:
    // 0x17fe4c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x17fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17fe50: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x17fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x17fe54: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x17fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fe58: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x17fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17fe5c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17fe60: 0x246392c4  addiu       $v1, $v1, -0x6D3C
    ctx->pc = 0x17fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939332));
    // 0x17fe64: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fe68: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17fe68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17fe6c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x17fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x17fe70: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x17fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x17fe74: 0xac830090  sw          $v1, 0x90($a0)
    ctx->pc = 0x17fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
    // 0x17fe78: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x17fe7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17fe80: 0xaf83879c  sw          $v1, -0x7864($gp)
    ctx->pc = 0x17fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 3));
    ctx->pc = 0x17fe84u;
}
