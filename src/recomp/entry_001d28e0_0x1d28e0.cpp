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

// Function: entry_001d28e0
// Address: 0x1d28e0 - 0x1d29a0
void entry_001d28e0_0x1d28e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d28e0_0x1d28e0");
#endif

    ctx->pc = 0x1d28e0u;

    // 0x1d28e0: 0xa142006b  sb          $v0, 0x6B($t2)
    ctx->pc = 0x1d28e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 107), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d28e4: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x1d28e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d28e8: 0xa46d0102  sh          $t5, 0x102($v1)
    ctx->pc = 0x1d28e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 258), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28ec: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28f0: 0xac660104  sw          $a2, 0x104($v1)
    ctx->pc = 0x1d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 6));
    // 0x1d28f4: 0xa46c0110  sh          $t4, 0x110($v1)
    ctx->pc = 0x1d28f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 272), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d28f8: 0xa46d0112  sh          $t5, 0x112($v1)
    ctx->pc = 0x1d28f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 274), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28fc: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2900: 0xac660114  sw          $a2, 0x114($v1)
    ctx->pc = 0x1d2900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 6));
    // 0x1d2904: 0xa4640120  sh          $a0, 0x120($v1)
    ctx->pc = 0x1d2904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d2908: 0xa46e0122  sh          $t6, 0x122($v1)
    ctx->pc = 0x1d2908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d290c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2910: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1d2910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1d2914: 0xa46c0130  sh          $t4, 0x130($v1)
    ctx->pc = 0x1d2914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d2918: 0xa46e0132  sh          $t6, 0x132($v1)
    ctx->pc = 0x1d2918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 306), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d291c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2920: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x1d2920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x1d2924: 0x90e40234  lbu         $a0, 0x234($a3)
    ctx->pc = 0x1d2924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
    // 0x1d2928: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2928u;
    {
        const bool branch_taken_0x1d2928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2928u;
        // 0x1d292c: 0x24620090  addiu       $v0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2928) {
            ctx->pc = 0x1D29A0u;
            return;
        }
    }
    ctx->pc = 0x1D2930u;
    // 0x1d2930: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d2934: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2938: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d2938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d293c: 0x24090076  addiu       $t1, $zero, 0x76
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1d2940: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d2940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d2944: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2948: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d2948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d294c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1d294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d2950: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d2950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2954: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1d2954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d2958: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d2958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
    // 0x1d295c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1d2960: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d2960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d2964: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d2964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d2968: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d2968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d296c: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d296cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2970: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
    // 0x1d2974: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d2974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d2978: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d2978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d297c: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d297cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2980: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d2980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2984: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d2984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
    // 0x1d2988: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d2988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d298c: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d298cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d2990: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2994: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2998: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2998u;
    {
        const bool branch_taken_0x1d2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2998u;
        // 0x1d299c: 0xac48009c  sw          $t0, 0x9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2998) {
            ctx->pc = 0x1D2A0Cu;
            return;
        }
    }
    ctx->pc = 0x1D29A0u;
}
