import importlib.util
from pathlib import Path
import unittest

spec=importlib.util.spec_from_file_location('catalog',Path(__file__).resolve().parents[1]/'tools/generate_resume_catalog.py')
catalog=importlib.util.module_from_spec(spec);spec.loader.exec_module(catalog)

SOURCE='''void FUN_00100000_0x100000(uint8_t*, R5900Context* ctx, PS2Runtime*) {
switch (ctx->pc) {
case 0x100008u: goto label_100008;
default: break;
}
ctx->pc = 0x100000;
// 0x100000: 0x0 nop
label_100008:
// 0x100008: 0x03e00008 jr ra
}
'''

class CatalogTests(unittest.TestCase):
    def test_exact_owner_and_original_words(self):
        self.assertEqual(catalog.source_aliases(SOURCE,{0x100000:0,0x100008:0x03e00008}),[(0x100008,0x03e00008,'FUN_00100000_0x100000')])
    def test_changed_original_rejected(self):
        with self.assertRaises(ValueError):catalog.source_aliases(SOURCE,{0x100000:1,0x100008:0x03e00008})
    def test_missing_label_rejected(self):
        with self.assertRaises(ValueError):catalog.source_aliases(SOURCE.replace('label_100008:\n',''),{0x100000:0,0x100008:0x03e00008})
    def test_unannotated_resume_excluded(self):
        self.assertEqual(catalog.source_aliases(SOURCE.replace('// 0x100008: 0x03e00008 jr ra',''),{0x100000:0,0x100008:0x03e00008}),[])
    def test_nested_or_later_switch_excluded(self):
        self.assertEqual(catalog.source_aliases(SOURCE.replace('switch (ctx->pc)','ctx->pc = 4; switch (ctx->pc)'),{}),[])
    def test_alias_cannot_target_another_valid_instruction(self):
        source=SOURCE.replace('goto label_100008;', 'goto label_100010;')
        source=source.rsplit('}',1)[0]+'label_100010:\n// 0x100010: 0x24020002 addiu v0,zero,2\n}\n'
        with self.assertRaises(ValueError):
            catalog.source_aliases(source,{0x100000:0,0x100008:0x03e00008,0x100010:0x24020002})
    def test_matching_label_cannot_skip_to_another_annotation(self):
        source=SOURCE.replace('label_100008:\n','label_100008:\n// 0x100004: 0x0 nop\n')
        with self.assertRaises(ValueError):
            catalog.source_aliases(source,{0x100000:0,0x100004:0,0x100008:0x03e00008})
    def test_unannotated_effect_after_label_rejected(self):
        source=SOURCE.replace('label_100008:\n','label_100008:\nSET_GPR_S32(ctx,29,0);\n')
        with self.assertRaises(ValueError):
            catalog.source_aliases(source,{0x100000:0,0x100008:0x03e00008})
    def test_generated_delay_entry_prefix_allowed(self):
        prefix='''if (ctx->pc == 0x100008u) {
    ctx->pc = 0x100008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100004u;
'''
        source=SOURCE.replace('label_100008:\n','label_100008:\n'+prefix)
        source=source.rsplit('}',1)[0]+'}\n}\n'
        self.assertEqual(catalog.source_aliases(source,{0x100000:0,0x100008:0x03e00008}),
                         [(0x100008,0x03e00008,'FUN_00100000_0x100000')])
        for changed in (prefix.replace('branch_pc = 0x100004u','branch_pc = 0x100000u'),
                        prefix+'SET_GPR_S32(ctx,29,0);\n'):
            with self.subTest(prefix=changed), self.assertRaises(ValueError):
                catalog.source_aliases(source.replace(prefix,changed),{0x100000:0,0x100008:0x03e00008})
    def test_guest_write_before_switch_excluded(self):
        for statement in ('SET_GPR_S32(ctx,29,0);', 'ctx->pc=4;', 'initialize_guest(ctx);'):
            with self.subTest(statement=statement):
                source=SOURCE.replace('switch (ctx->pc)',statement+'\nswitch (ctx->pc)')
                self.assertEqual(catalog.source_aliases(source,{}),[])
    def test_comments_and_generator_logging_before_switch_allowed(self):
        prefix='''/* Function entry. */
#ifdef PS2_FUNCTION_LOG_TRACKER
    // logging has no guest prologue
    PS_LOG_ENTRY("FUN_00100000_0x100000"); // preserve the generated name
#endif
// Ready to resume.
'''
        source=SOURCE.replace('switch (ctx->pc)',prefix+'switch (ctx->pc)')
        self.assertEqual(catalog.source_aliases(source,{0x100000:0,0x100008:0x03e00008}),
                         [(0x100008,0x03e00008,'FUN_00100000_0x100000')])
    def test_fake_switch_comment_does_not_hide_guest_write(self):
        prefix='/* switch (ctx->pc) { case 0x100008u: goto label_100008; default: break; } */\n'
        source=SOURCE.replace('switch (ctx->pc)',prefix+'SET_GPR_S32(ctx,29,0);\nswitch (ctx->pc)')
        self.assertEqual(catalog.source_aliases(source,{}),[])
    def test_logging_block_cannot_contain_guest_write(self):
        prefix='#ifdef PS2_FUNCTION_LOG_TRACKER\nSET_GPR_S32(ctx,29,0);\n#endif\n'
        self.assertEqual(catalog.source_aliases(SOURCE.replace('switch (ctx->pc)',prefix+'switch (ctx->pc)'),{}),[])
    def test_ambiguous_owners_excluded(self):
        rows,n=catalog.unique_aliases([(4,0,'a'),(4,0,'b'),(8,1,'c'),(8,1,'c')])
        self.assertEqual(rows,[(8,1,'c')]);self.assertEqual(n,1)
    def test_tail_requires_declared_boundary_and_original_jr(self):
        source='// Address: 0x100000 - 0x100008\nctx->pc = 0x100008u;\n}\n'
        self.assertEqual(catalog.source_tail(source,{0x100008:0x03e00008,0x10000c:0x0080102d}),(0x100008,0x0080102d))
        self.assertIsNone(catalog.source_tail(source,{0x100008:0x03200008,0x10000c:0}))
        self.assertIsNone(catalog.source_tail(source,{0x100008:0x03e00008,0x10000c:0x8fa20010}))

if __name__=='__main__':unittest.main()
