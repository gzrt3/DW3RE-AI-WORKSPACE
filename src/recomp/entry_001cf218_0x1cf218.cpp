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

// Function: entry_001cf218
// Address: 0x1cf218 - 0x1cf284
void entry_001cf218_0x1cf218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf218_0x1cf218");
#endif

    ctx->pc = 0x1cf218u;

    // 0x1cf218: 0x854e0080  lh          $t6, 0x80($t2)
    ctx->pc = 0x1cf218u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 128)));
    // 0x1cf21c: 0xd4840  sll         $t1, $t5, 1
    ctx->pc = 0x1cf21cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1cf220: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x1cf224: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1cf228: 0x25300100  addiu       $s0, $t1, 0x100
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
    // 0x1cf22c: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x1cf22cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1cf230: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1cf234: 0x25cf00c0  addiu       $t7, $t6, 0xC0
    ctx->pc = 0x1cf234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
    // 0x1cf238: 0x25ae0008  addiu       $t6, $t5, 0x8
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x1cf23c: 0xa54f0090  sh          $t7, 0x90($t2)
    ctx->pc = 0x1cf23cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 15));
    // 0x1cf240: 0xa54e0078  sh          $t6, 0x78($t2)
    ctx->pc = 0x1cf240u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 120), (uint16_t)GPR_U32(ctx, 14));
    // 0x1cf244: 0x10683c  dsll32      $t5, $s0, 0
    ctx->pc = 0x1cf244u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1cf248: 0x97100  sll         $t6, $t1, 4
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1cf24c: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x1cf24cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x1cf250: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1cf254: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x1cf254u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
    // 0x1cf258: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x1cf258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1cf25c: 0x35ad000a  ori         $t5, $t5, 0xA
    ctx->pc = 0x1cf25cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)10);
    // 0x1cf260: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1cf260u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1cf264: 0xa543007a  sh          $v1, 0x7A($t2)
    ctx->pc = 0x1cf264u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf268: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x1cf268u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x1cf26c: 0x94bb8  dsll        $t1, $t1, 14
    ctx->pc = 0x1cf26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 14);
    // 0x1cf270: 0xa54e0088  sh          $t6, 0x88($t2)
    ctx->pc = 0x1cf270u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 136), (uint16_t)GPR_U32(ctx, 14));
    // 0x1cf274: 0x1a94825  or          $t1, $t5, $t1
    ctx->pc = 0x1cf274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
    // 0x1cf278: 0xa542008a  sh          $v0, 0x8A($t2)
    ctx->pc = 0x1cf278u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 138), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cf27c: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1cf27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x1cf280: 0xfd490040  sd          $t1, 0x40($t2)
    ctx->pc = 0x1cf280u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 9));
    ctx->pc = 0x1cf284u;
}
