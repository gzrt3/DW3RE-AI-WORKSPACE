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

// Function: entry_00199294
// Address: 0x199294 - 0x199394
void entry_00199294_0x199294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199294_0x199294");
#endif

    switch (ctx->pc) {
        case 0x19929cu: goto label_19929c;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992fcu: goto label_1992fc;
        case 0x199314u: goto label_199314;
        case 0x19932cu: goto label_19932c;
        case 0x199344u: goto label_199344;
        case 0x19935cu: goto label_19935c;
        case 0x199374u: goto label_199374;
        case 0x19938cu: goto label_19938c;
        default: break;
    }

    ctx->pc = 0x199294u;

    // 0x199294: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 31, 0x19929Cu);
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199294u, 0x19929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992a4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1992a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x1992a8: 0x24849b00  addiu       $a0, $a0, -0x6500
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941440));
    // 0x1992ac: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992ACu;
    SET_GPR_U32(ctx, 31, 0x1992B4u);
    ctx->pc = 0x1992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992ACu;
    // 0x1992b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992ACu, 0x1992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992B4u;
label_1992b4:
    // 0x1992b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992b8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992bc: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x1992bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x1992c0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x1992c4: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992C4u;
    SET_GPR_U32(ctx, 31, 0x1992CCu);
    ctx->pc = 0x1992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992C4u;
    // 0x1992c8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992C4u, 0x1992CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992CCu;
label_1992cc:
    // 0x1992cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992d4: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x1992d8: 0x24849b20  addiu       $a0, $a0, -0x64E0
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941472));
    // 0x1992dc: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992DCu;
    SET_GPR_U32(ctx, 31, 0x1992E4u);
    ctx->pc = 0x1992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992DCu;
    // 0x1992e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992DCu, 0x1992E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992E4u;
label_1992e4:
    // 0x1992e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1992e8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1992ec: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x1992ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x1992f0: 0x24849b30  addiu       $a0, $a0, -0x64D0
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941488));
    // 0x1992f4: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x1992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992F4u;
    // 0x1992f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1992F4u, 0x1992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199300: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199304: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x199308: 0x24849b40  addiu       $a0, $a0, -0x64C0
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
    // 0x19930c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19930Cu;
    SET_GPR_U32(ctx, 31, 0x199314u);
    ctx->pc = 0x199310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19930Cu;
    // 0x199310: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19930Cu, 0x199314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199314u;
label_199314:
    // 0x199314: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199318: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19931c: 0x3463a030  ori         $v1, $v1, 0xA030
    ctx->pc = 0x19931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41008);
    // 0x199320: 0x24849b50  addiu       $a0, $a0, -0x64B0
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941520));
    // 0x199324: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199324u;
    SET_GPR_U32(ctx, 31, 0x19932Cu);
    ctx->pc = 0x199328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199324u;
    // 0x199328: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199324u, 0x19932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19932Cu;
label_19932c:
    // 0x19932c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199330: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199334: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x199338: 0x24849b60  addiu       $a0, $a0, -0x64A0
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941536));
    // 0x19933c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19933Cu;
    SET_GPR_U32(ctx, 31, 0x199344u);
    ctx->pc = 0x199340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19933Cu;
    // 0x199340: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19933Cu, 0x199344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199348: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19934c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x19934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x199350: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x199354: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199354u;
    SET_GPR_U32(ctx, 31, 0x19935Cu);
    ctx->pc = 0x199358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199354u;
    // 0x199358: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199354u, 0x19935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19935Cu;
label_19935c:
    // 0x19935c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199360: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199364: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199368: 0x24849b80  addiu       $a0, $a0, -0x6480
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
    // 0x19936c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x19936Cu;
    SET_GPR_U32(ctx, 31, 0x199374u);
    ctx->pc = 0x199370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19936Cu;
    // 0x199370: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x19936Cu, 0x199374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199378: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x19937c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x19937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
    // 0x199380: 0x24849b98  addiu       $a0, $a0, -0x6468
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
    // 0x199384: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x199388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199384u;
    // 0x199388: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199384u, 0x19938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19938Cu;
    {
        const bool branch_taken_0x19938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19938c) {
            ctx->pc = 0x199408u;
            return;
        }
    }
    ctx->pc = 0x199394u;
}
