"""Known private source boundaries must be rejected even outside generated trees."""
import unittest
from check_public_tree import forbidden, RECOVERED_BOUNDARIES


class PublicTreeGateTests(unittest.TestCase):
    def test_recovered_boundaries(self):
        for path in RECOVERED_BOUNDARIES:
            with self.subTest(path=path):
                self.assertTrue(forbidden(path))

    def test_original_and_generated_payloads(self):
        for path in ('data/game.iso','src/recomp/body.cpp','src/recovered/body.cpp',
                     'private_inputs/ram.dat','captures/state.p2s','movie.pss'):
            with self.subTest(path=path):
                self.assertTrue(forbidden(path))

    def test_public_host_and_numeric_evidence(self):
        for path in ('src/elf.cpp','src/vfs/extracted.cpp','docs/evidence/LATEST_AUDIT.json',
                     'installer/import_discs.py','research/combined_session/contracts.cpp'):
            with self.subTest(path=path):
                self.assertFalse(forbidden(path))


if __name__ == '__main__':
    unittest.main()
