import unittest
import tempfile
import hashlib
from pathlib import Path
from PIL import Image
from compare_draws import compare_plane,captured_rgba

HW='00002_f00000_rt1_00000_(00000)_C_32.png'
SW='00002_f00000_rt1_00000_C_32.png'

class AlphaContracts(unittest.TestCase):
    def test_detect_alpha_only_difference(self):
        hw=Image.new('RGBA',(4,4),(1,2,3,7));sw=Image.new('RGBA',(3,2),(1,2,3,7))
        hw.putpixel((2,1),(1,2,3,9))
        result=compare_plane(hw,sw,HW,SW,True,channels='RGBA')
        self.assertEqual(result['different_pixels'],1)
        self.assertEqual(result['first_different_pixel'],[2,1])
        self.assertEqual(result['maximum_rgba_error'],[0,0,0,2])

    def test_reject_missing_alpha_in_either_image(self):
        for hwmode,swmode in [('RGB','RGBA'),('RGBA','RGB'),('RGB','RGB')]:
            with self.subTest(hw=hwmode,sw=swmode),self.assertRaises(ValueError):
                compare_plane(Image.new(hwmode,(4,4)),Image.new(swmode,(3,2)),HW,SW,True,channels='RGBA')

    def test_rgb_compatibility_ignores_alpha_explicitly(self):
        hw=Image.new('RGBA',(4,4),(1,2,3,9));sw=Image.new('RGBA',(3,2),(1,2,3,7))
        self.assertEqual(compare_plane(hw,sw,HW,SW,True)['status'],'EQUAL')

    def test_alpha_sidecar_hash_and_extent(self):
        with tempfile.TemporaryDirectory() as temp:
            folder=Path(temp);path=folder/HW;alpha=folder/(path.stem+'_alpha.png')
            Image.new('RGB',(3,2),(1,2,3)).save(path)
            run={'diagnostic_files':{}}
            def seal(p):run['diagnostic_files'][p.name]={'sha256':hashlib.sha256(p.read_bytes()).hexdigest()}
            seal(path)
            with self.assertRaises(ValueError):captured_rgba(folder,run,path)
            Image.new('L',(3,2),7).save(alpha);seal(alpha)
            self.assertEqual(captured_rgba(folder,run,path).getpixel((0,0)),(1,2,3,7))
            Image.new('L',(3,2),8).save(alpha)
            with self.assertRaises(ValueError):captured_rgba(folder,run,path)
            Image.new('L',(2,2),7).save(alpha);seal(alpha)
            with self.assertRaises(ValueError):captured_rgba(folder,run,path)
            Image.new('RGB',(3,2)).save(alpha);seal(alpha)
            with self.assertRaises(ValueError):captured_rgba(folder,run,path)

if __name__=='__main__':unittest.main()
