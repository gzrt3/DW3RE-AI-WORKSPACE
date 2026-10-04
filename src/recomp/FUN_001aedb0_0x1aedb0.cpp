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

// Function: FUN_001aedb0
// Address: 0x1aedb0 - 0x1aedf8
void FUN_001aedb0_0x1aedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aedb0_0x1aedb0");
#endif

    ctx->pc = 0x1aedb0u;

    // 0x1aedb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1aedb4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1aedb8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1aedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1aedbc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1aedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1aedc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aedc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1aedc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aedc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedc8: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1aedc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
    // 0x1aedcc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1aedccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1aedd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aedd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aedd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aedd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedd8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1aedd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x375EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC4u, _value); } while (0);
    // 0x1aeddc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1aeddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1aede0: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1aede0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x375EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC0u, _value); } while (0);
    // 0x1aede4: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1aede4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
    // 0x1aede8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1aede8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x375EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x375EC8u, _value); } while (0);
    // 0x1aedec: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1aedecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aedf0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1aedf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1aedf4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1aedf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    ctx->pc = 0x1aedf8u;
}
