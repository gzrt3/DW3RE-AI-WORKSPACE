import sys
import unittest
from pathlib import Path

sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from recover_continuation import recover


SOURCE='''label_1000:
    // 0x1000: 0x04410000 bgez $v0, 0x1004
    const bool branch_taken_0x1000 = (GPR_S32(ctx, 2) >= 0);
    if(branch_taken_0x1000) { goto label_1004; }
label_1004:
    // 0x1004: 0x00000000 nop
    ctx->pc=0x1008u; goto label_1008;
label_1008:
    // 0x1008: 0x00000000 nop
'''
WORDS={0x1000:0x04410000,0x1004:0,0x1008:0}


class RecoveryTests(unittest.TestCase):
    def test_signed_branch_and_boundary_handoff(self):
        result,fixes=recover(SOURCE,WORDS,0x1000,0x1008)
        self.assertIn('GPR_S64(ctx, 2) >= 0',result)
        self.assertNotIn('goto label_1008',result)
        self.assertIn('ctx->pc=0x1008u; return;',result)
        self.assertEqual([x['pc'] for x in fixes],['0x00001000'])

    def test_original_word_mismatch(self):
        with self.assertRaisesRegex(ValueError,'differs'):
            recover(SOURCE,{**WORDS,0x1000:0},0x1000,0x1008)

    def test_wrong_register_or_comparison_rejected(self):
        for source in (SOURCE.replace('ctx, 2','ctx, 3'),SOURCE.replace('>= 0','< 0')):
            with self.assertRaisesRegex(ValueError,'expression'):
                recover(source,WORDS,0x1000,0x1008)

    def test_outbound_branch_rejected(self):
        with self.assertRaisesRegex(ValueError,'outside'):
            recover(SOURCE.replace('goto label_1004','goto label_9999'),WORDS,0x1000,0x1008)

    def test_missing_instruction_rejected(self):
        with self.assertRaisesRegex(ValueError,'annotations'):
            recover(SOURCE.replace('// 0x1004:','// omitted:'),WORDS,0x1000,0x1008)

    def test_cut_cpp_block_rejected(self):
        with self.assertRaisesRegex(ValueError,'structured'):
            recover(SOURCE.replace('ctx->pc=0x1008u;','{ctx->pc=0x1008u;'),WORDS,0x1000,0x1008)

    def test_invalid_and_excessive_ranges(self):
        for bounds in ((0x1001,0x1008),(0x1008,0x1000),(0x1000,0x10000)):
            with self.assertRaises(ValueError): recover(SOURCE,WORDS,*bounds)

    def test_unrecognized_branch_syntax_rejected(self):
        with self.assertRaisesRegex(ValueError,'Unsupported'):
            recover(SOURCE.replace('GPR_S32(ctx, 2)','GPR_S32(ctx,2)'),WORDS,0x1000,0x1008)


if __name__=='__main__':unittest.main()
