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

// Function: entry_002006ec
// Address: 0x2006ec - 0x200768
void entry_002006ec_0x2006ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002006ec_0x2006ec");
#endif

    ctx->pc = 0x2006ecu;

    // 0x2006ec: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2006f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2006f4: 0xac23276c  sw          $v1, 0x276C($at)
    ctx->pc = 0x2006f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x55276Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x55276Cu, _value); } while (0);
    // 0x2006f8: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x2006f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x2006fc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x200700: 0x8c27276c  lw          $a3, 0x276C($at)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x55276Cu));
    // 0x200704: 0x34654dd3  ori         $a1, $v1, 0x4DD3
    ctx->pc = 0x200704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x200708: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20070c: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x20070cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x200710: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x200710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x200714: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x200714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x200718: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x200718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20071c: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x20071cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x200720: 0x0  nop
    ctx->pc = 0x200720u;
    // NOP
    // 0x200724: 0x0  nop
    ctx->pc = 0x200724u;
    // NOP
    // 0x200728: 0x2810  mfhi        $a1
    ctx->pc = 0x200728u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x20072c: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x20072cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x200730: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x200734: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x200734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x200738: 0xac25276c  sw          $a1, 0x276C($at)
    ctx->pc = 0x200738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10092), GPR_U32(ctx, 5));
    // 0x20073c: 0x9205005d  lbu         $a1, 0x5D($s0)
    ctx->pc = 0x20073cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x200740: 0xaf8590d0  sw          $a1, -0x6F30($gp)
    ctx->pc = 0x200740u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 5));
    // 0x200744: 0xaf8090cc  sw          $zero, -0x6F34($gp)
    ctx->pc = 0x200744u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 0));
    // 0x200748: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
    // 0x20074c: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x20074cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x200750: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x200750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x200754: 0x25292740  addiu       $t1, $t1, 0x2740
    ctx->pc = 0x200754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 10048));
    // 0x200758: 0x2508a230  addiu       $t0, $t0, -0x5DD0
    ctx->pc = 0x200758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943280));
    // 0x20075c: 0x24c62720  addiu       $a2, $a2, 0x2720
    ctx->pc = 0x20075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10016));
    // 0x200760: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x200760u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x200764: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->pc = 0x200768u;
}
