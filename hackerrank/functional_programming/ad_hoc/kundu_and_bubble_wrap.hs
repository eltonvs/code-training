kb :: Int -> Int -> Double
kb i n
  | i == n = 0
  | otherwise = fromIntegral n/ fromIntegral(n - i) + kb (i + 1) n

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main :: IO ()
main = do
  ints <- readInts
  print $ kb 0 $ foldr1 (*) ints
