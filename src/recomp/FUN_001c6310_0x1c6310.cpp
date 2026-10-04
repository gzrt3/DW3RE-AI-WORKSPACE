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

// Function: FUN_001c6310
// Address: 0x1c6310 - 0x1c65cc
void FUN_001c6310_0x1c6310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c6310_0x1c6310");
#endif

    switch (ctx->pc) {
        case 0x1c63c0u: goto label_1c63c0;
        default: break;
    }

    ctx->pc = 0x1c6310u;

    // 0x1c6310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6314: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x1c6314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1c6318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c631c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c631cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c6324: 0x28410101  slti        $at, $v0, 0x101
    ctx->pc = 0x1c6324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1c6328: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x1c6328u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c632c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c632cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6330: 0xa08302e1  sb          $v1, 0x2E1($a0)
    ctx->pc = 0x1c6330u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 737), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6334: 0xa08002e0  sb          $zero, 0x2E0($a0)
    ctx->pc = 0x1c6334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 736), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6338: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6338u;
    {
        const bool branch_taken_0x1c6338 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6338u;
        // 0x1c633c: 0xa08002e3  sb          $zero, 0x2E3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6338) {
            ctx->pc = 0x1C6350u;
            goto label_1c6350;
        }
    }
    ctx->pc = 0x1C6340u;
    // 0x1c6340: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1c6344: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c6344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1c6348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6348u;
    {
        const bool branch_taken_0x1c6348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6348u;
        // 0x1c634c: 0xa20202e0  sb          $v0, 0x2E0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6348) {
            ctx->pc = 0x1C6354u;
            goto label_1c6354;
        }
    }
    ctx->pc = 0x1C6350u;
label_1c6350:
    // 0x1c6350: 0xa20702e3  sb          $a3, 0x2E3($s0)
    ctx->pc = 0x1c6350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 7));
label_1c6354:
    // 0x1c6354: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1c6358: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c6358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c635c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C635Cu;
    {
        const bool branch_taken_0x1c635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C635Cu;
        // 0x1c6360: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c635c) {
            ctx->pc = 0x1C6370u;
            goto label_1c6370;
        }
    }
    ctx->pc = 0x1C6364u;
    // 0x1c6364: 0x920202e0  lbu         $v0, 0x2E0($s0)
    ctx->pc = 0x1c6364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1c6368: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c6368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1c636c: 0xa20202e0  sb          $v0, 0x2E0($s0)
    ctx->pc = 0x1c636cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 736), (uint8_t)GPR_U32(ctx, 2));
label_1c6370:
    // 0x1c6370: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1c6370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c6374: 0xa20302e2  sb          $v1, 0x2E2($s0)
    ctx->pc = 0x1c6374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 738), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c6378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c637c: 0xa20002e8  sb          $zero, 0x2E8($s0)
    ctx->pc = 0x1c637cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 744), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6380: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c6380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6384: 0xa20002e9  sb          $zero, 0x2E9($s0)
    ctx->pc = 0x1c6384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 745), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6388: 0xa20002ea  sb          $zero, 0x2EA($s0)
    ctx->pc = 0x1c6388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 746), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c638c: 0xa20002eb  sb          $zero, 0x2EB($s0)
    ctx->pc = 0x1c638cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 747), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6390: 0xa20002ec  sb          $zero, 0x2EC($s0)
    ctx->pc = 0x1c6390u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 748), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6394: 0xa60202f2  sh          $v0, 0x2F2($s0)
    ctx->pc = 0x1c6394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 754), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c6398: 0xa60202f4  sh          $v0, 0x2F4($s0)
    ctx->pc = 0x1c6398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 756), (uint16_t)GPR_U32(ctx, 2));
    // 0x1c639c: 0xae00030c  sw          $zero, 0x30C($s0)
    ctx->pc = 0x1c639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 0));
    // 0x1c63a0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x1c63a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c63a8: 0x34eb8080  ori         $t3, $a3, 0x8080
    ctx->pc = 0x1c63a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x1c63ac: 0x2403024c  addiu       $v1, $zero, 0x24C
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 588));
    // 0x1c63b0: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1c63b4: 0x2404025c  addiu       $a0, $zero, 0x25C
    ctx->pc = 0x1c63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1c63b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63bc: 0x34ec0008  ori         $t4, $a3, 0x8
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_1c63c0:
    // 0x1c63c0: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1c63c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1c63c4: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c63c8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x1c63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x1c63cc: 0x25470010  addiu       $a3, $t2, 0x10
    ctx->pc = 0x1c63ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x1c63d0: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x1c63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x1c63d4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1c63d8: 0xad400018  sw          $zero, 0x18($t2)
    ctx->pc = 0x1c63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 0));
    // 0x1c63dc: 0xad4c001c  sw          $t4, 0x1C($t2)
    ctx->pc = 0x1c63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 12));
    // 0x1c63e0: 0xdc2d8ed0  ld          $t5, -0x7130($at)
    ctx->pc = 0x1c63e0u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x288ED0u));
    // 0x1c63e4: 0x65ad0001  daddiu      $t5, $t5, 0x1
    ctx->pc = 0x1c63e4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)1);
    // 0x1c63e8: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c63e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c63ec: 0xfd4d0020  sd          $t5, 0x20($t2)
    ctx->pc = 0x1c63ecu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 13));
    // 0x1c63f0: 0xdc2d8ed8  ld          $t5, -0x7128($at)
    ctx->pc = 0x1c63f0u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x288ED8u));
    // 0x1c63f4: 0xfd4d0028  sd          $t5, 0x28($t2)
    ctx->pc = 0x1c63f4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 13));
    // 0x1c63f8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C63F8u;
    {
        const bool branch_taken_0x1c63f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C63F8u;
        // 0x1c63fc: 0xfd460038  sd          $a2, 0x38($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f8) {
            ctx->pc = 0x1C6408u;
            goto label_1c6408;
        }
    }
    ctx->pc = 0x1C6400u;
    // 0x1c6400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6400u;
    {
        const bool branch_taken_0x1c6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6400u;
        // 0x1c6404: 0xfce40000  sd          $a0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6400) {
            ctx->pc = 0x1C640Cu;
            goto label_1c640c;
        }
    }
    ctx->pc = 0x1C6408u;
label_1c6408:
    // 0x1c6408: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1c6408u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_1c640c:
    // 0x1c640c: 0x0  nop
    ctx->pc = 0x1c640cu;
    // NOP
    // 0x1c6410: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6410u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6414: 0x254d0130  addiu       $t5, $t2, 0x130
    ctx->pc = 0x1c6414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 304));
    // 0x1c6418: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c641c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c641cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1c6420: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6424: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6428: 0xacee0018  sw          $t6, 0x18($a3)
    ctx->pc = 0x1c6428u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 14));
    // 0x1c642c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1c642cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x1c6430: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6430u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6434: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6438: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6438u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c643c: 0xacee0030  sw          $t6, 0x30($a3)
    ctx->pc = 0x1c643cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 14));
    // 0x1c6440: 0xace20034  sw          $v0, 0x34($a3)
    ctx->pc = 0x1c6440u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
    // 0x1c6444: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6444u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c6448: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c644c: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6450: 0xacee0048  sw          $t6, 0x48($a3)
    ctx->pc = 0x1c6450u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 14));
    // 0x1c6454: 0xace2004c  sw          $v0, 0x4C($a3)
    ctx->pc = 0x1c6454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 2));
    // 0x1c6458: 0x920e02e3  lbu         $t6, 0x2E3($s0)
    ctx->pc = 0x1c6458u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c645c: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x1c645cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x1c6460: 0x1cb7025  or          $t6, $t6, $t3
    ctx->pc = 0x1c6460u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
    // 0x1c6464: 0xacee0060  sw          $t6, 0x60($a3)
    ctx->pc = 0x1c6464u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 14));
    // 0x1c6468: 0xace20064  sw          $v0, 0x64($a3)
    ctx->pc = 0x1c6468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 2));
    // 0x1c646c: 0xad400130  sw          $zero, 0x130($t2)
    ctx->pc = 0x1c646cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 304), GPR_U32(ctx, 0));
    // 0x1c6470: 0xad400134  sw          $zero, 0x134($t2)
    ctx->pc = 0x1c6470u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 308), GPR_U32(ctx, 0));
    // 0x1c6474: 0xad400138  sw          $zero, 0x138($t2)
    ctx->pc = 0x1c6474u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 312), GPR_U32(ctx, 0));
    // 0x1c6478: 0xad4c013c  sw          $t4, 0x13C($t2)
    ctx->pc = 0x1c6478u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 316), GPR_U32(ctx, 12));
    // 0x1c647c: 0xdc278ed0  ld          $a3, -0x7130($at)
    ctx->pc = 0x1c647cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 4294938320)));
    // 0x1c6480: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1c6480u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1c6484: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
    // 0x1c6488: 0xfd470140  sd          $a3, 0x140($t2)
    ctx->pc = 0x1c6488u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 320), GPR_U64(ctx, 7));
    // 0x1c648c: 0xdc278ed8  ld          $a3, -0x7128($at)
    ctx->pc = 0x1c648cu;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x288ED8u));
    // 0x1c6490: 0xfd470148  sd          $a3, 0x148($t2)
    ctx->pc = 0x1c6490u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 328), GPR_U64(ctx, 7));
    // 0x1c6494: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6494u;
    {
        const bool branch_taken_0x1c6494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6494u;
        // 0x1c6498: 0xfd460158  sd          $a2, 0x158($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 344), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6494) {
            ctx->pc = 0x1C64A4u;
            goto label_1c64a4;
        }
    }
    ctx->pc = 0x1C649Cu;
    // 0x1c649c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C649Cu;
    {
        const bool branch_taken_0x1c649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C649Cu;
        // 0x1c64a0: 0xfda40000  sd          $a0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c649c) {
            ctx->pc = 0x1C64ACu;
            goto label_1c64ac;
        }
    }
    ctx->pc = 0x1C64A4u;
label_1c64a4:
    // 0x1c64a4: 0x0  nop
    ctx->pc = 0x1c64a4u;
    // NOP
    // 0x1c64a8: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x1c64a8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
label_1c64ac:
    // 0x1c64ac: 0x0  nop
    ctx->pc = 0x1c64acu;
    // NOP
    // 0x1c64b0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64b0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c64b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c64b8: 0x25290090  addiu       $t1, $t1, 0x90
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x1c64bc: 0x2d070002  sltiu       $a3, $t0, 0x2
    ctx->pc = 0x1c64bcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c64c0: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64c4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64c8: 0xadaa0018  sw          $t2, 0x18($t5)
    ctx->pc = 0x1c64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 10));
    // 0x1c64cc: 0xada2001c  sw          $v0, 0x1C($t5)
    ctx->pc = 0x1c64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 2));
    // 0x1c64d0: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64d0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64d4: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64d8: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64dc: 0xadaa0030  sw          $t2, 0x30($t5)
    ctx->pc = 0x1c64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 10));
    // 0x1c64e0: 0xada20034  sw          $v0, 0x34($t5)
    ctx->pc = 0x1c64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 2));
    // 0x1c64e4: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64e4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64e8: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c64ec: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c64ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c64f0: 0xadaa0048  sw          $t2, 0x48($t5)
    ctx->pc = 0x1c64f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 10));
    // 0x1c64f4: 0xada2004c  sw          $v0, 0x4C($t5)
    ctx->pc = 0x1c64f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 76), GPR_U32(ctx, 2));
    // 0x1c64f8: 0x920a02e3  lbu         $t2, 0x2E3($s0)
    ctx->pc = 0x1c64f8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1c64fc: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x1c64fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x1c6500: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1c6500u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x1c6504: 0xadaa0060  sw          $t2, 0x60($t5)
    ctx->pc = 0x1c6504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 10));
    // 0x1c6508: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1C6508u;
    {
        const bool branch_taken_0x1c6508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6508u;
        // 0x1c650c: 0xada20064  sw          $v0, 0x64($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6508) {
            ctx->pc = 0x1C63C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c63c0;
        }
    }
    ctx->pc = 0x1C6510u;
    // 0x1c6510: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c6514: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1c6514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1c6518: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
    // 0x1c6520: 0x460d0882  mul.s       $f2, $f1, $f13
    ctx->pc = 0x1c6520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1c6524: 0x460c08c2  mul.s       $f3, $f1, $f12
    ctx->pc = 0x1c6524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1c6528: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x1c6528u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x1c652c: 0xe6010260  swc1        $f1, 0x260($s0)
    ctx->pc = 0x1c652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1c6530: 0x46001107  neg.s       $f4, $f2
    ctx->pc = 0x1c6530u;
    ctx->f[4] = FPU_NEG_S(ctx->f[2]);
    // 0x1c6534: 0xe6040264  swc1        $f4, 0x264($s0)
    ctx->pc = 0x1c6534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 612), bits); }
    // 0x1c6538: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c653c: 0xe600026c  swc1        $f0, 0x26C($s0)
    ctx->pc = 0x1c653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 620), bits); }
    // 0x1c6540: 0xe6010270  swc1        $f1, 0x270($s0)
    ctx->pc = 0x1c6540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x1c6544: 0xe6020274  swc1        $f2, 0x274($s0)
    ctx->pc = 0x1c6544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x1c6548: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x1c6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x1c654c: 0xe600027c  swc1        $f0, 0x27C($s0)
    ctx->pc = 0x1c654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 636), bits); }
    // 0x1c6550: 0xe6030280  swc1        $f3, 0x280($s0)
    ctx->pc = 0x1c6550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x1c6554: 0xe6040284  swc1        $f4, 0x284($s0)
    ctx->pc = 0x1c6554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x1c6558: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1c6558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1c655c: 0xe600028c  swc1        $f0, 0x28C($s0)
    ctx->pc = 0x1c655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 652), bits); }
    // 0x1c6560: 0xe6030290  swc1        $f3, 0x290($s0)
    ctx->pc = 0x1c6560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 656), bits); }
    // 0x1c6564: 0xe6020294  swc1        $f2, 0x294($s0)
    ctx->pc = 0x1c6564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c6568: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c6568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c656c: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x1c656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
    // 0x1c6570: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x1c6570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x1c6574: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x1c6574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x1c6578: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c6578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x1c657c: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1c657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x1c6580: 0xae0002a0  sw          $zero, 0x2A0($s0)
    ctx->pc = 0x1c6580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x1c6584: 0xae0002a4  sw          $zero, 0x2A4($s0)
    ctx->pc = 0x1c6584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 0));
    // 0x1c6588: 0xae0002a8  sw          $zero, 0x2A8($s0)
    ctx->pc = 0x1c6588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 0));
    // 0x1c658c: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c658cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c6590: 0xae000310  sw          $zero, 0x310($s0)
    ctx->pc = 0x1c6590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    // 0x1c6594: 0xae000314  sw          $zero, 0x314($s0)
    ctx->pc = 0x1c6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 788), GPR_U32(ctx, 0));
    // 0x1c6598: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x1c6598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
    // 0x1c659c: 0xae00031c  sw          $zero, 0x31C($s0)
    ctx->pc = 0x1c659cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 0));
    // 0x1c65a0: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x1c65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x1c65a4: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x1c65a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x1c65a8: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x1c65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
    // 0x1c65ac: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x1c65acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x1c65b0: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x1c65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x1c65b4: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x1c65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x1c65b8: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x1c65b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x1c65bc: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x1c65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x1c65c0: 0xe60002c8  swc1        $f0, 0x2C8($s0)
    ctx->pc = 0x1c65c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 712), bits); }
    // 0x1c65c4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1C65C4u;
    SET_GPR_U32(ctx, 31, 0x1C65CCu);
    ctx->pc = 0x1C65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C65C4u;
    // 0x1c65c8: 0xe60002cc  swc1        $f0, 0x2CC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 716), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1C65C4u, 0x1C65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C65CCu;
}
