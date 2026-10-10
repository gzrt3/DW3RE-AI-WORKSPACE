import unittest
from PIL import Image
from compare_draws import compare_plane

class DrawCoordinates(unittest.TestCase):
    def test_same_coordinates_and_smaller_sw_extent(self):
        hw=Image.new('RGB',(4,4));sw=Image.new('RGB',(3,2))
        hw.putpixel((2,1),(7,0,0))
        result=compare_plane(hw,sw,'00002_f00000_rt1_00000_(00000)_C_32.png','00002_f00000_rt1_00000_C_32.png',True)
        self.assertEqual(result['different_pixels'],1)
        self.assertEqual(result['first_different_pixel'],[2,1])
        self.assertEqual(result['maximum_rgb_error'],[7,0,0])

    def test_reject_coordinate_counterexamples(self):
        hw=Image.new('RGB',(4,4));sw=Image.new('RGB',(3,2))
        name='00002_f00000_rt1_00000_(00000)_C_32.png'
        for bad,context in [(name.replace('(00000)','(00001)'),True),
                            (name.replace('C_32','C_16'),True),
                            (name.replace('00002','00003',1),True),(name,False)]:
            with self.subTest(name=bad,context=context):
                with self.assertRaises(ValueError):compare_plane(hw,sw,bad,'00002_f00000_rt1_00000_C_32.png',context)

if __name__=='__main__':unittest.main()
