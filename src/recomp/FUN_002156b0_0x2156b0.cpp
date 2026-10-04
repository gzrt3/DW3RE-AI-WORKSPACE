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

// Function: FUN_002156b0
// Address: 0x2156b0 - 0x21589c
void FUN_002156b0_0x2156b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002156b0_0x2156b0");
#endif

    ctx->pc = 0x2156b0u;

    // 0x2156b0: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x2156b4: 0x4600023  bltz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2156B4u;
    {
        const bool branch_taken_0x2156b4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156B4u;
        // 0x2156b8: 0x28640008  slti        $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156b4) {
            ctx->pc = 0x215744u;
            goto label_215744;
        }
    }
    ctx->pc = 0x2156BCu;
    // 0x2156bc: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2156bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2156c0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x2156C0u;
    {
        const bool branch_taken_0x2156c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156C0u;
        // 0x2156c4: 0x32880  sll         $a1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156c0) {
            ctx->pc = 0x215740u;
            goto label_215740;
        }
    }
    ctx->pc = 0x2156C8u;
    // 0x2156c8: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2156c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2156cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2156d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2156d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2156d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2156d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2156d8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2156D8u;
    {
        const bool branch_taken_0x2156d8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2156DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2156D8u;
        // 0x2156dc: 0x43843  sra         $a3, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156d8) {
            ctx->pc = 0x2156E8u;
            goto label_2156e8;
        }
    }
    ctx->pc = 0x2156E0u;
    // 0x2156e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2156e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2156e4: 0x43843  sra         $a3, $a0, 1
    ctx->pc = 0x2156e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
label_2156e8:
    // 0x2156e8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2156ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2156f0: 0xac277920  sw          $a3, 0x7920($at)
    ctx->pc = 0x2156f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587920u, _value); } while (0);
    // 0x2156f4: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x2156f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x2156f8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2156f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2156fc: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2156fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x215700: 0xac277928  sw          $a3, 0x7928($at)
    ctx->pc = 0x215700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x587928u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587928u, _value); } while (0);
    // 0x215704: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x215708: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21570c: 0xaf859210  sw          $a1, -0x6DF0($gp)
    ctx->pc = 0x21570cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 5));
    // 0x215710: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x215710u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x215714: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x215714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215718: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21571c: 0xac267924  sw          $a2, 0x7924($at)
    ctx->pc = 0x21571cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215720: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215724: 0xac26792c  sw          $a2, 0x792C($at)
    ctx->pc = 0x215724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215728: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21572c: 0xac257910  sw          $a1, 0x7910($at)
    ctx->pc = 0x21572cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x215730: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215734: 0xac257914  sw          $a1, 0x7914($at)
    ctx->pc = 0x215734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x215738: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21573c: 0xac257918  sw          $a1, 0x7918($at)
    ctx->pc = 0x21573cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587918u, _value); } while (0);
label_215740:
    // 0x215740: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x215740u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_215744:
    // 0x215744: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x215744u;
    {
        const bool branch_taken_0x215744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215744u;
        // 0x215748: 0x28640018  slti        $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215744) {
            ctx->pc = 0x215818u;
            goto label_215818;
        }
    }
    ctx->pc = 0x21574Cu;
    // 0x21574c: 0x28610019  slti        $at, $v1, 0x19
    ctx->pc = 0x21574cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x215750: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x215750u;
    {
        const bool branch_taken_0x215750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215750u;
        // 0x215754: 0x3c010058  lui         $at, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215750) {
            ctx->pc = 0x215814u;
            goto label_215814;
        }
    }
    ctx->pc = 0x215758u;
    // 0x215758: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x215758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x21575c: 0xac207920  sw          $zero, 0x7920($at)
    ctx->pc = 0x21575cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31008), GPR_U32(ctx, 0));
    // 0x215760: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x215760u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x215764: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215768: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x215768u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x21576c: 0xac207928  sw          $zero, 0x7928($at)
    ctx->pc = 0x21576cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31016), GPR_U32(ctx, 0));
    // 0x215770: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x215770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x215774: 0x24c400df  addiu       $a0, $a2, 0xDF
    ctx->pc = 0x215774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 223));
    // 0x215778: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21577c: 0xac24792c  sw          $a0, 0x792C($at)
    ctx->pc = 0x21577cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58792Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58792Cu, _value); } while (0);
    // 0x215780: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x215780u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x215784: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215788: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x215788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x21578c: 0xac257924  sw          $a1, 0x7924($at)
    ctx->pc = 0x21578cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x587924u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587924u, _value); } while (0);
    // 0x215790: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x215790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x215794: 0xaf849210  sw          $a0, -0x6DF0($gp)
    ctx->pc = 0x215794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939152), GPR_U32(ctx, 4));
    // 0x215798: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x21579c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2157a0: 0xac267910  sw          $a2, 0x7910($at)
    ctx->pc = 0x2157a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587910u, _value); } while (0);
    // 0x2157a4: 0xaf849214  sw          $a0, -0x6DEC($gp)
    ctx->pc = 0x2157a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939156), GPR_U32(ctx, 4));
    // 0x2157a8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2157acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2157b0: 0xaf809208  sw          $zero, -0x6DF8($gp)
    ctx->pc = 0x2157b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939144), GPR_U32(ctx, 0));
    // 0x2157b4: 0xac24791c  sw          $a0, 0x791C($at)
    ctx->pc = 0x2157b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58791Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58791Cu, _value); } while (0);
    // 0x2157b8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157bc: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x2157c0: 0xac267914  sw          $a2, 0x7914($at)
    ctx->pc = 0x2157c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x587914u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587914u, _value); } while (0);
    // 0x2157c4: 0x872823  subu        $a1, $a0, $a3
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2157c8: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157cc: 0x52043  sra         $a0, $a1, 1
    ctx->pc = 0x2157ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2157d0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2157D0u;
    {
        const bool branch_taken_0x2157d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2157D0u;
        // 0x2157d4: 0xac267918  sw          $a2, 0x7918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31000), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157d0) {
            ctx->pc = 0x2157E0u;
            goto label_2157e0;
        }
    }
    ctx->pc = 0x2157D8u;
    // 0x2157d8: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2157d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2157dc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2157e0:
    // 0x2157e0: 0xaf84920c  sw          $a0, -0x6DF4($gp)
    ctx->pc = 0x2157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939148), GPR_U32(ctx, 4));
    // 0x2157e4: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x2157e8: 0x24040280  addiu       $a0, $zero, 0x280
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2157ec: 0xaf879204  sw          $a3, -0x6DFC($gp)
    ctx->pc = 0x2157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939140), GPR_U32(ctx, 7));
    // 0x2157f0: 0xaf849200  sw          $a0, -0x6E00($gp)
    ctx->pc = 0x2157f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939136), GPR_U32(ctx, 4));
    // 0x2157f4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2157f8: 0xac24790c  sw          $a0, 0x790C($at)
    ctx->pc = 0x2157f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x58790Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x58790Cu, _value); } while (0);
    // 0x2157fc: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x2157fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215800: 0xac207900  sw          $zero, 0x7900($at)
    ctx->pc = 0x215800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587900u, _value); } while (0);
    // 0x215804: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215808: 0xac207904  sw          $zero, 0x7904($at)
    ctx->pc = 0x215808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587904u, _value); } while (0);
    // 0x21580c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21580cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215810: 0xac207908  sw          $zero, 0x7908($at)
    ctx->pc = 0x215810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x587908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x587908u, _value); } while (0);
label_215814:
    // 0x215814: 0x28640018  slti        $a0, $v1, 0x18
    ctx->pc = 0x215814u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
label_215818:
    // 0x215818: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215818u;
        // 0x21581c: 0x28610021  slti        $at, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215818) {
            ctx->pc = 0x21589Cu;
            return;
        }
    }
    ctx->pc = 0x215820u;
    // 0x215820: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x215820u;
    {
        const bool branch_taken_0x215820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x215824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215820u;
        // 0x215824: 0x2464ffe8  addiu       $a0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215820) {
            ctx->pc = 0x21589Cu;
            return;
        }
    }
    ctx->pc = 0x215828u;
    // 0x215828: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21582c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x21582cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x215830: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x215830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215834: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x215834u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x215838: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x215838u;
    {
        const bool branch_taken_0x215838 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x21583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215838u;
        // 0x21583c: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215838) {
            ctx->pc = 0x215848u;
            goto label_215848;
        }
    }
    ctx->pc = 0x215840u;
    // 0x215840: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x215840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x215844: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x215844u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_215848:
    // 0x215848: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x215848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21584c: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x21584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x215850: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x215850u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215854: 0xaf8391f4  sw          $v1, -0x6E0C($gp)
    ctx->pc = 0x215854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939124), GPR_U32(ctx, 3));
    // 0x215858: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x215858u;
    {
        const bool branch_taken_0x215858 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215858u;
        // 0x21585c: 0xaf8491f0  sw          $a0, -0x6E10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215858) {
            ctx->pc = 0x215868u;
            goto label_215868;
        }
    }
    ctx->pc = 0x215860u;
    // 0x215860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215860u;
    {
        const bool branch_taken_0x215860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215860u;
        // 0x215864: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215860) {
            ctx->pc = 0x21586Cu;
            goto label_21586c;
        }
    }
    ctx->pc = 0x215868u;
label_215868:
    // 0x215868: 0x24e30180  addiu       $v1, $a3, 0x180
    ctx->pc = 0x215868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 384));
label_21586c:
    // 0x21586c: 0xaf8391e8  sw          $v1, -0x6E18($gp)
    ctx->pc = 0x21586cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939112), GPR_U32(ctx, 3));
    // 0x215870: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215874: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x215874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x215878: 0xac2678dc  sw          $a2, 0x78DC($at)
    ctx->pc = 0x215878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5878DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878DCu, _value); } while (0);
    // 0x21587c: 0xaf8391ec  sw          $v1, -0x6E14($gp)
    ctx->pc = 0x21587cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939116), GPR_U32(ctx, 3));
    // 0x215880: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215884: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x215884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x215888: 0xac2378d0  sw          $v1, 0x78D0($at)
    ctx->pc = 0x215888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D0u, _value); } while (0);
    // 0x21588c: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215890: 0xac2378d4  sw          $v1, 0x78D4($at)
    ctx->pc = 0x215890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D4u, _value); } while (0);
    // 0x215894: 0x3c010058  lui         $at, 0x58
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)88 << 16));
    // 0x215898: 0xac2378d8  sw          $v1, 0x78D8($at)
    ctx->pc = 0x215898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5878D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5878D8u, _value); } while (0);
    ctx->pc = 0x21589cu;
}
