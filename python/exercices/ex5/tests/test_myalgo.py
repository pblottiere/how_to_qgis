from myalgo import MyAlgo
import os
import unittest


class TestMyAlgo(unittest.TestCase):

    def test_file_valid(self):
        m = MyAlgo(3)
        path = 'test.txt'
        rc = m.run(path)
        self.assertTrue(rc)
        self.assertTrue(os.path.isfile(path))

    def test_file_invalid(self):
        m = MyAlgo(3)
        path = '/root/test.txt'
        rc = m.run(path)
        self.assertFalse(rc)
        self.assertFalse(os.path.isfile(path))

    def test_file_content(self):
        m = MyAlgo(3)
        path = 'test.txt'
        rc = m.run(path)
        self.assertTrue(rc)

        f = open(path, 'r')
        l = f.readline()
        self.assertEqual(l, '6')
        f.close()


if __name__ == '__main__':
    unittest.main()
